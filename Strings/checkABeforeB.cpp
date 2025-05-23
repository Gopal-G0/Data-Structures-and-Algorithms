#include <bits/stdc++.h>
using namespace std;

bool checkString(string s) {

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'b' && s[i + 1] == 'a')
        {
            return false;
        }
    }

    return true;

}

int main() {
    string str;
    cout << "Enter the string : ";
    cin >> str;

    if(checkString(str)) {
        cout << "True" << endl;
    }

    else {
        cout << "False" << endl;
    }

    return 0;
}