class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> ans = new HashSet<>();
        for(String str: emails){
            String[] a = str.split("@");
            String[] b = a[0].split("\\+",2);
            ans.add(b[0].replace(".","")+"@"+a[1]);
            // System.out.println(b[0].replace(".","")+"@"+a[1]);
        }
        return ans.size();
    }
}
