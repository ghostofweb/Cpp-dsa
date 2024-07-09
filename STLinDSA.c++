#include<iostream>
#include<array> //array functions
#include<vector> //dynamic vector and array we say 
using namespace std;

int main(){
    // how to create array
    array<int,4> a = {1,2,3,4};
    // std::array<datatype,size>variable name = {1,2,3,4}
    int size = a.size(); //to find the size of an array
    for(int i = 0;i<size;i++){
        std::cout<<a[i]<<endl;
    }

    cout<<"the elemnt at 3rd position is "<<a.at(2)<<endl;
    cout<<"checking if its empty or nah " << a.empty()<<endl;
    //now to get first and last element , we use back and front

    cout<<" the first element is " << a.front()<<endl;
    cout<<" the last element is " << a.back() << endl;
    /*now comes vector, its more like dynamic  arrays
    where we make vector of a size , and if we exceed the element to more then the size
    then the vector makes a new vector double size of the old vector and shift all the elements to the new vectoer
    and dump the old one, it gives us the flexibility to create and shrink array dynamically*/

    vector<int> v;// when we create vector, its inital size is zero;
    //vector <datatype> varibale name;
    cout<<"the capacity "<<v.capacity()<<endl;
    v.push_back(5); //adds elements in the end of vector
    cout<<"the capacity "<<v.capacity()<<endl;
    v.push_back (6);
     cout<<"the capacity "<<v.capacity()<<endl;
    v.push_back(5);
     cout<<"the capacity "<<v.capacity()<<endl;
    v.push_back(5);
     cout<<"the capacity "<< v.capacity()<<endl;
    v.push_back(5);
     cout<<"the capacity "<<  v.capacity()<<endl;
     // as here, the capacity after 2 , went double 4, after 4 went 8 , then 16,32....n^2
    // can use .at as well
    cout<<"the value at 1st pos is "<<v.at(0)<<endl;
    //can use .font and .back as well
    cout<<"the first element is "<<v.front()<<endl;
    cout<<"the first element is "<<v.back()<<endl;

    //// here we can create vector with given size as well
    vector<int>a(5,1);
    // this will give us a vector of size 5 and all elemnts are 1
    // so output will be 1 1 1 1 1
    for (auto &i : a){
       cout<<i<<" ";
   }
   cout<<endl;

   // another way to do it
   vector<int> b = {1,2,3,4};
   //this will give us a vector of size 4 and values 1,2,3,4
   //so output will be 1 2 3 4
   for (const auto &i:b){
      cout<<i<<" ";
   }
   cout<<endl;
}