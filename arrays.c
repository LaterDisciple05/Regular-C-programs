/*Program purpose:-to learn array basic concepts taking (3d array) as a testimony
Program date:-18/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include <stdio.h>
int main()
{
    int a[2][2][2]; // 2(2d)arrays both of order 2 x 2
    printf("Enter elements of array=\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("\nArray 1:\t\tArray 2:\n");
    {
     for(int j=0;j<2;j++)
     {
        for(int k=0;k<2;k++)
        {
            printf("%d\t",a[0][j][k]);
        }
        printf("\t");
        for(int k=0;k<2;k++)
        {
            printf("%d\t",a[1][j][k]);
        }
        printf("\n");
     }
    return 0;
    }
}
