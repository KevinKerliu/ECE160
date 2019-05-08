#include <stdio.h>
#include "main.h"
#include "board.h"
#include "player.h"
#include "comp.h"

char board[5][5];
int turn = 1; //turn equals: 1 for player1, 2 for player2 or computer.
int player1 = 0;
int player2orComp = 0;
int mode1; //mode1 equals 0 for twoPlayer_mode, 1 for computer_mode.
int comp = 2;


void main(){


        do{
                init_board();
                if (mode())
                        computer_mode();
                else
                        twoPlayer_mode();
        }
        while (rematch());
}
