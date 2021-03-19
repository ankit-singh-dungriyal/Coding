class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>v;
        v.push_back(1);
        int i=0,j=0,k=0;
        while(v.size()<n){
            int a=v[i]*2;
            int b=v[j]*3;
            int c=v[k]*5;
            if(a<=b && a<=c)v.push_back(a);
            else if(b<=a && b<=c)v.push_back(b);
            else v.push_back(c);
            if(v.back()==a)i++;
            if(v.back()==b)j++;
            if(v.back()==c)k++;
        }
 
        return v.back();
        
    }
};
