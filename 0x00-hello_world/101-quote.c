[2:43 PM, 9/8/2022] +234 816 740 0761: task 7
#!/bin/bash
gcc -S -masm=intel $CFILE
[2:43 PM, 9/8/2022] +234 816 740 0761: task 8
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      s);
	return (1);
}
