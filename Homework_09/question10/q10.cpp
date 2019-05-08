#include <iostream>
#define SIZE 25

using namespace std;

class A{

public:
    A(){ cout << "In A Constructor" << endl;};
    ~A(){}
};

class B{
    A sampleA;
public:
    B(){ cout << "In B Constructor" << endl;};
};

int main(){
    B arrayOfB[SIZE];
}
