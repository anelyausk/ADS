#include <iostream>
// #include <cstdlib>
#include <array>
using namespace std;
 
// Function to find a pair in an array with minimum absolute sum
void findPair(int arr[], int n)
{
    if (n < 2)
        return;
 
    // sort the array if array is unsorted
    // sort(arr, arr + n);
 
    // maintain two indexes pointing to end-points of the array
    int low = 0;
    int high = n - 1;
 
    // min stores minimum absolute difference
    int min = INT_MAX;
    int i, j;
 
    // reduce search space arr[low..high] at each iteration of the loop
 
    // loop till low is less than high
    while (low < high)
    {
        // update minimum if current absolute sum is less
        if (abs(arr[high] + arr[low]) < min)
        {
            min = abs(arr[high] + arr[low]);
            i = low;
            j = high;
        }
 
        // optimization - pair with 0 sum is found
        if (min == 0)
            break;
 
        // increment low index if total is less than 0
        // decrement high index is total is more than 0
        (arr[high] + arr[low] < 0)? low++: high--;
    }
 
    // print the pair
    cout << "Pair found (" << arr[i] << ", " << arr[j] << ")";
}
 
// Find Pair in an Array having Minimum Absolute Sum
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
 
    findPair(arr, n);
 
    return 0;
}