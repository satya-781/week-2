#include <iostream>
#include <unordered_map>
using namespace std;
int max(int arr[], int size) {
    unordered_map<int, int> f;
    int maxCount = 0, m = -1;
    for (int i = 0; i < size; ++i) {
        f[arr[i]]++;
        if (f[arr[i]] > maxCount) {
            maxCount = f[arr[i]];
            m = arr[i];  }  }
    return m;}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i)  cin >> arr[i];
    int mo = max(arr, size);
    if (mo != -1)  cout << "Maximum occurring integer: " << mo << endl;
    else   cout << "Array is empty." << endl;
    return 0;
}
