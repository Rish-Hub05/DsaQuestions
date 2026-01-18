class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(auto it: s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u') v++;
            else if(it>='b'&& it<='z')c++;
        }
        return (c>0)?floor(v/c):0;
    }
};