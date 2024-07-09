#include <iostream>
#include <vector>

using namespace std;

void mergesort(int arr1[], int arr2[], int n, int m) {
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            i++;
        } else {
            
        }
    }
    while (j < m) {
        arr1[i++] = arr2[j++];
    }
}

int main() {
    int num1[6] = {1, 2, 3};
    int num2[3] = {2, 5, 6};
    mergesort(num1, num2, 6, 3);

    for (int i = 0; i < 6; i++) {
        cout << num1[i] << " ";
    }

    return 0;
}
