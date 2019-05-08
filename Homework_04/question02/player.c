#include <stdio.h>
#include "main.h"
#include "player.h"
#include "comp.h"
#include "board.h"

int mode(){
        char mode;
        printf("Enter P for 2 player mode or C for against computer mode\n");
        do
        mode = getchar();
        while (mode != 'C' && mode != 'c' && mode != 'P' && mode != 'p');
        if (mode == 'C' || mode == 'c')
                return 1;
        else
                return 0;
}



void twoPlayer_mode(){
        mode1 = 0;
        while (!full_board()){
        if (turn == 1){
                printf("Player 1's Turn\n");
                player_turn();
        }
        if (turn == 2){
                printf("Player 2's Turn\n");
                player_turn();
        }
        }
        if (player1 > player2orComp)
                printf("Player 1 Wins!!");
        else if (player2orComp > player1)
                printf("Player 2 wins!!");
        else printf("The game is a tie.");
        return;

        }




void player_turn(){
        int square;
        int row, col;
        char letter;

        printf("Enter a square number: \n");
        do
                scanf("%d", &square);
        while (!square_valid(square));

        printf("square: %d\n", square);
        row = (square-1) / 5;
        col = (square-1) % 5;

        printf("Enter S or O: (ONLY CAPITAL LETTERS)\n");
        do
                letter = getchar();
        while (letter != 'S' && letter != 'O');

        board[row][col] = letter;
        draw_board();
        if (!checkSOS(row, col)){
                if (turn == 1)
                        turn++;
                else    turn--;
        }
        printf("Player 1 Score: %d\n", player1);
        if(mode1 == 0)
                printf("Player 2 Score: %d\n", player2orComp);
        else
                printf("Computer Score: %d\n", player2orComp);
        return;
}




int rematch(){
        char response;
        printf("Do you want to have a rematch? (Y/N)");
        do
        response = getchar();
        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n');
        if (response == 'Y' || response == 'y')
                return 1;
        else
                return 0;
}

