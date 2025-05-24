#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str) {

    int s = 0;
    int e = str.size() - 1;

    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
}

int main() {

    string str;
    cout << "Enter String to reverse : ";
    cin >> str;

    reverseString(str);
    cout << "Reversed String : " << str << endl;
    return 0;
}