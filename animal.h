#include<iostream>
class Animal{
	public:
		void className(){
			std::cout<<"Klasa Animal\n";
		}
		virtual void speak(){
			std::cout<<"D�wi�k zwierzaka\n";
		}
};
class Dog: public Animal{
	public:
		void className(){
			std::cout<<"Klasa Dog\n";
		}
		virtual void speak() override{
			std::cout<<"WOOOOF! WOOF!\n";
		}
};
