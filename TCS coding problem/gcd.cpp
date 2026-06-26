#include <bits/stdc++.h>
using namespace std;

int gcdd(int a, int b) {
    if (b == 0)
        return a;
    return gcdd(b, a % b);
}

int main() {
    int a,b; cin>>a>>b;
    cout<<gcdd(a,b)<<endl;
    cout<<__gcd(a,b);
    return 0;
}