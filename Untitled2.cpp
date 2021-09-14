#include <iostream>
#include <locale.h>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych cz3onkowskich
	string name;
	string surname;
	string nationality;
	string alldata;
	unsigned short int yearBirthday;
	char gender;
	float height;
	float a;
	
// definicja funkcji cz3onkowskiej


	void showSurname();
	void showPersonality();
	void showAllData();
	void showName();

};

// deklaracja metody (prototyp)



//definicja metody show surname

float Worker::showSurname(){
				float wynik;
				cin>>a;
				wynik=a*a;
				return wynik;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.surname ="Nowak";
	pracownik.name ="Marek";
	pracownik.showSurname();
	pracownik.showName();
	pracownik.showPersonality();
	return 0;
}

