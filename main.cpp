#include <iostream>

using namespace std;

class Worker{
	public:
		int id{8};
		string name{"Katarzyna"};
		string surname{"Nowak"};
		

		Worker(int pId=20, string pName="Marek", string pSurname="Nowak");
		
		void getData();
};

Worker::Worker(int pId, string pName, string pSurname){
	name=pName;
	surname=pSurname;
	id=pId;
}

void Worker::getData(){
	cout<<"Id= "<<id<<endl<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker nowak=Worker();
	nowak.getData();
	Worker nowak1=Worker(31, "Jerzy", "Zjuju");
	nowak1.getData();
	Worker nowak2=Worker(31, "Akkuwa");
	nowak2.getData();
	return 0;
}
