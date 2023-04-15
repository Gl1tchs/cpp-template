#include <catch2/catch_all.hpp>

#include <foo.hpp> 

TEST_CASE("Factorials are computed", "[factorial]") {
  REQUIRE(foo::factorial(1) == 1);
  REQUIRE(foo::factorial(2) == 2);
  REQUIRE(foo::factorial(3) == 6);
  REQUIRE(foo::factorial(10) == 3'628'800);
}
