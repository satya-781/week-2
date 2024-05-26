#include <iostream>
#include <cctype>
using namespace std;
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');}
void count(string str, int &v, int &c) {
    v = 0; c = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (isVowel(ch))  v++;   
             else   c++;}}}
int main() {
    string str;
    int v, c;
    cout << "Enter a string: ";
    getline(cin, str);
    count(str, v, c);
    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << c << endl;
    return 0;
}
