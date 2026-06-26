#include <bits/stdc++.h>
using namespace std;

void subsequence(int ind, vector<int>& nums, vector<int>& temp, vector<vector<int>>& res){
    if(ind == nums.size()){
        res.push_back(temp);
        return;
    }
    //pick
    temp.push_back(nums[ind]);
    subsequence(ind+1, nums, temp, res);
    temp.pop_back();
    //not pick
    subsequence(ind+1, nums, temp, res);
}

int main() {
    string str; getline(cin, str);
    stringstream ss(str);
    vector<int> nums;
    int x;
    while(ss >> x) nums.push_back(x);

    vector<vector<int>> res;
    vector<int> temp;
    subsequence(0, nums, temp, res);

    for(auto it : res){
        for(int i=0; i<it.size(); i++){
            cout<<it[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}