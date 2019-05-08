#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
#include "comp.h"
#include "player.h"
#include "board.h"

void computer_mode(){
        mode1 = 1;
        char response;
        printf("Do you want to go first? (Y/N) ");
        do
        response = getchar();
        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n');
        if (response == 'N' || response == 'n')
                turn++;
        while (!full_board()){
        if (turn == 1){
                printf("Player's Turn\n");
                player_turn();
        }
        if (turn == 2){
                printf("Computer's Turn\n");
                computer_turn();
        }
        }

        if (player1 > player2orComp)
                printf("Congratulations, you win!!");
        else if (player2orComp > player1)
                printf("Sorry, you lose.");
        else printf("The game is a tie.");
        return;

}


void computer_turn(){

        /* Looks for an open SOS and does it. */
        for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                        if (board[i][j] == ' '){
                                board[i][j] = 'S';
                                if (!checkSOS(i, j)){
                                        board[i][j] = 'O';
                                        if (!checkSOS(i, j)){
                                                board[i][j] = ' ';
                                        }
                                        else{
                                                draw_board();
                                                printf("Player 1 Score: %i\n", player1);
                                                printf("Computer Score: %i\n", player2orComp);
                                                return;
                                        }

                                }
                                else{
                                        draw_board();
                                        printf("Player 1 Score: %i\n", player1);
                                        printf("Computer Score: %i\n", player2orComp);
                                        return;
                                }

                        }
                }
        }
        /* Randomly generates a square to put a randomly generated S or O. */
        int row, col;
        srand(time(0));
        int randSquare;
        do{
                randSquare = (rand()%25)+1; //random number between 1 and 25.
                row = (randSquare - 1) / 5;
                col = (randSquare - 1) % 5;
        }
        while (!square_valid(randSquare));
        /* Alternates between S and O. */
        if (comp == 2){
                board[row][col] = 'S';
                comp--;
        }
        else{
                board[row][col] = 'O';
                comp++;
        }
        draw_board();
        printf("Computer chose square %i\n", randSquare);
        printf("Player 1 Score: %i\n", player1);
        printf("Computer Score: %i\n", player2orComp);
        turn--;
        return;


}

