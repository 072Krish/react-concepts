// #include<iostream>
// using namespace std;

// class person{
//     public:
//     int *salary;
//     string *name;

//     person(){
//         salary=new int(0);
//         name=new string("");
//     }
//     person(string n,int s){
//         name = new string(n);
//         salary=new int(s);
//     }
//     person(person &p){// passing object by refrence
//         name=new string(); //copy constructor to make deep copy
//         salary=new int();
//         *name=*(p.name);
//         *salary=*(p.salary);

//     }
//     void display(){
//         cout<<*name<<": "<<*salary<<endl;
//     }
// };
// int main(){
//     person p1,p2("abc",1000);
//     person p3(p2);
//     *(p2.name)="xyz";*(p2.salary)=2000;
//     p2.display();
//     p3.display();
//     return 0;
// }

// Destructor
// 1- Destructor is also a special member function as it is having same name as class name with (~) symbol
// as prefix.
// 2- They does not have any return type.
// 3- Destructors does not take any parameter (argument), so destructor cannot be overloaded.
// 4- There is only single destructor in a class.
// 5- Destructor get automatically called whenever an object gets out of scope.
// 6- Every class have its inbuilt destructor which doesnot do anything.
// 7- Destructor should always be public.


// #include<iostream>
// using namespace std;

// class vechile{
//     int speed;
//     string name;
//     public:
//     vehicle(){
//         cout<<"default constructor called"<<endl;
//     }
//     vehicle(string n, int s){
//         name=n;
//         speed=s;
//         cout<<"parameterized constructor called"<<endl;
//     }
//     ~vehicle(){
//         cout<<"destructor called"<<endl;
//     }
// };

// int main(){
//     vehicle *v1=new vehicle(); // dynamically created objects at run time
//     vehicle *v2=new vehicle("abc",1000);
//     delete v1; // deallocation(deletion) of objects
//     delete v2;
//     return 0;
// }