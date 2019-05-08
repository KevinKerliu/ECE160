#include <iostream>
#include <string>

using namespace std;

class MyString{
    string str;
public:
    MyString(){
        str = "Initializing the string";
        cout << "The string has been initialized" << endl;
    };

    void print(){
        cout << str << endl;
    }

    ~MyString(){}

};

int main(){
    MyString sample;
    sample.print();
    return 0;
}
