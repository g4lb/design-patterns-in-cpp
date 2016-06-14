#include "AgriculturalProduct.h"


AgriculturalProduct::AgriculturalProduct(){ //defualt C'tor Set type,name,numOfYearSeasons and numOfSuppliers
	cout << "AgriculturalProduct c'tor is work" << endl;
	this->_typeOfProduct = 1;
	this->setNameOfAgriculturalProduct();
	this->setNumOfYearSeasons();
	this->setNumOfSuppliers();

}
void AgriculturalProduct::setNameOfAgriculturalProduct(){ //set name method
	string name;
	cout << "please select the name of the product" << endl;
	cin >> name;
	this->_nameOfAgriculturalProduct = name;
}
void AgriculturalProduct::setNumOfYearSeasons(){ //set num of year seasons
	int num;
	int flag = 0;
	cout << "please select the number of seasons of the product" << endl;

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "please select a integer number between 1-4" << endl;
		}
		else if (num < 1 || num > 4){
			flag = 1;
			cout << "please select a integer number between 1-4" << endl;
		}
		else
			this->_numOfYearSeasons = num;

	} while (flag != 0);
}
void AgriculturalProduct::setNumOfSuppliers(){ //set num of suppliers
	int num;
	int flag = 0;

	cout << "please select the num of suppliers" << endl;

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the number of suppliers must be a positive integer number - please choose again" << endl;
		}
		else if (num <= NULL){
			flag = 1;
			cout << "the number of suppliers must be a positive integer number - please choose again" << endl;
		}
		else
			this->_numOfSuppliers = num;

	} while (flag != 0);
}


double AgriculturalProduct::setPriceOfProduct(double num) const{ //calculate the price of the product

	return (BasicDetails::setPriceOfProduct(num) * 3 * (5 - this->getNumOfYearSeasons()) + (5 * this->getNumOfSuppliers()) + this->getTypeOfProduct());
}
void AgriculturalProduct::printProduct()const{
	BasicDetails::printProduct();
	cout << this->getNameOfAgriculturalProduct() << "(" << this->getTypeOfAgriculturalProduct() << "," << this->getNumOfYearSeasons() << "," << this->getNumOfSuppliers() << ")" << endl;

}

AgriculturalProduct::~AgriculturalProduct(){ //virtual c'tor
	cout << "**the destractor of AgriculturalProduct is work**" << endl;
}
