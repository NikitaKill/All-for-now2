#include <iostream>
#include "Product.h"
#include "Cart.h"
#include "ProductsList.h"
#include <string>
#include <stdio.h>
#include <random>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	Product product1[5];
	for (int i = 0; i < 5; i++) {
		product1[i].SetName("ProductA" + to_string(i + 1));
		product1[i].SetDescription("Tovar number " + to_string(i + 1));
		product1[i].SetCost((i + 3) * 3);
	}
	ProductsList list = ProductsList(product1, 5, "molochnoe");
	Cart* cart1 = new Cart(product1, 1);
	//Cart cart1 = Cart(product1, 1);
	Product product2[3];
	for (int i = 0; i < 3; i++) {
		product2[i].SetName("ProductB" + to_string(i + 1));
		product2[i].SetDescription("Tovar number " + to_string(i + 1));
		product2[i].SetCost((i + 3) * 7);
	}
	ProductsList list1 = ProductsList(product2, 3, "morozhenoe");
	ProductsList products[2] = { list, list1 };
	Cart cart2 = Cart(product2, 3);
	cout << "Вся сумма, находящихся в корзине продуктов равна: " << Cart::GetFullCost(product1, 5) + Cart::GetFullCost(product2, 3) << " ." << endl;
	for (int i = 0; i < 5; i++) {
		cout << product1[i].GetName() << endl;
		cout << product1[i].GetDescription() << endl;
		cout << product1[i].GetCost() << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << product2[i].GetName() << endl;
		cout << product2[i].GetDescription() << endl;
		cout << product2[i].GetCost() << endl;
	}
}