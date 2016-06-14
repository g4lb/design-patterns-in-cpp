#include "ProductPackage.h"


ProductPackage::ProductPackage(){ //C'tor set: type,name,numOfPRoducts,NamesOfProducts and numOfColors
	cout << "ProductPackage C'tor is on" << endl;
	this->_typeOfProduct = 2;
	this->_namesOfProducts = NULL;
	this->setNumOfProducts();
	this->setNamesOfProducts();
	this->setNumOfColors();

	
}
void ProductPackage::setNumOfProducts(){ // set num of products method
	int num;
	int flag = 0;
	cout << "please select the number of products in the package" << endl;

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the number of number of products should be a int positive number" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the number of number of products should be a int positive number" << endl;
		}
		else
			this->_numOfProducts = num;

	} while (flag != 0);
}
void ProductPackage::setNamesOfProducts(){ //set names of products method
	string name;
	this->_namesOfProducts = new string[(int)this->getNumOfProducts()];

	if (this->_namesOfProducts != NULL)
		cout << "this package already has names!" << endl;

	cout << "please insert products names" << endl;
	for (int i = 0; i < this->getNumOfProducts(); i++){
		cout << "name of product number " << i + 1 << endl;
		cin >> name;
		this->_namesOfProducts[i] = name;
	}
}
void ProductPackage::printNamesOfProducts() const{ //print 
	int i = 0;

	if (this->_namesOfProducts == NULL)
		cout << "this package has no names!" << endl;
	else if (this->getNumOfProducts() <= NULL)
		cout << "the number of products should be a positive number" << endl;

	else{
		for (i; i < (this->getNumOfProducts()-1); i++){
			cout << this->_namesOfProducts[i] << ", ";
		}
		cout << this->_namesOfProducts[i];
	}
}
void ProductPackage::setNumOfColors(){ //set numOfColers method
	int num;
	int flag = 0;
	cout << "please select the number of colors" << endl;

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the number of colors must be a int positive number" << endl;
		}
		else if (num < NULL){
			flag = 1;
			cout << "the number of colors must be a int positive number" << endl;
		}
		else
			this->_numOfColors = num;

	} while (flag != 0);
}
double ProductPackage::setPriceOfProduct(double num) const{
	return ((2 * BasicDetails::setPriceOfProduct(num))*(this->getNumOfProducts()) + (this->getNumOfColors() / 3));
}
void ProductPackage::printProduct()const{

	BasicDetails::printProduct(); 
	this->printNamesOfProducts();
	cout << " (" << this->getNumOfProducts() << "," << this->getNumOfColors() << ")\n";
	
}


ProductPackage::~ProductPackage(){
	if (this->_namesOfProducts != NULL){
		delete[] _namesOfProducts;
		this->_namesOfProducts = NULL;
		cout << "the array of name products delete by D'ctor" << endl;
	}
}
