#include <iostream>
using namespace std;

int coc(int arr[], int size, int num) {
    int c = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            c++;
        }
    }
    return c;
}

int main() {
    int size, num;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number to count occurrences of: ";
    cin >> num;

    int occ = coc(arr, size, num);
    cout << "The number " << num << " is there " << occ << " times in the array." << endl;

    return 0;
}
