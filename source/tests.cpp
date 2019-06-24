#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sphere.hpp"
#include "box.hpp"

TEST_CASE("Sphere area", "[area]")
{
  Sphere s1{};
  Sphere s2{10.3f,{4.0f,5.5f,2.0f}};
  Sphere s3{10.3f,{-4.0f,5.5f,2.0f}};

  REQUIRE(s1.area() == 0.0f);
  REQUIRE(s2.area() == Approx(1333.166258f));
  REQUIRE(s3.area() == Approx(1333.166258f));

}

TEST_CASE("Sphere volume", "[volume]")
{
  Sphere s4{10.3f,{4.0f,5.5f,2.0f}};
  
  REQUIRE(s4.volume() == Approx(4577.204154));
}

TEST_CASE("Box area", "[area]")
{
  Box b1{{4.5f,3.0f,4.0f},{}};
  Box b2{{4.5f,3.0f,4.0f},{-5.0f,6.3f,-4.0f}};

  REQUIRE(b1.area() == Approx(87.0f));
  REQUIRE(b2.area() == Approx(267.5f));

}

TEST_CASE("Box volume", "[volume]")
{
  Box b3{{4.5f,3.0f,4.0f},{}};
  Box b4{{4.5f,3.0f,4.0f},{-5.0f,6.3f,-4.0f}};

  REQUIRE(b3.volume() == Approx(54.0f));
  REQUIRE(b4.volume() == Approx(250.80002f));

}

TEST_CASE("Box print" , "[print]")
{
  Box b5{{4.5f,3.0f,4.0f},{-5.0f,6.3f,-4.0f}, {0.0f,1.0f,0.5f}, "Hans"};

  b5.print(std::cout);
}

TEST_CASE("Sphere print" ,"[print]")
{
  Sphere s5{10.3f,{4.0f,5.5f,2.0f},{0.3f,0.3f,0.3f},"Otto"};

  s5.print(std::cout);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
