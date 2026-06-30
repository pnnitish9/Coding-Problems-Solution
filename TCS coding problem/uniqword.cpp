#include <bits/stdc++.h>
using namespace std;

static bool comp(const pair<int, string> &a, const pair<int, string> &b) {
    if (a.first == b.first) return a.second > b.second; 
    return a.first < b.first;
}

int main() {
    int k; cin>>k;
    cin.ignore();
    string str; getline(cin, str);

    unordered_map<string, int>mp;

    stringstream ss(str);
    string word;

    while(ss >> word) mp[word]++;
    vector<pair<int, string>> res;

    for(auto &it : mp){
        res.push_back({it.second, it.first});
    }
    sort(res.rbegin(), res.rend(), comp);

    for (int i = 0; i < min(k, (int)res.size()); i++){
        cout << res[i].second << " " << res[i].first << endl;
    }
    return 0;
}