#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify get_grade_points function")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
	REQUIRE(get_grade_points("E") == -1);
}

TEST_CASE("Verify calculate_gpa function")
{
	REQUIRE(calculate_gpa(12, 45) == 3.75);
	REQUIRE(calculate_gpa(120, 390) == 3.25);
	REQUIRE(calculate_gpa(90, 180) == 2.00);
}