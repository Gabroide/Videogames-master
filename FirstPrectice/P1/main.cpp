#include <iostream>
#include "Vector3.h"
#include "String.h"

void Vec3Exercise() {
	// a()
	Vector3<int> vecA();
	// b(1,0,1)
	Vector3<int> vecB(1, 0, 1);
	
	// c(b)
	Vector3<int> vecC(vecB);
	
	// d = b + c
	Vector3<int> vecD = vecB + vecC;
	
	// d.normalize()
	Vector3<float> normVecD = vecD.normalize();
	
	// d.distance_to(b)
	float distToVecB = vecD.distance_to(vecB);

	std::cout << "Vec B" << std::endl;
	vecB.printVector();
	std::cout << "Vec C" << std::endl;
	vecC.printVector();
	std::cout << "Vec D" << std::endl;
	vecD.printVector();

	std::cout << "Distance between vectors is " << distToVecB << std::endl;
	std::cout << "Vector A normalized is " << std::endl;
	normVecD.printVector();
}

void StringExercise() {
	String a("okay");
	String b(a);
	String c = a + b;

	if (c == "okayokay") {
		std::cout << "C is okayokay :)" << std::endl;
	} else {
		std::cout << "C is not okayokay :(" << std::endl;
	}

	std::cout << c.length() << std::endl;

	c.clear();

	std::cout << c.length() << std::endl;

}

int main() {
	std::cout << "Vector3 exercises results\n" << std::endl;
	Vec3Exercise();

	std::cout << "\nString exercises results\n" << std::endl;

	StringExercise();

	std::cout << "\n" << std::endl;

	std::cout << "Press Enter to exit" << std::endl;
	getchar();
	return 0;
}
