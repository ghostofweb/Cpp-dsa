#include<iostream>
using namespace std;

int selectionsort(int arr[], int n){     //O(n^2)
    for  (int i = 0; i < n; i++){
       int  minindex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[minindex],arr[i]);
    }
}

int bubblesort(int arr[], int n){ //O(n^2)
    for(int i=0 ; i<n ; i++){
        bool swapping = false;
        for(int j = 0; j< n-i-1;j++){
            if(arr[j] > arr[j+1]){
                // Swap arr[j] and arr[j+1]
                swap(arr[j],arr[j+1]);
                swapping = true;
            }
        }
        if (swapping == false){
            break;
        }
    }
}


int main(){
    int arr[] = {5,4,3,8,9};
    selectionsort(arr,5);
    cout<<"Sorted array: ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}