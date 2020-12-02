#include <stdbool.h>
#include <stdio.h>
#include "myBank.h"



double arr[statusAccount][arrsize] = {0}; //initalize the bank

//////////////////////////////////////////////////
int openAccount(double amount) {
int accountNum = 0;
int i=0;

for (i=0 ; i < 50 ; i=i+1){
if( arr[0][i] == 0){
arr[0][i] = 1;
arr[1][i] = amount;
accountNum = firstAcc+i;
printf("The new account number is: %d\n", accountNum);
break;
}
}


return accountNum;
}
////////////////////////////////////////////////////
double birur(int account_number){
double itra=0;

if(arr[0][account_number-901]==1) {
itra=arr[1][account_number-901];
 printf("The balance of account number %d is: %.2f\n",account_number,itra);
}
if(arr[0][account_number-901]==0){
printf("This account is closed\n");
}

return itra;
}
///////////////////////////////////////////////////
double deposit(int account_number)  //afkada
{
double afkada1=0;
double itra1=0;
int yana;
if(arr[0][account_number-901] == 0){
printf("This account is closed\n");
return -1;
} 
printf("how much do you want to deposit ? (pls enter amount grater then 0$) \n");
yana=scanf("%lf",&afkada1);
if(yana==0)
{
printf("Failed to read the amount\n");
return 0;
}
if(afkada1<=0)
{
printf("cannot deposit a negative amount\n");
return 0;
}
itra1=arr[1][account_number-901] + afkada1;
arr[1][account_number-901] = itra1; 

printf("The balance after the deposit is: %.2f\n",itra1);
return itra1;
}
///////////////////////////////////////////////////
double withdraw(int account_number){
if( arr[0][account_number-901] == 0){
printf("This account is closed\n");
return -1;
}
double currentItra;
currentItra=birur(account_number);
double meshicha;
double itra2;
printf("\n how much you want to withdraw, max withdraw is %.2f?\n",currentItra);
scanf("%lf",&meshicha);
if(currentItra < meshicha )
{
printf("low balance - %.2f\n",currentItra);
return -1; 
}
itra2=arr[1][account_number-901]-meshicha;
arr[1][account_number-901]=itra2;
printf("The new balance is : %.2f\n",itra2);
return itra2;
}

 /////////////////////////////////////////////////////
void closeAccount(int account_number){
int elia;
elia=account_number;
if(elia==0){
printf("Failed to read the account number\n");
return;
}
if(arr[0][account_number-901] == 0){
printf("This account is closed\n");
}
 if(arr[0][account_number-901] == 1){
arr[0][account_number-901] = 0;
arr[1][account_number-901] = 0;
printf("Closed account number %d\n",account_number);
}


}
/////////////////////////////////////////////////////
void ribit(double interest_rate){
int i;
int d;
double temp=interest_rate/100;
double calculate2=0;
for(i = 0 ; i < 50; i++){
if(arr[0][i] == 1){
calculate2=arr[1][i]*temp;
arr[1][i] = arr[1][i]+ calculate2;
}
}
}
////////////////////////////////////////////////////////
void printOpen(){
int i;
int j;

for(i = 0; i < 50; i++){
if(arr[0][i] == 1){
j=i+901;
printf("account num:%d\n",j);
printf("%.2f\n",arr[1][i]);
printf("\n");

}
}
}
/////////////////////////////////////////////////////////
void closeAll(){
int i;
for(i=0; i < 50 ; i++){
if( arr[0][i] == 1){
arr[0][i] = 0;
}
}
int j;
for(j=0; j < 50; j++){
arr[1][j]=0;
}
////////////////////////////////////////////////////////
}
