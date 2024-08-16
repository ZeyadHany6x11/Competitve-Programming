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
 - Bubble Sort Algorithm
   - Time Complexity : O(n^2)
   Total no. of passes: n-1
   Total no. of comparisons: n*(n-1)/2
*/
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped then the array is already sorted
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}