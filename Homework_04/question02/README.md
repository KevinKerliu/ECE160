## Question 2

Write the SOS game that is playable by 2 players. More information can be found on: <a href="https://en.wikipedia.org/wiki/SOS_(game)">https://en.wikipedia.org/wiki/SOS_(game)</a>

Include the following requirements:
* The game should be split up into multiple files.
* The game should be compiled using a makefile.
* The game should have a game board of 5x5.
* The number of SOS points should be counted per player.
* The game ends when the entire board is filled and the winner is declared.
* One should be able to do a rematch.
* Give the option for a player to play against the computer. Have the computer play relatively smart (i.e. if there is a chance to get an SOS, it will go for it!). Describe how you made the computer player in this README.

This question is 50 points (25 points for quality & 25 points for output).

Bonus (+10): 
* Extend the game so that the user can specify the size of board that they want to play on (nxm).

Compile Steps:
	
	make

Output:
	Enter P for 2 player mode or C for against computer mode
	c
	Do you want to go first? (Y/N) n
	Computer's Turn
	
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   *
	   *   *   *   *
	
	Computer chose square 22
	Player 1 Score: 0
	Computer Score: 0
	Player's Turn
	Enter a square number:
	1
	square: 1
	Enter S or O: (ONLY CAPITAL LETTERS)
	S
	
	   *   *   *   *
	 S *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 0
	Computer's Turn
	
	   *   *   *   *
	 S *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   *
	   *   *   *   *
	
	Computer chose square 19
	Player 1 Score: 0
	Computer Score: 0
	Player's Turn
	Enter a square number:
	3
	square: 3
	Enter S or O: (ONLY CAPITAL LETTERS)
	O
	
	   *   *   *   *
	 S *   * O *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 0
	Computer's Turn
	
	   *   *   *   *
	 S *   * O *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   *
	   *   *   *   *
	
	Computer chose square 9
	Player 1 Score: 0
	Computer Score: 0
	Player's Turn
	Enter a square number:
	15
	square: 15
	Enter S or O: (ONLY CAPITAL LETTERS)
	O
	
	   *   *   *   *
	 S *   * O *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 0
	Computer's Turn
	
	   *   *   *   *
	 S *   * O *   *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Computer chose square 24
	Player 1 Score: 0
	Computer Score: 0
	Player's Turn
	Enter a square number:
	5
	square: 5
	Enter S or O: (ONLY CAPITAL LETTERS)
	S
	
	   *   *   *   *
	 S *   * O *   * S
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 0
	Computer's Turn
	
	   *   *   *   *
	 S *   * O *   * S
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Computer chose square 12
	Player 1 Score: 0
	Computer Score: 0
	Player's Turn
	Enter a square number:
	7
	square: 7
	Enter S or O: (ONLY CAPITAL LETTERS)
	S
	
	   *   *   *   *
	 S *   * O *   * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 0
	Computer's Turn
	
	   *   *   *   *
	 S *   * O *   * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 1
	Computer's Turn
	
	   *   *   *   *
	 S *   * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *

	Player 1 Score: 0
	Computer Score: 2
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   *   * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 3
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 4
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   *   *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 5
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 6
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 7
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S *
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Computer chose square 11
	Player 1 Score: 0
	Computer Score: 7
	Player's Turn
	Enter a square number:
	10
	square: 10
	Enter S or O: (ONLY CAPITAL LETTERS)
	S
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * O *
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 7
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * O * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 0
	Computer Score: 8
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * O * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Computer chose square 16
	Player 1 Score: 0
	Computer Score: 8
	Player's Turn
	Enter a square number:
	6
	square: 6
	Enter S or O: (ONLY CAPITAL LETTERS)
	S
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * O * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O *
	   *   *   *   *
	
	Player 1 Score: 1
	Computer Score: 8
	Player's Turn
	Enter a square number:
	25
	square: 25
	Enter S or O: (ONLY CAPITAL LETTERS)
	S
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * O * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S *   * O * S
	   *   *   *   *
	
	Player 1 Score: 1
	Computer Score: 8
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * O * S
	   *   *   *   *
	********************
	   *   *   *   *
	   * S * S * O * S
	   *   *   *   *
	
	Player 1 Score: 1
	Computer Score: 9
	Computer's Turn
	
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * S * S
	   *   *   *   *
	********************
	   *   *   *   *
	 O * S * O * S * O
	   *   *   *   *
	********************
	   *   *   *   *
	 S * S * O * O * S
	   *   *   *   *
	********************
	   *   *   *   *
	O  * S * S * O * S
	   *   *   *   *

	Computer chose square 21
	Player 1 Score: 1
	Computer Score: 9
	Sorry, you lose.Do you want to have a rematch? (Y/N)n

	
Computer Player Description:
	
	The computer player is made to complete the first available SOS on the board. If there is no spot to complete an SOS, then the computer alternates between putting S and O in a randomly generated square. In order to find available SOS spots, the board array is traversed. When an empty spot is found, an S is placed in the spot and the function checkSOS is called to see if the S would complete an SOS. If it doesn't, then an O is placed in the spot and the checkSOS function is called again. If this also does not complete an SOS then the spot is made empty again, and the computer randomly places a letter in the board.
