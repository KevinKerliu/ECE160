#include <iostream>
#include <string>

using namespace std;

class example{

        public:
	string s;
        double* d;

        example(double* doub, string str){
                d = new double(*doub);
		s = str;

        }

        ~example(){

                cout << "Inside destructor. Value of *d for " << s << ": " << *d << endl;
                *d = -1;
		delete d;
                d = 0;
        }

	void print(){
		
		cout << "Inside func(example e). Value of *d: " << *d << endl;
	}

	example(const example &e){
		s = "Copied "+ e.s;
		d = new double(*e.d);
	}


};

example func(example e){

	e.print();
	return e;
}


int main(){

	double d = 6;
        double* dptr = &d;
	
        example e(dptr, "Example 1");
	cout << "func(e) is called: " << endl;
	example f = func(e);

	return 0;
}

