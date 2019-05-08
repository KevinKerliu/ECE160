#include<iostream>
using namespace std;

class Simple{
	int num;
	public:
	Simple(int inputNum); //constructor
	~Simple(); //destructor
};

Simple::Simple(int inputNum){
	num = inputNum;
	cout << "Value in Simple Constructor: " << num << endl;
}

Simple::~Simple(){
	
	cout << "Value in Simple Destructor: " << num << endl;
}

int main(){

	Simple s(15);

	return 0;
}
