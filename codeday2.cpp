#include<iostream>
using namespace std;

int main(){
//    int n = -45;

//    if(n >= 0){
//     cout<<"n is positive \n";
//    }else {
//     cout<<"n is negative \n";
//    }


// int n ;
// cout<<"Enter Number :";
// cin>>n;

// if(n%2 == 0){
//     cout<<"number is even \n";

// }else{
//     cout<<"number is odd \n";
// }


//loop
// int n = 20;
// int count = 1;
// while(count <= n ){
//     cout<<count<< " ";
//     count++ ;
// }

// for loop
// int i , n =50;
// for (i = 1 ; i <= n ; i++)
// {
//      cout<<i<<" ";
// }


//question - sum of numbers from 1 to n.
// int n = 3, sum =0;

// for(int i=0; i <= n; i++){
//     sum += i;

// }
// int n = 3, sum = 0, i = 1;
// while (i <= n)
// {
//     sum += i;
//     i++;
// }


//  cout<< "sum = "<< sum << endl ;

// sum of odd numbers

// int n = 10;
// int oddSum =0;
// for (int i = 1 ; i <=n ; i++)
// {
//     if(i % 2 != 0) {
//         oddSum += i;
//     }
// }

// int n = 10, oddSum = 0, i = 1;
// while (i <= n)
// {
//     if(i % 2 != 0){
//         oddSum += i ;
    

//     }
//        i++;
// }


// cout<<"odd Sum ="<< oddSum <<endl;



// do while loop

// int n =10;
// int i =1;
// do
// {
//     cout<< i << " ";
//     i++;
// } while (i <= n);
// cout<<endl;


//Question number is prime or non prime

int n = 7;
bool isPrime = true;

for (int i = 2; i <= n-1; i++){
    if(n % i == 0){
     isPrime = false;
     break;
}
}

 if (isPrime == true){
    cout<< "prime number \n";
 } else{
    cout<<"non prime number \n";
 }


    return 0;
}