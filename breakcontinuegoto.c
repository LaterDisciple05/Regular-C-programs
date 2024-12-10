/*Program purpose:-to learn use of break, continue and goto statement in c.
Program date:-10/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
int main()
{
 int n;
 printf("Enter any number=");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
    if(n==1)
    {
        break;
    }
    if(n==3)
    {
        continue;
    }
    printf("%d",i);
    }
    if(n==2)
    {
        goto end;
    }
 }
 end:
 printf("Welcome to the universe of coding!!");
 
return 0;
}
