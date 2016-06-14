#include "Cheese.h"


Cheese::Cheese(){ //c'tor set: type and number of extea Cheese
	this->_typeOfMilkProduct = 3;
	this->setNumOfExtraCheese();

}
void Cheese::setNumOfExtraCheese(){ //set numOfExtraCheese method
	int num;
	int flag = 0;

	cout << "please select number of extra" << endl;

	do{
		flag = 0;
		cin >> num;
	
		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the num of extra cheese should be a integer positive number - please choose again" << endl;
		}
		else if (num < NULL)
		{
			flag = 1;
			cout << "the num of extra cheese should be a integer positive number - please choose again" << endl;
		}
		
	else
		this->_numOfExtraCheese = num;
	} while (flag != 0);

}

double Cheese::setPriceOfProduct(double num) const{ //calculate price (virtual method)

	return (MilkProduct::setPriceOfProduct(num) + this->getNumOfExtraCheese());
}

void Cheese::printProduct()const{ //print (virtual method)
	MilkProduct::printProduct();
	cout << "(" << this->getNumOfExtraCheese() << ")" << endl;

}

Cheese::~Cheese(){ // D'ctor (virtual)
	cout << "**the destractor of cheese is work**" << endl;
}
