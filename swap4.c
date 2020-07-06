/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

/******************************************************************************/
#include<stdio.h>
#include<conio.h>
int main ()
{
    int x,y;
    printf("\nplease enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("\n before swap:x=%d y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n after swap:x=%d y=%d\n",x,y);
    getch();
}
