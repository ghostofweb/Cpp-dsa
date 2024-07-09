#include<iostream>
using namespace std;

int intertionsort(int arr[],int n){
    int i,j,temp;
    for(i = 1; i<n-1 ; i++)
      temp = i;
      j = i - 1;
      for (;j>=0;j--){
        if(arr[j] >  arr[j+1]){
            //swap elements
            arr[j+1]  = arr[j];
            }else
                break;
      }
      arr[j+1] = temp;
 }
