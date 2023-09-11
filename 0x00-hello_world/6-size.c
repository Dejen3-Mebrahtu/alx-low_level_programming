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
printf("The size of char is: %d-byte\n", sizeof(char));
printf("The size of int is: %d-byte\n", sizeof(int));
printf("The size of long int is: %d-byte\n", sizeof(long int));
printf("The size of long long int is: %d-byte\n", sizeof(long long int));
printf("The size of float is: %d-byte\n", sizeof(float));
return (0);
}
