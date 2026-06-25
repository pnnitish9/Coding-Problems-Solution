#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int x;

    while(cin>>x){
        nums.push_back(x);
    }

    for(int n : nums){
        cout<<n<<" ";
    }
    return 0;
}