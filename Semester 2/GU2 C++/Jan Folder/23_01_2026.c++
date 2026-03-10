                    // Inline Functions 
// Are Functions for which the compiler is requested to insert the functions 
// body directly into the code at each point wherever it is called

// #include<iostream>
// using namespace std;
// inline int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int s = sum(a,b);
//     cout<<"sum"<<s;
//     return 0;
// }

// Advantages 
// 1. Eliminates function call over head 
// 2. Leading to faster execution for smaller functions 
// 3. Can be debugged like regular functions

// Disadvantages 
// 1. Can increase the size of executable binary code when the function is large in size
// 2. Potentially leading to slower performance 
// 3. Changes to an inline function requires recompilation of all files that uses it 

// Function Overloading
// It is process in which we are making more than one function with same name but by 
//differentiating either number of parameters or type of parameters or both 

// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// float sum(float a,float b){
//     return a+b;
// }
// int main(){
// cout << sum(5,4);
// cout << sum(2.2f,3.7f);
// return 0;
// }

// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// int add(int a,int b,int c){
//     return a+b+c;
// }
// int main(){
//     cout<<add(5,4)<<endl;
//     cout<<add(5,4,6);
// }

// Pass By Value/Pass By Reference/Pass By Pointer

// #include<iostream>
// using namespace std;
// void abc(int a) //pass by value
// {
//     a=a+5;
//     cout<<"inside function"<<a<<endl;
// }
// int main(){
//     int a=7;
//     cout<<"value before function call"<<a<<endl;
//     abc(a);
//     cout<<"value after function call"<<a<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
//  void abc(int *a) // pass by pointer
//  {
//     *a=*a+5;
//     cout<<"inside function"<<*a<<endl;
//  }
//  int main(){
//     int a=7;
//     cout<<"value before function call"<<a<<endl;
//     abc(&a);
//     cout<<"value after function call"<<a<<endl;
//     return 0;
//  }

#include<iostream>
using namespace std;
 void abc(int &a) // pass by reference
 {
    a=a+5;
    cout<<"inside function"<<a<<endl;
 }
 int main(){
    int a=7;
    cout<<"value before function call"<<a<<endl;
    abc(a);
    cout<<"value after function call"<<a<<endl;
    return 0;
 }