#include<iostream>
#include <climits> 

using namespace std;
// int main(){

     // int marks [5] = { 10,20,30,40,50};
    // cout<< marks[0]<<endl;
    //  cout<< marks[1]<<endl;
    //   cout<< marks[2]<<endl;
    //    cout<< marks[3]<<endl;
    //     cout<< marks[4]<<endl;

    // int size = sizeof(marks);
//     cout<<sizeof(marks) <<endl;




//   int size = 5;
//     int marks [size];

//     for (int i = 0; i < size; i++)
//     {
//         cin>>marks[i];
//     }
//  for (int i = 0; i < size; i++)
//  {
//     cout<<marks[i]<<endl;
//  }
 

// find the smallest aand largest number in given array
// int num[] = { 5, 15, 22, 1, -15, 24};
//   int size = 6;
//   int smallest = INT_MAX;
//    int largest = INT_MIN;
// for(int i =0; i<size; i++)
// {
//     // if(num[i] < smallest){
//     //     smallest = num[i];
//     // }
//     smallest = min(num[i], smallest);  // choice
//     largest = max(num[i] , largest) ;
// }

// cout<<"Smallest ="<<smallest <<endl;
// cout<<"Largest = "<<largest <<endl;




//call by reference
// void changesArr(int arr[], int size){
//     cout<<"In Function \n ";
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2* arr[i];
//     }
    
// }

// int main(){
//     int arr[] = {1, 2, 3};
//     changesArr(arr, 3);
//     cout<<"In Main \n";
//     for (int i = 0; i < 3; i++)
//     {
//     cout<< arr[i]<<" ";
//     }
//     cout<<endl;




//Linear Search
// int linearSearch(int arr[], int size, int target){
//  for (int i = 0; i < size; i++)
//  {
//     if(arr[i] == target){
//     return i;
//  }
// }
//  return -1;
// }
// int main(){
//     int arr [] = {4, 2, 7, 8, 1,2, 5 };
//     int size = 7;
//     int target = 5;
//     cout<<linearSearch(arr, size, target)<<endl;


//REverse AN Array ( 2 pointer Approach)
void reverseArray(int arr[], int sz){
    int start =0, end = sz-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){

  int arr [] = {1,2,3,4,5 };
    int sz = 5;
reverseArray(arr, sz);
for (int i = 0; i < sz; i++)
{
   cout<< arr[i] << " ";
}
cout<<endl;

return 0;
}