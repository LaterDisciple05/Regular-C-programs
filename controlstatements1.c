/*Program purpose:-to see all types of control statements and try to differentiate use case of each
Program date:-10/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include <stdio.h>
int onlyif(int);
int ifelse(int);
int elseifladder(int);
int main()
{
    int age;
    printf("Enter your age here=");
    scanf("%d", &age);
    printf("Entered age by you is %d years\n", age);
    onlyif(age);
    ifelse(age);
    elseifladder(age);
    return 0;
}
int onlyif(int age)
{
    if (age >= 18)
    {
        printf("Congratulations!! you are eligible to vote\n");
    }
}
int ifelse(int age)
{
    if (age >= 18)
    {
        printf("Congratulations!! you are eligible to vote\n");
    }
    else
    {
        printf("Alas!! you are not eligible to vote\n");
    }
}
int elseifladder(int age)
{
    if (age >= 18)
    {
        printf("Congratulations!! you are eligible to vote\n");
    }
    else if (age > 10)
    {
        printf("you are a teenager!!!\n");
    }
    else
    {
        printf("Alas!! you are not eligible to vote\n");
    }
}
