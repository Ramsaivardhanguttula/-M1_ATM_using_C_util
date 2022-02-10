#include "stdio.h"
#include "ATM.h"

int main() {
    //Local Declarations
    int option; int org_balance=20000;
    int choose; int maxn=2;
    
    bool again = true;
    
    // insert code here...
    
    while (again && (maxn--)) {
    mainMenu();
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("What is the service you want:\t");
    scanf("%d", &option);
    int amount,withdraw;
    
        switch (option) {
            case 1:
            	 
                printf("\n\n****Your Available Balance is:   $%d\n\n", org_balance);
                break;
            case 2:
            	printf("You choose to Deposit money\n");
                scanf("%d", &amount);
                DepositAmount(&org_balance,amount);
                printf("Your current Balance is: $%d\n\n", org_balance);
                break;
            case 3:
            	printf("You choose to Withdraw Cash\n");
                scanf("%d", &withdraw);
                WithDrawAmount(&org_balance,withdraw);
                printf("Your current Balance is: $%d\n\n",org_balance);
                break;
            
            case 4:
            	 
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
        
         
        
        
        
        if (choose == 2) {
            again = false;
            menuExit();
            
        }
       
}

    
    return 0;
}//main code



//Functions
