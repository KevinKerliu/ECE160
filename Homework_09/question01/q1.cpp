#include<iostream>
using namespace std;

class Hen{
	public:
	string name;
	void display();
	
	
	class Nest{
	
		public:
		int size;
		void display();

		
		class Egg{
		public:
		int age;
		void display();


		};
	};

};

void Hen::Nest::Egg::display(){

	cout<<"Egg's age is: "<<age<<endl;
}
void Hen::Nest::display(){

    cout<<"Size of nest is: "<<size<<endl;
}

void Hen::display(){

   cout<<"Hen's name is: "<<name<<endl;
}
       
int main(){

	Hen h;
	h.name = "Hen";
    	Hen::Nest n;
	n.size = 15;
    	Hen::Nest::Egg e;
	e.age = 3;
    	h.display();
    	n.display();
    	e.display();

	return 0;

}
