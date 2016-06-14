#pragma once
#include "MilkProduct.h"
class Beverage : public MilkProduct //Beverage "Mashke" class include: Everything that in MilkProduct class
{

public:

	Beverage(); //defualt C'tor
	
	//virtual methods
	virtual double setPriceOfProduct(double num = 3.0) const { return (MilkProduct::setPriceOfProduct()); } //calculate price with a defualt factor (can be changed by user) depends on MilkProduct price
	virtual void printProduct() const { MilkProduct::printProduct(); cout << endl; } //virtual print method

	virtual ~Beverage(); //virtual D'ctor
	
};

