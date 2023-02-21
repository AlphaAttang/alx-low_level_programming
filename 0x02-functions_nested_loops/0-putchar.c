#include <stdio.h>

#define MAXSTRING 80

int main(void)
{
	char message[] = "_putchar";
	for (int count = 0; count < MAXSTRING; count++)
	{
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(message[count]);
	}
	return(0);
}
