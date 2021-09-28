#include<iostream>

using namespace std;
//struktury
struct Date{
	unsigned short int dd, mm, rrrr;
};

struct student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(){
	setlocale(LC_CTYPE, "polish");
	student kowalski{"Janusz", "Nowak", 100, {28,9,2021}, {5, 4, 2, 3, 4}};
	cout<<"Imiê i nazwisko: "<<kowalski.name<<" "<<kowalski.surname<<endl<<"Identyfikator: "<<kowalski.id<<endl<<"Data urodzenia: "<<
	kowalski.dateBirthday.dd<<"-"<<kowalski.dateBirthday.mm<<"-"<<kowalski.dateBirthday.rrrr<<"r."<<endl;
	for(unsigned int i=0; i<5; i++){
		cout<<i+1<<" ocena: "<<kowalski.gradeInformatics[i]<<endl;
	}
	
	return 0;
}

