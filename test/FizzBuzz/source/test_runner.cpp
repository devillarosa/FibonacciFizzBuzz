#include <check.h>
#include "test_case.cpp"

Suite *s;
TCase *tc;
SRunner *sr;

int main()
{
     s = suite_create("FizzBuzz"); // One universal Suite
     sr = srunner_create(s); // Create Suite Runner
     
     
     // Buzz
     tc = tcase_create("FizzBuzzTestCase"); // Create Buzz Test Case
     suite_add_tcase(s, tc); // Add Test Cases to Buzz Test Case
     tcase_add_test(tc, n_equals_3_test);
     tcase_add_test(tc, n_equals_4_test);
     tcase_add_test(tc, n_equals_5_test);
     tcase_add_test(tc, n_equals_6_test);
     tcase_add_test(tc, n_equals_20_test);
    
     
     
     
     srunner_run_all(sr, CK_VERBOSE);
     srunner_free(sr);
   


    return 0;
}
