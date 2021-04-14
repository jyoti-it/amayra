#include<stdio.h>
#include<conio.h>
int main()
{
int dow;
clrscr();
printf("Enter number of day \n");
scanf("%d",&dow);
if(dow==1)
	{
	printf("Sunday");
	}
else if(dow==2)
	{
	printf("Monday");
	}
else if(dow==3)
	{
	printf("Tuesday");
	}
else if(dow==4)
	{
	printf("Wednesday");
	}
else if(dow==5)
	{
	printf("Thursday");
	}
else if(dow==6)
	{
	printf("Friday");
	}
else if(dow==7)
	{
	printf("Saturday");
	}
else
	{
	printf("Invalid day");
	}
getch();
}