#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


void reverseString(char *str) {
    if (str == NULL) return;

    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int gcd(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a , int b){
    if (a==0 || b==0)
        return 0;
    a = abs(a);
    b = abs(b);
    return (a/gcd(a,b))*b;
}

int isEven(int n) {
    return (n % 2 == 0);
}
int reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

