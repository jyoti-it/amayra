#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,num;
    clrscr();
    printf("Enter a three digit number \n");
    scanf("%d",&num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    num=a*100+b*10+num;
    printf("Reverse of the number is \n");
    printf("%d",num);
getch();
}