// parameterized constructor - Whenever we are making constructors with parameters then that constructor is known as parameterized constructor 

// #include<iostream>
// using namespace std;

// class student{
//     private:
//         int roll;
//         string name;
//     public:
//         student(){
//             cout<<"object created"<<endl;
//         }
//         student(int r,string n){
//             roll=r;
//             name=n;
//         }
//     void display(){
//         cout<<roll<<": "<<name<<endl;
//       }
// };
// int main(){
//      student s1(1,"ramu");
//      student s2;
//      s1.display();
// }

// Constructor Overloading - Whenever we are making two or more constructors by differentiating number and types of arguments then 
// this procees is known as constructor overloading 

// #include<iostream>
// using namespace std;

// class student{
//     private:
//         int roll;
//         string name;
//         int marks;
//     public:
//         student(){
//             cout<<"object created"<<endl;
//         }
//         student(int r,string n){
//             roll=r;
//             name=n;
//             cout<<"object created"<<endl;
//         }
//         student(int r,string n, int m){
//             roll=r;
//             name=n;
//             marks=m;
//             cout<<"Object Created"<<endl;
//         }
//     void display(){
//         cout<<roll<<": "<<name<<": "<<marks<<endl;
//       }
// };
// int main(){
//      student s(1,"pari",92);
//      student s1(2,"ramu");
//      student s2;
//      s1.display();
//      s.display();
//      s2.display();
// }

// Write a c++ class named car having data members as name,speed and launch years Now you are required to have constructors 
// to provide details while creating objects take input from user 

// #include <iostream>
// using namespace std;

// class car{
//     private:
//     int speed;
//     string name;
//     int launch;
//         public:
//         car(){
//             cout<<"object created"<<endl;
//         }
        
//         car(int s,string n, int l){
//             speed=s;
//             name=n;
//             launch=l;
//             cout<<"Object Created"<<endl;
//         }
//     void display(){
//         cout<<name<<": "<<speed<<": "<<launch<<endl;
//       }
// };
// int main(){
//      car s(352,"Lambo",1988);
//      s.display();
// }

// Dynamic Memory Allocation
// Whenever we are allocating memory at run time Dythen this is known as Dynamic Memory Allocation.
// There are two types of memory:
// Stack Memory : Whenever we declare any variable, it get stored in stack memory at compile time.
// 2. the variables allocated in stack memory are automatically destroyed when they get out of scope.

// B- Heap Memory : Whenevr we  declare any variable using dynamic memory allocation, then that variable get stored 
// in heap memory at run time.
// 2. The variables allocated in heap memory at run time, only get destroyed when we delete them ourselves.

