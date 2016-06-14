#pragma once
#include "BasicDetails.h"

class MilkProduct : public BasicDetails{ //milkProduct Class include: name,numofColors,NumOfFat (defualt type = 2)

private:
	string _nameOfMilkProduct;
	double _numOfColorsInOneMilkProduct;
	double _numOfFat;

protected:
	int _typeOfMilkProduct;

public:

	MilkProduct(); //defualt C'tor


	int getTypeOfMilkProduct()const { return this->_typeOfMilkProduct; } //set and get methods
	void setNameOfMilkProduct();
	string getNameOfMilkProduct()const { return this->_nameOfMilkProduct; }
	void setNumOfColorsInOneMilkProduct();
	double getNumOfColorsInOneMilkProduct() const { return this->_numOfColorsInOneMilkProduct; }
	void setNumOfFat();
	double getNumOfFat() const { return this->_numOfFat; }


	//virtual methods
	virtual void printProduct()const; //print
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)


	virtual ~MilkProduct(); //virtual D'ctor
};

