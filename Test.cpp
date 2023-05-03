#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace ariel;

TEST_CASE("DenominatorChecks")
{
    CHECK_THROWS(Fraction(1, 0));
    Fraction test1(1, 2);
    CHECK_THROWS(test1.setDenominator(0));
    CHECK(test1.getDenominator() == 2);
    CHECK(test1.getNumerator() == 1);
    test1.setDenominator(5);
    CHECK(test1.getDenominator() == 5);
}

TEST_CASE("NumeratorChecks")
{
    Fraction test2(1, 2);
    CHECK(test2.getNumerator() == 1);
    test2.setNumerator(3);
    CHECK(test2.getNumerator() == 3);
}

TEST_CASE("FractionChecks")
{
    Fraction test3(1, 2);
    Fraction test4(1, 2);
    Fraction test5(1, 4);
    // +
    CHECK(test3 + test4 == Fraction(1, 1));
    // -
    CHECK(test3 - test4 == Fraction(0, 0));
    // *
    CHECK(test3 * test4 == Fraction(1, 4));
    // /
    CHECK(test3 / test4 == Fraction(1, 1));
    // ++
    test3++;
    CHECK(test3 == Fraction(3, 2));
    // --
    test4--;
    CHECK(test3 == Fraction(-1, 2));
    // <=
    CHECK(test5 <= test4);
    CHECK(test3 <= test4);
    // >=
    CHECK(test4 >= test5);
    CHECK(test3 >= test4);
    // <
    CHECK(test5 < test3);
    // >
    CHECK(test4 > test5);
    // !=
    CHECK(test4 != test5);
    // ==
    CHECK(test3 == test4);
}

TEST_CASE("FloatFractionChecks")
{
    Fraction test6(1, 2);
    float test7 = 1.5;
    Fraction test8(3, 2);
    float test9 = 1.0;

    // +
    CHECK(test6 + test7 == Fraction(2, 1));
    CHECK(test7 + test6 == Fraction(2, 1));
    // -
    CHECK(test7 - test6 == Fraction(1, 1));
    CHECK(test8 - test7 == Fraction(0, 0));
    // *
    CHECK(test6 * test7 == Fraction(3, 4));
    CHECK(test7 * test6 == Fraction(3, 4));
    // /
    CHECK(test7 / test6 == Fraction(3, 1));
    CHECK(test8 / test7 == Fraction(1, 1));
    // ==
    CHECK(test7 == test8);
    CHECK(test8 == test7);
    // !=
    CHECK(test6 != test7);
    CHECK(test7 != test6);
    // <=
    CHECK(test7 <= test8);
    CHECK(test8 <= test7);
    // >=
    CHECK(test7 >= test8);
    CHECK(test8 >= test7);
    // <
    CHECK(test6 < test7);
    CHECK(test9 < test8);
    // >
    CHECK(test7 > test6);
    CHECK(test8 > test9);
}

TEST_CASE("InputOutputChecks")
{
    Fraction test10(1,2);
    Fraction test11;

    std::stringstream INPUT("3/1");
    INPUT >> test11;
    CHECK((test11 == Fraction(3,1)));

    std::stringstream OUTPUT;
    OUTPUT << test10;
    CHECK((OUTPUT.str() == "1/2"));
}