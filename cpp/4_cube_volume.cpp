#include <iostream>

using namespace std;

class Cube {
public:
	double side;
	Cube(double s = 0.0) : side(s) {}
	double volume() const {
		return side * side * side;
	}
};

void main() {
	Cube cube1(5.0);
	cout << "Pryamoi sposob (.): storona = " << cube1.side << ", obiem = " << cube1.volume() << endl;

	Cube* cube2 = new Cube(3.0);
	cout << "Kosvennij sposob (->): storona = " << cube2->side << ", obiem = " << cube2->volume() << endl;

	return;
}