#include <iostream>
using namespace std;


class Circle {
private:
	double radius;

public:
	double getRadius();
	void setRadius(double r);
	double getArea();
	double getPerimeter();


};
double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double r) {
 radius=r;
}
double Circle::getArea() {
	const double PI = 3.14;
	return (PI * radius * radius);
}
double Circle::getPerimeter() {
	const double PI = 3.14;
	return (PI * radius * 2);
}

int main()
{
	Circle circle1, circle2;
	double rad1, rad2;
	cout << "Enter Cirle 1's radius: " ;
	cin >> rad1;
	cout << "Enter Cirle 2's radius: " ;
	cin >> rad2;

	circle1.setRadius(rad1);
	circle2.setRadius(rad2);


	cout << "---------" << endl;
	cout << "Circle 1 " << endl;
	cout << "Radius :" << circle1.getRadius() << endl;
	cout << "Area :" << circle1.getArea() << endl;
	cout << "Perimeter :" << circle1.getPerimeter() << endl;

	cout << "---------" << endl;
	cout << "Circle 2 " << endl;
	cout << "Radius :" << circle2.getRadius() << endl;
	cout << "Area :" << circle2.getArea() << endl;
	cout << "Perimeter :" << circle2.getPerimeter() << endl;
}
