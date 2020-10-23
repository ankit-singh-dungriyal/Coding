/*

    Asked in:  
    Microsoft
    Jabong
    Zillow

*/

// Maths

int Solution::trailingZeroes(int A) {
    int ans=0;
    while(A)ans+=A/5,A/=5;
    return ans;
}
