// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "lab04.hpp" // student implementations
std::ostringstream out;

// =====================
// tests for exercise 1
// ---------------------

std::string TestCase11(){
   return "Hello, Flower!\nHello, Rose!\nBloom time: Summer\nFragrance: Rose\n";
}
std::string TestCase12(){
   return "Hello, Flower!\nHello, Rose!\nBloom time: $pring\nFragrance: Ro$e\n";
}
TEST_CASE("Ex01", "[example]")
{
    REQUIRE(ex1("Summer", "Rose") == TestCase11());
    REQUIRE(ex1("$pring", "Ro$e") == TestCase12());
}

// =====================
// tests for exercise 2
// ---------------------

std::string TestCase21 () {
   return "Area: 40000\nPerimeter: 80002\n";
}

std::string TestCase22 () {
   return "Area: 28\nPerimeter: 22\n";
}
std::string TestCase23 () {
   return "Area: 1131\nPerimeter: 200\n";
}
TEST_CASE("Ex02", "[exercise]") {
   REQUIRE(ex2(1, 40000) == TestCase21());
   REQUIRE(ex2(7, 4) == TestCase22());
   REQUIRE(ex2(13, 87) == TestCase23());
}