/*Program purpose:-Understanding recursive functions(tower of hanoi)
Program date:-14/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
int tower(int a);
int main()
{
    int a,s;
    printf("Enter range till which you want tower of hanoi:-");
    scanf("%d",&a);
    s=tower(a);
    printf("%d",s);
 
return 0;
}
int tower(int a)
{
  if(a==3)
  {
    return 7;
  }
  else
  {
    return tower(a-1)*2 +1;
  }
}