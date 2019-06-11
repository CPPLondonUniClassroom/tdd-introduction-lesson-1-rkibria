#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "StringReverse.h"

using namespace CPPLondonUni;

TEST_CASE( "construct from string", "[construction]" ) {
	std::string name = "abc";
	StringReverse nameRev{name};

	// REQUIRE();

}
