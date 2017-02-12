#include <check.h>
#include "FizzBuzz.h"

// @pass print divisible of 3 for Fibbonaci sequence n = 3 (1 1 2 3)
START_TEST(Buzz_n_equals_3_test)
{
   FizzBuzz l_FizzBuzz(3);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2 3 Buzz"); 
    
}
END_TEST

// @pass print divisible of 3 for Fibbonaci sequence n = 4 (1 1 2 5 5)
START_TEST(Buzz_n_equals_4_test)
{
   FizzBuzz l_FizzBuzz(4);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2 3 Buzz Buzz"); 

}
END_TEST
