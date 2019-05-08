## Question 8

Write a program that mimics rock-paper-scissors. The input should be a single letter: "r", "p", or "s" representing "rock", "paper", and "scissors", respectively. Print out the computer's choice. Also, print out the result as "You win!", "You lose.", and "Tie." depending on the result of the game. 

If the user enters an invalid letter, print out "Invalid choice."

You may hard code a computer choice or if you want a challenge, look into using the rand() function or a random number generator function.

Compilation Step:
	
	gcc q8.c

Output:

Choose r,p,s: r
User: Rock
Computer: Paper
You lose.

Choose r,p,s: s
User: Scissor
Computer: Paper
You Win!

Choose r,p,s: p
User: Paper
Computer: Scissor
You lose.

Choose r,p,s: s
User: Scissor
Computer: Rock
You lose.

Choose r,p,s: s
User: Scissor
Computer: Scissor
Tie.

Choose r,p,s: ddddd
Invalid choice.Choose r,p,s: ddddd
Invalid choice.Choose r,p,s: ddddd
Invalid choice.Choose r,p,s: r
User: Rock
Computer: Rock
Tie.

