#include <iostream>

using namespace std;

class Rodent{
	
	public:
	
	virtual ~Rodent(){
	cout << "\tRodent Destructor" << endl;
	}
	virtual void eat() = 0;
	virtual void sleep() = 0;


};

class Mouse : public Rodent{

	public:

	~Mouse(){
	
		cout << "\tMouse Destructor" << endl;

	}

	void eat(){
	
		cout << "\tMouse::eat" << endl;

	}

	void sleep(){
	
		cout << "\tMouse::sleep" << endl;
	
	}

};

class Gerbil : public Rodent{
	
	public:

	~Gerbil(){
	
		cout << "\tGerbil Destructor" << endl;
	
	}

	void eat(){

                cout << "\tGerbil::eat" << endl;

        }

        void sleep(){

                cout << "\tGerbil::sleep" << endl;

        }


};

class Hamster : public Rodent{

	public:

	~Hamster(){
	
		cout << "\tHamster Destructor" << endl;
	
	}

	void eat(){

                cout << "\tHamster::eat" << endl;

        }

        void sleep(){

                cout << "\tHamster::sleep" << endl;

        }

};

class BlueHamster : public Hamster{

	public:
	
	~BlueHamster(){
	
		cout << "\tBlueHamster Destructor" << endl;

	}

	void eat(){
	
		cout << "\tBlueHamster::eat" << endl;

	}	

	void sleep(){
	
		cout << "\tBlueHamster::sleep" << endl;

	}


};

void func(Rodent* r){

	cout << "Inside func(Rodent)" << endl;
	r->sleep();//To see which function this calls in different situations
	return;
}

int main(){
	
	cout << "Array of Rodent Objects Output:" << endl;
	Mouse m;
	Gerbil g;
	Hamster h;
	BlueHamster b;

	Rodent* Rodents[] = {&m, &g, &h, &b};
	
	for (int i = 0; i < 4; i++){
		

		Rodents[i]->eat();
		Rodents[i]->sleep();	
	}
	
	cout << "Upcasting:" << endl;

	//Test two ways of upcasting
	Mouse* m1 = new Mouse();
	func(m1);
	Rodent* h2 = new Hamster();
	
	cout << "Delete m1:" << endl;
	delete m1;
	cout << "Delete h2:" <<endl;
	delete h2;
	cout << "More Destructors Called:" << endl;

	return 0;
}
