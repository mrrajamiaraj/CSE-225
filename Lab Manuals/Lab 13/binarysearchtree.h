#ifndef BINARYSEARCHTREE_H_INCLUDED 
#define BINARYSEARCHTREE_H_INCLUDED 

template <class t>
struct TreeNode {
    t info;
    TreeNode* left;
    TreeNode* right;
};
template <class t>
class TreeType {
private :
    TreeNode<t>* root;
public:
    TreeType();
    ~TreeType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void retrive(t &item,bool &found);
    void insert(t);
    void print();
    void DeleteItem(t);

};



#endif // BINARYSEARCHTREE_H_INCLUDED