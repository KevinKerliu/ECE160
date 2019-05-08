#include <iostream>
#include <string>

using namespace std;


//getting a weird error for Birdhouse constructor
//also for some reason the Bird copy constructor and assignment operator are
//not getting called



class Bird {
public:
    string name;
    static int identifier;

    Bird(){
    cout << "Bird default constructor" << endl;
    identifier++;
    name = "Bird ";
    cout << name << identifier << endl;
    }

    friend ostream& 
    operator<<(ostream& os, const Bird& b){
        return os << b.name;
    }

    Bird(const Bird& b){
        name = b.name + "copy by copy constructor";
        identifier++;
        
    }

    Bird& operator =(const Bird& b){
        name = b.name + "copy by assignment operator";
        identifier++;
    }
};

class Birdhouse {
private: //making the following private to disallow them
    Birdhouse(const Birdhouse& bh){}
    Birdhouse& operator =(const Birdhouse& bh){}
public:
    Bird bird1;
    Bird *bird2;
    Bird bird3;

    //Birdhouse(bird b1, bird b2*, bird &b3) : bird1(b1), bird2(b2), bird3(b3){}       

    friend ostream&
    operator<<(ostream& os, const Birdhouse& bh){
        return os << bh.bird1.name << endl << bh.bird2->name 
            << endl << bh.bird3.name << endl;
    }
};

int Bird::identifier = 0;

int main(){
    Bird a;
    Bird b = a;
    //Bird c = a;
    return 0;
}
