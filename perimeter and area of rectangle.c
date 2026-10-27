#include<stdio.h>
int main()
{
float l,b,a,p;
printf("enter the length of the rectangle ");
scanf("%f", &l);
printf("enter the breadth of the rectangle ");
scanf("%f", &b);
a=l* b;
p=2* (l+b);
printf("area of the rectangle=%2f\n",a);
printf("perimeter of the rectangle=%2f\n",p);
return 0;
}