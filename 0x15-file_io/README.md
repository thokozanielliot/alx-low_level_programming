# 0x15 C- File I/O

Use file descriptors ( open, read & write funtcions)

## Task 0. Tread lightly, she is near

- Write a function that reads a text file & prints it to the POSIX standard output.
- Prototype: `ssize_t read_textfile(const char *filename, size_t letters)`

## Task 1. Under the snow

- Create a function that creates a file
- Prototype: `int create_file(const char *filename, char *text_content)`

## Task 2. Speak gently, she can hear

- Write a function that appends text at the end of a file
- prototype: `int append_text_to_file(cinst char *filename, char *text_content)`

## Task 3. cp

- Write a program that copies the content of a file to another file
- Usage: `cp file_from file_to`

## Task 4. elf

- Write a program that displays the information contained in the ELF header at the start of an ELF file
- Usage: `elf_header elf_filename

