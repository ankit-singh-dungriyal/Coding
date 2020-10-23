/*

    Asked in:  
    Housing
    Amazon

*/

// Maths
bool solve(long long n,long long k){
    while(n%k==0)n/=k;
    if(n>1)return false;
    return true;
}

int Solution::isPower(int A) {
    long long num=A;
    if(num==1)return 1;
    if(num<4)return 0;
    for(long long i=2;i*i<=num;i++){
       if(solve(num,i))return 1;
    }
    return 0;
}
