class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int dt)
        {
            data = dt;
            next = nullptr;
            prev = nullptr;
        }
};