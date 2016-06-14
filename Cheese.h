#pragma once
#include "MilkProduct.h"

class Cheese :public MilkProduct { //cheese Class "Gvina" include: Everything that in MilkProduct class,num of extra cheese

private:
	int _numOfExtraCheese;
public:

	Cheese(); //defualt C'tor

	void setNumOfExtraCheese(); //set and get methods
	int getNumOfExtraCheese()const { return this->_numOfExtraCheese; }

	//virtual mehods
	virtual void printProduct()const; //print
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)

	virtual ~Cheese(); //virtual D'ctor

	
};

