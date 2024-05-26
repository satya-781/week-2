#include <iostream>
#include <cctype>
using namespace std;
void count(string str, int &a, int &d, int &s) {
    a = d = s = 0;
    for (char ch : str) {
        if (isalpha(ch))  a++;
        else if (isdigit(ch))  d++;
             else s++;}}
int main() {
    string str;
    int a, d, s;
    cout << "Enter a string: ";
    getline(cin, str);
    count(str, a, d, s);
    cout << "Number of alphabets: " << a << endl;
    cout << "Number of digits: " << d << endl;
    cout << "Number of special characters: " << s << endl;
    return 0;
}
