#include <bits/stdc++.h>
using namespace std;
//9
//put 1 1
// get 1
int main() {
    unordered_map<int, int> mp;
    int n; cin>>n;
    cin.ignore();
    vector<int>res;
    while(n--){
        string str;
        getline(cin, str);

        stringstream ss(str);
        string opr;
        ss>>opr;

        if(opr == "put"){
            int key, val;
            ss>>key;
            ss>>val;
            mp[key] = val;
        }
        else if(opr == "get"){
            int key;
            ss>>key;
            res.push_back(mp[key]);
        }
    }

    for(int val : res){
        cout<<val<<" ";
    }
    return 0;
}