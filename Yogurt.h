#pragma once
#include "MilkProduct.h"
class Yogurt : public MilkProduct{

public:

	Yogurt(); //defualt C'tor

	//virtual methods
	virtual void printProduct() const; //print
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)


	virtual ~Yogurt(); //virtual D'ctor
};

