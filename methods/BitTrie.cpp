class Trie
{
  public:
    struct Node
    {
        int cnt = 0;
        Node *nxt[2] = {};
    };

    Node *root = new Node;

    void insert(int n)
    {
        Node *cur = root;
        for (int i = 31; i >= 0; i--)
        {
            if (!cur->nxt[(n >> i) & 1])
                cur->nxt[(n >> i) & 1] = new Node;
            cur = cur->nxt[(n >> i) & 1];
            cur->cnt++;
        }
    }

    void remove(int n)
    {
        Node *cur = root;
        for (int i = 31; i >= 0; i--)
        {
            cur = cur->nxt[(n >> i) & 1];
            cur->cnt--;
        }
    }

    int maxxor(int n)
    {
        int ans = 0;
        Node *cur = root;
        for (int i = 31; i >= 0; i--)
        {
            if (cur->nxt[!((n >> i) & 1)] && cur->nxt[!((n >> i) & 1)]->cnt)
            {
                ans |= 1 << i;
                cur = cur->nxt[!((n >> i) & 1)];
            }
            else
                cur = cur->nxt[((n >> i) & 1)];
        }
        return ans;
    }
};