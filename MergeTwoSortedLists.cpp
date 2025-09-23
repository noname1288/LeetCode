#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    // ListNode(){val = 0, next = nullptr;}; is different from the below command (ListNode is created, then val = 0, next = nullprt)
    ListNode() : val(0), next(nullptr) {} // val(0), next(nullptr) is initialized as soon as ListNode object is created
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode result(0); // Node giả để dễ quản lý head
        ListNode *tail = &result; // Tail luôn trỏ đến node cuối của danh sách kết quả
        ListNode *pointer_1 = list1;
        ListNode *pointer_2 = list2;

        while (pointer_1 != nullptr && pointer_2 != nullptr)
        {
            if (pointer_1->val < pointer_2->val)
            {
                tail->next = pointer_1;      // nối node vào kết quả
                pointer_1 = pointer_1->next; // di chuyển node
            }
            else
            {
                tail->next = pointer_2;      // nối node vào kết quả
                pointer_2 = pointer_2->next; // di chuyển node
            }

            tail = tail->next;                // Di chuyển tail về cuối danh sách mới
        }

        // Gắn phần còn lại nếu còn
        if (pointer_1 != nullptr)
            tail->next = pointer_1;
        if (pointer_2 != nullptr)
            tail->next = pointer_2;

        return result.next;
    }
};

int main()
{

    return 0;
}