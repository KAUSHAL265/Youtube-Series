#include<iostream>
#include<string>
using namespace std;

// class Print{


// public:
//     void show(int x){
//         cout<<" int : "<< x << endl;
//     }


//     void show(char x){

//         cout<<"  char :"<< x << endl;
//     }
// };


class Parent{
    public:
    void  getInfo(){
        cout<<"parent class \n";
    }
    virtual void hello(){
        cout<< " hello from parent \n";
    }
};

class Child : public Parent{
     public:
     void getInfo(){
        cout<<" child clas \n";
     }

     virtual void hello(){
        cout<< " hello fom chid \n";
     }
};


int main(){

// Print p1;

// thissis a example of functiion overloading 
// p1.show( 10); // due to value 10 teh interger function is called
// p1.show('A'); // due to cjharacter A  the char function is called




Child c1;
c1.getInfo();
c1.hello();
    return 0;
}