#include "MilkProduct.h"


MilkProduct::MilkProduct(){ //C'tor set: type,name,color and numOfFat
	cout << "MILK PRODUCT CONSTRACOT IS ON" << endl; 
	this->_typeOfProduct = 3;
	this->setNameOfMilkProduct();
	this->setNumOfColorsInOneMilkProduct();
	this->setNumOfFat();

}
void MilkProduct::setNameOfMilkProduct(){ //set name method
	string name;
	cout << "please select the name of the milk product" << endl;
	cin >> name;
	this->_nameOfMilkProduct = name;
}
void MilkProduct::setNumOfColorsInOneMilkProduct(){ //set num method
	int num;
	int flag = 0;
	cout << "please select the number of color in the milk product" << endl;

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the color in the product should be a integer positive number - please choose again" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the color in the product should be a integer positive number - please choose again" << endl;
		}
			
		else
			this->_numOfColorsInOneMilkProduct = num;

	} while (flag != 0);
}
void MilkProduct::setNumOfFat(){ //set num of fat method
	double num;
	int flag = 0;

	cout << "please select the number of fat" << endl; 
	do{
		flag = 0;
		cin >> num;
	
		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the num of fat shuold be a positive number - please choose again" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the num of fat shuold be a positive number - please choose again" << endl;
		}
		
	else
		this->_numOfFat = num;

	} while (flag != 0);
}
double MilkProduct::setPriceOfProduct(double num) const{ //calculate price (virtual method)

	return (((BasicDetails::setPriceOfProduct(num) + this->getNumOfColorsInOneMilkProduct()) - this->getNumOfFat()) * this->getTypeOfProduct());
}
void MilkProduct::printProduct()const{ //print (virtual method)
	BasicDetails::printProduct();
	cout << this->getNameOfMilkProduct() << " (" << this->getTypeOfMilkProduct() << "," << this->getNumOfColorsInOneMilkProduct() << "," << this->getNumOfFat() << ") ";

}


MilkProduct::~MilkProduct(){ //D'ctor (virtual)
	cout << "**the destractor of milk product is work**" << endl;
}
