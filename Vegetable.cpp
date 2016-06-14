#include "Vegetable.h"


Vegetable::Vegetable(){ //C'tor set: type and num of vitamins
	cout << "Vegtable C'tor is on" << endl;
	this->_typeOfAgriculturalProduct = 1;
	this->setNumOfVitamins();
}

void Vegetable::setNumOfVitamins(){ //set num of vitamins method
	int num;
	int flag = 0;

	cout << "please select number of vitamins" << endl;

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the number of vitamins must be a positive number up by 0" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the number of vitamins must be a positive number up by 0" << endl;
		}
	else
		this->_numOfVitamins = num;

	} while (flag != 0);
}
double Vegetable::setPriceOfProduct(double num) const{ //calculate price method
	return (AgriculturalProduct::setPriceOfProduct(num) + (2 * this->getNumOfVitamins()));
}
void Vegetable::printProduct()const{ //print method
	BasicDetails::printProduct();
	cout << this->getNameOfAgriculturalProduct() << "(" << this->getTypeOfAgriculturalProduct() << "," << this->getNumOfYearSeasons() << "," << this->getNumOfSuppliers() << ")" << "(" << this->getNumOfVitamins() << ")" << endl;

}


Vegetable::~Vegetable(){ //C'tor
	cout << "**the destractor of Vegetable is work**" << endl;
}
