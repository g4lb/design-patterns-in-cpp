#include "Fruit.h"


Fruit::Fruit(){ //Fruit C'tor set: type and amount of sugar
	cout << "the c'tor of fruit is on" << endl;
	this->_typeOfAgriculturalProduct = 2;
	this->setAmountOfSugar();
}

void Fruit::setAmountOfSugar(){ //set amount of sugar method
	double num;
	int flag = 0;
	cout << "please select the amount of suger in the fruit - (per 100 gram)" << endl;

	do{
		flag = 0;
		cin >> num;
		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the num must be a positive number (not include NULL)" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the num must be a positive number (not include NULL)" << endl;
		}
			
		else{
			double amount = (num / 100);
			this->_amountOfSugar = amount;
		}
	} while (flag != 0);
}

double Fruit::setPriceOfProduct(double num) const{ //calculate price (virtual method)
	return (AgriculturalProduct::setPriceOfProduct(num) + (this->getAmountOfSugar() / 2));
}
void Fruit::printProduct()const{ //print (virtual method)
	BasicDetails::printProduct();
	cout << this->getNameOfAgriculturalProduct() << "(" << this->getTypeOfAgriculturalProduct() << "," << this->getNumOfYearSeasons() << "," << this->getNumOfSuppliers() << ")" << "(" << this->getAmountOfSugar() << ")" << endl;
}


Fruit::~Fruit(){ //C'tor (virtual)
	cout << "**the destractor of fruit is work**" << endl;
}
