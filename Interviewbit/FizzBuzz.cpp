// Maths
vector<string> Solution::fizzBuzz(int A) {
    vector<string>ans;
    for(int i=1;i<=A;i++){
        string tmp="";
        int a=i;
        while(a)tmp+='0'+(a%10),a/=10;
        reverse(tmp.begin(),tmp.end());
        if(i%3==0 &&i%5==0)ans.push_back("FizzBuzz");
        else if(i%3==0)ans.push_back("Fizz");
        else if(i%5==0)ans.push_back("Buzz");
        else ans.push_back(tmp);
    }
    return ans;
}
