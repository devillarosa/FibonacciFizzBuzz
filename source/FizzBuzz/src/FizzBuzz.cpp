#include <string>
#include <sstream>
#include "FizzBuzz.h"

FizzBuzz::FizzBuzz(int pi_number) :
    m_number(pi_number),
    m_sequence("")
{
    std::ostringstream l_convert;
    for (int i = 0; i <= m_number; i++)
    {
       l_convert << m_doFibonacci(m_number); 
       m_sequence += l_convert.str();
    }
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
            return m_doFibonacci(pi_number) - m_doFibonacci(pi_number);
            break;
    }
}


