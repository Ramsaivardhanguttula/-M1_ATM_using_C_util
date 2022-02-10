#ifndef ATM_H_
#define ATM_H_

#include <stdio.h>
#include <stdbool.h>

void login();

void mainMenu();

void DepositAmount(int *balance, int amount);

void WithDrawAmount(int *balance, int withdraw);

void menuExit();

void errorMessage();

#endif