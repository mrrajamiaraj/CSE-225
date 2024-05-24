//
// Created by rajam on 5/24/2024.
//

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "quetype.h"
template<class t>
struct TreeNode {
    t info;
    TreeNode* left;
    TreeNode* right;
};

enum OrderType{PRE_ORDER, IN_ORDER, POST_ORDER};
template <class t>
class TreeType {
public:
    TreeType();
    ~TreeType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void RetriveItem(t& item ,bool& found);
    void InsertItem(t item);
    void Print();
    void DeleteItem(t item);
    void ResetTree(OrderType order);
    void GetNextItem(t &item, OrderType order, bool& finished);
private:
    TreeNode<t>* root;
    quetype<t>* preQue;
    quetype<t>* inQue;
    quetype<t>* postQue;
};



#endif //BINARYSEARCHTREE_H
