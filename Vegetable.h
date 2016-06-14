#pragma once
#include "AgriculturalProduct.h"


class Vegetable : public AgriculturalProduct{ //Vegtable Class include: everything that in Agricultural product,NumOfVitamins

private:
	int _numOfVitamins;

public:

	Vegetable(); //defualt C'tor

	void setNumOfVitamins(); //get and set methods
	int getNumOfVitamins()const { return this->_numOfVitamins; }
	
	//virtual methods
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)
	virtual void printProduct()const; //print

	
	virtual ~Vegetable(); // virtual D'ctor
};

