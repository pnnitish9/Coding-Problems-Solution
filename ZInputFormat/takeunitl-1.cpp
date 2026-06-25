#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int x;

    while(cin>>x && x != -1){
        nums.push_back(x);
    }

    for(int val : nums){
        cout<<val<<" ";
    }
    return 0;
}