/*Program purpose:-using and understanding 3 types of loops in c (for,while,do while)
Program date:-10/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
// #include<stdio.h>
// int main()
// {
//  int n;
// printf("Enter number n=");
// scanf("%d",&n);
//  for(int i=0;i<n;i++)
//  {
//     printf("%d\n",i);
//  }
// return 0;
// }
// #include<stdio.h>
// int main()
// {
//  int n,i=0;
// printf("Enter number n=");
// scanf("%d",&n);
//  while(i<n)
//  {
//     printf("%d\t",i);
//     i++;
//  }
// return 0;
// }
#include<stdio.h>
int main()
{
 int n,i=0;
 printf("Enter number n=");
 scanf("%d",&n);
 do
 {
   printf("%d",i);
   i++;
 } while (i<n);
 
return 0;
}