#pragma once
#include "BasicDetails.h"


class ProductPackage : public BasicDetails{ //productPackege Class include: everything that in BasicDetails class, numOfProducts,Names,numofcolors (defualt type = 3)

private:
	int _numOfProducts;
	string * _namesOfProducts;
	double _numOfColors;

public:

	ProductPackage(); //defualt C'tor

	//get and set methods
	void setNumOfProducts();
	double getNumOfProducts()const { return this->_numOfProducts; }
	void setNamesOfProducts();
	void printNamesOfProducts() const;
	void setNumOfColors();
	double getNumOfColors() const { return this->_numOfColors; }


	//virtual methods
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)
	virtual void printProduct()const; //print

	
	virtual ~ProductPackage(); //virtual D'ctor
};

