#include "main.h"
/**
 * check_valid - checks for valid files
 * @val: value to check
 * @filename: file to check
 * @mode:  open, write and close
*/
void check_valid(int val, char *filename, char mode)
{
	if (val == -1 && mode == 'O')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (val == -1 && mode == 'W')
	{
		dprintf(STDERR_FILENO, "Error: Can't writeto %s\n", filename);
		exit(99);
	}
	else if (val == -1 && mode == 'C')
	{
		dprintf(STDERR_FILENO, "Can't close fd %i\n", val);
		exit(100);
	}
}
/**
 * main - main function
 * @count: number of cmd line args
 * @value: array of args strings
 * Return: 0
*/
int main(int count, char **value)
{
	int file_fro, file_to, c_read = 1024, exit1, exit2, c_written;
	char buf[1024];
	unsigned int permissions = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_fro = open(value[1], O_RDONLY);
	check_valid(file_fro, value[1], 'O');
	file_to = open(value[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	check_valid(file_to, value[2], 'W');
	while (c_read == 1024)
	{
		c_read = read(file_fro, buf, 1024);
		if (c_read == -1)
			check_valid(c_read, value[1], 'O');
		c_written = write(file_to, buf, c_read);
		if (c_written == -1)
			check_valid(c_written, value[2], 'W');
	}
	exit1 = close(file_fro);
	if (exit1 == -1)
		check_valid(exit1, NULL, 'C');
	exit2 = close(file_to);
	if (exit2 == -1)
		check_valid(exit2, NULL, 'C');
	return (0);
}
