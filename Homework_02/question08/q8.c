#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void main(){
char userInput;
char bufferFlush;
int userNumber;
srand(time(0));
int computer = (rand()%4);
 
for (int i = 0; i<1;){
	printf("Choose r,p,s: ");
	userInput = getchar();
		if ((userInput != 'r') && (userInput != 'p') && (userInput != 's')){
			printf("Invalid choice.");
			while(bufferFlush != '\n'){	
				bufferFlush = getchar();
			}
			bufferFlush = ' ';
		}	
		else {
			i++;
		}
}

if (userInput == 'r'){
	userNumber = 0;	
	printf("User: Rock\n");
}
	else if (userInput == 'p'){
		userNumber = 1;
		printf("User: Paper\n");
	}
		else if (userInput == 's'){
			userNumber = 2;
			printf("User: Scissor\n");
		}
if (computer == 0){
	printf("Computer: Rock\n");

}
	else if (computer == 1){
		printf("Computer: Paper\n");
	}
		else if (computer == 2){
			printf("Computer: Scissor\n");
		}
	
if (userNumber+computer == 2){
	int num = computer;
	computer = userNumber;
	userNumber = num;
}

if (userNumber == computer){
	printf("Tie.");
}

	else if (userNumber > computer){
		printf("You Win!");
	}
		else if (userNumber < computer){
			printf("You lose.");
		
		}
return;
}
