#include<iostream>
using namespace std;

class Hen{
        

	public:
	static string name;	
	void display(){
	
		cout << "Hen's Name: " << name << endl;
		cout << "Nest Size: " << Nest::size << endl;
		cout <<	"Egg Age: " << Nest::Egg::age << endl;
	
	}

	void setNestSize(int s){
	
		Nest::size = s;
	}

	void setEggAge(int a){
		
		Nest::Egg::age = a;
	
	}

        class Nest{

		friend class Hen;
                static int size;
                void display();


                class Egg{

        	friend class Hen;
                static int age;
                void display();


                };
        };

};

string Hen::name = "NULL";
int Hen::Nest::size = 0;
int Hen::Nest::Egg::age = 0;


int main(){

        Hen h;
   	h.name = "Hen";
	h.setNestSize(5);
	h.setEggAge(3);
        h.display();

        return 0;

}

