//============================================================================
// Name        : Shapes.cpp
// Author      : Sayfullah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Shape {
public:
	void setWidth(int w){
		width = w;
	}
	void setHeight(int h){
		height = h;
	}

protected:
	int width;
	int height;
};
class Rectangle : public Shape {
public:
	int getArea(){
		return width * height;
	}
};

class Triangle : public Shape{
public:
	int getArea(){
		return width * height;
	}
};
int main() {
	Rectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);
	cout << Rect.getArea() << endl;

	Triangle Tri;
	Tri.setWidth(2);
	Tri.setHeight(3);
	cout << Tri.getArea() << endl;
	return 0;
}
