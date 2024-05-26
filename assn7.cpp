#include <iostream>
using namespace std;
void move(int arr[], int s) {
    int l = 0, r = s - 1;
    while (l <= r) {
        if (arr[l] < 0)   l++;
         else if (arr[r] < 0) {
            swap(arr[l], arr[r]);  l++; r--;
        } else   r--;  }}
int main() {
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    int arr[s];
    cout << "Enter " << s << " elements of the array: ";
    for (int i = 0; i < s; ++i) cin >> arr[i];
    move(arr, s);
    cout << "Array after moving negative elements to one side: ";
    for (int i = 0; i < s; ++i) 
        cout << arr[i] << " ";  cout << endl;
    return 0;
}
