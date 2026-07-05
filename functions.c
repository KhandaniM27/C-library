#include "functions.h"

int factorial(int n)
{
    if (n < 0)
        return -1;

        int result = 1;
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
        
        return result;

}
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    if (n % 2 == 0) {
        return 0;
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
