#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

void checkEmpty(bool b) {
    if (b)
        cout << "Tree is Empty" << endl;
    else
        cout << "Tree is not Empty" << endl;
}

void itemFound(TreeType<int> &tree, int item) {
    bool found;
    tree.RetrieveItem(item, found);
    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

int main() {


    TreeType<int> tree;

    checkEmpty(tree.IsEmpty());

    tree.InsertItem(4);                          // Insert ten items
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    checkEmpty(tree.IsEmpty());

    cout << tree.LengthIs() << endl;

    itemFound(tree, 9);
    itemFound(tree, 13);

    tree.Print();