#include<iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		Worker();
		Worker(string pName, string pSurname);
		
		void getData();
		
		~Worker(){
			cout<<"D E S T R U K T O R"<<endl;
		}
};

Worker::Worker(){
	cout<<"Konstruktor domyslny"<<endl;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
{
	cout<<"Konstruktor parametryczny"<<endl;
}

void Worker::getData(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
}

void createObjectWorker(){ 
 Worker essa;
 essa.getData();
 cout<<"Wywolanie funkcji o akkrze"<<endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	//Worker grzegorz;
	//Worker nowak = Worker("Janusz", "Nowak");
	//nowak.getData();
	Worker *p_kowalski = new Worker("Ryszard", "Essa");
	p_kowalski->getData();
	delete p_kowalski;
	createObjectWorker();
	return 0;
}
