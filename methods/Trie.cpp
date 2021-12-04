class Trie
{
  public:
    struct Node
    {
        bool end = false;
        Node *ar[26] = {};
    };
    Node *root = new Node;
    Trie()
    {
    }
    void insert(string &s)
    {
        Node *tmp = root;
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - 'a';
            if (tmp->ar[x] == NULL)
                tmp->ar[x] = new Node;
            tmp = tmp->ar[x];
        }
        tmp->end = true;
    }
    bool search(string &s)
    {
        Node *tmp = root;
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - 'a';
            if (tmp->ar[x] == NULL)
                return false;
            tmp = tmp->ar[x];
        }
        return tmp->end;
    }
    bool startsWith(string &s)
    {
        Node *tmp = root;
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - 'a';
            if (tmp->ar[x] == NULL)
                return false;
            tmp = tmp->ar[x];
        }
        return true;
    }
};