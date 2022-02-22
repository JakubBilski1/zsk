#include<iostream>

using namespace std;

class Vehicle{
	public:
		void stop(){
			cout<<"STOP zatrzymaj pojazd"<<endl;
		}
};

class Car : public Vehicle{
	public:
		void stop(){
			cout<<"STOP zatrzymaj samochód"<<endl;
		}
};

class Bike : public Vehicle{
	public:
		void stop(){
			cout<<"STOP zatrzymaj rower"<<endl;
		}
};

class Rolls : public Vehicle{
	public:
		void stop(){
			cout<<"STOP zatrzymaj rolki"<<endl;
		}
};

int main(){
	setlocale(LC_CTYPE, "polish");
	Vehicle *pojazd = new Vehicle();
	pojazd->stop();
	
	Rolls *rolki = new Rolls();
	rolki->stop();
	return 0;
}
