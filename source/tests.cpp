#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sphere.hpp"

TEST_CASE("Sphere area", "[area]")
{
  Sphere s1{};
  Sphere s2{10.3f,{4.0f,5.5f,2.0f}};

  REQUIRE(s1.area() == 0.0f);
  REQUIRE(s2.area() == Approx(1333.166258f));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
