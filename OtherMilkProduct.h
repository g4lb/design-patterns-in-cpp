#pragma once
#include "MilkProduct.h"


class OtherMilkProduct : public MilkProduct{ //other milk product Include: every thing that in MilkProduct class,numOfParve and the Names of num of parve 
private:
	int _numOfParve;
	string * _namesOfParveComponents;

public:

	OtherMilkProduct(); //defualt C'tor
	
	void setNumOfParve(); //get and set methods
	int getNumOfParve() const { return this->_numOfParve; }
	void setNamesOfParveComponents();
	void printNamesOfParveComponents() const;


	//virtual methods
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)
	virtual void printProduct()const; //print


	virtual ~OtherMilkProduct(); //virtual D'ctor

};

