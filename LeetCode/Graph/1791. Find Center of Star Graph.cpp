class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        //In a star graph, the center node appears on every edge
        int first = edges[0][0];
        int sec = edges[0][1];

        if(first == edges[1][0] || first == edges[1][1]){
            return first;
        }
        return sec;
    }
};