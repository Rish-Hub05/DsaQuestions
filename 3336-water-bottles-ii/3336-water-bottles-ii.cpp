class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=0;
        int bottledrunk=0;
        empty=numBottles;//1ststep
        bottledrunk+=numBottles;
        while(empty>=numExchange){
            empty-=numExchange;
            numExchange++;
            bottledrunk++;
            empty++;
        }
        return bottledrunk;
    }
};