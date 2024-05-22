#include <iostream>
using namespace std;

bool checkPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    bool isPrime = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}