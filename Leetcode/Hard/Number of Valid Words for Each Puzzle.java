class Solution {
    
    private int bitmask(String s){
        int bm = 0;
        for(int i=0;i<s.length();i++){
            bm|=1<<(s.charAt(i)-'a');
        }
        return bm;
    }
    
    public List<Integer> findNumOfValidWords(String[] words, String[] puzzles) {
        List<Integer>ans = new ArrayList<>();
        // System.out.println(bitmask("ac"));
        Map<Integer,Integer> map = new HashMap<>();
        for(String str: words){
            int bm = bitmask(str);
            map.put(bm,map.getOrDefault(bm,0)+1);
        }
        for(String puzz:puzzles){
            int match = 1<<(puzz.charAt(0)-'a');
            int bm_puzz = bitmask(puzz.substring(1));
            int cnt = map.getOrDefault(match,0);
            for(int i = bm_puzz; i>0; i=(i-1)&bm_puzz){
                cnt+= map.getOrDefault(match|i,0);
            }
            ans.add(cnt);
        }
        return ans;
    }
}
