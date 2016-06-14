#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


class BasicDetails{ //BasicDetails "The product" class include: serial,row,area,quantity,type and price

private:
	int _serialNumber;
	char _rowOfPlaceProduct;
	int _ShelfOfProduct;
	double _quantityOfProduct;
	int _areaOfProductInTheStore;
	

protected:
	int _typeOfProduct;

public:

	BasicDetails(); //defualt C'tor
	
	void setSerialNumber(); //get and set methods
	int getSerialNumber()const { return this->_serialNumber; }
	void setRowOfPlaceProduct();
	char getRowOfPlaceProduct()const{ return this->_rowOfPlaceProduct; }
	void setShelfOfProduct();
	int getShelfOfProduct()const { return this->_ShelfOfProduct; }
	void setQuantity();
	double getQuantity() const{ return this->_quantityOfProduct; }
	int getTypeOfProduct()const { return this->_typeOfProduct; }
	void setTypeOfProduct();
	void setAreaOfProductInTheStore();
	int getAreaOfProductInTheStore() const { return this->_areaOfProductInTheStore; }

	void changeQuantity(); //option to change the quantity

	//virtual methods
	virtual double setPriceOfProduct(double num = 3.0) const; //calculate price with a defualt factor (can be changed by user)
	virtual void printProduct()const; //virutal print method

	virtual ~BasicDetails(); //virtual D'cor
	
};

