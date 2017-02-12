#include <check.h>
#include "buzz_test.cpp"

Suite *s;
TCase *tc_buzz;
SRunner *sr;

int main()
{
     s = suite_create("FizzBuzz"); // One universal Suite
     sr = srunner_create(s); // Create Suite Runner
     
     
     // Buzz
     tc_buzz = tcase_create("Buzz"); // Create Buzz Test Case
     suite_add_tcase(s, tc_buzz); // Add Test Cases to Buzz Test Case
     tcase_add_test(tc_buzz, Buzz_n_equals_3_test);
     tcase_add_test(tc_buzz, Buzz_n_equals_4_test);
     tcase_add_test(tc_buzz, Buzz_n_equals_5_test);
     tcase_add_test(tc_buzz, Buzz_n_equals_6_test);
    
     
     
     
     
     srunner_run_all(sr, CK_VERBOSE);
     srunner_free(sr);
   


    return 0;
}
