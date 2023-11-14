#include "main.h"

/**
 * print_buffer - Writes data to a buffer and calls write when buffer is full
 * @buf: Pointer to the ata to be written
 * @nbuf: Number of bytes to write
 * Return: 0 on success
 */

int print_buffer(char *buf, unsigned int nbuf)
{
	static char internal_buffer[10240];
	static unsigned int buf_pos = 0;

	unsigned int remaining_space = 1024 - buf_pos;
	if (nbuf > 1024)
		return -1;

	if (nbuf > remaining_space)
	{
		write(STDOUT_FILENO, internal_buffer, buf_pos);
		buf_pos = 0;
	}

	memcpy(internal_buffer + buf_pos, buf, nbuf);
	buf_pos += nbuf;

	return 0;
}
/**
* main - Entry point
* Return: Always p (Success)
*/
int main()
{
	char message[] = "This is a test message.";
	print_buffer(message, strlen(message));

	print_buffer("", 0);

	return 0;
}
