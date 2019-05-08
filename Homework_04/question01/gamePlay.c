#include <stdio.h>
#include "gamePlay.h"
#include "board.h"
#include "playerMove.h"
#include "compMove.h"
#include "win.h"
#include "game.h"
#include "main.h"

/* Loop through 9 turns or until somebody wins. */
void play_game(void)
{
	
  int turn;
  for (turn = 1; turn <= 9; turn++)
  {
    /* Check if turn is even or odd
       to determine which player should move. */
    if (turn % 2 == 1)
    {
      if (computer == 'X')
        computer_move();
      else
        player_move();
    }
    else
    {
      if (computer == 'O')
        computer_move();
      else
        player_move();
    }


    draw_board();


    if (symbol_won(computer))
    {
        compscore++;
        tempcompscore++;
        printf("\nI WIN!!!\n\n");
        printf("Total player wins: %d\n", playerscore);
        printf("Total computer wins: %d\n", compscore);
        return;
    }

        else if (symbol_won(user))
    {
        playerscore++;
        tempplayerscore++;
        printf("\nCongratulations, you win!\n\n");
        printf("Total player wins: %d\n", playerscore);
        printf("Total computer wins: %d\n", compscore);
            return;
    }
  }

  printf("\nThe game is a draw.\n\n");
  printf("Total player wins: %d\n", playerscore);
  printf("Total computer wins: %d\n", compscore);
  return;
}


/*Tournament mode addition*/
void play_tournament(void)
{
char rounds;
int introunds;
tempcompscore = 0;
tempplayerscore = 0;
printf("The tournament will be a best of: (Must be an odd number greater than one.)");
                do
                {
                rounds = getchar();
                introunds = rounds - '0';
                }
                while (introunds %2 != 1 || introunds == 1);


                while(1)
                {
                init_board();
                        if (user_first())
                         {
                        computer = 'O';
                        user = 'X';
                         }
                        else
                         {
                        computer = 'X';
                        user = 'O';
                         }
                        play_game();

                        printf("Player wins this tournament: %d\n", tempplayerscore);
                        printf("Computer wins this tournament: %d\n", tempcompscore);

                        if(tempcompscore > introunds/2 || tempplayerscore > introunds/2)
                        {
                        printf("The winner of the tournament is: ");
                                if(tempcompscore > tempplayerscore)
                                {
                                printf("Me! Sorry!\n");
                                break;
                                }
                                else
                                {
                                printf("You! Congrats!\n");
                                break;
                                }
                        }
                }
return;
}
                                                                   
