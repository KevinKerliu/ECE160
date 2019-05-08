#include<iostream>
#include<stack>

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
	
	stack<Hen> h;
	Hen h1;
	Hen h2;
	Hen h3;
	Hen h4;
	Hen h5;

	h1.name = "rebHen";
	h2.name = "kevHen";
	h3.name = "Henry";
	h4.name = "Henny";
	h5.name = "Bird";

	h.emplace(h1);
	h.emplace(h2);
	h.emplace(h3);
	h.emplace(h4);
	h.emplace(h5);
	
	cout << "Order of Hens added to the stack:" << endl;

	h1.display();
	h2.display();
	h3.display();
	h4.display();
	h5.display();

	string topName;

	cout << "\nOrder of Hens removed from the stack:" << endl;

	//check if there are hens on the stack
	while(!h.empty()){
		
		topName = h.top().name;
		h.top().display(); //print out name at top of stack
		h.pop(); //remove that name from stack
	}

        return 0;

}

                            
