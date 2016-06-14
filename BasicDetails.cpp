#include "BasicDetails.h"

BasicDetails::BasicDetails(){ //defualt c'tor set: serial,row,shelf,quantityand area

	cout << "BasicDetails C'tor is work" << endl;
	this->setSerialNumber();
	this->setRowOfPlaceProduct();
	this->setShelfOfProduct();
	this->setQuantity();
	this->setAreaOfProductInTheStore();

};

void BasicDetails::setRowOfPlaceProduct(){ //set row method

	char row;
	int flag = 0;

	cout << "please select a row of the product from a to z (automatic a to A)" << endl;
	
	do{
		flag = 0;
		cin >> row;
		if (row >= 'a' && row <= 'z'){
		row -= 32;
		this->_rowOfPlaceProduct = row;
		}
		else if (row >= 'A' && row <= 'Z'){
		this->_rowOfPlaceProduct = row;
		}
		else{
			flag = 1;
			cout << ("the row must be a letter from A to Z please select again") << endl;
		}
		
	} while (flag != 0);


}
void BasicDetails::setSerialNumber(){ //set serial number method
	int flag = 0;
	int serial;

	cout << "Please select the serial number of the product" << endl;

	do{
		flag = 0;
		cin >> serial;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the serial must be a positive number" << endl;
		}
		else if (serial <= 0){
			flag = 1;
			cout << "the serial must be a positive number" << endl;
		}
		else
			this->_serialNumber = serial;

	} while (flag != 0);
}
void BasicDetails::setShelfOfProduct(){ //set sheld method
	int num;
	int flag = 0;
	cout << "please select the shelf of the product (1 to 5)"<<endl;
	

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the shel must be a integer number between 1 to 5 - please choose again" << endl;
		}
		else if (num < 1 || num > 5){
			flag = 1;
			cout << "the shel must be a integer number between 1 to 5 - please choose again" << endl;
		}
		else
			this->_ShelfOfProduct = num;
			

	} while (flag != 0);
}
void BasicDetails::printProduct()const{ //print (virtual method)
	cout << this->getSerialNumber() << " " << this->getRowOfPlaceProduct() << " " << this->getShelfOfProduct() << "(" << this->getQuantity() << "," << this->getTypeOfProduct() << "," << this->getAreaOfProductInTheStore() << ") ";


}
void BasicDetails::setQuantity(){ //set quantity method

	int flag = 0;
	double num;

	cout << "please select the Quantity of the product" << endl;

	do{
		flag = 0;
		cin >> num;
		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the quantity must be a positive number please select again" << endl;
		}
		else if (num <= NULL){
			flag = 1;
			cout << "the quantity must be a positive number please select again" << endl;
		}
	else
		this->_quantityOfProduct = num;

	} while (flag != 0);
}
void BasicDetails::changeQuantity(){ //option the change quantity method
	double num;
	int flag = 0;

	cout << "please select the quantity the you want to change" << endl;
	do{
		flag = 0;
		cin >> num;
		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the quantity must be positive number" << endl;
		}
		else if (num <= NULL){
			flag = 1;
			cout << "the quantity must be positive number" << endl;
		}
		else
		this->_quantityOfProduct = num;

	} while (flag != 0);

}
void BasicDetails::setTypeOfProduct(){ //set typeOfProduct: Agricultural or milk or Package method
	int num;
	int flag = 0;
	cout << "please select the type of the product\n1)Agricultural Product\n2)Milk Product\n3)Package Product" << endl;
	

	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
			cout << "the type must be a positive integer number between 1-3 please select again" << endl;
		}

	else if (num == 1 || num == 2 || num == 3)
		this->_typeOfProduct = num;

	else{
		flag = 1;
		cout << "the type of the product must be 1 or 2 or 3 - please try again" << endl;
	}

	} while (flag != 0);
}
void BasicDetails::setAreaOfProductInTheStore(){ //set area method

	int num;
	int flag = 0;
	cout << "please select the Area of the product in the store:\n1)High\n2)Middle\n3)Hide\n";
	
	do{
		flag = 0;
		cin >> num;

		if (cin.fail()){
			flag = 1;
			cin.clear();
			cin.ignore();
		}

		else if (num == 1 || num == 2 || num == 3)
			this->_areaOfProductInTheStore = num;

		else{
			flag = 1;
			cout << "the type of the product must be 1 or 2 or 3 - please select again" << endl;
		}
		
	} while (flag != 0);
}
double BasicDetails::setPriceOfProduct(double num) const{ //calculate price (virtual method)

	double factor = num;
	int flag = 0;

	if (this->getAreaOfProductInTheStore() == 3){
		return (this->getQuantity() * 3 * factor);
	}

	else if (this->getAreaOfProductInTheStore() == 2){
		return (this->getQuantity()*factor*1.5);
	}

	else if (this->getAreaOfProductInTheStore() == 1)
		return (this->getQuantity()*factor);

	return (factor*this->getQuantity()); //defualt

}




BasicDetails::~BasicDetails(){ //D'ctor (virtual)
	cout << "**the destractor of basic details is work**" << endl;
}
