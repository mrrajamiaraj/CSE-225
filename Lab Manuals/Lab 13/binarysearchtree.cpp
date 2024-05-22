#include "binarysearchtree.h"
#include <iostream>
using namespace std;

template<class t>
TreeType<t>::TreeType() {
    root = NULL;
}

template<class t>
void Destroy(TreeNode<t>* &tree) {
    if(tree!=NULL) {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree = NULL;
    }
}
template<class t>
TreeType<t>::~TreeType() {
    Destroy(root);
}

template<class t>
void TreeType<t>::MakeEmpty() {
    Destroy(root);
}

template<class t>
bool TreeType<t>::IsEmpty() {
    return root == NULL;
}

template<class t>
bool TreeType<t>::IsFull() {
    TreeNode<t>* location;
    try {
        location = new TreeNode<t>;
        delete location;
        return false;
    }
    catch (exception e) {
        return true;
    }

}

template<class t>
int countNodes(TreeNode<t>* tree) {
    if(tree==NULL) {
        return 0;
    }
    else {
        return countNodes(tree->left)+countNodes((tree->right)+1);
    }
}
template<class t>
int TreeType<t>::LengthIs() {
    return countNodes(root);
}

template<class t>
void Retrive(TreeNode<t>* tree, t &item,bool &found) {
    if(tree==NULL) {
        found = false;
    }
    else if(item<tree->info) {
        Retrive(tree->left,item,found);
    }
    else if(item<tree->info)
        Retrive(tree->right,item,found);
    else {
        item = tree->info;
        found = true;
    }

}
template<class t>
void TreeType<t>::retrive(t &item, bool &found) {
    Retrive(root,item,found);
}

template<class t>
void Insert(TreeNode<t>* tree, t item) {
    if(tree==NULL) {
        tree = new TreeNode<t>;
        tree->right=NULL;
        tree->left=NULL;
        tree->info=item;
    }
    else if(item<tree->info) {
        Insert(tree->left,item);
    }
    else {
        Insert(tree->right,item);
    }
}
template <class t>
void TreeType<t>::insert(t item) {
    Insert(root,item);
}
template <class t>
void Print(TreeNode<t>* tree) {
    if(tree!=NULL) {
        Print(tree->left);
        cout<<tree->info<<"";
        Print(tree->right);
    }
}
template <class t>
void TreeType<t>::print() {
    Print(root);
}

template <class t>
void Delete(TreeNode<t>*& tree,t item)
{
    if (item < tree->info)
        Delete(tree->left, item);
    else if (item > tree->info)
        Delete(tree->right, item);
    else
        DeleteNode(tree);
}
template <class t>
void DeleteNode(TreeNode<t>*& tree)
{
    t data;
    TreeNode<t>* tempPtr;
    tempPtr = tree;
    if (tree->left == NULL)
    {
        tree = tree->right;
        delete tempPtr;
    }
    else if (tree->right == NULL)
    {
        tree = tree->left;
        delete tempPtr;
    }
    else
    {
        GetPredecessor(tree->left, data);
        tree->info = data;
        Delete(tree->left, data);
    }
}
template <class t>
void GetPredecessor(TreeNode<t>*
tree, t& data)
{
    while (tree->right != NULL)
        tree = tree->right;
    data = tree->info;
}
template <class t>
void TreeType<t>::DeleteItem(t item)
{
    Delete(root, item);
}










