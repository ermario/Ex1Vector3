#include "Vector3.h"
#include "Globals.h"

void main() {

	Vec3<float> a(5, 5, 5);
	Vec3<float> x(a.Normalized());
	x.getV(); // CHECK NORMALIZE FUNCTION

	Vec3<float> b(1, 0, 5);
	Vec3<float> c(0, 2, 4);

	cout << b.distance_to(c) << "\n"; // DISTANCE FROM B to C
	cout << b.dot_product(c) << "\n"; // DOT PRODUCT BETWEEN B AND C
	Vec3<float> d(b.cross_product(c)); // CROSS PRODUCT BETWEEN B AND C 
	d.getV();
	cout << b.dot_product(d) << "\n"; //CHECK IF D IS ORTOGONAL TO B(RESULT MUST BE 0)
	cout << c.dot_product(d) << "\n"; //CHECK IF D IS ORTOGONAL TO C(RESULT MUST BE 0)
	cout << b.angle_between(c) << "\n";

}