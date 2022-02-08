/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int pairSum(ListNode head) {
        List<Integer> sum = new ArrayList<>();
        while(head!=null){
            sum.add(head.val);
            head= head.next;
        }
        int ans=0;
        int n=sum.size();
        for(int i=0;i<n;i++)ans=Math.max(ans,sum.get(i)+sum.get(n-i-1));
        return ans;
    }
}
