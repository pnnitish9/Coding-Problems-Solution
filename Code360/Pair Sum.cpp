#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   unordered_map<int, int> mp;
   vector<vector<int>> res;

   for(int i=0; i<arr.size(); i++){
      for(int j=i+1; j<arr.size(); j++){
         if(arr[i]+arr[j] == s){
            if(arr[i] < arr[j]){
               res.push_back({arr[i], arr[j]});
            }
            else{
               res.push_back({arr[j], arr[i]});
            }
         }
      }
   }
   sort(res.begin(), res.end());
   return res;
}