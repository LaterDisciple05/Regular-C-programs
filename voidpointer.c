/*Program purpose:-learning concept of void pointers and how to dereference them.
Program date:-19/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/

#include<stdio.h>
int main()
{
 int a=10;
 int*p=&a;
 void*vp=&a;
 printf("value of a=%d\n",*p);
 
 printf("The value of a=%lu",*(int *)vp);
return 0;
}