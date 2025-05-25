#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2)
{
    string ans = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    int carry = 0;

    while (i >= 0 || j >= 0 || carry != 0)
    {

        int ival = (i >= 0) ? num1[i] - '0' : 0;
        int jval = (j >= 0) ? num2[j] - '0' : 0;
        int sum = ival + jval + carry;
        int val = sum % 10;
        // Prepend the digit to the result
        ans = to_string(val) + ans;
        carry = sum / 10;
        i--;
        j--;
    }

    return ans;
}

int main() {
    string num1;
    cout << "Enter num1 : ";
    cin >> num1;

    string num2;
    cout << "Enter num2 : ";
    cin >> num2;

    string result = addStrings(num1,num2);

    cout << "Addition of two Strings : " << result << endl;
    return 0;

}

