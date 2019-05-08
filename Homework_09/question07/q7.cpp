#include <iostream>
#include <string>

using namespace std;


class Message{
    string privateString;
public:
    Message(string s = "I am a default value"){
        privateString = s;
    };
    
    void print(){
        cout << privateString << endl;
    }

    void print(string s){
        cout << s << privateString << endl;
    }
    
    ~Message(){}

};


int main(){
    Message sampleMessage;
    sampleMessage.print();
    sampleMessage.print("I am an additional message ");
    return 0;
}
