#include <iostream>
using namespace std;

class student {
	float gpa;
	string name;
	
	public:
	student(string studentName, float studentGpa); //constructor
	void setName(string name);
	string getName();
	void setGpa(float studentGpa);
	float getGpa();


};

student::student(string studentName, float studentGpa){
	
	gpa = studentGpa;
	name = studentName;
}

void student::setName(string name1){
	
	name = name1;
}

string student::getName(){
	
	return name;

}

void student::setGpa(float studentGpa){
	
	gpa = studentGpa;
}

float student::getGpa(){

	return gpa;

}

int main() {

	student s1("Rebecca", 3.0);

	cout << s1.getName() << endl;
        cout << s1.getGpa() << endl;

	s1.setName("Peter Cooper");
	s1.setGpa(3.5);

	cout << s1.getName() << endl;
	cout << s1.getGpa() << endl;

	return 0;
} 
