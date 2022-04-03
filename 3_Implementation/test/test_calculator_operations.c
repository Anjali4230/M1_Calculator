 #include"../unity/unity.h"
#include"../unity/unity.c"
#include"../unity/unity_internals.h"
#include"../inc/operation.h"
#include"../inc/operation1.h"
#include"../inc/operation2.h"
#include <stdio.h>


#define PROJECT_NAME    "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_triple(void);
void test_sqr(void);
void test_mode(void);
void test_factor(void);


void setUp(){}
void tearDown(){}


int main()
{

  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_triple);
  RUN_TEST(test_sqr);
  RUN_TEST(test_mode);
  RUN_TEST(test_factor);
  return UNITY_END();
}
void test_add(void) {   
  TEST_ASSERT_EQUAL(30,Addition(10,20));
  TEST_ASSERT_EQUAL(15000, Addition(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, Subtraction(0, 3));
  TEST_ASSERT_EQUAL(100, Subtraction(1000, 900));
} 

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, Multiplication(1, 0));
  TEST_ASSERT_EQUAL(10, Multiplication(2, 5));
  

}

void test_divide(void) {
  TEST_ASSERT_EQUAL(6, Division(6, 1));
  TEST_ASSERT_EQUAL(1, Division(2, 2));
  }
void test_sqr(void) {
  TEST_ASSERT_EQUAL(4, Square(2));
  TEST_ASSERT_EQUAL(0, Square(0));

}
void test_triple(void) {
  TEST_ASSERT_EQUAL(27, Cube(3));
  TEST_ASSERT_EQUAL(1, Cube(1));
}

void test_mode(void) {
  TEST_ASSERT_EQUAL(6, Modulous(62,7));
   
}
void test_factor(void) {
  TEST_ASSERT_EQUAL(6, Factorial(3));
}
