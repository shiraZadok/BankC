#include <stdio.h>
#include "myBank.h"

typedef enum status {close, open} status;
int countAccount =0;

void OpenAccountBank (double amount){
    if(countAccount<50){
        for(int i=0; i<SIZE;i++){
            if(arrayBank[0][i]== close){
                countAccount++;
                if( (amount) >= 0)
                {
                    arrayBank[0][i]=open;
                    arrayBank[1][i]=amount;
                    printf("your number account is:%d\n",(i+901));
                    break;
                }
                else{
                    printf("The amount should be more then o\n");
                    break;
                }
            }
        }
    }
    else{
        printf("Sorry, we are full\n");
    } 
}

void Balance(int account_number){
    if(account_number<=950 && account_number>=901){
    int i=account_number-901;
    if(arrayBank[0][i]!=close){
        printf("Your balance is:%0.2lf\n",(arrayBank[1][i]));
    }
    else{
        printf("Your account is closed\n");
        }
    }
    else{
         printf("ERROR: this account number don't exist\n");
       }
       
}

void Depositing (int account_number, double amount){
    if(amount>=0){
    int i = account_number - 901; 
    if(arrayBank[0][i]!=close){
        arrayBank[1][i]= arrayBank[1][i]+amount;
        printf("Your new amount is:%0.2lf\n",arrayBank[1][i]);
    }
    else{
        printf("Your account is closed\n");
        }
    }
    else
    {
        printf("the amount should be more then 0\n");
    }
}

void Withdrawal (int account_number, double amount){
    if(amount>=0){
    int i = account_number - 901;
    if(arrayBank[0][i]!=close){
        if((arrayBank[1][i]-amount) >=0){
            arrayBank[1][i]= arrayBank[1][i]-amount;
            printf("Your balance is:%0.2lf\n",arrayBank[1][i]);
        }
        else{
            printf("There is no enough money in your account\n");
        }
    }
    else{
        printf("Your account is closed\n");
        }
    }
    else{
        printf("your amount should be more then 0\n");
    }   
}

void Closing(int account_number){
    if(account_number<=950 && account_number>=901){
    int i = account_number - 901; 
    if(arrayBank[0][i]!=close){
        arrayBank[1][i]= 0 ;
        arrayBank[0][i]= close;
        countAccount--;
    }
    else{
        printf("Your account is already closed\n");
        }
    }
    else{
        printf("ERROR: this account number don't exist\n");
    }
           
}

void Interest (int interest_rate){
    double rate=interest_rate;
    if(interest_rate>0){
    for (int i = 0; i<SIZE ; i++) {
        if(arrayBank[0][i]!=close){
            rate=(((rate)/100)* (arrayBank[1][i]));
            arrayBank[1][i]+=rate;
            rate=interest_rate;
        }
        }
    }
    else{
        printf("your interest rate should be more then 0\n");
    }
    
}

void Print (){
    if(countAccount==0){
        printf("There is no open account in your bank!\n");
    }
    else{
    for (int i = 0; i < SIZE ; i++) {
        if(arrayBank[0][i]!=close){
            printf("account number - %d, balance: %0.2lf\n", i+901,arrayBank[1][i]);
        }
    }
}
}

void Exist (){
     for (int i = 0; i <SIZE ; i++) {
        if(arrayBank[0][i]!=close){
            arrayBank[0][i]=close;
            arrayBank[1][i]=0;
        }
    }
    countAccount=0;
    printf("GOODBYE\n\n\n");
}
