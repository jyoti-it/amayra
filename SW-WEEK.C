#include<stdio.h>
#include<conio.h>
int main()
{
int dow;
clrscr();
printf("Enter number of day \n");
scanf("%d",&dow);
switch(dow)
{
case 1:
		printf("Sunday");
		break;
case 2:
		printf("Monday");
		break;
case 3:
		printf("tuesday");
		break;
case 4:
		printf("Wednesday");
		break;
case 5:
		printf("Thursday");
		break;
case 6:
		printf("Friday");
		break;
case 7:
		printf("Saturday");
		break;
default:
		printf("Invalid day");
}
getch();
}
