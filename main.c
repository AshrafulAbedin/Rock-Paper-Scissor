#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    srand(time(0));
    int player, computer = rand() % 3;

    // 0 --> Rock
    // 1 --> Paper
    // 2 --> Scissor

    printf("Choose 0 for Rock, 1 for Paper, 2 for Scissor\n");
    scanf("%d", &player);
    // printf("%d\n", computer);
   if (player == 0)
   {
    printf("Player--> Rock\n");
   
   }
   if (computer == 0)
   {
    printf("Computer--> Rock\n");
   
   }
   if (player == 1)
   {
    printf("Player--> Paper\n");
   
   }
   if (computer == 1)
   {
    printf("Computer--> Paper\n");
   
   }
   if (player == 2)
   {
    printf("Player--> Scissor\n");
   
   }
   if (computer == 2)
   {
    printf("Computer--> Scissor\n");
   
   }
   

    if (player == 0 && computer == 0)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Lose!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a Draw!\n");
    }
    else
    {
        printf("Choose 0 or 1 or 2!");
    }

    return 0;
}