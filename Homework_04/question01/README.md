## Question 1

Extend the tic-tac-toe game that we went over in class with the following additional requirements:
* Split up the program into multiple logical .c and .h files.
* Create a make file in order to compile the game.
* Keep track of how many wins the player and the computer won for the duration of the program.
* Allow a user to specify a tournament mode where the winner is determined by winning the best out of x games.

This question is 50 points (25 pts for quality & 25 pts for output).

Bonus (+10): 
* Allow a user to specify the board to nxn.
* Modify the win condition to check for 3 X's or 3 O's in a row, column, or diagonal in the nxn tic-tac-toe board.
* Modify the computer_move function to play more intelligently on a 4x4 or 5x5 board.


Compile Steps:

	make

Output:

	Tournament mode? (y/n)y
	The tournament will be a best of: (Must be an odd number greater than one.)1
	2
	3
	Do you want to go first? (y/n) n
	
	I am choosing square 5!
	
	   *   *
	   *   *
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	Enter a square: 1
	
	   *   *
	 O *   *
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	
	I am choosing square 3!
	
	   *   *
	 O *   * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	Enter a square: 2
	
	   *   *
	 O * O * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	
	I am choosing square 7!
	
	   *   *
	 O * O * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	 X *   *
	   *   *
	
	
	I WIN!!!
	
	Total player wins: 0
	Total computer wins: 1
	Player wins this tournament: 0
	Computer wins this tournament: 1
	Do you want to go first? (y/n) n
	
	I am choosing square 5!
	
	   *   *
	   *   *
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	Enter a square: 1
	
	   *   *
	 O *   *
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	
	I am choosing square 3!
	
	   *   *
	 O *   * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	Enter a square: 2
	
	   *   *
	 O * O * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	
	I am choosing square 7!
	
	   *   *
	 O * O * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	 X *   *
	   *   *
	
	
	I WIN!!!
	
	Total player wins: 0
	Total computer wins: 2
	Player wins this tournament: 0
	Computer wins this tournament: 2
	The winner of the tournament is: Me! Sorry!
	Tournament mode? (y/n)n
	Do you want to go first? (y/n) n
	
	I am choosing square 5!
	
	   *   *
	   *   *
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	Enter a square: 1
	
	   *   *
	 O *   *
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	
	I am choosing square 3!
	
	   *   *
	 O *   * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	Enter a square: 2
	
	   *   *
	 O * O * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	   *   *
	   *   *
	
	
	I am choosing square 7!
	
	   *   *
	 O * O * X
	   *   *
	***********
	   *   *
	   * X *
	   *   *
	***********
	   *   *
	 X *   *
	   *   *
	
	
	I WIN!!!
	
	Total player wins: 0
	Total computer wins: 3
	Do you want to play again? (y/n) n
