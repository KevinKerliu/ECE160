#include <iostream>
#include <string>

using namespace std;

class Grandpa { 
    int age;
public:
    Grandpa(){
        cout << "Yo it's gramps" << endl;
    }

    void setAge(int a){
        age = a;
    }

    void getAge(){
        cout << age << endl;
    }

    ~Grandpa(){
        cout << "Gramps says cya" << endl;
    }
};

class Dad : public Grandpa {
    string job;
public:
    Dad(){
        cout << "I'm your daddy" << endl;
    }

    ~Dad(){
        cout << "Au revoir from ya dad" << endl;
    }
};

class Son : public Dad {
    string name;
public:
    Son(){
        cout << "RALPHIE IN THE HOUSE" << endl;
    }

    ~Son(){
        cout << "Peace out homies" << endl;
    }
};


int main(){
    Son Steve;
    return 0;
}
