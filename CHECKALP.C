#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("Enter a character \n");
scanf("%c",&ch);
  if(ch>='a' && ch<='z')
  {
  printf("You entered a character");
  }
  else if(ch>='0' && ch<='9')
  {
  printf("You entered a number");
  }
  else
  {
  printf("You entered a special character");
  }
getch();
}

