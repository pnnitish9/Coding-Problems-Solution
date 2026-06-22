class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(char ch : text){
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n'){
                mp[ch]++;
            }
        }
        if(mp.size() < 5) return 0;
        int ans = INT_MAX;
        for(auto it : mp){
            cout<<it.first<<" - "<<it.second<<endl;
            int freq = it.second;
            if(it.first == 'l' || it.first == 'o'){
                ans = min(ans, freq/2);
            }
            else ans = min(ans, freq);
        }

        return ans;
    }
};