#include<iostream>
using namespace std;

// DECIMAL TO BINARY
// int decBinary(int decNum){
//     int ans =0, pow =1;
//     while (decNum>0)
//     {
//         int rem = decNum %  2;
//         decNum /= 2;
//          ans += (rem * pow);
//          pow *= 10;
//     }
//     return ans;
// }
// int main (){
// int decNum = 50;

// for (int i = 1; i <= 10; i++)
// {
//     cout<<decBinary(i)<<endl;
// }
// cout<< decBinary(decNum) << endl;




//BINARY TO DECIMAL 

int binToDeciaml( int binNum){
int ans =0, power =1;

while (binNum  > 0)
{
    int rem = binNum % 10;
    ans += rem * power;

    binNum /= 10;
    power *= 2;
}
return ans;

}
int main(){

cout<< binToDeciaml(101) <<endl;
    return 0;
}