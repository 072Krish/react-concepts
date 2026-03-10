                                                        // Introduction To C++

// #include<iostream>
// int main(){
//     int a;
//     printf("Enter any number: ");         Only used in C language
//     scanf("%d",&a);
//     return 0;
// }



// :: --- scope resolution operator , std --- namespace 
//(A namespace in c++ is a declartive region that provides scope to identifiers(variables/functions/classes) 
//to prevent naming complex. it organises code into logical groups specially in large prjects that can use multiple 
//libraries by giving each group a unique name)
// 2. We can access members of namespace by using scope resolution operator(::)

// #include <iostream>
// int main()

// {
//     int a;
//     std::cout << "Enter any number";                      Code for C++
//     std::cin >> a;
//     std::cout << "You have entered" << a;
//     return 0;
// }

                                                           //Defining Namespace 

// namespace math{
//     float pi=3.14;
//     float aoc(int r){
//         return pi*r*r;
//     }
// }
//     #include<iostream>
//     using namespace std;
//     using namespace math;
//     int main(){
//         int r;
//         cin>>r;
//         cout<<aoc(r);
//     }

                                                        // Auto Variable Defining 

// #include<iostream>
// using namespace std;
// int main(){
//     auto a=5.4;
//     cout<<a;
//     return 0;
// }

                                                        // Implicit Type Casting 

// #include<iostream>
// using namespace std;
// int main(){
//     auto a='d';
//     a=109;
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     auto a=5; (in modern c++ auto is type specifier that instructs the compiler to automatically reduce the variables datatypes from its intializer. A variable declared with auto must be initialised in the same statement so that the compiler can reduce the type)
//     a=109;
//     a=7.68;
//     cout<<a;
//     return 0;
// }
                                               //Functions : Default Parameters (Default Argument in c++ function is a value automatically assigned to a function/parameter if the function caller a does not provide value for the argument)
#include<iostream>
using namespace std;
void call(int a=80){
    cout<<a;
}
int main(){
    call();
    cout<<"\n";
    call(45);
    
}
