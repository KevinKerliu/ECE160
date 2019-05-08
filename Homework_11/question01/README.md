## Question 1

(Eckel, 15.1-3) Create a simple “shape” hierarchy: a base class called Shape and derived classes called Circle, Square, and Triangle. In the base class, make a virtual function called
draw( ), and override this in the derived classes. Make an array of pointers to Shape objects that you create on the heap (and thus perform upcasting of the pointers), and call draw( ) through the base-class pointers, to verify the behavior of the virtual function. If your debugger supports it, single-step through the code.

Modify the code so draw( ) is a pure virtual function. Try creating an object of type Shape. Try  to call the pure virtual function inside the constructor and see what happens. Leaving it as a pure virtual, give draw( ) a definition.

Expanding on on the previous part, create a function that takes a Shape object by value and try to upcast a derived object in as an argument. See what happens. Fix the function by taking a reference to the Shape object. 

Compile Steps: 

    g++ q1.cpp
    g++ q1_modified.cpp
    g++ q1_modified2.cpp

Command(s) to run the program:



Output:

    Output of q1.cpp
    Circle::draw()
    Square::draw()
    Triangle::draw()



    Output of q1_modified.cpp
    
    Output when line 47 of the code is not commented out:
    q1_modified.cpp: In function ‘int main()’:
    q1_modified.cpp:47:11: error: cannot declare variable ‘testShape’ to be of abstract type ‘Shape’
        Shape testShape;
           ^~~~~~~~~
    q1_modified.cpp:5:7: note:   because the following virtual functions are pure within ‘Shape’:
        class Shape{
            ^~~~~

    Output when line 27 is commented out:
    Circle::draw()
    Square::draw()
    Triangle::draw()



    Output of q1_modified2.cpp

    Output when lines 36-38 and 58 are not commented out:
    q1_modified2.cpp:41:22: error: cannot declare parameter ‘s’ to be of abstract type ‘Shape’
        void functionA(Shape s){
                          ^
    q1_modified2.cpp:5:7: note:   because the following virtual functions are pure within ‘Shape’:
    class Shape{
           ^~~~~
    q1_modified2.cpp:16:6: note:    virtual void Shape::draw()
    void Shape::draw(){
          ^~~~~
    q1_modified2.cpp: In function ‘int main()’:
    q1_modified2.cpp:63:16: error: cannot allocate an object of abstract type ‘Shape’
        functionA(c);

    Output when lines 36-38 and 58 are commented out:
    Circle::draw()
    Square::draw()
    Triangle::draw()
    Pass by reference



