#include <string>
#include <sstream>
#include "FizzBuzz.h"
#include <stdio.h>

FizzBuzz::FizzBuzz(int pi_number) :
    m_sequence(""),
    m_number(pi_number)
{

        

    int l_number = 0;
    for (int i = 1; i <= m_number; i++)
    {
        
        l_number = m_doFibonacci(i);
        
        //Buzz when F(n) is divisible by 3
        if (l_number % 3 == 0)
            m_sequence += "Buzz";
        //Buzz when F(n) is divisible by 5
        else if (l_number % 5 == 0)
            m_sequence += "Fizz";
        else
            m_sequence += std::to_string(l_number);
        m_sequence += " ";
    }
    
    //Remove last index that contains " "
    m_sequence.pop_back();
}

FizzBuzz::~FizzBuzz()
{
}

std::string FizzBuzz::getSequence()
{
    return m_sequence;
}

int FizzBuzz::m_doFibonacci(int pi_number)
{

    switch (pi_number)
    {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        default:
            return m_doFibonacci(pi_number - 1) + m_doFibonacci(pi_number - 2);
            break;
    }

}


