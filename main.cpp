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

int main() {
	Color coral;
	Color 

	coral.setRed(249);
	coral.setGreen(162);
	coral.setBlue(178);

	return 0;
}