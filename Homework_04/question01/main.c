#include <stdio.h>
#include "main.h"
#include "board.h"
#include "game.h"
#include "gamePlay.h"
#include "playerMove.h"
#include "compMove.h"
#include "win.h"


char computer;
char user;
int compscore = 0;
int playerscore = 0;
int tempcompscore = 0;
int tempplayerscore = 0;
char board[3][3];


/*
 * Initialize the board, ask who goes first, play a game,
 * ask if user wants to play again.
 */

int main(void)
{
char TM;
	while(1)
        {
                printf("Tournament mode? (y/n)");
                do
                {
                        TM = getchar();
                }
                while ((TM != 'y') && (TM != 'Y') && (TM != 'n') && (TM != 'N'));

                if ((TM == 'y') || (TM == 'Y'))
                {
                        play_tournament();
                }
                else
                        break;
        }


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
                if (!play_again())
                break;
                 }
        return 0;
}

