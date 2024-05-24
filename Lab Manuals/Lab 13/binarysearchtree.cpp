//
// Created by rajam on 5/24/2024.
//

#include "binarysearchtree.h"
#include "quetype.cpp"
#include <iostream>
using namespace std;
template<class t>
TreeType<t>::TreeType() {
    root = NULL;
}
template<class t>
void Destroy(TreeNode<t>*& tree) {
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
    return root ==NULL;
}

template<class t>
bool TreeType<t>::IsFull() {
    TreeNode<t>* location;
    try {
        location = new TreeNode<t>;
        delete location;
        return false;
    }
    catch(exception e) {
        return true;
    }
}

template<class t>
int CountNodes(TreeNode<t>* tree) {
    if(tree == NULL) {
        return 0;
    }
    else {
        return CountNodes(tree->left)+CountNodes(tree->right)+1 ;
    }

}

template<class t>
int TreeType<t>::LengthIs() {
    return CountNodes(root);
}
template<class t>
void Retrive(TreeNode<t>* tree, t& item, bool &found) {
    if(tree==NULL) {
        found = false;
    }
    else if(item<tree->info){
        Retrive(tree->left,item,found);
    }
    else if(item>tree->info) {
        Retrive(tree->right,item,found);
    }
    else {
        item = tree->info;
        found = true;
    }
}
template<class t>
void TreeType<t>::RetriveItem(t &item, bool &found) {
    Retrive(root,item,found);
}

template<class t>
void Insert(TreeNode<t>* tree,t item) {
    if(tree==NULL) {
        tree = new TreeNode<t>;
    }
    else {
        if(item<tree->info) {
            Insert(tree->left,item);
        }
        else {
            Insert(tree->right,item);
        }
    }
}
template<class t>
void TreeType<t>::InsertItem(t item) {
    Insert(root,item);
}
template <class t>
void Delete(TreeNode<t>*& tree, t item) {
    if(item<tree->info) {
        Delete(tree->left,item);
    }
    else if(item>tree->info) {
        Delete(tree->right,item);
    }
    else
        DeleteNode(tree);

}
template<class t>
void DeleteNode(TreeNode<t>* &tree) {
    t data;
    TreeNode<t>* tempPtr;
    tempPtr=tree;
    if(tree->left==NULL) {
        tree= tree->right;
        delete tempPtr;
    }
    else if(tree->right=NULL) {
        tree= tree->left;
        delete tempPtr;
    }
    else {
        GetPredecessor(tree->left, data);
            tree->info = data;
            Delete(tree->left,data);

    }
}
template <class t>
void GetPredecessor(TreeNode<t>* tree, t& item) {
    while(tree->right!=NULL) {
        tree = tree->right;
        data = tree->info;
    }
}

template<class t>
void TreeType<t>::DeleteItem(t item) {
    Delete(root, item);
}

template<class t>
void PrintTree(TreeType<t>* tree) {
    if(tree=!NULL) {
       PrintTree(tree->left);
        cout<<tree->info<<" ";
        PrintTree(tree->right);
    }
}

template<class t>
void TreeType<t>::Print() {
    PrintTree(root);
}

template <class t>
void PreOrder(TreeNode<t>* tree, quetype<t> & Que) {
    if(tree!=NULL) {
        Que.enque(tree->info);
        PreOrder(tree->left,Que);
        PreOrder(tree->right,Que);
    }
}

template <class t>
void InOrder(TreeNode<t>* tree, quetype<t> & Que) {
    if(tree!=NULL) {

        InOrder(tree->left,Que);
        Que.enque(tree->info);
        InOrder(tree->right,Que);
    }
}

template <class t>
void PostOrder(TreeNode<t>* tree, quetype<t>& Que) {
    if(tree!=NULL) {

        PostOrder(tree->left,Que);
        PostOrder(tree->right,Que);
        Que.enque(tree->info);
    }
}

template<class t>
void TreeType<t>::ResetTree(OrderType order) {
    switch (order) {
        case PRE_ORDER:
            PreOrder(root, preQue);
        break;
        case IN_ORDER:
            InOrder(root, inQue);
        break;
        case POST_ORDER:
            PostOrder(root, postQue);
        break;

    }
}

template<class t>
void TreeType<t>::GetNextItem(t &item, OrderType order, bool &finished) {
    finished = false;
    switch (order) {
        case PRE_ORDER:
            preQue.Dequeue(item);
        if(preQue.IsEmpty())
            finished = true;
        break;
        case IN_ORDER:
            inQue.Dequeue(item);
        if(inQue.IsEmpty())
            finished = true;
        break;
        case POST_ORDER:
            postQue.Dequeue(item);
        if(postQue.IsEmpty())
            finished = true;
        break;
    }
}



