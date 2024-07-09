#include<iostream>
using namespace std;
class reverseArrayClass{
    public:
    void printarray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }   
        cout<<endl;
    }

    void swappingalternative(int arr[],int n){
        for(int i=0;i<n;i+=2){
            if(i+1<n){
                swap(arr[i],arr[i+1]);
            }
        

        }
    }

    int execution(){
        int even[6] = {1,2,3,4,5,6};
        int odd[7] = {1,2,3,4,5,6,7};

        swappingalternative(even,6);
        swappingalternative(odd,7);
        printarray(even,6);
        return 0;

    }
};

class uniqueElement{ //IMP FOR DUPLICATE ELEMENTS 
/* You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

Note:
Unique element is always present in the array/list according to the given condition.

meaning we have to find that single elemenet which is not being duplicate beacuse with formula we can guess that
1. its an ODD number array
2. its M element duplicate and 1 single*/
    public:
         void executionunique(){
            int arr[7] = {2, 3, 1, 6, 3, 6, 2};
            unique(arr,7);
            }

            void unique(int arr[],int n){
                int ans = 0;
                for(int i=0;i<n;i++){
                    ans = ans^arr[i];
                }
                cout<<"the unique element is "<< ans<<endl;
                
            }

 };

class oneduplicate{
    // find 1 duplicate in array
    public:
    void duplication(int arr[],int n){
        int ans = 0;
        //XOR all element
        for (int i=0;i<n;i++){
            ans = ans^arr[i];
        }
        //xor till n-1
        for (int i=0;i<n;i++){
            ans = ans^i;
        }
    }
    void executionduplicate(){
            int arr[7] = {2, 3, 1, 6, 3, 6, 2};
            duplication(arr,7);
            }

};



class multiduplicate{
    public:

      void executionmultiduplicate(){
        int a[10] = {1,2,2,4,4,5,6,7,8,8};
        multiduplicating(a,10);

    } 
    void multiduplicating(int a[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]!=a[j])continue;
                else{
                    cout<<a[i]<<endl;
                    break;
                }
            }
        }
        cout<<"these are the duplicate elements"<<endl;
    }
};

class arrayintersection{
    public:
    void executionarrayintersection(){
        int a[10] = {1,3,4,5,6,7,65,6,7,5};
        int b[7] = {1,2,4,5,6,7,2};
        intersection(a,b,10,7);
    }

    void intersection(int a[], int b[],int n,int m){
        for(int i=0;i<n;i++){
            int element = a[i];
            for(int j=0;j<m;j++){
                if(element == b[j]){
                    cout<<b[j]<<"  ";
                    break;
                }
            }            
        }
        cout<<"these are the elements whicha are common ";
    }

};

int main(){
    reverseArrayClass n;
    uniqueElement un;
    oneduplicate dup;
    multiduplicate mul;
    arrayintersection inter;
    inter.executionarrayintersection();

}