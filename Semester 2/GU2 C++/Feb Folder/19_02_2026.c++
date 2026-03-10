// Encapsulation is a process of binding data members and member functions together in a class.
// encapsulation provides us 3 access specifiers:
// 1- Public: accessible outside and inside class.
// 2- Private: only accessible inside class.
// 3- Protected: only accessible within class and inside inherited class.

// Data Hiding : Data hiding is the process of making data members private and accessing them through public member functions.

// #include<iostream>
// using namespace std;

// class student{
//     private:
//      int roll;
//      string name;
//      public:
//      void set(int r,string n){
//         roll=r;
//         name=n;

//      }
//      void display(){
//         cout<<roll<<": "<<name<<endl;
//      }
// };
// int main(){
//     student s1,s2;
//     s1.set(1,"ravi");
//     s2.set(2,"swait");
//     s1.display();
//     s2.display();
// }

// this pointer : is the pointer which will automatically stores the address of functions calling object.

// #include<iostream>
// using namespace std;

// class student{
//     private:
//      int roll;
//      string name;
//      public:
//      void set(int roll,string name){
//         this -> roll=roll;
//         this->name=name;

//      }
//      void display(){
//         cout<<roll<<": "<<name<<endl;
//      }
// };
// int main(){
//     student s1,s2;
//     s1.set(1,"ravi");
//     s2.set(2,"swait");
//     s1.display();
//     s2.display();
// }

// constructors :   1- special member function
//                  2- they have same name as of class.
//                  3- it doesnot have any return type, not even void.
//                  4- they are automatically called whenever an object is created.
//                  5- Constructors will always be public
//                  6- Every class has an in-built default constructor, but if we want to do something in default constructor 
//                       then we are required to make our own.
//                  7- Constructors are of 4 types:
// a- default constructor: it is a type of constructor which does not make any argument 
// b- parameterized constructor: 
// c- copy constructor:
// d- move constructor:

#include<iostream>
using namespace std;

class person{
    public:
     int age;
     string name;
     
     person(){
        cout<<"object created"<<endl;
     }
};
int main(){
    person p1,p2;
    return 0;
}