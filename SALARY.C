#include<stdio.h>
#include<conio.h>
int main()
{
double sal;
char grade;
clrscr();
printf("Enter salary \n");
scanf("%lf",&sal);
      if(sal<=35000)
      {
	 printf("Enter your grade\n");
	 scanf("%c",&grade);

	     if(grade=='a'||grade=='A')
	     {
	     printf("Increased salary");
	     sal=sal+sal*0.2;
	     printf("%lf",sal);
	     }
	     else if(grade=='b'||grade=='B')
	     {
	     printf("Increased salary");
	     sal=sal+sal*0.15;
	     printf("%lf",sal);
	     }
	     else if(grade=='c'||grade=='C')
	     {
	     printf("Increased salary");
	     sal=sal+sal*0.1;
	     printf("%lf",sal);
	     }
	     else if(grade=='d'||grade=='D')
	     {
	     printf("Increased salary");
	     sal=sal+sal*0.05;
	     printf("%lf",sal);
	     }
	     else
	     {
	     printf("Your grade is invalid \n");
	     }
     }
     else if(sal>35000)
     {
     printf("you are not valid for increament");
     }
     getch();
}
