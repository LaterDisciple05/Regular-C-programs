/*Program purpose:-to make tic tac toe game
Program date:-18/12/2024
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include <stdio.h>
#include <string.h>
int i = 0;
int count=0;
char r1 = 'X', r2 = 'O';
char player1[10], player2[10];
char input[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void board();
int entry();
void end();
void reset();
int main()
{
    fflush(stdout);
    printf("\nEnter name of player 1:-\a");
    scanf("%10[^\n]s", player1);
    printf("\n");
    fflush(stdin);
    printf("Enter name of player 2:-\a");
    scanf("%10[^\n]s", player2);
    printf("\nOh great let's have a TicTacToe match between %s and %s!!\n\n\n\a", player1, player2);
    printf("===TicTacToe===\n\n");
    board();
    return 0;
}
void board()
{
    printf("    |    |    \n");
    printf("  %c |  %c | %c \n", input[1], input[2], input[3]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf("  %c |  %c | %c \n", input[4], input[5], input[6]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf("  %c |  %c | %c \n", input[7], input[8], input[9]);
    printf("    |    |    \n");
    printf("\n\n");
    if ((input[1] == r1 && input[2] == r1 && input[3] == r1) || (input[4] == r1 && input[5] == r1 && input[6] == r1) ||
        (input[7] == r1 && input[8] == r1 && input[9] == r1) || (input[1] == r1 && input[5] == r1 && input[9] == r1) ||
        (input[3] == r1 && input[5] == r1 && input[7] == r1) || (input[1] == r1 && input[4] == r1 && input[7] == r1) ||
        (input[2] == r1 && input[5] == r1 && input[8] == r1) || (input[3] == r1 && input[6] == r1 && input[9] == r1))
    {
        printf("%s is the winner of the game, %s better luck next time!!", player1, player2);
        end();
    }
    if ((input[1] == r2 && input[2] == r2 && input[3] == r2) || (input[4] == r2 && input[5] == r2 && input[6] == r2) ||
             (input[7] == r2 && input[8] == r2 && input[9] == r2) || (input[1] == r2 && input[5] == r2 && input[9] == r2) ||
             (input[3] == r2 && input[5] == r2 && input[7] == r2) || (input[1] == r2 && input[4] == r2 && input[7] == r2) ||
             (input[2] == r2 && input[5] == r2 && input[8] == r2) || (input[3] == r2 && input[6] == r2 && input[9] == r2))
    {
        printf("%s is the winner of the game, %s better luck next time!!", player2, player1);
        end();
    }
    if(count==9&&!(count<9))
    {
      printf("It's a draw!!");
      end();
    }

    else
    {
        entry();
    }
    return;
}
int entry()
{
    int n, status = 1;
    while (status == 1)
    {
        if (i % 2 == 0)
        {
            printf("Player 1 Enter place to put your mark=\n");
            scanf("%d", &n);
            if(n>0&&n<10&&input[n]!='X'&&input[n]!='O')
            {
            input[n] = 'X';
            count++;
            i++;
            board();
            }
            else
            {
                printf("Enter valid input!!\n");
            }

        }
        else
        {
           
            printf("Player 2 Enter place to put your mark=\n");
            scanf("%d", &n);
            if(n>0&&n<10&&input[n]!='X'&&input[n]!='O') 
           {
            input[n] = 'O';
            count++;
            i++;
            board();
           }
            else
            {
                printf("Enter valid input!!\n");
            }

        }
    }
    return (input[n]);
}
void end()
{
    printf("\nEnd of the game:\n");
    fflush(stdin);
    reset();
}
void reset()
{
  i=0;
  count=0;
  main();
}
