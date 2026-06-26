#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    string str; getline(cin, str);
    stringstream ss(str);
    int x;
    while(ss >> x) nums.push_back(x);

    vector<vector<int>> res;
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            vector<int> temp;
            for(int k=i; k<=j; k++){
                temp.push_back(nums[k]);
            }
            res.push_back(temp);
        }
    }

    for(auto it : res){
        for(int i=0; i<it.size(); i++){
            cout<<it[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}