#include "unity_fixture.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzz);

TEST_SETUP(FizzBuzz) {}

TEST_TEAR_DOWN(FizzBuzz) {}

TEST(FizzBuzz, givenNonPositive_shouldReturnError) {
    TEST_ASSERT_EQUAL_STRING("Error", fizzbuzz(0));
    TEST_ASSERT_EQUAL_STRING("Error", fizzbuzz(-2));
}

TEST(FizzBuzz, given1_shouldReturns1) {
    TEST_ASSERT_EQUAL_STRING("1", fizzbuzz(1));
}

TEST(FizzBuzz, givenDivisibleBy3_shouldReturnsFizz) {
    const char* actual = fizzbuzz(3);
    TEST_ASSERT_EQUAL_STRING("Fizz", actual);
}

TEST(FizzBuzz, givenDivisibleBy5_shouldReturnsBuzz) {
    const char* actual = fizzbuzz(5);
    TEST_ASSERT_EQUAL_STRING("Buzz", actual);
}

TEST(FizzBuzz, givenDivisibleBy3AND5_shouldReturnsBuzz) {
    const char* actual = fizzbuzz(15);
    TEST_ASSERT_EQUAL_STRING("FizzBuzz", actual);
}

TEST(FizzBuzz, given4_shouldReturns4) {
    const char* actual = fizzbuzz(4);
    TEST_ASSERT_EQUAL_STRING("4", actual);
}

TEST_GROUP_RUNNER(FizzBuzz) {
    RUN_TEST_CASE(FizzBuzz, givenNonPositive_shouldReturnError);
    RUN_TEST_CASE(FizzBuzz, given1_shouldReturns1);
    RUN_TEST_CASE(FizzBuzz, givenDivisibleBy3_shouldReturnsFizz);
    RUN_TEST_CASE(FizzBuzz, givenDivisibleBy5_shouldReturnsBuzz);
    RUN_TEST_CASE(FizzBuzz, givenDivisibleBy3AND5_shouldReturnsBuzz);
    RUN_TEST_CASE(FizzBuzz, given4_shouldReturns4);
}