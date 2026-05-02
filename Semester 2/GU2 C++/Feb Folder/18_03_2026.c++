// write a c++ program to create a class which contains a integer data member and niw you are required to add two objects of class using member function
// which will return the resultant object.

// Hint : adding objects means adding their data members

#include<iostream>
using namespace std;
 class Number{
    int data;
    string name;
    public:
    Number(string name, int data=0){// default arguments
           this ->name = name;
           this -> data = data;
    }
    void display(){
        cout<<"value of "<< name <<"data"<<data<<endl;

    }
    Number add(Number n){// passing object by value
        
    }

 };
 int main(){
    Number num1("num1",10),num2("num2",25);
    Number num3("num3");
    num3 = num1.add(num2);
    num3.display();
 }