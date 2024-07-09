#include <iostream>
#include <vector>

using namespace std;

void movezero(int arr[],int n){
    int i = 0;
    for(int j = 0;j<n;j++){
    if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
    }
}
}

int main(){
    int arr[6] = {0,1,0,3,12,0};
    movezero(arr,6); 
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" "; 
        
}
return 0; 
}