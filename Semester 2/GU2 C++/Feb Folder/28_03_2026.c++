// Write a c++ program to perform addition, subtraction and multiplication on two objects of complex number class using operator overloading 
// Write a c++ program to compare two objects using operator overloading 

// #include <iostream>
// using namespace std;

// class complex{
//     int real;
//     int imaginary;

//     public:
//         complex(int real=0, int imaginary=0){
//             this -> real = real;
//             this -> imaginary = imaginary;
//         }
//         void display(){
//             cout << real << "+" << imaginary << "i"<<endl;
//         }
//         complex operator+(complex &c)  // pass object by reference 
//         {
//             complex t;
//             t.real = this -> real + c.real;
//             t.imaginary = this -> imaginary + c.imaginary;
//             return t;
//         }
// };

// int main(){
//     complex c1(2, 7), c2(3, 4);
//     c1.display();
//     c2.display();
//     complex c3;
//     c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// Write a c++ program to compare two objects using operator overloading 

#include<iostream>
using namespace std;

class Number{
    int num;
    public:
        Number(int num){
            this -> num = num;
        }
        void display(){
            cout << num << endl;
        }
        bool operator >(Number &n){
                return this -> num > n.num;
        }
};
int main(){
    Number n1(10), n2(36);
    n1.display();
    n2.display();
    if(n1 > n2){
        cout << "n1 is greater " << endl;
    }
    else{
        cout << "n2 is greater " << endl;
    }
}

//  Overload binary * operator for multiplying two objects.
// #include <iostream>
// using namespace std;
// class Number{
// public:
//     int value;
//     Number(int v){
//         value = v;
//     }
//     Number operator*(Number n){
//         return Number(value * n.value);
//     }
//     void display(){
//         cout << value << endl;
//     }
// };

// int main(){
//     Number n1(3), n2(4);
//     Number n3 = n1 * n2;   // multiplication of objects
//     n3.display();
//     return 0;
// }