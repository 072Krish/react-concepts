// Dynamic Constructors - Whenever we delete dynamic memory within destructor, then that destructor
// is known as dynamic constructor.

// #include<iostream>
// using namespace std;

// class person{
//     int *age;
//     string *name;
//     public:
//     person(string n, int a){
//         age=new int(a);
//         name= new string(n);
//     }
//     ~person(){
//         delete age;
//         delete name;
//         cout<<"destructor called";
//     }
// };
// int main(){
//     person p1("abc",25);
//     return 0;
// }

// Constant Data Members - are members which can't be changed after intialization.
// 2- each object will have seperate copy of constant data member.
// 3- constant data members can only be intialized by using constructor intializer list.

// #include<iostream>
// using namespace std;

// class student{
//     const int roll;
//     const string name;
//     public:
//     student(int r, string n):roll(r),name(n){   //constructor intializer 
        
//     }
//   void display(){
//     cout<<roll<<": "<<name<<endl;

//   }

// };
// int main(){
//     student s1(1028,"krish");
//     s1.display();
//     return 0;
// }

// Write a c++ program that count how many object are created

// #include<iostream>
// using namespace std;

// class Test{
//     public:
//     static int count;
//     Test(){
//         count++;
//     }
// };
// int Test::count=0;
// int main(){
//     cout<<"total object is : "<<Test::count<<endl;
//     Test t1,t2,t3,t4;
//     cout<<"total object is : "<<Test::count<<endl;
// }


// #include<iostream>
// using namespace std;

// class Test{
//     public:
//     static int count;
//     Test(){
//         count++;
//     }
//     Test(string msg){
//         cout<<"message is : "<<msg<<endl;
//         count++;
//     }
// };
// int Test::count=0;
// int main(){
//     cout<<"total object is : "<<Test::count<<endl;
//     Test t1,t2,t3,t4;
//     Test ob("Hello");
//     cout<<"total object is : "<<Test::count<<endl;
// }

// Friend Function
// 1. Using this we can make any function as a friend of any class,so that it can access private members of that class.
// 2. Functions can be of two scenarios
// a: Global Function - Functions which are not a member of any class are known as global functions.
// b. Member - Functions which are member of any class are known as member function.





