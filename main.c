#include <stdio.h>
#include "myBank.h"

int main(){
    double amount =0;
    int accountNumber =0;
    int intersetRate =0;
    char Uoperation = ' ' ;
    do
    {
        printf("\nWelcome to our Bank!\n‬‬There is few operation that you can choce in our bank\n The operation is: O, B, D, W, C, I, P, E\n please enter your wanted operation -->\n\n");
        if (scanf(" %c",&Uoperation)!=1)
        {
            printf("ERROR: This operation not exist. please try again\n\n");
        }
        else
        {
            switch (Uoperation)
            {
            case 'O':
                amount =0;
                printf("plaese enter your amount\n");
                if (scanf("%lf",&amount)!=1){
                    printf("ERROR: Your amount didn't accept\n");
                }
                else{
                    OpenAccountBank(amount);
                }
                break;

            case 'B':
                accountNumber =0;
                printf("please enter your account number\n");
                    if (scanf("%d", &accountNumber)!=1){
                    printf("ERROR: Your account number didn't accept\n");
                }
                else{
                    Balance(accountNumber);
                }
                break;

            case 'D':
                 accountNumber =0;
                 amount =0;
                printf("please enter your account number\n");
                    if (scanf("%d", &accountNumber)!=1){
                        printf("your choice didn't accept\n");
                    }
                    else{ 
                        if(accountNumber<=950 && accountNumber>=901){
                        printf("please enter your amount\n");
                        if(scanf("%lf", &amount)!=1){
                            printf("your choice didn't accept\n");
                        }
                        else{
                            Depositing(accountNumber, amount);
                        }
                        }
                        else{
                            printf("ERROR: this account number don't exist\n");
                        }
                    }
                break;

            case 'W':
                printf("please enter your account number\n");
                    if (scanf("%d", &accountNumber)!=1){
                        printf("your choice didn't accept\n");
                    }
                    else{
                        if(accountNumber<=950 && accountNumber>=901){ 
                        printf("please enter your amount\n");
                        if(scanf("%lf", &amount)!=1){
                            printf("your choice didn't accept\n");
                        }
                        else{
                        Withdrawal(accountNumber, amount);
                        }
                        }
                         else{
                            printf("ERROR: this account number don't exist\n");
                        }
                    }
                break;

            case 'C':
                 accountNumber =0;
                printf("please enter your account number\n");
                    if (scanf("%d", &accountNumber)!=1){
                    printf("ERROR: Your account number didn't accept\n");
                }
                else{
                    Closing(accountNumber);
                }
                break;

            case 'I':
                printf("please enter your rate\n");
                //intersetRate =0;
                if(scanf("%d", &intersetRate)!=1){
                    printf("Your interset rate didn't accept\n");
                }
                else{
                    Interest(intersetRate);
                }
                break;

            case 'P':
            Print();
                break;

            case 'E':
                Exist();
                break;
            
            default:
                printf("Try to choce again\n\n");
                break;
            }
        }   
    } while (Uoperation != 'E');
    return 0;
}
