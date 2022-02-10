#include "unity.h"
#include "ATM.h"
void setUp()
{
   
}
void tearDown()
{
} 
int a=10000;

// void WithDrawAmount(int *balance, int withdraw);


void test_DepositAmount(void){
    DepositAmount(&a,1000);
    TEST_ASSERT_EQUAL(9000, a);
    DepositAmount(&a,3000);
    TEST_ASSERT_EQUAL(6000, a);
    DepositAmount(&a,98);
    TEST_ASSERT_EQUAL(5002, a);
    }


int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_DepositAmount);
 
  
  return UNITY_END();
}