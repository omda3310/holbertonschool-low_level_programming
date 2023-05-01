#ifndef FILE_HEADER
#define FILE_HEADER

#include "stdio.h"
#include "stdlib.h"
#include "fcntl.h"
#include "unistd.h"
#include "stddef.h"
#include "sys/types.h"
#include "sys/stat.h"
#include "string.h"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, const char *message, const char *arg);
int main(int argc, char *argv[]);
#endif
