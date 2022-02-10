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
    TEST_ASSERT_EQUAL(11000, a);
    DepositAmount(&a,3000);
    TEST_ASSERT_EQUAL(14000, a);
    DepositAmount(&a,98);
    TEST_ASSERT_EQUAL(14098, a);
    }

void test_WithDrawAmount(void){
    WithDrawAmount(&a,1000);
    TEST_ASSERT_EQUAL(13098, a);
    WithDrawAmount(&a,3000);
    TEST_ASSERT_EQUAL(10098, a);
    WithDrawAmount(&a,98);
    TEST_ASSERT_EQUAL(10000, a);
    }


int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_DepositAmount);
  RUN_TEST(test_WithDrawAmount);
 
  
  return UNITY_END();
}