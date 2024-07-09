#include<iostream>
using namespace std;
//to check the theory of it, check apple notes
int mountainCheck(int arr[],int size){
    int start = 0;
    int end  = size -1 ;
    int mid = start + (end - start)/2;
    while (start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end -start)/2;
    }
    return start; // check notes see why we send start , cuz at the end, start value is on the peak
}

int main(){
    int arr[4] = {3,4,5,1};
    int answer = mountainCheck(arr,4);
    cout<<arr[answer];
}