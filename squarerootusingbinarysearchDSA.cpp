#include<iostream>
using namespace std;

int binarysquare(int key) {
    if (key <= 1)
        return key;
    
    int start = 0;
    int end = key;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        long long square = (long long)mid * mid;

        if (square == key) 
            return mid;
        else if (square < key) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int key;
    cout << "Enter the number to find its square root : ";
    cin >> key;

    int result = binarysquare(key);
    cout << "Square root of " << key << " is approximately " << result << endl;

    return 0;
}
