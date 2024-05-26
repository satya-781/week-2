#include <iostream>
using namespace std;
void copy(int s[], int d[], int a) {
    for (int i = 0; i < a; ++i) {
        d[i] = s[i]; }}
int main() {
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;
    int s[a], d[a];
    cout << "Enter " << a << " elements of the array: ";
    for (int i = 0; i < a; ++i) {
        cin >> s[i]; }
    copy(s, d, a);
    cout << "Result after copying: ";
    for (int i = 0; i < a; ++i) {
        cout << d[i] << " "; }
    cout << endl;
    return 0;
}
