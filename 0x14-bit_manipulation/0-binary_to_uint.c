#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
return (0);
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
num = num * 2;
else if (b[i] == '1')
num = num * 2 + 1;
else
return (0);
}
return (num);
}
int main(void)
{
const char *b1 = "11010101";
const char *b2 = "10101102";
unsigned int n1 = binary_to_uint(b1);
printf("%s in binary is %u in decimal\n", b1, n1);
unsigned int n2 = binary_to_uint(b2);
printf("%s in binary is %u in decimal\n", b2, n2);
return (0);
}
