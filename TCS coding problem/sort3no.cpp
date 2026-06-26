#include <bits/stdc++.h>
using namespace std;

//3, 6, 7
void sort3no(vector<int>& nums){
    int left = 0, right = nums.size()-1;
    int mid = 0;

    while(mid <= right){
        if(nums[mid] == 3){
            swap(nums[mid], nums[left]);
            left++;
            mid++;
        }
        else if(nums[mid] == 7){
            swap(nums[mid], nums[right]);
            right--;
        }
        else mid++;
    }
}
int main() {
    string str; getline(cin, str);
    stringstream ss(str);
    int x;
    vector<int>nums;
    while(ss >> x){
        nums.push_back(x);
    }
    for(int val : nums) cout<<val<<" ";
    cout<<endl;
    sort3no(nums);

    for(int val : nums){
        cout<<val<<" ";
    }
    return 0;
}