#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(), v.end()
#define PI 3.14159
#define gcd(a,b) __gcd(a,b)
#define MAX_SIZE int(4e5+7)
#define MOD int(1e9+7)
#define nl '\n'
#define mn(a,b) min(a,b)
ll pre[MAX_SIZE], delta[MAX_SIZE];
array<int, 3> remainder1[MAX_SIZE];
array<int, 2> remainder2[MAX_SIZE];
vector<int> values;

/*
  - Quick Sort Algorithm
    - Time Complexity : O(N^2) In worst case
     - in best case and avg case O(N*LOGN)
    - It is efficient on large data sets.
 */
int partition(vector<int>& arr, int low, int high) {

    // Choose the pivot
    int pivot = arr[high];

    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[;ow..high] and move all smaller
    // elements on left side. Elements from low to
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// The QuickSort function implementation
void quickSort(vector<int>& arr, int low, int high) {

    if (low < high) {

        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // Recursion calls for smaller elements
        // and greater or equals elements
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}