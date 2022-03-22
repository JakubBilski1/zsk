#include <iostream>
#include "animal.h"
using namespace std;

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Animal zwierze;
	zwierze.className();
	
	Dog *w_dog = new Dog();
	w_dog->className();
	w_dog->speak();
	
	Animal *w_animal = new Dog();
	w_animal->className();
	w_animal->speak();
	return 0;
}
