#include<iostream>
#include<conio.h>
using namespace std;
/*
IN THIS , THE 'ROW' or 'I' is used for the rows side and col or j for column side, where when we make while loop for each of them 
int main(){                         
*
**
***
****
*****
    int n;
    cin>>n;
    int row = 1;
    while (row<=n){
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}
*/


/*
1
22
333
4444
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;

    }

}
*/

/*
1
2 3
4 5 6
7 8 9 10
int main(){
    int n;
    cin>>n;
    int count = 1;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<count <<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}
*/

/*
1 
2 3 
3 4 5
4 5 6 7
5 6 7 8 9

int main(){
    int n;
    cin>>n;
    int row =1;
    int value;
    while(row<=n){
       int col =1 , value = row;
       while(col<=row){
        cout<<value<<" ";
        value++;
        col++;
       }
       cout<<endl;
       row++;
    }
}

*/


/*
1
2 1
3 2 1
4 3 2 1
int main(){
    int n;
    cin>>n;
    int row =1;
    int value;
    while(row<=n){
       int col =1 , value = row;
       while(col<=row){
        cout<<value<<" ";
        value--;
        col++;
       }
       cout<<endl;
       row++;
    }
}
*/


/*
AAAA
BBBB
CCCC
DDDD


int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        int col =1;
        while(col <=n){
            char ch ='A'+row-1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}
*/
/*
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        int col =1;
        while(col <=n){
            char ch ='A'+col-1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}

*/