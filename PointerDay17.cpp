#include<iostream>
#include<vector>
using namespace std;

void changeAll(int* ptr){
    *ptr = 20;      // pass sby  value
}
int main(){

    
    // int a = 10;
// int* ptr = &a;
    // int** parPtr = &ptr;
    // cout<<&ptr<<endl;
    // cout<<parPtr<<endl;


    // int a =5;
    // int *p  = &a;
    // int **q = &p;
    // cout<< *p <<endl;
    // cout<< **q <<endl;
    // cout<< p << endl;
    // cout<< *q << endl;


    // int a= 10;
    // changeAll(&a);

    // cout<<"Inside main function : "<< a << endl; // 20



    // int arr[] = {1, 2, 3, 4, 5};
    // cout<< arr << endl;
    // cout<< * arr <<endl;


    int a =10;
    int* ptr = &a;
    cout<<ptr<<endl;
   ptr = ptr + 2;
    cout<< ptr <<endl;
    return 0 ;
}