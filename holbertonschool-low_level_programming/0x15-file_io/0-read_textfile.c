#include "holberton.h"
/**
 * read_textfile - reads a text file and prints.
 * @filename: is the name of file.
 * @letters: number of letters it should read and print.
 * Return: Nomber of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t num_letters;

	buffer = malloc(sizeof(char) * letters);

	file = open(filename, O_RDWR); /* Read and Write the file.*/

	if (file == -1 || buffer == NULL) /* Edge case  */
		return (0);

	num_letters = read(file, buffer, letters); /* Read buffer */
	num_letters = write(STDOUT_FILENO, buffer, num_letters);/* Write buffer */
	free(buffer);
	close(file);
	return (num_letters);
}
