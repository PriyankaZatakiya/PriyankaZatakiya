//5)	Find out given number is prime or not prime
#include<stdio.h>
#include<conio.h>
void main()
{

int num,i;
printf("Enter the Number: \n");
scanf("%d",&num);

for(i=2;i<num;i++)
{
	if(num%i == 0)
	break;
}
if(i==num){
printf("No is prime");
}
else{
printf("No is not Prime");
}
getch();
}
