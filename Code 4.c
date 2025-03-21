#include<stdio.h>

int main ()
{
  int n,i;

printf("Enter a positive number:");
scanf("%d", &n);

if(n <= 1)
{
printf(
  "%d is not prime number. ",n);
}

for(i=2;i< n; i++)
{
if(n % i ==0)
{
printf("
  "%d is not prime number.", n);

return 0;
   }
}

printf(" %d is prime number.",n);

return 0;
}
