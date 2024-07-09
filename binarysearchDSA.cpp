//only used in sorted order meaning increasing or decreaing order
// better then linear for ordered array

// in binarysearch
/*  

    0  1  2  3   4
    [3 ,5 ,9 ,13 ,27 ]

for example, we searching for 13
so,
step 1 : First we access the mid element, we compare it with the key;
        like mid = first+last/2
            if(its there):
            print(key);
            else{

step 2 : now we have left side and the right of the array
and we see 13 > 9

soo we will search ON THE RIGHT SIDE
      3   4
     [13 ,27 ]

soo here 3+4/2 = 3

key is found...

its a way to see the middle value, if key is lower then the value, we see the left side
if key is bigger then the middle element, we go on the right side

process goes on till we find the element

*/

#include<iostream>
using namespace std;
    int binarysearch(int arr[],int size,int key){
        int start = 0;
        int end = size - 1 ;
        int mid = start + (end - start)/2 ; 
        // we can also use {start+end/2} ,, but here we are using this
        // to optimize it so it can be in range of 1 to 2^31
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            // go the the right side cuz key is big
            if(key > arr[mid] ){
                start = mid++;
            }
            else{ //go to left side cuz key is small
                end = mid--;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }

    int main(){
        int even[6] = {2,4,6,7,8,10};
        int odd[7] = {2,3,4,5,6,8,10};

        int index = binarysearch(even,6,8);
        cout<< "index of 8 is "<< index+1 << endl;
        
    }

/*linear vs binary
In linear serach , if we Have 1000 values in an array, the worst case will come 1000 iteration
the complexity is huge [O(n)]

here in binary search,IF WE HAVE SORTED ARRAY
then we can perform it much faster
example:
1000 size/2 = 500
500/2 = 250
250/2 = 125
125/2 =62
62/2 = 31
31/2 = 15
15/2 = 7
7/2 = 3
3/2= 1
only in 10 comparision we found the data if its there or nah
in, linear we did 10000

array is same,but for binary we need sorted data,
complixity [O(logn)]



*/