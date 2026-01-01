#include<iostream>
#include<string>
using namespace  std;

class Person{

    public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name; 
    //     this->age = age;
    // }

    Person(){

    }

};


class Student : public Person{

    public : 
    int rollno;


    void getInfo(){
        cout<<" name : " << name << endl;
        cout<< " age : " << age<<endl;
        cout<< " rollno: "<<rollno<<endl;
    }
};

int main(){

Student s1;
s1.name = "kaushal";
s1.age = 22;
s1.rollno = 882;

s1.getInfo();

    return 0;
}
