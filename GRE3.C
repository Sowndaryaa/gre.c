#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("the greatest num is %d",a);
else if(b>c)
printf("the greatest num is %d",b);
else
printf("the greatest num is %d",c);
getch();
}
