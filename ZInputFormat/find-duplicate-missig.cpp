#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; getline(cin, str);

    stringstream ss(str);
    string temp;
    ss >> temp;
    vector<int> nums;
    
    int x;
    while(ss >> x){
        nums.push_back(x);
    }

    int n = nums.size();
    for(int val : nums){
        cout<<val<<" ";
    }

    return 0;
}