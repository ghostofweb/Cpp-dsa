#include<iostream>
using namespace std;
/*here we have an array where we have elment
[1,2,3,3,5]
we here need to find the first occurence and the final occurence
to find first occurence we find to left side,
same logic, difference is when we find the key
we put mid value in ans and make end mid - 1 
and to find right side
we make start =  mid ++*/
class firstandlastoccurence { 
public:
    int binarySearchFirst(int arr[], int size, int key) {
        int start = 0;
        int end = size - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key) {
                ans = mid;
                end = mid - 1;
            }
            else if (key > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

        int binarySearchlast(int arr[], int size, int key) {
        int start = 0;
        int end = size - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == key) {
                ans = mid;
                start = mid + 1;
            }
            else if (key > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }




    void executefirstandlast() {
        int even[5] = {1, 2, 3, 3, 5};
        int key = 3;
        int firstOccurrence = binarySearchFirst(even, 5, key);
        int lastoccurrence = binarySearchlast(even,5,key );
        cout << "the first occurrence of " << key << " is at index " << firstOccurrence << endl;
        cout << "the first occurrence of " << key << " is at index " << lastoccurrence << endl;
    }
};
/*[1,2,3,3,3,3,5]
find the number of occurence
its easy to find it with linear search, just brute force and count the number of occurence
but here we want to find in binary search to less the complexity*/
class numberofoccurence{
    public:
    int occurence1(int arr[],int size,int key){
        int ans = -1;
        int start= 0;
        int end = size - 1;
        int mid =  start + (end - start)/2;
        while(start<=end){
            if(arr[mid]==key){ 
                ans = mid;
                //we found the element so now we have to go left side till we don't get
                end =  mid - 1;
            }
            else if(key>arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end-start)/2;
    }
    return ans;
}
    int occurencelast(int arr[],int size,int key){
        int ans = -1;
        int start= 0;
        int end = size - 1;
        int mid =  start + (end - start)/2;
        while(start<=end){
            if(arr[mid]==key){ 
                ans = mid;
                //we found the element so now we have to go left side till we don't get
                start =  mid + 1;
            }
            else if(key>arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end-start)/2;
    }
    return ans;
}
    void executenumberofoccurence(){
        int arr[7] = {1,2,3,3,3,3,5};
        int answer = occurencelast(arr,7,3) -  occurence1(arr,7,3) + 1;
        cout<<answer<<endl;

    }
};

/*PEAK INDEX IN MOUNTAIN ARRAY
check the  apple notes
sahiljeetsinghkalsi id
pass: who u love the most*/
class PeakIndexInMountainArray{
    
};
int main() {
    firstandlastoccurence obj;
    numberofoccurence  numobj;
    numobj.executenumberofoccurence();
    return 0;
}
