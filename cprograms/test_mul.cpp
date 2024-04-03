#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/****************/
/*  ALGORITMO   */
/****************/
int
multiplica (int op1, int op2) {
    return op1 * op2;
}

/*************/
/*   TESTS   */
/*************/
TEST_SUITE("Multiplicacion") {

  TEST_CASE("Criterio de signos") {
      CHECK_EQ(4, multiplica(2, 2));
      CHECK_EQ(-35, multiplica(-5, 7));
      CHECK_EQ(-35, multiplica(5, -7));
      CHECK_EQ(35, multiplica(-5,-7));
  }
}

