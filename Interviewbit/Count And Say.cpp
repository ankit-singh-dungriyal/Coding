// Asked in: Facebook, Amazon
string Solution::countAndSay(int A) {
    string curr="1",next="1";
    for(int i=1;i<A;i++){
        int k=0;
        next="";
        while(k<curr.length()){
            int cn=1;
            while(curr[k]==curr[k+1])cn++,k++;
            next+='0'+cn;
            next+=curr[k];
            k++;
        }
        // cout<<next<<" ";
        curr=next;
    }
    return next;
}
