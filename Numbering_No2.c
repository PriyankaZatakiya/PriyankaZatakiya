//2)	Search given numbers from n numbers array
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[5],i,check=0;
printf("Enter the array Element : \n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the nubmber you want to search :");
scanf("%d",&n);

for(i=0;i<5;i++)
{
	if(a[i]==n)
	{
	printf("Your Number is found in Array at %d index",i+1);
	check=1;
  break;
	}
}
if(check==0)
{
	printf("Not in Array");

}
getch();
}
