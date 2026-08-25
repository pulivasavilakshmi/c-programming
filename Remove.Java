class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode prev = new ListNode(0);
        prev.next = head;
        ListNode start = prev;
        ListNode end = prev;
        for (int ind = 0; ind <= n; ind++) {
            end = end.next;
        }
        while (end != null) {
            start = start.next;
            end = end.next;
        }
        start.next = start.next.next;
        return prev.next;
    }
}
