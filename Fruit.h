#pragma once
#include "AgriculturalProduct.h"

class Fruit: public AgriculturalProduct{ //fruit class include: everything that in agriculturalProduct class, amount of sugar

private:
	double _amountOfSugar;

public:
	Fruit(); //defualt C'tor

	void setAmountOfSugar(); //get and set methods
	double getAmountOfSugar()const { return this->_amountOfSugar; }

	//virtual methods
	virtual void printProduct()const; //print
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)
	
	virtual ~Fruit(); //virtual D'ctor
};

