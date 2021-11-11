#include <iostream>
#include "funcs.h"

int main()
{
	Coord3D pointA = {10, 20, 30};
	Coord3D pointB = {-3, -4, -5};
	Coord3D pointC = {-5, 12, -13};
	Coord3D pointD = {0,0,0};
	
	//Task A
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Testing Task A\n\n";

	std::cout << "Distance for point (10,20,30) = " << length(&pointA) << std::endl;
	std::cout << "Distance for point (-3,-4,-5) = " << length(&pointB) << std::endl;
	std::cout << "Distance for point (-5,12,-13) = " << length(&pointC) << std::endl;
	std::cout << "Distance for point (0,0,0) = " << length(&pointD) << std::endl;
	
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Testing Task B\n\n";
	
	Coord3D * outcome = fartherFromOrigin(&pointA, &pointB);
	if (outcome == &pointA)
			std::cout << "Farther distance between pointA (10,20,30) and point B (-3,-4,-5) is point A" << std::endl;
	else
			std::cout << "Farther distance between pointA (10,20,30) and point B (-3,-4,-5) is point B" << std::endl;
	
	outcome =  fartherFromOrigin(&pointB, &pointD);
	if (outcome == &pointB)
			std::cout << "Farther distance between pointA (-3,-4,-5) and point B (0,0,0) is point A" << std::endl;
	else
			std::cout << "Farther distance between pointA (-3,-4,-5) and point B (0,0,0) is point B" << std::endl;
	
	outcome =  fartherFromOrigin(&pointB, &pointC);
	if (outcome == &pointB)
			std::cout << "Farther distance between pointA (-3,-4,-5) and point B (-5,12,-13) is point A" << std::endl;
	else
			std::cout << "Farther distance between pointA (-3,-4,-5) and point B (-5,12,-13) is point B" << std::endl;
	
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Testing Task C\n\n";
	
	 Coord3D posA = {0, 0, 100.0};
    Coord3D velA = {1, -5, 0.2};
    move(&posA, &velA, 2.0);
    std::cout << "point A (0,0,100.0) with velocity A (1,-5,0.2) updates point A to (" << posA.x << "," << posA.y << "," << posA.z << ")" << std::endl; 
   
    Coord3D posB = {1, 4, 3};
    Coord3D velB = {5, 2, 4};
    move(&posB, &velB, 3.0);
    std::cout << "point B (1,4,3) with velocity B (5,2,4) updates point B to (" << posB.x << "," << posB.y << "," << posB.z << ")" << std::endl; 
    
    Coord3D posC = {-5, -2.5, 6.4};
    Coord3D velC = {2.3, -3.1, 0};
    move(&posC, &velC, -2.0);
    std::cout << "point C (-5,-2.5,6.4) with velocity C (2.3,-3.1,0) updates point C to (" << posC.x << "," << posC.y << "," << posC.z << ")" << std::endl; 
    
	return 0;
}
