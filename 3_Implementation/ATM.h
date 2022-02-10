/**
 * @file ATM.h
 * @author Ram sai vardhan ( )
 * @brief Header file for implementing C program for an ATM machine
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ATM_H_
#define ATM_H_
#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Takes input form return
 * 
 */
void login();

/**
 * @brief Takes input from choose and then returns balance
 * 
 */
void mainMenu();

/**
 * @brief Takes input from amount and gets added to the original balance and returns an updated balance
 * 
 * @param balance 
 * @param amount 
 * @return  balance = amount + balance
 */
void DepositAmount(int *balance, int amount);

/**
 * @brief Takes input as withdraw and gets substracted from the original balance and returns an updated balance
 * 
 * @param balance 
 * @param withdraw
 * @return balance = balance-withdraw 
 */
void WithDrawAmount(int *balance, int withdraw);

/**
 * @brief Takes input from bool and returns output which continues the program
 * 
 */
void menuExit();

/**
 * @brief Takes input from choose and returns zero
 * 
 */
void errorMessage();

#endif /*  #define ATM_H_ */