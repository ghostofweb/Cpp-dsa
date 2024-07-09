#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
        while (s < e){
            if(arr[mid] >= arr[0]){
                s = mid + 1; 
            }
            else{
                e = mid;
            }
            mid = s  + (e - s) / 2;
        }
        return s;
}

int Binarysearching(int arr[], int start, int end, int key ){
         start = start;
         end = end ; 
        while(start<=end){
            int mid = start + (end - start)/2 ;
            if(arr[mid]==key){
                return mid;
            }
            if(key > arr[mid] ){
                start = mid++;
            }
            else{ 
                end = mid--;
            }
        }
        return -1;
    }

int main(){
    int arr[5] = {7,9,1,2,3};
    int pivot = getPivot(arr, 5);
    int key = 2;
    if(key >= arr[pivot] && key <= arr[5-1]){   
        cout<<Binarysearching(arr,pivot, 4 ,key)<<endl;
    }
    else{
        cout<<Binarysearching(arr, 0, pivot -1,  key)<<endl;
    }
}
