// Inheritance : is a concept which one class inherit the features (data members and member functions) of another class.
// 2. Inheritance requires a parent class and a child class or we can say a base class and a derived class. 
// 3. While using inheritance, the derived class can reuse the methods of base (parent) class.

// syntax : 
//     class A{

//     };
//     class B : access-specifier A{

//     };

// Protected Access Specifier : Whenever we create any member of class protected then we are not alloed to access it outside the class.
// 2. But we can access the protected members inside the child class as well as friend class.

// Basic Eg :
// #include <iostream>
// using namespace std;
//     class Animal{
//         public :
//         void display(){
//             cout << "Animal" << endl;
//         }
//     };
//     class Dog : public Animal{
//         public : 
//         void display(){
//             cout << "Dog" << endl;
//         }
//     };
//     int main(){
//         Animal A1;
//         A1.display();
//         Dog D1;
//         D1.display();
//         return 0;
//     }

// Extended Eg : 
// #include <iostream>
// using namespace std;
//     class Animal{
//         public :
//         void display(){
//             cout << "Animal" << endl;
//         }
//         protected :
//         void display2(){
//             cout << "Animal has some sound" << endl;
//         }
//     };
//     class Dog : public Animal{
//         public : 
//         void display(){
//             display2(); // allowed inside the child class 
//         }
//     };
//     int main(){
//         Animal A1;
//         A1.display();
//         // A1.display2(); not allowed because protected 
//         Dog D1;
//         D1.display();
//         // D1.display2(); not allowed because protected 
//         return 0;
//     }

// #include <iostream>
// using namespace std;
//     class Animal{
//         public :
//         void display(){
//             cout << "Animal" << endl;
//         }
//     };

//     // Inheritance access specifier - We can inherit any class using public, private and protected access specifiers:
//     // Public : public as public, private as private, protected as protected 
//     // Protected : public as protected, private as private, protected as protected 
//     // Private : public as private, private as private, protected as private

//     class Dog : private Animal{
//         public :
//         void call(){
//             display();
//         }  
//     };
//     class Puppy : public Dog{
//         public :
//         void callp(){
//             call();
//         }
//     };
//     int main(){
//         Animal A1;
//         A1.display();
//         Dog D1;
//         D1.call();
//         Puppy p1;
//         p1.callp();
//         return 0;
//     }

// Write a c++ program to use inheritance and print the details of students from an inherited class result 
// Write a c++ program in which one class is inherited from a base class and show the constructor and destructor sequence in ouput by creating a child class object. 
// Wirte a c++ program in ehcih a base class is inherited in two child classes and that two child classes are inherited in a single super_child class.
// Then show the constructor and destructor sequence in output by creating a super_child class object.

// 3.  #include <iostream>
// using namespace std;

// class Base{
//     public:
//     Base(){
//         cout<<"Base Constructor"<<endl;
//     }
//     ~Base(){
//         cout<<"Base Destructor"<<endl;
//     }
// };
// class child1 : public Base{
//     public:
//     child1(){
//         cout<<"Child1 Constructor"<<endl;
//     }
//     ~child1(){
//         cout<<"Child1 Destructor"<<endl;
//     }
// };
// class child2 : public Base{
//     public:
//     child2(){
//         cout<<"Child2 Constructor"<<endl;
//     }
//     ~child2(){
//         cout<<"Child2 Destructor"<<endl;
//     }
// };
// class Super_child : public child1, public child2{
//     public:
//     Super_child(){
//         cout<<"Super Constructor"<<endl;
//     }
//     ~Super_child(){
//         cout<<"Super Destructor"<<endl;
//     }
// };

// int main(){
//     Super_child obj;
//     return 0;

// } 

// Write a c++ program to provide two values to data members of parent class while creating child class object also print them using display function in parent class. 
// #include <iostream>
// using namespace std;

// class Parent{
// public:
//     int a, b;
//     Parent(int x, int y){
//         a = x;
//         b = y;
//     }
//     void display(){
//         cout << "a = " << a << endl;
//         cout << "b = " << b << endl;
//     }
// };
// class Child : public Parent{
// public:
//     Child(int x, int y) : Parent(x, y){
//         cout<<"Child Object Created"<<endl;
//     }
// };

// int main(){
//     Child obj(5, 10);
//     obj.display();
//     return 0;
// }

// Polymorphism : is a core OOPS concept that allows a single interface (such as a function or operator) to have multiple implementations
// It is of two  types :
//  1. Compile Time Polymorphism :
//      - it is implemented at compile time.
//      - it is also known as static binding
//      - it consists of method (function) overloading and  operator overloading.
// 2. Run Time Polymorphism :
//      - it is implemented at run time.
//      - it is also known as dynamic binding.
//      - it consists of method (function) overriding and virtual functions.



// Templates in C++
// 1. In C++ templates are used for generic programming means functions and class are defined without data types.
// 2. We can provide data type while calling function or creating object of class

// Function Template
// It is a function which is defined generically ans can be used for any data type or object

// #include <iostream>
// using namespace std;

// template<typename T>
// T sum(T a,T b){
//     T c;
//     c=a+b;
//     return c;
// }
// int main(){
//     cout<<sum<int>(5,2)<<endl;
//     cout<<sum<float>(4.5f,3.7f)<<endl;
// }

// #include <iostream>
// using namespace std;

// template<typename T1,typename T2>
// T2 multiply(T1 a,T2 b){
//     T2 c;
//     c=a*b;
//     return c;
// }
// int main(){
//     cout<<multiply<int,int>(5,2)<<endl;
//     cout<<multiply<float,float>(4.5f,3.7f)<<endl;
//     cout<<multiply<int,float>(4,3.7f)<<endl;
// }

// #include <iostream>
// using namespace std;

// template<typename T1,typename T2>
// class number{
//     T1 data1;
//     T2 data2;
//     public:
//         number(T1 a,T2 b){
//             data1 = a;
//             data2 = b;
//         }
//         void display(){
//             cout<<"data1 = "<< data1 <<" data2 = "<< data2 <<endl;
//         }
// };

// int main(){
//     number<int,int> n1(4,9);
//     number<float,float> n2(3.4f,9.5f);
//     number<float,int> n3(2.3f,4);
//     cout<<"n1: ";
//     n1.display();
//     cout<<"n2: ";
//     n2.display();
//     cout<<"n3: ";
//     n3.display();
// }

// Standard Template Library (STL) : It is a collection of pre-defined libraries for storing and manipulating different datatypes :
// Components of STL : 
//                  1- Containers : These are templates which we can use to store data or objects for eg: vector, list, map etc
//                  2- Algorithms : These are pre-defined functions which are used to perform operations on containers such as sorting, searching etc.

// Vectors in C++
// 1- in C++, vectors acts as a dynamic array which can store elements of given data types.
// 2- Dynamic means vector grows and shrink as per need

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1; // vector of size 0
    vector<int> v2(5,61); //size is 5 and each element is 61
    vector<int> v3(2,54,7,93);

    for(auto x : v2){
        cout<<x<<" ";
    }
    cout<<endl;
    v2[3] =37;
    v2.push_back(23);
    v1.push_back(10);
    v1.push_back(29);
    for(auto x : y1){

    }


}

// Write a c++ program to declare a vector of integers and take elements from user and then print the sum of element in that vector 