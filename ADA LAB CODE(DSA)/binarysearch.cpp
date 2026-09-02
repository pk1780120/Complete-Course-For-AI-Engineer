#include <iostream>
using namespace std;

int iterativeBS(int arr[], int size, int tar) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == tar) {
            return mid;
        }
        else if (tar < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1; 
}
int main() {
    int myArr[] = {10, 20, 30, 40, 50};
    int n = sizeof(myArr) / sizeof(myArr[0]);
    int key = 40;
    int result = iterativeBS(myArr, n, key);
    return 0;
}

///recusive
#include <iostream>
using namespace std;
int recursiveBS(int arr[], int low, int high, int targ) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == targ) {
            return mid;
        }
        if (arr[mid] < targ) {
            return recursiveBS(arr, mid + 1, high, targ);
        }
        return recursiveBS(arr, low, mid - 1, targ); 
    }
    return -1;
}

int main() {
    int myArr[] = {5, 12, 25, 33, 47, 50};
    int n = sizeof(myArr) / sizeof(myArr[0]);
    int key = 25;

    int result = recursiveBS(myArr, 0, n - 1, key);


    return 0;
}