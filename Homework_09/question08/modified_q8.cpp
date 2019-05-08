#include <iostream>

using namespace std;

class Person{
    int age;
    int salary;
    int IQ;
public:
    Person(){};

    void modifiedMemberFunction(int a=1, int b=2, int c=3){
        cout << "In modifiedMemberFunction" << endl;
    }

    ~Person(){}

};

int main(){
    Person AlbertEinstein;
    AlbertEinstein.modifiedMemberFunction(24);
    return 0;
}
