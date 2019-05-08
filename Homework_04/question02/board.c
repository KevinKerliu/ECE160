#include <stdio.h>
#include "main.h"
#include "board.h"
#include "player.h"
#include "comp.h"

/* Checks if an input completed an SOS. */
int checkSOS(int row, int col){
        char square = board[row][col];
        int match = 0;
        if (square == 'O'){
                if (row+1 >= 0 && row+1 <= 4 && row-1 >= 0 && row-1 <= 4 && col >= 0 && col <= 4){
                        if (board[row+1][col] == 'S' && board[row-1][col] == 'S'){
                                match++;
                        }
                }
                if (row >= 0 && row <= 4 && col+1 >= 0 && col+1 <= 4 && col-1 >= 0 && col-1 <=4){
                        if (board[row][col+1] == 'S' && board[row][col-1] == 'S'){
                                match++;
                        }
                }
                if (row+1 >= 0 && row+1 <= 4 && row-1 >= 0 && row-1 <= 4 && col+1 >= 0 && col+1 <= 4 && col-1 >=0 && col-1 <=4){
                        if ((board[row+1][col+1] == 'S' && board[row-1][col-1] == 'S')){
                                match++;
                        }
                }
                if (row+1 >= 0 && row+1 <= 4 && row-1 >= 0 && row-1 <= 4 && col+1 >= 0 && col+1 <= 4 && col-1 >=0 && col-1 <=4){
                        if ((board[row+1][col-1] == 'S' && board[row-1][col+1] == 'S')){
                                match++;
                        }
                }
        }
        else {
                for (int i=-1; i < 2; i++){
                        for (int j = -1; j < 2; j++){
                                if (row+i >= 0 && row+i <= 4 && col+j >= 0 && col+j <= 4){
                                        if(board[row+i][col+j] == 'O'){
                                                if(row+(2*i) >= 0 && row+(2*i) <= 4 && col+(2*j) >= 0 && col+(2*j) <= 4){
                                                        if (board[row+(2*i)][col+(2*j)] == 'S')
                                                                match++;
                                                        }
                                        }
                                }
                        }

   }
        }
        if (turn == 1)
                player1 += match;
        else
                player2orComp += match;

        return match;
}


/* Check if board is full and game should end. */
int full_board(){
        for(int i = 0; i< 5; i++){
                for(int j= 0; j < 5; j++){
                        if (board[i][j] == ' ')
                                return 0;
                }
        }

        return 1;
}


/* Check if the given square is valid and empty. */
int square_valid(int square){
        int row, col;

        row = (square - 1) / 5;
        col = (square - 1) % 5;

        if ((square >= 1) && (square <= 25)){
                if (board[row][col] == ' ')
                        return 1;
  }

        return 0;
}



void init_board(){

        for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                        board[i][j] = ' ';
                }
        }
}



/* Display the board to standard output. */
void draw_board(void)
{
  int row, col;

  printf("\n");
  for (row = 0; row < 5; row++)
  {
    printf("   *   *   *   *   \n");
    printf(" %c * %c * %c * %c * %c\n",
           board[row][0], board[row][1], board[row][2], board[row][3], board[row][4]);
    printf("   *   *   *   *   \n");
    if (row != 4)
      printf("********************\n");
  }
  printf("\n");

  return;
}

