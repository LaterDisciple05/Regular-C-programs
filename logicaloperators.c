/*Program purpose:-use of logical operators
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
 printf("a && b = %d\n",a &&b);
 printf("a || b = %d\n",a ||b);
 printf("!a = %d\n",!a);
 printf("!b = %d\n",!b);
return 0;
}