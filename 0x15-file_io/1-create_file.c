#include "main.h"

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Write a script that creates a file
 * @filename: pointer to name of the file to create
 * @text_content: A pointer to a string to write
 * to the file.
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0, inlen = 0;
	char *ptr;

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
	length = write(file, text_content, inlen);
	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
