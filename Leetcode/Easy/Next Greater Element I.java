class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Map<Integer,Integer> m = new HashMap<>();
        Stack<Integer> st = new Stack<>();
        
        for(int x:nums2){
            while(!st.isEmpty() && st.peek()<x)m.put(st.pop(),x);
            st.push(x);
        }
        
        int[] ans = new int[nums1.length];
        for(int i=0;i<nums1.length;i++)ans[i]= m.getOrDefault(nums1[i],-1);
        return ans;
    }
}
