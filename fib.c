#include <stdio.h>
int fib (int)
void main()
{
int num,f;
printf("enter the number");
scanf("%d,&num");
f=fib(num);
printf("%d",f);
}
int fib (intn)
{
if(n==0  n==1)
return;
else
return fib (n-1)+fib (n-2)
}
