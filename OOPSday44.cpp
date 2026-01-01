#include <iostream>
#include <string>
using namespace std;
class Teacher{
private:
double salary;
public:
    // Properties // Attributes

    // non parameterized constructor;
// Teacher(){
//     dept = " Computer Science";
// }

// parameterized constructor
Teacher(string n, string d, string s, double sal){

   name = n;
   dept = d;
   subject = s ;
   salary = sal;

}

Teacher( Teacher &orgObj){

    cout<<" Iam custom copy constructor ...\n";
    this->name = orgObj.name;
    this->dept = orgObj.dept;
    this->subject = orgObj.subject;
    this->salary = orgObj.salary;
}



    string name;
    string dept;
    string subject;
    

    // methods // member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

//settter
void setSalary ( double s){
    salary  = s;
}
//getter
double getSalary(){
    return salary;
}
void getInfo(){
    cout<<"name :" << name << endl;
    cout<< " dept :" << dept <<endl;
}
};
int main()
{

    Teacher t1 ("Kaushal", " DSA", " C++", 25000); // constructer call
  //t1.getInfo(); 
  Teacher t2(t1);// defult copy constructor  here is call
  t2.getInfo();



//     t1.name = "Kaushal Mehra";
//     t1.subject = " DSA";
//     // t1.salary = 25000;     // this is not workiing because private modifiers 
//  t1.setSalary(25000);
//  cout<< t1.getSalary()<<endl;
//     cout << t1.name << endl;
//     cout<< t1.dept << endl;
    return 0;
}