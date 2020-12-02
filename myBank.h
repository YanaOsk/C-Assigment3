#ifndef _MYBANK_H_
#define _MYBANK_H_

#define arrsize 50 //50 accounts
#define statusAccount 2
#define firstAcc 901
extern double arr[statusAccount][arrsize]; 
int openAccount(double amount) ;//ptichat heshbon
double birur(int account_number); //birur itra
double deposit(int account_number); //afkada
double withdraw(int account_number); //meshiha
void closeAccount();
void ribit(double interest_rate);
void printOpen();
void closeAll();
double gAmount();
int accountChecker();
#endif
