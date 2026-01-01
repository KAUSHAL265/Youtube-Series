#include<iostream>
#include<string>
using namespace std;


void fun(){

 static   int x =0;   //  if write static fuction then the vale is increased 
    cout<< " x :" << x<< endl;
    x++;
}


int main(){

fun();
fun();
fun();
fun();

    return 0;
}