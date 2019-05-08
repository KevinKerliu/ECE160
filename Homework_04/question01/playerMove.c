#include <stdio.h>
#include "playerMove.h"
#include "compMove.h"
#include "main.h"

/* Have the user choose a move. */
void player_move(void)
{
  int square;
  int row, col;

  do
  {
    printf("Enter a square: ");
    scanf("%d", &square);
  } while (!square_valid(square));

  row = (square - 1) / 3;
  col = (square - 1) % 3;

  board[row][col] = user;

  return;
}
