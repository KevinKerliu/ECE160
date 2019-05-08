#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_board();
void draw_board();
int mode();
void computer_mode();
void twoPlayer_mode();
void computer_turn();
void player_turn();
int rematch();
int full_board();
int square_valid(int square);
int checkSOS(int row, int col);

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


void init_board(){

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			board[i][j] = ' ';
		}
	}
}

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
		else	turn--;
	}
	printf("Player 1 Score: %d\n", player1);
        if(mode1 == 0)
		printf("Player 2 Score: %d\n", player2orComp);
	else
		printf("Computer Score: %d\n", player2orComp);
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
