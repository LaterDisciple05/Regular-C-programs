/*Program purpose:-use of bitwise operators
Program date:-09/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter number a=");
 scanf("%d",&a);
 printf("Enter number b=");
 scanf("%d",&b);
 printf("a & b = %d\n",a &b);
 printf("a | b = %d\n",a |b);
 printf("a ^ b(exclusively or) = %d\n",a ^b);
 printf("~a (one's complement)= %d\n",~a);
 printf("~b = %d\n",~b);
 printf("a<<2 = %d\n",a<<2);
 printf("b<<2 = %d\n",b<<2);
 printf("a>>2 = %d\n",a>>2);
 printf("b>>2 = %d\n",b>>2);
return 0;
}