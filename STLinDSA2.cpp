#include<iostream>
#include<array> //array functions
#include<vector> //dynamic vector and array we say 
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

void dequee(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(10);
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"the front element of deque is"<<d.front()<<endl;
    cout<<"the back element of deque is" << d.back()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size of deque"<<d.size();
    for(int i:d){
        cout<<i<<endl;
    }
}

void linklist(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    for(int i:l){
        cout<<i<<" ";
    }
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
}
 
void stacks(){
    stack<string>s;
    s.push("sahiljeet");
    s.push("gigger");
    s.push("nigger");
    cout<<s.top()<<endl;

}


void queuee(){
std::queue<string> q;
q.push("sahiljeet");
q.push("singh");
q.push("kalsi");
cout<<q.front()<<endl;


}

// most important priority queue

void priorityqueue(){
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>>mini;//to create min heap
    maxi.push(1);
    maxi.push(2);
    maxi.push(10);
    maxi.push(9);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    mini.push(1);
    mini.push(10);
    mini.push(20);
    mini.push(9);
    mini.push(120);
    mini.push(99);
    int m=mini.size();
    for(int i=0;i<n;i++){
        cout<< mini.top()<<endl;
        mini.pop();
    }

}

void sets(){
    set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(10);
    s.insert(5);
    for(int i:s){
     cout<<i<<endl;
    }
    }
//mapping same as python, here its sorted as well
void mapping(){
    map<int,string> m;
    m[1] = "sahiljeet";
    m[3] = "kalsi";
    m[2] = "singh";
    
    m.insert({5,"lord"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"before erase"<<endl;
    m.erase(2);

      m.insert({5,"lord"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"after erase"<<endl;

    cout<<m.count(-1)<<endl;
}

int main(){
    mapping();
}