#include <iostream>
#include <iomanip>
#include"student.h" 

using namespace std;

inline void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}
//Bubble sorting
void scoreSort(student a[20], int x){
  int i,j,c;
  int arr[20];

  for(c=0;c<=x;c++){ 
  arr[c]=a[c].getScore();
    }
  cout<<"\nScore Sort\n"; 
    for (i = 0; i < x - 1; i++)//
        for (j = 0; j < x - i - 1; j++)//reduce the no. of pairs that is needed to check
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){//loop to print out the info from least to most
   
    cout<<i+1<<" ";
      (a+i)->print_all();  
  }
}