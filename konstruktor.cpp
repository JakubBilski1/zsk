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
		car(){
			cout<<"Konstruktor"<<endl;
			id=10;
			brand="Fiat";
			model="126p";
			color="Czerwony";
			power=490;
			dateOfProduction={17, 11, 2020};
			price=10000;
		}
};

void car::getData(){
	cout<<"Id: "<<id<<endl<<"Marka: "<<brand<<endl<<"Model: "<<model<<endl<<"Kolor: "<<color<<endl<<
	"Rok produkcji: "<<dateOfProduction.dd<<"."<<dateOfProduction.mm<<"."<<dateOfProduction.yyyy<<"r."
	<<endl<<"Moc: "<<power<<endl<<"Cena: "<<price<<"z³"<<endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	car fiat;
	fiat.getData();
	
	
	return 0;
}
