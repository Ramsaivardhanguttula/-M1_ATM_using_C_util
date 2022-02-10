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

#include "ATM.h"

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


void DepositAmount(int *balance,int amount) {
    
    *balance += amount;
    
    
}//money deposit

void WithDrawAmount(int *balance,int withdraw) {
    
    bool back = true;
    
    while (back) {
    
    if (withdraw <= *balance) {
        back = false;
        *balance =*balance-withdraw;
    
    }
    }
   
    
    
}//money withdraw

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!-------\n");
    
    
}//exit menu

void errorMessage() {
    printf("!!!!!You've selected invalid number!!!!!!\n");
}//error message

