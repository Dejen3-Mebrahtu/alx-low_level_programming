#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
	char j;
	int k;
	long int h;
	long long int i;
	float l;
	double m;
printf("The size of char is: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("The size of int is: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("The size of long int is: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("The size of long long int is: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("The size of float is: %lu byte(s)\n", (unsigned long)sizeof(l));
return (0);
}
