#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j;
clrscr();
printf("***STAR UP*** \n");
printf("Enter number of rows \n");
scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
	   for(j=1;j<=i;j++)
	   {
		printf("*");
	   }
      printf("\n");
      }
getch();
}