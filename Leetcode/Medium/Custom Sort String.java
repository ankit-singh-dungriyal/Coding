class Solution {
    public String customSortString(String order, String s) {
        int[] cnt = new int[26];
        for(char ch:s.toCharArray()){
            cnt[ch-'a']++;
        }
        StringBuilder sb = new StringBuilder();
        for(char ch: order.toCharArray()){
            for(int i=0;i<cnt[ch-'a'];i++)sb.append(ch);
            cnt[ch-'a']=0;
        }
        for(char ch: s.toCharArray()){
            if(cnt[ch-'a']!=0)sb.append(ch);
        }
        return sb.toString();
    }
}
