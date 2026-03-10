// #include<iostream>
// using namespace std;
// void fun(int a){
//     a=a+5;
// }
// int main()                             //Pass By Value
// {
//     int q=90;
//     fun(q);
//     cout<<q;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void fun(int *a){
//     *a=*a+5;
// }
// int main()
// {
//     int q=90;                                  //Pass By Pointer 
//     fun(&q);
//     cout<<q;
//     return 0;
// }

// Write a program to swap value of two variables using function 
//Solution - 

// #include<iostream>
// using namespace std;
// void func(int *a,int *b){
//     int c;
//     c=*a;
//     *a=*b;
//     *b=c; 
// }
// int main(){
//     int d,e;
//     d=4;
//     e=5;
//     func(&d,&e);
//     cout<<"d:"<<d<<endl<<"e:"<<e;
//     return 0;
// }

// Write a program to take a string from user and remove extra spaces from that string 

                                                    // Refrence Variable
// It is variable which is just an alternate name for the variable which is assigned to it.

// #include<iostream>
// using namespace std;
// int main(){
// int a=5;
// int &b=a;
    
// cout<< a<< endl;
// cout<< b<< endl;
// return 0;
// }

// Write a program to swap value of two variables using pass by refrence in function 
// #include <iostream>
// using namespace std;
// void swap_variables(int &a, int &b) {
//     int temp = a; 
//     a = b;
//     b = temp;
// }

// int main() {
//     int num1 = 10;
//     int num2 = 20;

//     cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//     swap_variables(num1, num2);
//     cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//     return 0;
// }


                                                            //Range Based for Loop

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={1,2,3,4,5};
//     int b[5];
//     for(int i=0;i<5;i++){
//            cin>>b[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<b[i]<<" ";
//     }
// //     for(int e:a);
// //     cout<<e<<" "<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={1,2,3,4,5};                //Used in C++
//     for(int &e:a)
//     e++;
//     for(int e:a)
//     cout<<e<<" "<<endl;
// }

// whenever we are required to return a refrence variable we can use refrence return type
//Basic Syntax
// returntype & functionname (){
//return value;}

//Example
// #include<iostream>
// using namespace std;
// int & fun(){
//     int a=5;
//     return a;
// }
// int main(){
//     int &b = fun();
//     cout<<b;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int a;
// int & fun(){
//      a=5;
//     return a;
// }
// int main(){                                   //Global Variable
//     int &b = fun();
//     cout<<b;
//     return 0;
// }

