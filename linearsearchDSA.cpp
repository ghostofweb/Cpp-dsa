#include<iostream>
using namespace std;
//basics like linear search, reverse of array
class linear{
    public:
            void printarray(int arr[],int n){ //common function to print arrays  
                    for(int i=0 ;i<n ;i++){
                        cout<<arr[i]<<" "; 
                    }
            }

            void reverse(int arr[],int n ){ 
                int start = 0;
                int end = n-1;

                while(start<=end){
                swap(arr[start],arr[end]);
                start++;
                end--; 
                }
            }
           
            bool search(int arr[],int size,int key){ //BLUAAAYYYYYYYY
                for (int i=0;i<size;i++){
                    if(arr[i] == key){
                        return 1;
                    }
                }
                return 0;
            }



            int linearsearch(){

                int arr[10] = {5,7,-2,22,10,0,5,14,3,1};
                cout<<"enter the key to search"<<endl;
                int key;
                cin>>key;

                bool found = search(arr, 10, key);

                if(found){
                    cout<<"the key element is present"<<endl;
                }
                else{
                    cout<<"the key element is absent"<<endl;
                }

            }
            int reversearray(){
                int arr[6] = {1,4,0,3,6,1}; 
                int brr[6] = {2,6,8,9,2,1};

                reverse(arr,6);
                reverse(brr,6);

                printarray(arr,6);
                printarray(brr,6);
            }
};

int main(){
    linear ln;
    ln.reversearray();
    return 0;
}