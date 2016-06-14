#pragma once
#include "BasicDetails.h"



class AgriculturalProduct : public BasicDetails{ //AgriculturalProduct "Haklai" class include: Name,Num of Seasons and name of suppliers (defualt type = 1)

private:
	string _nameOfAgriculturalProduct;
	int _numOfYearSeasons;
	int _numOfSuppliers;

protected:
	int _typeOfAgriculturalProduct; //two types : Fruit and Vegtable

public:
	AgriculturalProduct(); //defualt C'tor
	
	void setTypeOfAgriculturalProduct(int num); //set and get methods
	int getTypeOfAgriculturalProduct() const { return this->_typeOfAgriculturalProduct; }
	void setNameOfAgriculturalProduct();
	string getNameOfAgriculturalProduct() const { return this->_nameOfAgriculturalProduct; }
	void setNumOfSuppliers();
	int getNumOfSuppliers() const { return this->_numOfSuppliers; }
	virtual double setPriceOfProduct(double num = 3.0) const; //default is 3 (price depends on a factor default factor is 3)
	void setNumOfYearSeasons();
	int getNumOfYearSeasons() const {return this->_numOfYearSeasons; }


	virtual void printProduct()const; // virutal print method


	virtual ~AgriculturalProduct(); //virtual D'ctor
};

