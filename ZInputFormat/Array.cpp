//1 2 3 4 5 6 7 8 9

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    stringstream ss(str);
    int x;
    vector<int>nums;

    while(ss >> x){
        nums.push_back(x);
    }

    for(int n : nums){
        cout<<n<<" ";
    }
    return 0;
}