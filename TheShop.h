#pragma once
#include "Windows.h"
#include "Vegetable.h"
#include "Fruit.h"
#include "Cheese.h"
#include "Yogurt.h"
#include "Beverage.h"
#include "OtherMilkProduct.h"
#include "ProductPackage.h"


class TheShop{ //the Shop Class Include: Manu,nameOfshop,factorOfshop,NumOFProducts

private:
	string _nameOfShop;
	double _factorOfShop;
	int _numOfProductsInTheShop;
	BasicDetails** _arrOfProducts;

public:
	TheShop(); //defualt C'tor
	

	void setNameOfShop(); //get and set methods
	string getNameOfShop()const { return this->_nameOfShop; }
	double getFactorOfShop() const { return this->_factorOfShop; }
	int getNumOfProductsInTheShop()const { return this->_numOfProductsInTheShop; }

	


	void manu(); //The manu method
	void printAllPrices() const; //print all price in the shop method
	void printDetailsOfShop() const; //print all details in the shop: name,factor,numOfProducts and the products
	void changeFactorOfShop();  //option to change the factor of shop
	void addProductToarr(); //add one product to the shop
	bool checkSerialNumber(int serial) const; //check that the serial number is unique
	void calPriceOfAllProduct() const; //calculate all the price of products in the shop


	~TheShop(); //D'ctor
};

