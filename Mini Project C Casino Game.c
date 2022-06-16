

#include <math.h>

#include <stdio.h>
#include <stdlib.h>
void guess(int N)
{
    int amount,wish;
    char name[100];
    char sex;
    printf("ENTER YOUR NAME IN CAPITAL LETTERS : ");
    scanf("%[^\n]%*c",name);
    printf("\nENTER YOUR SEX (IF FEMALE ENTER 'F' AND IF MALE ENTER 'M' OTHERWISE 'O') : ");
    scanf("%c",&sex);
    printf("\nEnter your amount to play : $");
    scanf("%d",&amount);
    do
    {
    if(amount==0)
    {
        printf("ooops you have $%d in your account\n",amount);
        goto lose;
    }
    int number,guess,bet;
    printf("Your current balance is : $%d\n",amount);
    printf("Make you bet : $");
    scanf("%d",&bet);
    if(bet>amount)
    {
        printf(" ===================================================================================================\n");
        printf(" :|: :|:\n");
        printf(" :|: YOU HAVE ENTERED BET MORE THAN YOUR CURRENT BALANCE :|:\n");
        printf(" :|: YOU HAVE BEEN THROWN OUT FROM CASINO FOR VIOLATING THE RULES :|:\n");
        printf(" :|: :|:\n");
        printf(" ===================================================================================================\n");
        goto lose;
    }
    number = rand()%N;
    printf("Guess a number between 1 and %d :----> ",N);
    scanf("%d",&guess);
    if(guess>10 || guess<0)
    {
        printf(" ===================================================================================================\n");
        printf(" :|: :|:\n");
        printf(" :|: YOU HAVE NOT ENTERED NUMBER BETWEEN 1 AND 10 :|:\n");
        printf(" :|: YOU HAVE BEEN THROWN OUT FROM CASINO FOR VIOLATING THE RULES :|:\n");
        printf(" :|: :|:\n");
        printf(" ===================================================================================================\n");
        goto lose;
    }
    if (guess!=number)
    {
        printf("Sorry the number was %d\n",number);
        amount=amount-bet;
        if(sex=='M')
        {
            printf("Now you have %d$ Sir %s\n",amount,name);
        }
        else if(sex=='F')
        {
            printf("Now you have %d$ Madame %s\n",amount,name);
        }
        else
        {
            printf("Now you have %d$ %s\n",amount,name);
        }
    }
    else
    {
        printf("Yaaaay!!! You guessed the number\n");
        amount=amount+bet*5;
        if(sex=='M')
        {
            printf("Now you have %d$ Sir %s\n",amount,name);
        }
        else if(sex=='F')
        {
            printf("Now you have %d$ Madame %s\n",amount,name);
        }
        else
        {
            printf("Now you have %d$ %s\n",amount,name);
        }
    }
    printf("do you want to gamble again ?\n");
    printf("press 1 to make bet and 0 to exit : ");
    scanf("%d",&wish);
    }
    while(wish==1);
    {
        lose :
        printf(" ===================================================================================================\n");
        printf(" :|: :|:\n");
        printf(" :|: THANK YOU FOR PLAYING IN OUR CASINO :|:\n");
        printf(" :|: :|:\n");
        printf(" ===================================================================================================\n");
    }
}
int main()
{
    printf(" ===================================================================================================\n");
    printf(" :|: :|:\n");
    printf(" :|: WELCOME :|:\n");
    printf(" :|: TO :|:\n");
    printf(" :|: $ ROYAL CASINO $ :|:\n");
    printf(" :|: :|:\n");
    printf(" ===================================================================================================\n\n");
    printf(" ===================================================================================================\n");
    printf(" :|: **********RULES OF THE MINI GAME********** :|:\n");
    printf(" :|: :|:\n");
    printf(" :|: 1.ENTER YOUR NAME AND GENDER :|:\n");
    printf(" :|: 2.ENTER THE AMOUNT AS MUCH AS YOU WISH :|:\n");
    printf(" :|: 3.ENTER THE BET YOU WISH TO MAKE :|:\n");
    printf(" :|: 4.DO NOT ENTER BET MORE THAN AMOUNT OTHERWISE IT WILL BE COUNTED AS A LOSS :|:\n");
    printf(" :|: 5.CHOOSE ANY NUMBER BETWEEN 1 TO 10 ONLY OTHERWISE IT WILL BE COUNTED AS A LOSS :|:\n");
    printf(" :|: 6.IF YOU CHOOSE THE RIGHT NUMBER YOU WILL GET 5 TIMES THE MONEY YOU BET :|:\n");
    printf(" :|: 7.ONCE YOUR BALANCE BECOMES 0 THE GAME WILL END :|:\n");
    printf(" :|: :|:\n");
    printf(" ===================================================================================================\n");
    int N = 10;
    guess(N);
    return 0;
}

