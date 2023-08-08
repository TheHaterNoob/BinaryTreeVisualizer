#ifndef 1_H
#define 1_H

class b_tree
{
public:
    b_tree();

    struct BTreeNodeItem {
        unsigned short key;
        int data;
    };

    struct BTreeNode {
        BTreeNodeItem** items;
        BTreeNode** children;
        unsigned short isLeaf;
        unsigned short size;
    };

    static BTreeNode create(const unsigned short key, const int data); // Declare as static member function
    const unsigned short search(BTreeNode* tree, const unsigned short key);
    void insert(BTreeNode* tree, const unsigned short key, const int data);
    void initialize_node(BTreeNode* node, const unsigned short key, const int data);

private:

};

#endif // 1_H

