#include <stdio.h>

long factorial(int );

int main(void)
{
    int num;
    long fact;
    printf("the number is : ");
    scanf("%d",&num);
    fact = factorial(num);
    printf("%u\n",fact);      /* %u for unsigned int for large numbers */
    return 0;
}

long factorial(int num)
{
    long fact=1;
    int i;
   for(i=1;i<=num;i++)
        fact*=i;

        return fact;
}
