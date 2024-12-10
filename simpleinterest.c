/*Program purpose:-to find simple interest
Program date:-10/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
int main()
{
    int t,p;
    float si,n;
    printf("Enter principle amount=");
    scanf("%d",&p);
    printf("Enter time duration=");
    scanf("%d",&t);
    printf("Enter rate of interest=");
    scanf("%f",&n);
    printf("\nsimple interest=%f",p*n*t/100);

return 0;
}
