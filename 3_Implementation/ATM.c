/**
 * @file ATM.c
 * @author Ram sai vardhan ()
 * @brief C program to implement a ATM
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float DepositAmount(float balance);
float WithDrawAmount(float balance);
void menuExit();
void errorMessage();


//Main Code
int main() {
    //Local Declarations
    int option;
    float balance = 20000.00;
    int choose;
    
    bool again = true;
    
    // insert code here...
    
    while (again) {
    mainMenu();
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("What is the service you want:\t");
    scanf("%d", &option);
    
    
        switch (option) {
            case 1:
            	system("CLS");
                checkBalance(balance);
                break;
            case 2:
            	system("CLS");
                balance = DepositAmount(balance);
                break;
            case 3:
            	system("CLS");
                balance = WithDrawAmount(balance);
                break;
            
            case 4:
            	system("CLS");
                menuExit();
                return 0;
                
            default:
                errorMessage();
                break;
        }
        
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        
        system("CLS");
        
        
        
        if (choose == 2) {
            again = false;
            menuExit();
            
        }
       
}

    
    return 0;
}//main code



//Functions

void mainMenu() {
    
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the services below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");
    
}//Main Menu

void checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
    
}//Check Balance

float DepositAmount(float balance) {
    float amount;
    printf("You choose to Deposit money\n");
    printf("Your current Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &amount);
    
    
    balance += amount;
    
    printf("\n****Your Updated Balance is:   $%.2f\n\n", balance);
    return balance;
    
}//money deposit

float WithDrawAmount(float balance) {
    float withdraw;
    bool back = true;
    
    printf("You choose to Withdraw Cash\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    
    while (back) {
    printf("Enter the amount you want to withdraw:\n");
    scanf("%f", &withdraw);
    
    
    if (withdraw <= balance) {
        back = false;
        balance =balance-withdraw;
        
        printf("\n*****The Amount you want to withdraw is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);
    
    }
    
        else  {
        
        printf("+++You don't have enough funds in your account+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);
    
    }
    }
    return balance;
    
    
}//money withdraw

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!-------\n");
    
    
}//exit menu

void errorMessage() {;
    printf("!!!!!You've selected invalid number!!!!!!\n");
}//error message
