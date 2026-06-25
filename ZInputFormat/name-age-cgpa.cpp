#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; getline(cin, str);

    stringstream ss(str);
    string name;
    int age;
    double cgpa;

    ss>>name>>age>>cgpa;
    cout<<name<<" "<<age<<" "<<cgpa<<endl;
    return 0;
}