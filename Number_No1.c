//1)	Find Out Maximum and Minimum numbers form given array of n numbers
#include<conio.h>
void main()
{
int n,a[5],i,min,max;
printf("Enter the array Element : \n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<5;i++)
{
  if(max < a[i])
  {
     max = a[i];
  }
  if(min > a[i]){
	min = a[i];
  }
}
printf("Min is = %d\n Max is = %d",min,max);
getch();
}
