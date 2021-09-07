#include <iostream>

using namespace std;

class Worker{
	public:
	//deklaracja zmiennej czlonkowskiej
	string name="Januszek";
	string surname;
	unsigned short int age;
	//definicja funkcji czlonkowskiej
	void showName(){
		cout<<"Twoje imiê: "<<name<<" "<<surname<<endl;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker pracownik;
	pracownik.surname = "Nowak";
	pracownik.surname;
	pracownik.showName();
	pracownik.age=16;
	cout<<"wiek: "<<pracownik.age;
	
	return 0;
}

