class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        vector<int> res(cost.size() + 1, 0);
        res[0] = cost[0];
        res[1] = cost[1];
        for (int j = 2; j < cost.size(); ++j)
            res[j] = min(res[j - 1], res[j - 2]) + cost[j];
        return min(res[cost.size() - 1], res[cost.size() - 2]);
    }
};