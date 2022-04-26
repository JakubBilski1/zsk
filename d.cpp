#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	string text;
	setlocale(LC_CTYPE, "polish");
	ofstream File;
	File.open("C:\\Users\\student\\Desktop\\pliki\\aka.txt");
	if(File.is_open()){
			getline(cin, text);
			File<<text<<"\n";
	}
	else
		cout<<"error";
	return 0;
}
