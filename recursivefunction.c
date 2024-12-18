/*Program purpose:-Understanding recursive functions(tower of hanoi)
Program date:-14/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
void tower(int n, char from_rod, char Helping_rod, char to_rod);
int main()
{
    int n,s;
    printf("Enter number of disks involved in tower of hanoi:-");
    scanf("%d",&n);
    printf("Sequence of steps you need to Follow to solve!!\n");
    tower(n,'A','B','C');

return 0;
}
void tower(int n, char from_rod, char Helping_rod, char to_rod)
{
  if(n==1)
  {
    printf("Move Disk %d From Rod %c to Rod %c\n",n,from_rod,to_rod);
    return;
  }
  else
  {
    tower(n - 1, from_rod, to_rod, Helping_rod);
    printf("Move Disk %d From Rod %c to Rod %c\n",n,from_rod,to_rod);
    tower(n - 1, Helping_rod, from_rod, to_rod);
 }
}