//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
//
//
//示例 1：
//
//
//输入：head = [1, 2, 3, 4, 5]
//输出：[5, 4, 3, 2, 1]
//示例 2：
//
//
//输入：head = [1, 2]
//输出：[2, 1]
//示例 3：
//
//输入：head = []
//输出：[]
//
//
//提示：
//
//链表中节点的数目范围是[0, 5000]
//- 5000 <= Node.val <= 5000


//力扣206



 
  struct ListNode {
     int val;
    struct ListNode *next;
 };
 
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) {
        return NULL;
    }
    struct ListNode* pre, * cur, * newnext;
    pre = NULL;
    cur = head;
    newnext = head->next;
    while (cur) {
        //翻转
        cur->next = pre;
        //迭代
        pre = cur;
        cur = newnext;
        if (newnext) {
            newnext = newnext->next;
        }


    }

    return pre;
}