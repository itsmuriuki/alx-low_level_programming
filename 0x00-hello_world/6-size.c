#include <stdio.h>
/**
 *main -prints standard variable size
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of a int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %l byte(s)\n", sizeof(long));
printf("Size of a long long int: %lli byte(s)\n", sizeof(long long));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
