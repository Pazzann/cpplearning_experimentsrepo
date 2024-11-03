//
// Created by manto on 11/1/2024.
//
#include "Algebra.h"

int custom_shit::algebra::eulerFunction(int num) {
    int result = num;
    for (int i = 0; i * i <= num; i++) {
        if (num % i == 0) {
            while (num % i == 0)
                num /= i;
            result -= result / i;
        }
    }
    if (num > 1)
        result -= result / num;
    return result;
}

int custom_shit::algebra::binPow(int a, int exp) {
    int res = 1;
    while(exp){
        if(exp & 1)
            res *=a;
        a*=a;
        exp >>= 1;
    }
    return res;
}

int custom_shit::algebra::gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}