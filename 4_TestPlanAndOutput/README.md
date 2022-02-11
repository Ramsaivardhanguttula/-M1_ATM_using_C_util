# Test plan 
## Table for test cases:

   | Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check Balance | 1  | 1 |  balance, asks user weather he want to perform another transaction|
| 02 | WithDraw | 2 | 1 |  Updated balance, asks user weather he want to perform another transaction |
| 03 | Deposit | 3 | 1 | Updated balance, asks user weather he want to perform another transaction|
| 04 | Exit| 4 | 0 | asks user weather he want to perform another transaction |
| 05 | If selected wrong option | 5 | 0 | Exits(prints invalid transaction) |

## Check Balance <1>

| Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check Balance | 1 | balance |  balance |
| 02 | Check Balance | 2 | 0 |  exits the balance and retrurns 0 |

## With draw <2> :
| Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | With draw |1, 1000 | 1000 |  1000, remaining balance, asks user weather he want to perform another transaction |
| 02 | With draw | 2 | 0 |  exits the withdraw and retrurns 0 |

## Deposit <3> :
| Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Deposit |1, 1000 | 1000+balance |  1000, Updated balance, asks user weather he want to perform another transaction |
| 02 | Deposit | 2 | 0 |  exits the withdraw and retrurns 0 |

## EXIT <4> :
| Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Exit |1 | 1 |  0, asks user weather he want to perform another transaction |
| 02 | Exit | 2 | 0 |  exits and retrurns 0 |
