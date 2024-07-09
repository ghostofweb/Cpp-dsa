#include <iostream>
#include <vector>

using namespace std;


void mergesorted(int arr1[],int arr2[],int n,int m,int arr3[]){
    int k = 0;
    int i = 0 ;
    int j = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k++] = arr1[i++];
            }
            else{
                arr3[k++] = arr2[j++];
            }
        }
 while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<n){
        arr3[k++] = arr2[j++];
    }
    }
   

int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {};
    mergesorted(arr1,arr2,5,3,arr3);
    for(int i=0;i<8;i++){
        cout<<arr3[i]<<" ";
    }

}