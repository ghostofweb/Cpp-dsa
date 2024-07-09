#include<iostream>
using namespace std;
//doing selection sort

int selectionsort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int minindex = i;
        //find the minimum element in remaining unsorted part.
        for(int j=i+1;j<n;j++ ){
            if(arr[minindex] > arr[j]){
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}


int main(){ //O(n)
    int n,arr[n];
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  selectionsort(arr,n);
  cout << "Sorted array is : \n";
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
   }
return 0;
}
