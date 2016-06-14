#include "TheShop.h"



TheShop::TheShop(){ //C'tor set: default name and factor
	this->_arrOfProducts = NULL;
	this->_numOfProductsInTheShop = NULL;
	this->_nameOfShop = "SuperShop";
	this->_factorOfShop = 3;


}
void TheShop::calPriceOfAllProduct() const{ //calculat the price of all the products in the store method
	double sum=0;
	for (int i = 0; i <this->getNumOfProductsInTheShop(); i++){
		sum += _arrOfProducts[i]->setPriceOfProduct(this->getFactorOfShop());
	}
	cout << "************************" << endl;
	if (sum < NULL){
		cout << "Total Price : the factor of shop must be suitable for this product" << endl;
		cout << "************************" << endl;
	}
	else{
	cout << "Total Price : " << sum << endl;
	cout << "************************" << endl;
	}
}
void TheShop::printDetailsOfShop() const{ //print all the shop method
	cout << "the Name Of the Shop is: " << this->getNameOfShop() << endl;
	cout << "The numbers of the products in the shop is: " << this->getNumOfProductsInTheShop() << endl;
	cout << "the factor of the shop is : " << this->getFactorOfShop() << endl;
	cout << "the products that in store are:" << endl;
	if (this->getNumOfProductsInTheShop() == NULL)
		cout << "the shop is empty" << endl;
	else{
	for (int i = 0; i < this->getNumOfProductsInTheShop(); i++)
		this->_arrOfProducts[i]->printProduct();
	}
	cout << "\n";
}
void TheShop::changeFactorOfShop(){ //change the factor of the shop method
	double factor;
	int flag = 0;
	cout << "please select the new factor of the shop" << endl;


	do{
		flag = 0;
		cin >> factor;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the factor must be a positive number" << endl;
		}
		else if (factor <= NULL){
			flag = 1;
			cout << "the factor must be a positive number" << endl;
		}

		else
			this->_factorOfShop = factor;

	} while (flag != 0);
}
void TheShop::printAllPrices() const{ //print all the prices in the shop method
	int flag = 0;
	if (this->getNumOfProductsInTheShop() == NULL){
		cout << "************************" << endl;
		cout << "No products in the store" << endl;
		cout << "************************" << endl;
	}
	else{
		flag = 1;
		cout << "************************" << endl;
		for (int i = 0; i < this->getNumOfProductsInTheShop(); i++){
			double num = this->_arrOfProducts[i]->setPriceOfProduct(this->getFactorOfShop());
			if (num < NULL)
				cout << "the price of product number " << i + 1 << " is: " << "the factor of shop must be suitable for this product " << endl;
			else
			cout << "the price of product number " << i + 1 << " is: " << this->_arrOfProducts[i]->setPriceOfProduct(this->getFactorOfShop()) << endl;
		}
	}
	if (flag == 1)
		cout << "************************" << endl;
}
void TheShop::addProductToarr(){ //add one product to the store

	int flag = 0;
	int choice;
	BasicDetails** temp = new BasicDetails*[this->getNumOfProductsInTheShop() + 1];
	for (int i = 0; i < this->getNumOfProductsInTheShop(); i++)
		temp[i] = this->_arrOfProducts[i];

	delete[] this->_arrOfProducts;

	cout << "Product Type : " << endl;
	cout << "0) Vegtable" << endl;
	cout << "1) Fruit" << endl;
	cout << "2) Cheese" << endl;
	cout << "3) Yogurt" << endl;
	cout << "4) Beverage" << endl;
	cout << "5) Other Milk Product" << endl;
	cout << "6) Product Package" << endl;
	cout << "your choice :";


		do{
		flag = 0;
		cin >> choice;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the num should be a integer positive number - please choose again" << endl;
		}
		else if (choice < 0 || choice > 6){
			flag = 1;
			cout << "the number should be between 1 to 6" << endl;
		}

		} while (flag != 0);

		switch (choice)
		{
		case 0:
			temp[this->getNumOfProductsInTheShop()] = new Vegetable;
			break;
		case 1:
			temp[this->getNumOfProductsInTheShop()] = new Fruit;
			break;
		case 2:
			temp[this->getNumOfProductsInTheShop()] = new Cheese;
			break;
		case 3:
			temp[this->getNumOfProductsInTheShop()] = new Yogurt;
			break;
		case 4:
			temp[this->getNumOfProductsInTheShop()] = new Beverage;
			break;
		case 5:
			temp[this->getNumOfProductsInTheShop()] = new OtherMilkProduct;
			break;
		case 6:
			temp[this->getNumOfProductsInTheShop()] = new ProductPackage;
			break;
		default:
			cout << "Please try again" << endl;
			return;
		}
		this->_numOfProductsInTheShop++;
		this->_arrOfProducts = temp;

		if (this->checkSerialNumber(this->_arrOfProducts[this->getNumOfProductsInTheShop() - 1]->getSerialNumber())){
			cout << "*********************************" << endl;
			cout << "This product is already exist! - the product has been deleted by system" << endl;
			cout << "*********************************" << endl;
			_arrOfProducts[this->getNumOfProductsInTheShop() - 1]->~BasicDetails();
			delete[] _arrOfProducts[this->getNumOfProductsInTheShop() - 1];
			this->_numOfProductsInTheShop--;
		}
}
bool TheShop::checkSerialNumber(int serial) const{ //check serial number method
	for (int i = 0; i < this->getNumOfProductsInTheShop() - 1; i++)
	if (this->_arrOfProducts[i]->getSerialNumber() == serial)
		return true;
	return false;
}
void TheShop::setNameOfShop(){ //set name of shop method
	string name;

	cout << "please select the new name of the shop" << endl;
	cin.ignore();
	getline(cin, name);
	this->_nameOfShop = name;
}
void TheShop::manu(){ //the manu of the program 
	int flag = 0;
	
	int choice;
	while (1)
	{
		cout << "..::::::::MENU::::::::.." << endl;
		cout << "Welcome To " << this->getNameOfShop() << " SupeMarket" << endl;
		cout << "1) change the name of the store" << endl;
		cout << "2) Add a new Product" << endl;
		cout << "3) Calc total prices" << endl;
		cout << "4) change factor of shop" << endl;
		cout << "5) Print all prices" << endl;
		cout << "6) Print all store" << endl;
		cout << "7) EXIT" << endl;
		cout << "Your choice : ";

		do{
			flag = 0;
			cin >> choice;

			if (cin.fail()){
				flag = 1;
				cin.clear();
				cin.ignore();
				cout << "the num should be a integer positive number - please choose again" << endl;
			}
			else if (choice < 0 || choice > 7){
				flag = 1;
				cout << "the number should be between 1 to 6" << endl;
			}

		} while (flag != 0);

		switch (choice)
		{
		case 1:
			this->setNameOfShop();
			break;
		case 2:
			this->addProductToarr();
			break;
		case 3:
			this->calPriceOfAllProduct();
			break;
		case 4:
			this->changeFactorOfShop();
			break;
		case 5:
			this->printAllPrices();
			break;
		case 6:
			this->printDetailsOfShop();
			break;
		case 7:
			cout << "BYE BYE" << endl;
			return;
		default:
			cout << "Please try again" << endl;
			break;
		}
	}


}

TheShop::~TheShop(){ //D'ctor
	if (this->_arrOfProducts != NULL){
		for (int i = 0; i < this->getNumOfProductsInTheShop(); i++){
			delete[] this->_arrOfProducts[i];
		}
		delete this->_arrOfProducts;
	}	
}

