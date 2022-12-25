#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
Rectangle rectangle1 = Rectangle(12.4, 9.4);
Rectangle rectangle2 = Rectangle(2.4, 6.2);
int a = AreaCompactor::IsBigger(rectangle1, rectangle2);
cout << a;
}