#include<iostream>

using namespace std;
//struktury klasy
struct Date{
	unsigned short int dd, mm, rrrr;
};

/*struct student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};*/

class Worker{
	public:
		unsigned int id{};
		string name{}, surname{};
		Date dateBirthday{};
		void showAllData();
		void setData(unsigned int id, string name, string surname, Date dateBirthday);
};

void Worker::showAllData(){
	cout<<"Dane pracownika: "<<endl<<"Identyfikator pracownika: "<<id<<endl<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl<<"Data urodznia: "<<dateBirthday.dd<<"."<<dateBirthday.mm<<"."
	<<dateBirthday.rrrr<<"r.";
};

void Worker::setData(unsigned int id, string name, string surname, Date dateBirthday){
	Worker::id=id;
	Worker::name=name;
	Worker::surname=surname;
	Worker::dateBirthday=dateBirthday;
};

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	kowalski.setData(49, "Marek", "Nowak", {11, 02, 1410});
	kowalski.showAllData();
	return 0;
}
