class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.size(),m=num2.size();
        string s(n+m,'0');
        for(int i=n-1;i>=0;i--){
            int carry=0;
            for(int j=m-1;j>=0;j--){
                int sum=(s[i+j+1]-'0')+(num1[i]-'0')*(num2[j]-'0')+carry;
                carry=sum/10;
                sum=sum%10;
                s[i+j+1]=sum+'0';
            }
            s[i]+=carry;
        }
        
        int p=-1;
        for(int i=0;i<n+m;i++){
            if(s[i]!='0'){
                p=i;
                break;
            }
        }
        if(p==-1)return "0";
        return s.substr(p);
        
    }
};
