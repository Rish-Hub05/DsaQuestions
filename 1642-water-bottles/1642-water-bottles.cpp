class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int e=numBottles;
        while(e>=numExchange){
            int d=e/numExchange;
            ans+=d;
            e=d+(e%numExchange);
        }
        return ans;
    }
};