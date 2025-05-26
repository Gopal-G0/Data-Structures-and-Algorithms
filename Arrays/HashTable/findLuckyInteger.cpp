#include<bits/stdc++.h>
using namespace std;

int findLuckyInteger(vector<int>& arr) {
    int largestLuckyInt = -1;
    int luckyInt = 0;
    unordered_map<int, int> freqMap;

    for (int num : arr) {
        freqMap[num]++;
    }

    for (const auto& pair : freqMap) {
        if (pair.first == pair.second) {
            luckyInt = pair.first;

            if (luckyInt > largestLuckyInt) {
                largestLuckyInt = luckyInt;
            }
        }
    }

    return largestLuckyInt;
}

int main() {
    vector<int> arr = {1,2,2,3,3,3,4,4,4,4,5,6};
    int largestLuckyInt = findLuckyInteger(arr);

    cout << "Largest Lucky Number : " << largestLuckyInt << endl;

    return 0;
}