#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findSpecialInteger(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int,int> countMap;

    for(int num : arr) {
        countMap[num]++;
    }

    for(const auto& pair : countMap) {

        if(pair.second > n/4) return pair.first;
    }

    return -1;

    }

int main() {
    vector<int> arr = {2,3,4,8,8,8,8,9,12};
    int specialInt = findSpecialInteger(arr);

    if(specialInt == -1) {
        cout << "No Element Occurs More than 25%" << endl;
    }

    else {
        cout << "Element Occuring More than 25% : " << specialInt << endl;
    }

    
    return 0;
}