class Solution {
public:
    string convert(string s, int n) {
        if(n==1|| n>s.length()) return s;
        int i=0;
        bool down=false;
        vector<vector<char>> ans(n);
        for(char c:s){
            ans[i].push_back(c);
            if(i==0)
            down=true;
            else if(i==n-1) down=false;

            if(down)i++;
            else i--;
        }
        string an;
        for(auto& row:ans){
            for(char c:row){
                an+=c;
            }
        }
        return an;

    }
};