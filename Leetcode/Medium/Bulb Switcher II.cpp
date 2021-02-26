class Solution {
public:
    int flipLights(int n, int m) {
        if(!m)return 1;
        if(m==1){
            if(n<=3)return n+1;
            else return 4;
        }
        else{
            if(n<=2)return n*2;
            else if(m==2)return 7;
            else return 8;
        }
        return 0;
    }
};
