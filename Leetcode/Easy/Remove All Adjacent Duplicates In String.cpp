class Solution {
public:
    string removeDuplicates(string S) {
        string res="";
        for(char i:S){
            if(!res.empty() && res.back()==i)res.pop_back();
            else res.push_back(i);
        }
        return res;
    }
};
