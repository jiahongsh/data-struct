//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
//
//
//ʾ�� 1��
//
//
//���룺head = [1, 2, 3, 4, 5]
//�����[5, 4, 3, 2, 1]
//ʾ�� 2��
//
//
//���룺head = [1, 2]
//�����[2, 1]
//ʾ�� 3��
//
//���룺head = []
//�����[]
//
//
//��ʾ��
//
//�����нڵ����Ŀ��Χ��[0, 5000]
//- 5000 <= Node.val <= 5000
//
//
//���ף��������ѡ�õ�����ݹ鷽ʽ��ɷ�ת�����ܷ������ַ����������⣿


//����206
 Definition for singly-linked list.
  struct ListNode {
     int val;
     struct ListNode *next;
  };
 
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newhead = NULL;
    struct ListNode* next;
    struct ListNode* cur = head;

    while (cur) {
        //����cur����һ��
        next = cur->next;
        //ͷ�����
        cur->next = newhead;
        newhead = cur;
        //����
        cur = next;


    }


    return newhead;
}