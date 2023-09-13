#include<stdio.h>
/**
 * _isalpha - this function check if input is alphabet
 *@c: this arguemwnt is pass to 4-main.c
 *Return: 0 or 1
 */

int main(int c)
{
	c= 'a';
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("hello");
		return (1);
	}
	else
		return (0);
}
