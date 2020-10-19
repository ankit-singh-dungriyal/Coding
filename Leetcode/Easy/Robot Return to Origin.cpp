class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char i:moves){
            if(i=='U')y++;
            else if(i=='D')y--;
            else if(i=='R')x++;
            else x--;
        }
        return (!x && !y);
    }
};
