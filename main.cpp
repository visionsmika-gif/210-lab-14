// Create a Color class that has as its private member variables three integers representing the red, green, and blue values of that color.
// Code normal setter & getter member functions. Also code a member print() method to print the object data.
// In main(), create several Color objects, populate them with data, and output their values to the console in neatly - formatted output using the object's print() method.

#include <iostream>

using namespace std;

class Color {
public:
	void setRed(int val)	{ red = val; }
	void setGreen(int val)	{ green = val; }
	void setBlue(int val)	{ blue = val; }

	int getRed() const		{ return red; }
	int getGreen() const	{ return green; }
	int getBlue() const		{ return blue; }

	void print() { cout << "RGB: " << red << ", " << green << ", " << blue << "\n"; }
private:
	int red;
	int green;
	int blue;
};

void setColor(Color& color, int r, int b, int g) {
	color.setRed(r);
	color.setGreen(b);
	color.setBlue(g);
}

int main() {
	Color coral;
	Color turquoise;
	Color maroon;
	Color indigo;
	Color magenta;

	setColor(coral, 249, 162, 178);
	setColor(turquoise, 162, 246, 249);
	setColor(maroon, 125, 46, 58);
	setColor(indigo, 54, 59, 152);
	setColor(magenta, 213, 60, 162);

	cout << "Coral - ";
	coral.print();
	cout << "Turquoise - ";
	turquoise.print();
	cout << "Maroon - ";
	maroon.print();
	cout << "Indigo - ";
	indigo.print();
	cout << "Magenta - ";
	magenta.print();

	return 0;
}