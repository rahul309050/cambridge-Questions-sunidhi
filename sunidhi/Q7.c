// Implement using functions to check whether the given number is prime and display appropriate messages. (No built-in math function)	
#include<stdio.h>
#include<math.h>
int isprime(int n)
 {
int i;
if(n == 0 || n == 1)
return 0;
for(i=2;i<=sqrt(n);i++)
 {
if(n%i == 0)
return 0;
 }
return 1;
 }
int main( )
 {
int num;
printf("\n Enter a number to check for prime or not");
scanf("%d",&num);
if(isprime(num))
printf("\n %d is prime",num);
else
printf("\n %d is not prime",num);
return 0;
 }