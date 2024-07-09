#include<iostream>
using namespace std;
class forloopDSA{
    public:
    void fibonacci(){
        int a = 0,b = 1,c,n;
        cout<<"enter the number till you want the series"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<a<<"    ";
            c=a+b;
            a=b;
            b=c;
        }

    }
    void primenumber(){
        int n,c = 0;
        cout<<"enter the number to check its prime or not"<<endl;
        cin>>n;
        bool isprime =1;
        for(int i=2;i<n;i++){
            if(n&i == 0) {
                isprime = 0;
                break;
            }
        if(isprime == 0){
            cout<<"its not a prime number"<<endl;
        }
        else{
            cout<<"its a prime number"<<endl;
        }
    }
}
    void continuefun(){
        for(int i= 0;i<5;i++){
            cout<<'hi'<<endl;
            cout<<"hey"<<endl;
            continue; //here we understood that continue goes to next iteration and the rest of the code below wont be executed

            cout<<"bahan reply toh kar"<<endl;
        }
    }

};

int main(){
    forloopDSA dsa;
    dsa.primenumber();
}