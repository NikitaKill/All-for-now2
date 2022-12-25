#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
class Cart {
private:
	Product* _products;
	int _productsCount;
public:
	Product* GetProducts() {
		return _products;
	}
	int GetProductsCount() {
		return _productsCount;
	}
	void SetProducts(Product* _Products) {
		_products = _Products;
	}
	void SetProductsCount(int _ProductsCount) {
		_productsCount = _ProductsCount;
	}
	Cart(Product* _products = {}, int _productsCount = 0) {
		SetProducts(_products);
		SetProductsCount(_productsCount);
	}
	static double GetFullCost(Product* products, int _ProductsCount) 
	{
		double sum = 0.0;
		for (int i = 0; i < _ProductsCount; i++) {
			sum += products[i].GetCost();
		}
		return sum;
	}
};