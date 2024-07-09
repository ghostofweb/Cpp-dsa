#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){ //or (i=0;i<n-1;i++)
        //for round 1 to n-1
        bool swapped  = false;
        for(int j=0 ;j< n-i; j++ ) {   //compare each element of array with the next one. If
        if(arr[j] > arr[j + 1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
    }
    //already sorted
    if (swapped == false){
        break;
    }
}
}


int main(){
    int n,arr[n];
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  bubblesort(arr,n);
  cout << "Sorted array is : \n";
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
   }
return 0;
}