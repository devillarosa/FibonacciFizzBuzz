#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H
#include <string>

class FizzBuzz
{
    public:
    FizzBuzz(int pi_number);
    ~FizzBuzz();
    std::string getSequence();
    
    private:
    int m_doFibonacci(int pi_number);
    bool m_isPrime(int pi_number);
    std::string m_sequence; // contains FizzBuzz Sequence output
    int m_number; // contains n of F(n) in Fibonacci
};


#endif // FIZZBUZZ_H
