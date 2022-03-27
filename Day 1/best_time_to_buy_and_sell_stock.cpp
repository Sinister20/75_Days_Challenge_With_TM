class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int last= INT_MAX; 
        int op = 0;
        int first = 0; 
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < last){ 
                last = prices[i];
            }
            first = prices[i] - last; 
            if(op < first){ 
                op = first;
            }
        }
        return op;
     
        
    }
};
