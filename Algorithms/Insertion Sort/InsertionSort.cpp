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
 - Insertion Sort Algorithm
   - Time Complexity : O(n^2)
 */
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver method
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
