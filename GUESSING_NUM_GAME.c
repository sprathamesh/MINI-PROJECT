// generate random number using rand() function
//number = ran()%100 + 1;
//this work as any random number will divide by 100 the answer will be in 0 to 100 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number, guess, nguesses=1;
	srand(time(0));                     //random numbers for every output
	number = rand()%100 + 1;            //generate random number between 1 to 100
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
	