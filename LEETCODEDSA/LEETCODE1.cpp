#include<iostream>
#include <cstdint>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) { //it takes every digit and make product and sum of it, and then we subtract product with sum
        int product = 1;
        int sum= 0 ;
        while(n!=0){
            int number = n%10;
            product = product *number;
            sum = sum + number;
            n = n/10;
        }
        return product - sum;
    }

    int hammingWeight(uint32_t n) { // count the numebr of 1 bits in an variable
        int count = 0;
        while (n!=0){                                                  
            if(n&1){                                                            
                count++;
            }
            n = n>>1;
        }
        return count;
    }
    int reverse(int x){ // we also have range to [2^31]
        int ans;
        while(x!=0){
            int digit = x%10;
            if ( (ans>INT_MAX/10) || (ans <INT_MIN/10)){
                return 0;
            }
            ans = (ans*10) + digit;
           x /=10;
    }
        return ans;
}
};


int main(){
    Solution ab;
    int result = ab.subtractProductAndSum(234);
    cout<<result<<endl;
    return 0;
}