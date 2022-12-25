#pragma once
#include <iostream>
using namespace std;
class Product {
private:
	string _name;
	string _description;
	double _cost;
public:
	string GetName() 
	{
		return _name;
	}
	string GetDescription()
	{
		return _description;
	}
	double GetCost() 
	{
		return _cost;
	}
	void SetName(string _Name)
	{
		_name = _Name;
	}
	void SetDescription(string _Description)
	{
		_description = _Description;
	}
	void SetCost(double _Cost)
	{
		_cost = _Cost;
	}
	Product(string _Name = "", string _Description = "", double _Cost = 0) {
		SetName(_Name);
		SetDescription(_Description);
		SetCost(_Cost);
	}
};