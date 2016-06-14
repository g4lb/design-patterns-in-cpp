#include "OtherMilkProduct.h"


OtherMilkProduct::OtherMilkProduct(){ //C'tor set: type,name of parve,num of parve
	cout << "Other MilkProduct C'tor is on" << endl;
	this->_typeOfMilkProduct = 4;
	this->_namesOfParveComponents = NULL;
	this->setNumOfParve();
	this->setNamesOfParveComponents();
}

void OtherMilkProduct::setNumOfParve(){ //set num of parve method
	int num;
	int flag = 0;

	cout << "please select the number of parve componets in the product" << endl;

	do{
		flag = 0;
		cin >> num;
	
		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the number of parve components should be a positive number" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the number of parve components should be a positive number" << endl;
		}	
	else
		this->_numOfParve = num;

	} while (flag != 0);
}
void OtherMilkProduct::setNamesOfParveComponents(){ //set the names of parve method
	string name;

	cout << "please select the names of the parve components" << endl;

	this->_namesOfParveComponents = new string[this->getNumOfParve()];

	for (int i = 0; i < this->getNumOfParve(); i++){
		cout << "component number " << i + 1 << " : " << endl;
		cin >> name;
		this->_namesOfParveComponents[i] = name;
	}
}
void OtherMilkProduct::printNamesOfParveComponents() const{ //print the names of parve method
	int i = 0;

	if (this->_namesOfParveComponents == NULL)
		cout << "this package has no names!" << endl;
	else if (this->getNumOfParve() <= NULL)
		cout << "the number of products should be a positive number" << endl;

	else{
		for (i; i < (this->getNumOfParve() - 1); i++){
			cout << this->_namesOfParveComponents[i] << ", ";
		}
		cout << this->_namesOfParveComponents[i];
	}
}
double OtherMilkProduct::setPriceOfProduct(double num) const{ //calculate price (virtual method)

	return (MilkProduct::setPriceOfProduct(num) + (5 * this->getNumOfParve()));
}

void OtherMilkProduct::printProduct()const{ //print (virtual method)
	MilkProduct::printProduct();
	this->printNamesOfParveComponents();
	cout << " (" << this->getNumOfParve() << ")\n";

}


OtherMilkProduct::~OtherMilkProduct(){ //C'tor (virtual)
	cout << "C'tor of OthermilkProduct is On" << endl;
	if (this->_namesOfParveComponents != NULL){
		delete[] _namesOfParveComponents;
		this->_namesOfParveComponents = NULL;
		cout << "the array of parve name compents delete by OtherMilk D'ctor" << endl;
	}
}
