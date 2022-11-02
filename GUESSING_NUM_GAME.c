// generate random number using rand() function
//number = ran()%100 + 1;
//this work as any random number will divide by 100 the answer will be in 0 to 100 


#include<stdio.h>
#include<stdlib.h>                          // To use rand() function
#include<time.h>                            // To use time(0) function
int main()
{
	int number, guess, nguesses=1;      // guess is number that is generated &nguesses is used for no of time you guessed the number while playing
	srand(time(0));                     //random numbers for every output
	number = rand()%100 + 1;            //generate random number between 1 to 100 if we take 200 instead of 100 number will generate number between 1 to 200.
    //printf("the number is %d",number);
	//keep running the loop until it guesed
	do
	{
		printf("Guess the number between 1 to 100\n");
		scanf("%d",&guess);
		
		if(guess>number){
			printf("lower number please!!\n");
		}
		else if(guess<number){
			printf("Highest number please!!\n");
		}
		else{
			printf("you guess it in %d attempts\n", nguesses);
		}
		nguesses ++;
	}
	while(guess!=number);
	
    return 0;
}
	
