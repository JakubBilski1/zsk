//konstruktor kopiuj¹cy 
#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
	//prototyp konstruktor kopiujšcy
		Rectangle(const Rectangle&);
		void catchSides(double&, double&);
		void setSides(double sideA, double sideB);
		double area();
		double circuit();
		void getSides();
};

Rectangle::Rectangle(){
	cout<<"Konstruktor domyslny"<<endl;
}

Rectangle::Rectangle(double pSideA, double pSideB){
	cout<<"Konstruktor parametryczny"<<endl;
	sideA=pSideA;
	sideB=pSideB;
}

Rectangle::Rectangle(const Rectangle& model){
	cout<<"Konstruktor kopiuj¹cy"<<endl;
	sideA=model.sideA;
	sideB=model.sideB;
}

void Rectangle::catchSides(double &pSideA, double &pSideB){
	pSideA=sideA;
	pSideB=sideB;
}

void Rectangle::setSides(double pSideA, double pSideB){
	sideA=pSideA;
	sideB=pSideB;
}

void Rectangle::getSides(){
	cout<<"Bok a: "<<sideA<<endl<<"Bok b: "<<sideB<<endl;
}

double Rectangle::area(){
	return sideA*sideB;
};

double Rectangle::circuit(){
	return 2*sideA+2*sideB;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
		
		double a,b;
		cout<<"Prostokat pierwszy"<<endl;
		Rectangle prostokat1(2, 4);
		prostokat1.getSides();
		cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
		
		cout<<"Prostokat drugi"<<endl;
		Rectangle prostokat2=prostokat1;
		prostokat2.catchSides(a, b);0
		prostokat2.getSides();
		cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
		
	return 0;
}
