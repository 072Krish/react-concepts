// #include<iostream>
// using namespace std;

// In c++, we can allocate memory dynamically at run time using new operator (keyword)
// which will get allocated in heap memory.
// new operator return the address of dynamically allocated heap memory.

// int main(){
//     int a; // normal variable got space in stack memory.
//     int *p= new int();
//     int *p1= new int(5);
//     string *pp= new string();
//     string *p2= new string("hello");
//     cout<<*p<<endl;
//     cout<<*p1<<endl;
//     cout<<*pp<<endl;
//     cout<<*p2<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int*fun(){
//     int *a=new int(5);
//     delete a;
//     return a;
// }
// int main(){
//     int *p=fun();
//     cout<<*p;
//     return 0;
// }


// Shallow copy - Whenever we make changes in one variable the changes got automatically got applied to copied variable
//or vice versa    
// Deep Copy - Whenever we make changes to one variable, the changes doesn't applied to copied variable or vice versa

// #include<iostream>
// using namespace std;

// int main(){
//     int *a=new int(5);
//     int *b=a; // shallow copy
//     cout<<*a<<endl<<*b<<endl;
//     *b=10;
//     cout<<*a<<endl<<*b;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int *a=new int(5);
//     int *b=new int(); // new memory location to make deep copy 
//     *b=*a; //copy only value
//     cout<<*a<<endl<<*b<<endl;
//     *b=10;
//     cout<<*a<<endl<<*b;
//     return 0;
// }

//Dynamic Constructor
//the constructor in which dynamic memory is allocated is know as dynamic constructor

// #include<iostream>
// using namespace std;

// class person{
//     int *roll;
//     string *name;
//     public:
//     person(){
//         roll = new int(0);
//         name = new string("");
//     }
//     person(int r, string s){
//         roll = new int(r);
//         name = new string(s);
//     }
//     void display(){
//         cout<<*roll<<": "<<*name<<endl;
//     }
// };
// int main(){
//     person p1,p2(1,"ram"),p3(2,"shyam");
//     p1.display();
//     p2.display();
//     p3.display();
//     return 0;
// }

// Copy Constructor - It is used to make copy of one object to another object.
// 2- There is an inbuilt copy constructor in each and every class which works fine for normal data members.
// 3- When we use dynamic memory allocation that inbuilt copy constructor will provide shallow copy.
// 4- To create deep copy we require to write our own copy constructor 

// #include<iostream>
// using namespace std;

// class person{
//     public:
//     string name;
//     int salary;
//     person(){
//         name="";
//         salary=0;
//     }
//     person(string n,int s){
//         name = n;
//         salary=s;
//     }
//     void display(){
//         cout << name<<": "<<salary<<endl;
//     }

// };
// int main(){
//     person p1,p2("ram",1000);
//     person p3(p2);  // calls copy constructor 
//     p2.display();
//     p3.display();
//     p3.name="shyam";
//     p2.display();
//     p3.display();

// }


#include<iostream>
using namespace std;

class person{
    public:
    string *name;
    int *salary;
    person(){
        name=new string("");
        salary=new int (0);
    }
    person(string n,int s){
        name = new string(n);
        salary=new int (s);
    }
    void display(){
        cout << *name<<": "<<*salary<<endl;
    }

};
int main(){
    person p1,p2("ram",1000);
    person p3(p2);  
    p2.display();
    p3.display();
    *(p3.name)="shyam";
    p2.display();
    p3.display();
}
