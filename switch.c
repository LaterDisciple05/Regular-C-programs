/*Program purpose:-to understand switch case (control statement) in c
Program date:-10/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter case number=\n");
    printf("1. harry porter p-1\n");
    printf("2. harry porter p-2\n");
    printf("3. harry porter p-3\n");
    printf("4. harry porter p-4\n");
    printf("6. harry porter p-5\n");
    printf("7. harry porter p-7\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("Harry Potter and the Sorcerer's Stone");
            break;
        }
         case 2:
        {
            printf("Harry Potter and the Chamber of Secrets");
            break;
        }
          case 3:
        {
            printf("Harry Potter and the Prisoner of Azkaban");
            break;
        }
         case 4:
        {
            printf("Harry Potter and the Goblet of Fire");
            break;
        }
         case 5:
        {
            printf("Harry Potter and the Order of the Phoenix");
            break;
        }
         case 6:
        {
            printf("Harry Potter and the Half-Blood Prince");
            break;
        }
        case 7:
        {
            printf("Harry Potter and the Deathly Hallows: Part 1");
            break;
        }
        case 8:
        {
            printf("Harry Potter and the Deathly Hallows: Part 2");
            break;
        }
    }
return 0;
}
