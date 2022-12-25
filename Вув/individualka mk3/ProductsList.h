		#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
class ProductsList {
private:
	Product* _products;
	int _productsCount;
	string _category;
public:
	Product* GetProducts()
	{
		return _products;
	}
	int GetProductsCount() 
	{
		return _productsCount;
	}
	string GetCategory() 
	{
		return _category;
	}
	void SetProducts(Product* _Products) 
	{
		_products = _Products;
	}
	void SetProductsCount(int _ProductsCount) 
	{
		_productsCount = _ProductsCount;
	}
	void SetCategory(string _Category) 
	{
		_category = _Category;
	}
	ProductsList(Product* _Products = {}, int _ProductsCount = 0, string _Category = "") {
		SetProducts(_Products);
		SetProductsCount(_ProductsCount);
		SetCategory(_Category);
	}
};