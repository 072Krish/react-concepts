// Classes and Objects
// Objects - These are entities in real world 
// Classes - It is a blueprint of these entities

// Syntax
// #include <iostream>
// #include <string>
// using namespace std;

// class teacher{
//     public:
//     // properties 
//     string name;
//     string dept;
//     string subject;
//     int salary;

//     // methods / member function
//     void changeDept(string newDept){
//         dept = newDept;
//     }

// };
// int main(){
//     teacher t1;
//     t1.name = "Krish";
//     cout << t1.name <<endl;
// }

// Access Modifiers
// private - data and methods accessible inside class
// public - data and methods accessible to everyone
// protected - data and methods accessible inside class and to its derived class.

// Encapsulation - It is wrapping up of data and member functions in a single unit called class.
// Data Hiding : Data hiding is the process of making data members private and accessing them through public member functions.
// Constructor -    1- special member function
//                  2- they have same name as of class.
//                  3- it doesnot have any return type, not even void.
//                  4- they are automatically called whenever an object is created.
//                  5- Constructors will always be public
//                  6- Every class has an in-built default constructor, but if we want to do something in default constructor 
//                     then we are required to make our own.
//                  7- Constructors are of 4 types:
// a- default constructor: it is a type of constructor which does not make any argument 
// b- parameterized constructor: 
// c- copy constructor:
// Constructor Overloading - Whenever we are making two or more constructors by differentiating number and types of arguments then 
// this procees is known as constructor overloading. it is a example of polymorphism.

// This Pointer - special pointer in c++ that points to the current object.

// Copy Constructor -  Special constructor used to copy properties of one object into another.

// Dynamic Memory Allocation
// Whenever we are allocating memory at run time then this is known as Dynamic Memory Allocation.
// There are two types of memory:
// Stack Memory : Whenever we declare any variable, it get stored in stack memory at compile time.
// 2. the variables allocated in stack memory are automatically destroyed when they get out of scope.

// B- Heap Memory : Whenevr we  declare any variable using dynamic memory allocation, then that variable get stored 
// in heap memory at run time.
// 2. The variables allocated in heap memory at run time, only get destroyed when we delete them ourselves.

// Shallow copy - Whenever we make changes in one variable the changes got automatically got applied to copied variable
//or vice versa    
// Deep Copy - Whenever we make changes to one variable, the changes doesn't applied to copied variable or vice versa

 // Destructor
// 1- Destructor is also a special member function as it is having same name as class name with (~) symbol
// as prefix.
// 2- They does not have any return type.
// 3- Destructors does not take any parameter (argument), so destructor cannot be overloaded.
// 4- There is only single destructor in a class.
// 5- Destructor get automatically called whenever an object gets out of scope.
// 6- Every class have its inbuilt destructor which doesnot do anything.
// 7- Destructor should always be public.
