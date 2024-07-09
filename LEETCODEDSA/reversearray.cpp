#include <iostream>
#include <vector>

using namespace std;
class reversearray{
    public:

void printarray(vector<int> &arr,int n){
    for(auto i:arr){
        cout<<i<<" ";
    }
}
void reversee(vector<int> &arr,int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

}
    
int reversearrayexecute(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // Before reversing
    cout << "Before reversing: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    reversee(v, v.size());
    printarray(v,v.size());
    return 0;
}
};





int main(){
    reversearray r;
    r.reversearrayexecute();
}