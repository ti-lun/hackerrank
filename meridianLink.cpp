#include <iostream>

class Node
{
    public:
        Node* pNext;
    private:
        int content1;
        int content2;
        ...
}

void update_requests( int* removalRequests, int start_index, int removalRequests_Length, int update_value )
{
    for (int i = start_index; i < removalRequests_Length; i++)
    {
        removalRequests[i] += update_value;
    }
}

static Node* Remove( Node* pFirstNode, int* removalRequests, int removalRequests_Length )
{
    if (removalRequests_Length == 0) return pFirstNode;
    for (int i = 0; i < removalRequests_Length; i++)
    {
        Node* head = pFirstNode;
        int index_to_remove = 0;
        while (index_to_remove != removalRequests[i]-1)
        {
            // keep going until we hit the index
            // before the one we want to remove
            ++index_to_remove;
            head = head->next;
        }
        //then remove the node
        Node* temp = head->next;
        head->next = head->next->next;
        delete temp;
        //update the indices in removalRequests

        update_requests ( removalRequests, i, removalRequests_Length-i, -1);

    }

    return pFirstNode;
}
