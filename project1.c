#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random,guess;
    srand(time(NULL));
    int no_of_guess=0;

    printf("\nWelcome you to playing the guessing Game:");
    printf("\n==========================================");
    random = rand() * 50 + 1;

    do{
       printf("\nplease Enter your guess Between (1-50):");
       scanf("%d",&guess);
       no_of_guess++;

       if(guess < random){
        printf("\nPlz guess a larger number");
       }else if(guess > random){
        printf("\nplz guess a smaller number");
       }else {
        printf("Congrulations  !!! you have successsfully gussed a correct number in %d attempt",no_of_guess);

       }

    }while(guess!=random);

    printf("\n BYe BYe ");
    printf("\n Thanks for Playing this game");
    printf("\n Developed by the : Fasih Zeeshan");

}