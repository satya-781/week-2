#include <iostream>
using namespace std;

int main() {
    int s1, s2;
    cout << "Enter the size of the first array: ";
    cin >> s1;
    cout << "Enter the size of the second array: ";
    cin >> s2;

    int arr1[s1], arr2[s2];

    cout << "Enter " << s1 << " elements for the first array: ";
    for (int i = 0; i < s1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter " << s2 << " elements for the second array: ";
    for (int i = 0; i < s2; ++i) {
        cin >> arr2[i];
    }

    int s3 = s1 + s2;
    int arr3[s3];

    for (int i = 0; i < s1; ++i) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < s2; ++i) {
        arr3[s1 + i] = arr2[i];
    }

    cout << "Merged array in reverse order: ";
    for (int i = s3 - 1; i >= 0; --i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
