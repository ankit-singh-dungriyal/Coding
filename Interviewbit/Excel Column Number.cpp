/*
    Asked in:  
    Amazon
*/

// Maths

int Solution::titleToNumber(string A) {
    int ans=0;
    int pr=1;
    for(int i=A.length()-1;i>=0;i--){
        ans+=(A[i]-'A'+1)*pr;
        pr*=26;
    }
    return ans;
}
