#include "main.h"
#include <elf.h>
/**
 * show_elf - function to display elf information
 * @header: pointer to an Elf structure
 */
void show_elf(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x"
		"%02x %02x %02x %02x %02x\n",
		header->e_ident[0], header->e_ident[1], header->e_ident[2],
		header->e_ident[3], header->e_ident[4], header->e_ident[5],
		header->e_ident[6], header->e_ident[7], header->e_ident[8],
		header->e_ident[9], header->e_ident[10], header->e_ident[11],
		header->e_ident[12], header->e_ident[13], header->e_ident[14],
		header->e_ident[16]);
	printf("  Class:                                          ELF%d\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("  Data:                                           %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement,"
			"little endian" : "unknown");
	printf("  Version:                                        %d(current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:					%s\n",
			header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "Unix- System V" : "Unknown");
	printf("  ABI Version                                     %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type                                            %s(executable)\n",
			header->e_type == ET_EXEC ? "EXEC" : "Unknown");
	printf("  Entry point address:                            0x%lx\n",
			header->e_entry);
}
/**
 * main - entry of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	ssize_t by_read;
	int f;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(2, "cant open file %s\n", argv[1]);
		perror("error while opening file");
	}

	if (lseek(f, 0, SEEK_SET) == -1)
	{
		dprintf(2, "Error found while seeking file %s\n", argv[1]);
		close(f);
		return (1);
	}
	by_read = read(f, &elf_header, sizeof(Elf64_Ehdr));
	if (by_read != sizeof(Elf64_Ehdr))
	{
		dprintf(2, "can't read from file %s\n", argv[1]);
		close(f);
		return (98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 &&
			elf_header.e_ident[EI_MAG1] != ELFMAG1 &&
			elf_header.e_ident[EI_MAG2] != ELFMAG2 &&
			elf_header.e_ident[EI_MAG3] != ELFMAG3) {
		dprintf(2, "error noted because %s not an ELF FILE", argv[1]);
		close(f);
		return (98);
	}
	show_elf(&elf_header);
	close(f);
	return (0);
}
