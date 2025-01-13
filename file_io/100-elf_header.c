#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

void print_magic(unsigned char *e_ident)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

void print_class(unsigned char class)
{
	printf("  Class:                             ");
	switch (class)
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
	}
}

void print_data(unsigned char data)
{
	printf("  Data:                              ");
	switch (data)
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
	}
}

void print_version(unsigned char version)
{
	printf("  Version:                           %d (current)\n", version);
}

void print_osabi(unsigned char osabi)
{
	printf("  OS/ABI:                            ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x>\n", osabi);
	}
}

void print_abiversion(unsigned char abiversion)
{
	printf("  ABI Version:                       %d\n", abiversion);
}

void print_type(uint16_t type, unsigned char data)
{
	if (data == ELFDATA2MSB)
		type = (type >> 8) | (type << 8);

	printf("  Type:                              ");
	switch (type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);

	}
}

void print_entry(uint64_t entry, unsigned char class, unsigned char data)
{
	if (data == ELFDATA2MSB)
		entry = (entry >> 56) | ((entry & 0x00FF000000000000) >> 40) |
			((entry & 0x0000FF0000000000) >> 24) | ((entry & 0x000000FF00000000) >> 8) |
				((entry & 0x00000000FF000000) << 8) | ((entry & 0x0000000000FF0000) << 24) |
				((entry & 0x000000000000FF00) << 40) | (entry << 56);

	printf("  Entry point address:               0x%lx\n", (unsigned long)entry);
}

void read_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		print_error("Error: Cannot open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		print_error("Error: Cannot read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_error("Error: Not an ELF file");
	}

	printf("ELF Header:\n");
	print_magic(header.e_ident);
	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	print_version(header.e_ident[EI_VERSION]);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abiversion(header.e_ident[EI_ABIVERSION]);
	print_type(header.e_type, header.e_ident[EI_DATA]);
	print_entry(header.e_entry, header.e_ident[EI_CLASS], header.e_ident[EI_DATA]);

	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	read_elf_header(argv[1]);

	return (0);
}

