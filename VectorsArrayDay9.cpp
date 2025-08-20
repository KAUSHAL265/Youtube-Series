#include<iostream>
#include<vector>
using namespace std;


int main(){

//    vector<int>vec = {1, 2, 3};
//    vector<int>vec  (3,0);
//     cout<<vec[0]<<endl;
//    cout<<vec[1]<<endl;


// vector<char> vec = {'a', 'b', 'c', 'd'};
// cout<<"size = "<<vec.size()<<endl;
// for(char  val: vec){
//     cout<< val << endl;
// }



// vector<int>vec;
// cout<<"size before = "<<vec.size()<<endl;
// vec.push_back(25);
// vec.push_back(30);
// vec.push_back(35);
// cout<<"after ="<<vec.size()<<endl;
// vec.pop_back();
// // for(int val : vec){
// //     cout<< val <<endl;
// // }
// cout<<vec.front()<<endl;
// cout<<vec.back()<<endl;
// cout<<vec.at(1)<<endl;


vector<int>vec;

vec.push_back(24);
vec.push_back(19);
vec.push_back(882);
vec.push_back(43);
vec.push_back(32);
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
    return 0;
}