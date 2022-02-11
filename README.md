# -M1_ATM_using_C_util
Repository to understand C programming as per Industry standards
## About the code
| CI | Linux build | Unity | Codacy | Codiga | cppCheck | Dynamic Check | 
| --- | --- | --- | --- | --- | --- | --- |
[![C/C++ CI](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/Windows.yml/badge.svg)](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/Windows.yml)|[![Linux C/C++ CI](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/Linux_build.yml/badge.svg)](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/Linux_build.yml)|[![Unit Testing - Unity](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/Unity-Testing.yml/badge.svg)](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/Unity-Testing.yml)|[![Codacy Badge](https://api.codacy.com/project/badge/Grade/a1edf2417a2e46699e8245f518c674f4)](https://api.codiga.io/project/30992/status/svg)|[![Codacy Badge](https://api.codiga.io/project/30931/status/svg)](https://api.codiga.io/project/30992/status/svg)|[![StaticCheck/cppCheck](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/cppCheck.yml/badge.svg)](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/cppCheck.yml)|[![Dynamic_check](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/DynamicCheck.yml/badge.svg)](https://github.com/Ramsaivardhanguttula/M1_ATMwithC_util/actions/workflows/DynamicCheck.yml)

## AIM:
* Simple User interface.
* Secured usage.
## Input
* User needs to choose what type of transaction/ operation that the user want to perform.
* Check balance
* With drawing money
* Deposit money
* Exit

## Process
* Every time a user uses ATM for checking balance, current balance is shown
* If the user choose withdrawl of money, User can with draw money only if the amount he want to with draw is less than or equal to the current balance and after the with drawl of money, the updated money is shown after getting debitted from the current balance.
* If the user choose to deposit money, the user can do it without any limit and the deposited money will be added to the current balance

## Output
* After every succesfull transaction updated balance is reflected and thanks the user for using the ATM services
