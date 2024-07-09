/*Given an array 'arr' of integer numbers , where 'arr[i]' represents the number of pages in the i-th book. There are 'm' number of students and the task is to allocate all the books to their students. Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.

Example:
Let's consider 'n=4' (number of books ) and 'm=2' (number of students).
'arr = {10, 20, 30, 40}'.
*/

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n, int m , int mid){
    int studentCount = 1;
    int pagesum = 0;

    for (int i=0;i<n;i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];

        }
      
    }
      return true;
}
int allocateBook(int arr[], int n, int m){
    int s = 0;
    int sum = 0 ;
    int ans = -1;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    while(s <= e) {
        int mid = s + (e - s )/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

  return ans;
}

int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<  "Minimum number of books to be allocated is :"<<allocateBook(arr,n,2);
}
