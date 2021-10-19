#include<iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

class car{
	public:
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		void getData();
		car(int, string, unsigned short int, float, Date);
};

car::car(int, string, unsigned short int, float, Date){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	price=pPrice;
	dateOfProduction=pdateOfProduction;
}

void car::getData(){
	cout<<"Id: "<<id<<endl<<"Marka: "<<brand<<endl<<"Model: "<<model<<endl<<"Kolor: "<<color<<endl<<
	"Rok produkcji: "<<dateOfProduction.dd<<"."<<dateOfProduction.mm<<"."<<dateOfProduction.yyyy<<"r."
	<<endl<<"Moc: "<<power<<endl<<"Cena: "<<price<<"z³"<<endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	car fiat(1, "x", 1, 1, {1, 2, 3});
	fiat.getData();
	
	
	return 0;
}
