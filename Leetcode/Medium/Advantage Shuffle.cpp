class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        multiset<int>ms;
        for(int x:A)ms.insert(x);
        for(int i=0;i<B.size();i++){
            auto it=ms.begin();;
            if(*ms.rbegin()>B[i])it=ms.upper_bound(B[i]);
            A[i]=*it;
            ms.erase(it);

        }
        return A;
    }
};
