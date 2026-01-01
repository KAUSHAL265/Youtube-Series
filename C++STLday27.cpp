#include<iostream>
#include<vector>
#include<list>
#include<map>
using namespace std;
int main(){
    // vector<int>vec;
    // vec.push_back(10);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;


//     list<int> l;
//     l.push_back(10);
//     l.push_back(20);
//     l.push_front(100);


//     for(int val : l){
//         cout<<val <<" ";

//     }
// cout<<endl;


map<string, int> m;

m["TV"] = 100;
m["laptop"] = 200;
m["cycle"] = 300;

for(auto p: m){
    cout<<p.first <<" "<<p.second << endl;
}

if(m.find("camera") != m.end()){
    cout<<"found \n";

}
else{
    cout<<"not found \n";
}
    return 0;
}