#include "Yogurt.h"


Yogurt::Yogurt(){ //C'tor set: type
	cout << "the C'tor of yogurt is on" << endl;
	this->_typeOfMilkProduct = 2;
}
void Yogurt::printProduct()const{ //print method
	MilkProduct::printProduct();
	cout << endl;
}
double Yogurt::setPriceOfProduct(double num) const{ //calculate price
	return (MilkProduct::setPriceOfProduct(num));
}


Yogurt::~Yogurt()
{
	cout << "the destractor of yogurt is on" << endl;
}
