#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; getline(cin, str);
    stringstream ss(str);
    int x;
    vector<int> nums;
    while(ss >> x){
        nums.push_back(x);
    }

    unordered_map<int,int> mp;
    for(int val : nums){
        mp[val]++;
    }
    for(int val : nums){
        if(mp[val] == 1){
            cout<<val<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}