#include <stdio.h>
#include "myBank.h"
//////////////////////////////
double gInterest()
{
int check;
 double interest;
    printf("please enter an interest rate in precentage \n");
  check=scanf("%lf",&interest);
if(check==0)
{
printf("Failed to read the interest rate\n");
while(getchar()!='\n');
return 0;
}
if(interest<=0)
{
printf("Invalid interest rate\n");
}
if(interest>1)
{while(getchar()!='\n');
        return interest;
    }
  while(getchar()!='\n');
        return 0;
        
}
////////////////////////////////////
double gAmount(){
double amount;
int flager; 
printf("pls enter an amount for deposit\n");
flager=(scanf("%lf",&amount));
if(flager==0){
printf("Failed to read the amount\n");
while(getchar()!='\n');
return 0;}
if(amount<=0){
printf("Invalid Amount\n");
while(getchar()!='\n');
return 0;}

if(amount>0){return amount;}
else {
while(getchar()!='\n');
    return 0;}
}
///////////////////////////////////
int accountChecker(){
int accountNum;
int flager;
printf("\n enter account number between 901-950: \n");
flager=scanf("\n%d", &accountNum);
if(flager==0){printf("Failed to read the account number\n");
return 0;}
if(accountNum < 901 || accountNum > 950){printf("Invalid account number\n");
return 0;}
if(accountNum >= 901 && accountNum <= 950)
{ return accountNum;}
else {return 0;}
}
/////////////////////////////////////
int main(){
char choice;
double interest_rate;
double amount;
int accountNumber;
int counter=0;
do{ 
printf("\nPlease Enter the Transaction type: \n");

        printf("O-Open Account\n");
        printf("B-Balance Inquiry\n");
        printf("D-Deposit\n");
        printf("W-Withdrawal\n");
        printf("C-Close Account\n");
        printf("I-Interest\n");
        printf("P-Print\n");
        printf("E-Exit\n");
        scanf("\n%c", &choice);
        
        
switch (choice){



	case 'O':
	
                 if((counter<50)){
	       amount=gAmount();
	if(amount != 0){
		openAccount(amount);
		counter++;
}
}else{printf("No place in bank hapoalim, go to leumi\n");
break;
}

	break;
	case 'B':
            
		accountNumber = accountChecker();
              if(accountNumber==0){break;}
else{
	        birur(accountNumber);
	}
		break;

	case 'D':
accountNumber=accountChecker();
if(accountNumber==0){

break;
}
else{

deposit(accountNumber);
}
		break;
		
	case 'W':
                accountNumber = accountChecker();
if(accountNumber==0){
printf("\n this account is closed\n");
break;
}
else{
withdraw(accountNumber);
}

		break;
	case 'C':
		accountNumber = accountChecker();
		if (accountNumber == 0 )
		{
		//printf("\n this account number is valid\n");
		
		
		break;
		}
		
		closeAccount(accountNumber);
		counter--;	
	        break;
	case 'I':
		interest_rate=gInterest();
		if(interest_rate!=0){
		ribit(interest_rate);
		}
			
		break;
	case 'P':
		printOpen();
		break;
	case 'E':	
		closeAll();
		break;
        default :printf("Invalid transaction type\n");
}
} while (choice != 'E' );

return 0;
}
