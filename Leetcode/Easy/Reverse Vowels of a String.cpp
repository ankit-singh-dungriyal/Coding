class Solution {
    vector<char>v={'a','e','i','o','u','A','E','I','O','U'};
    bool check(char ch){
        for(char x:v)if(ch==x)return true;
        return false;
    }
public:
    string reverseVowels(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            if(!check(s[i])){
                i++;continue;
            }
            if(!check(s[j])){
                j--;continue;
            }
            swap(s[i],s[j]);
            i++,j--;
        }
        return s;
    }
};
