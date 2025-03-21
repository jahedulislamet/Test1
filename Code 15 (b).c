#include<stdio.h>

int main()
{
int a, b, c;

printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

if (a b && a < c)
{

printf("The smallest number is: %d", a);
}

if (ba && b < c)
{
printf("The smallest number is: %d", b);
}
if (ca && c < b)
{

printf("The smallest number is: %d", c);
}

return 0;
 }
