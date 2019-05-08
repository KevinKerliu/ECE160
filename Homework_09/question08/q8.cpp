#include <iostream>

using namespace std;

class Person{
    int age;
    int salary;
    int IQ;
public:
    Person(){};

    void memberFunction0(){
        cout << "In memberFunction0" << endl;
    }   
    
    void memberFunction1(int a){
        cout << "In memberFunction1" << endl;
    }

    void memberFunction2(int a, int b){
        cout << "In memberFunction2" << endl;
    }
    
    void memberFunction3(int a, int b, int c){
        cout << "In memberFunction3" << endl;
    }

    ~Person(){}

};


int main(){
    Person AlbertEinstein;
    AlbertEinstein.memberFunction0();
    AlbertEinstein.memberFunction1(1);
    AlbertEinstein.memberFunction2(1,2);
    AlbertEinstein.memberFunction3(1,2,3);
    return 0;
}
