class Solution {
    
    public String frequencySort(String s) {
        Map<Character,Integer> m = new HashMap<>();
        for(char ch : s.toCharArray()){
            m.put(ch,m.getOrDefault(ch,0)+1);
        }
        PriorityQueue<Character> pq = new PriorityQueue<>((x,y)->m.get(y)-m.get(x));
        for(char ch: m.keySet())pq.add(ch);
        String ans="";
        while(!pq.isEmpty()){
            for(int i=0;i<m.get(pq.peek());i++)ans= ans+ pq.peek();
            pq.poll();
        }
        return ans;
    }
}
