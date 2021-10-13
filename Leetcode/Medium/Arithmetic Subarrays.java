class Solution {
    public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
        List<Boolean> ans = new ArrayList<>();
        int n = l.length;
        for(int i=0;i<n;i++){
            int[] tmp = Arrays.copyOfRange(nums,l[i],r[i]+1);
            Arrays.sort(tmp);
            boolean f = true;
            for(int j=1;j<tmp.length;j++){
                if((tmp[j]-tmp[j-1])!=(tmp[1]-tmp[0])){
                    f = false;
                    break;
                }
            }
            ans.add(f);
        }
        return ans;
    }
}
