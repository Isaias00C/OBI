class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int center;
        if(edges[0][0] == edges[1][0]){
            center = edges[0][0];
        }else if(edges[0][0] == edges[1][1]){
            center = edges[0][0];
        }else if(edges[0][1] == edges[1][0]){
            center = edges[0][1];
        }else if(edges[0][1] == edges[1][1]){
            center = edges[0][1];
        }
        return center;
    }
};