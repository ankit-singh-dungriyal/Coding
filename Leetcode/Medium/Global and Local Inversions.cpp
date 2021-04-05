class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int i=0;
        for(int x:A)if(abs(x-i++)>1)return false;
        return true;
    }
};
