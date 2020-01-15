#include "fizzbuzz.h"
#include <stdio.h>

int isDivisibleBy5(int number) {
    return number%5 == 0;
}
int isDivisibleBy3(int number) {
    return number%3 == 0;
}

// returnType functionName(...parameters)
const char* fizzbuzz(int number) {
    if (number <= 0) {
        return "Error";
    } else if (isDivisibleBy5(number) && isDivisibleBy3(number)){
        return "FizzBuzz";
    } else if (isDivisibleBy3(number)){
        return "Fizz";
    } else if (isDivisibleBy5(number)){
        return "Buzz";
    }
    static char result[5];
    snprintf(result, 5, "%d",number);
    return result;
} 
