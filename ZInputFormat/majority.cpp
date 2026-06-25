#include <bits/stdc++.h>
using namespace std;

//Enter space-separeted elements: 1 2 3 2 2 4 2
int main() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    string temp;
    ss>>temp;
    ss>>temp;
    ss>>temp;
    vector<int> nums;
    int x;
    while(ss >> x){
        nums.push_back(x);
    }
    int n = nums.size();
    for(int val : nums)cout<<val<<" ";
    cout<<endl;
    sort(nums.begin(), nums.end());
    cout<<nums[n/3]<<endl;
    return 0;
}