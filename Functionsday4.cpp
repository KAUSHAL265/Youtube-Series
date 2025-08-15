#include<iostream>
using namespace std;

//  int printHello(){
//     cout<<"Kaushal  \n";
//     return 3;
// }
// int main(){
//     int val = printHello();
//     cout<< "val ="<<val <<endl;




// sum of two numbers
// int sum(int a, int b) {
//     int s= a + b;
//     return s;
// }
// int main(){
//   cout<<sum(1,1);




// int minOfTwo(int a, int b){
// if(a < b){
//      return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//   cout<<"MIN ="<<minOfTwo(5, 10)<<endl;;



// sum of numbers from  1 to n
// int sumN(int n){
//     int sum =0;
//     for (int i = 1; i <=n ; i++)
//     {
//         sum+= i;
//     }
//     return sum;
    // }
// int main(){
// cout<<sumN(5)<<endl;





// int factN(int n){
//     int fact = 1;
//     for (int i = 1; i <=n ; i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
    
// }
// int main(){

// cout<<factN(5)<<endl;



//Pass BY Value
// int changeX(int x){
//     x= 2*x;
//     cout<<"x =" <<x<<endl;

// }
// int main(){
//     int x=5;
//     changeX(5);
//     cout<<"x =" <<x<<endl;



// sum of digits of a  number
int sumOfDigits(int num){
    int digSum =0;
    while(num > 0){
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }
    return digSum;
}
int main(){
    cout<<"sum = "<< sumOfDigits(2356) <<endl;
    return 0;
}