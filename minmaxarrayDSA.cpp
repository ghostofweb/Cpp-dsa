#include<iostream>
using namespace std;

int getmin(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min = num[i];
        }
    }
        return min;

}

int getmax(int num[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
        return max;

}

int main(){
        
        int size;
        cout<<"enter the number of elements"<<endl;
        cin>>size;
        int num[100];
        for(int i=0;i<size;i++){
            cout<<"enter the element"<<i+1<<" ";
            cin>>num[i];
        }
    cout<<"the maximum is"<<getmax(num,size)<<endl;
    cout<<"the maximum is"<<getmin(num,size)<<endl;
}