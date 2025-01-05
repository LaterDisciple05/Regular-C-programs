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
union specs
{
    float tank;
    int engine;
};
int main()
{
  struct car c1,c2,m1,m2;
  union specs t1,t2,e1,e2;
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
  printf("Enter tank capacity of your car=");
  getchar();
  scanf("%s",&t1.tank);
  printf("Enter engine capacity of your car=");
  scanf("%s",&e1.engine);
  printf("Enter tank capacity of your car=");
  getchar();
  scanf("%s",&t2.tank);
  printf("Enter engine capacity of your car=");
  scanf("%s",&e2.engine);
  //structures save everything and union saves only last entry
return 0;
}
