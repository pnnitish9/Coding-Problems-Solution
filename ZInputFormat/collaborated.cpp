#include <bits/stdc++.h>
using namespace std;

int main() {
    // N = 3, C = 10
    string str; getline(cin, str);
    int n,c;
    stringstream ss(str);
    string temp;
    ss>>temp; ss>>temp;
    ss>>n;
    ss>>temp; ss>>temp; ss>>temp;
    ss>>c;
    
    // (1-2),(2-3), (1-3)
    vector<vector<int>> adj(n+1);
    int t = c;
    string edge; getline(cin, edge);
    for(char &c : edge){
        if(!isdigit(c)) c = ' ';
    } 

    stringstream ss2(edge);
    int u, v;
    while(ss2 >> u >> v ){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    

    // cout<<n<<" "<<c<<endl;
    int id = INT_MAX; 
    int count = INT_MIN;
    for(int i=1; i<=n; i++){
        int size = adj[i].size();
        if(count < size){
            id = i;
            count = size;
        }
    }
    cout<<id<<" "<<count<<endl;
    return 0;
}