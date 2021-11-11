#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

Coord3D pointA = {10, 20, 30};
Coord3D pointB = {-3, -4, -5};
Coord3D pointC = {-5, 12, -13};
Coord3D pointD = {0,0,0};

TEST_CASE("Testing Task A"){
	CHECK(length(&pointA) == 37.4166);
	CHECK(length(&pointB) == 7.0711);
	CHECK(length(&pointC) ==  18.3848);
	CHECK(length(&pointD) == 0);
}

TEST_CASE("Testing Task B"){
	Coord3D * outcome = fartherFromOrigin(&pointA, &pointB);
	CHECK(outcome == &pointA);
	
	outcome =  fartherFromOrigin(&pointB, &pointD);
	CHECK(outcome == &pointB);
	
	outcome =  fartherFromOrigin(&pointB, &pointC);
	CHECK(outcome == &pointC);
}

TEST_CASE("Testing Task C"){
	 Coord3D posA = {0, 0, 100.0};
    Coord3D velA = {1, -5, 0.2};
    move(&posA, &velA, 2.0);
    CHECK((posA.x == 2 && posA.y == -10 && posA.z == 100.4) == 1);
    
   Coord3D posB = {1, 4, 3};
   Coord3D velB = {5, 2, 4};
   move(&posB, &velB, 3.0);
   CHECK((posB.x == 16 && posB.y == 10 && posB.z == 15) == 1);
   
   Coord3D posC = {-5, -2.5, 6.4};
   Coord3D velC = {2.3, -3.1, 0};
   move(&posC, &velC, -2.0);
   CHECK((posC.x == -9.6 && posC.y == 3.7 && posC.z == 6.4) == 1);
}
