# File I/O

### Objectives

- To create, open, close, read & write files
- Using file descriptors
- Using flags `O_RDONLY`, `O_WRONLY` & `O_RDWR`

## Task 0. Tread Lightly, She is Near

Using `ssize_t read_textfile(const char *filename, size_t letters)` function
Where "letters" is the number of letters it should read & print

Reads a text file & prints it to the POSIX standard output

## Task 1. Under the Snow

Using `int create_file(const char *filename, char *text_content)` function
Where "filename" is the name of the file to be created

Creates a file

## Task 2. Speak Gently, She Can Hear

Using `int append_text_to_file(const char *filename, char *text_content)` function
Where "filename" is the name of the file & text_content is to be appended

Append text at the end of a file

## Task 3. CP

Write a program that copies the content of a file to another file
Usage: `cp file_from file_to`

