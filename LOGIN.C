#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char user[20],pass[10];
clrscr();
printf("Enter user name \n");
scanf("%s",&user);
printf("Enter password \n");
scanf("%s",&pass);
if((strcmp(user,"Amayra")==0) &&(strcmp(pass,"Romeo@123")==0))
	{
	printf("Successfully login \n");
	}
else
	{
	printf(" \n Invalid login");
	}
getch();
}