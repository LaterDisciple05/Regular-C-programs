/*Program purpose:-learning structures and unions and also know the use case of each
Program date:-19/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
struct car
{
 float milage;
 char name[20]; 
};
int main()
{
  struct car c1,c2,m1,m2;
  printf("Enter name of your car=");
  getchar();
  fgets(c1.name,20,stdin);
  printf("Enter milage of your car=");
  scanf("%s",&m1.milage);
  printf("Enter name of your car=");
  getchar();
  fgets(c2.name,20,stdin);
  printf("Enter milage of your car=");
  scanf("%s",&m2.milage);
return 0;
}