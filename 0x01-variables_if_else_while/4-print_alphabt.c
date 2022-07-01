#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored
 *Return: always(0) success
 */.
int main(void)
{char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
}

putchar(10);
return (0);
}
