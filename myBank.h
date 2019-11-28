#ifndef _MYBANK_H_
#define _MYBANK_H_
#define COLUMNS 50
#define LINE 2
#define SIZE 50

double arrayBank [LINE][COLUMNS] = {0};

void OpenAccountBank(double);
void Balance(int);
void Depositing(int, double);
void Withdrawal(int, double);
void Closing(int);
void Interest(int);
void Print();
void Exist();

#endif