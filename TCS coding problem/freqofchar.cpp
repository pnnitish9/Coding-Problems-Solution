#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    unordered_map<char, int> mp;

    for(char c : str)mp[c]++;
    int l = 0;
    cout<<"{";
    for(char ch : str){
        cout<<"'"<<ch<<"': "<<"'"<<mp[ch]<<"'";
        if(l < str.size()-1) cout<<",";
        l++;
    }
    cout<<"}";
    return 0;
}