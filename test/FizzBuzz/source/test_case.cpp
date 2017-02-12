#include <check.h>
#include "FizzBuzz.h"
#include <stdio.h>

// @pass print divisible of 3 for Fibbonaci sequence n = 3 (1 1 2)
START_TEST(n_equals_3_test)
{
   FizzBuzz l_FizzBuzz(3);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2"); 
    
}
END_TEST

// @pass print divisible of 3 for Fibbonaci sequence n = 4 (1 1 2 3)
START_TEST(n_equals_4_test)
{
   FizzBuzz l_FizzBuzz(4);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2 Buzz"); 

}
END_TEST

// @pass print divisible of 3 for Fibbonaci sequence n = 5 (1 1 2 3 5)
START_TEST(n_equals_5_test)
{
   FizzBuzz l_FizzBuzz(5);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2 Buzz Fizz"); 

}
END_TEST

// @pass print divisible of 3 for Fibbonaci sequence n = 6 (1 1 2 3 5 8)
START_TEST(n_equals_6_test)
{
   FizzBuzz l_FizzBuzz(6);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2 Buzz Fizz 8"); 

}
END_TEST

// @pass print divisible of 3 for Fibbonaci sequence n = 7 (1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765)
START_TEST(n_equals_20_test)
{
   FizzBuzz l_FizzBuzz(20);
   ck_assert_str_eq(l_FizzBuzz.getSequence().c_str(), "1 1 2 Buzz Fizz 8 13 Buzz 34 Fizz 89 Buzz 233 377 Fizz Buzz 1597 2584 4181 FizzBuzz"); 

}
END_TEST

