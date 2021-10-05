#include<iostream>

using namespace std;

class School{
	public:
		//skladowe instancyjne 
		static string s_school;
		static string s_jobposition;
		
		//skladowe klasowe
		string name;
		string surname;
		
		//prototypy
		void getDate();
		void setNameSurname(string name, string surname);
		
		static string s_getSchool();
		static void s_setSchool(string pSchool){
			s_school=pSchool;
		}
};

string School::s_school="ZSK";
string School::s_jobposition="Student";

//metody
void School::getDate(){
	cout<<"Imiê: "<<name<<endl<<"Nazwisko: "<<surname<<endl;
}

void School::setNameSurname(string name, string pSurname){
	School::name=name;
	surname=pSurname;
}

string School::s_getSchool(){
	return s_school;
}

int main(){
	setlocale(LC_CTYPE,"polish");
	
	cout<<"Szko³a: "<<School::s_school<<endl;
	cout<<"Pozycja: "<<School::s_jobposition<<endl;
	
	School kowal;
	kowal.setNameSurname("Marek Grzegorz ", "Nowak");
	kowal.getDate();
	School::s_jobposition="Wyk³adowca";
	cout<<"Stanowisko: "<<School::s_jobposition<<endl;
	kowal.s_jobposition="Dziekan";
	cout<<kowal.s_jobposition<<endl;
	cout<<School::s_jobposition<<endl;
	cout<<School::s_getSchool();
	cout<<School::s_getSchool();
	
	return 0;
}
