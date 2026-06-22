class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int n = costs.size();
        if(coins < costs[0]) return 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(coins >= costs[i]){
                ans++;
                coins -= costs[i];
            }
        }

        return ans;
    }
};