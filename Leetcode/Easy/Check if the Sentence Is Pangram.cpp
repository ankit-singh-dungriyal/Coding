class Solution {
public:
    bool checkIfPangram(string sentence) {
        return set<char>(sentence.begin(),sentence.end()).size()==26;
    }
};
