#include<stdio.h>

int main()
{
	//int a;
	int j;
       for (j = 0; j <= 13; j++)
        {
            if (j >= 10)
                putchar('2'); // Print '1' for the tens place
            putchar (j % 10 + '0'); // Print the ones place as a character
        }
        putchar('\n'); // Print
}
