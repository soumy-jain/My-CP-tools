class BitTrie {
private:
    struct Node {
        Node* children[2] = {};
        int count = 0;
    };

    Node* root = new Node();

    void deleteSubtree(Node* node) {
        if (!node) return;
        deleteSubtree(node->children[0]);
        deleteSubtree(node->children[1]);
        delete node;
    }

public:
    ~BitTrie() {
        deleteSubtree(root);
    }

    void insert(int number) {
        Node* current = root;
        for (int i = 31; i >= 0; --i) {
            int bit = (number >> i) & 1;
            if (!current->children[bit]) {
                current->children[bit] = new Node();
            }
            current = current->children[bit];
            current->count++;
        }
    }

    void remove(int number) {
        Node* current = root;
        for (int i = 31; i >= 0; --i) {
            int bit = (number >> i) & 1;
            if (!current->children[bit]) return;
            current = current->children[bit];
            current->count--;
        }
    }

    int findMaxXOR(int number) {
        Node* current = root;
        int max_xor = 0;
        for (int i = 31; i >= 0; --i) {
            int bit = (number >> i) & 1;
            int desired_bit = 1 - bit;
            if (current->children[desired_bit] && current->children[desired_bit]->count > 0) {
                max_xor |= (1 << i);
                current = current->children[desired_bit];
            } else if (current->children[bit] && current->children[bit]->count > 0) {
                current = current->children[bit];
            } else {
                break;
            }
        }
        return max_xor;
    }
};