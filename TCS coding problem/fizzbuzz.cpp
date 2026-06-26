#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    cin.ignore();
    string str; getline(cin, str);
    for(char &ch : str){
        if(ch == '[' || ch == ']') ch = ' ';
    }
    stringstream ss(str);
    vector<int> nums;
    int x;
    while(ss >> x) nums.push_back(x);

    for(int val : nums){
        if(val % 3 == 0 && val%5 == 0) cout<<"ThreeFive ";
        else if(val%3==0) cout<<"Three ";
        else if(val%5==0) cout<<"Five ";
        else cout<<val<<" ";
    }
    

    return 0;
}