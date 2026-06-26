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
    
    // (1-2),(2-3)
    vector<vector<int>> adj(n+1);
    int t = c;
    while(t--){

    }
    cout<<n<<" "<<c<<endl;
    return 0;
}