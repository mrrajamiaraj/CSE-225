//
// Created by rajam on 5/1/2024.
//

#include "unsortedType.h"

template <class t>
unsortedType<t>::unsortedType()
{
    listData = NULL;
    CurrentPos = NULL;
    length = 0;
}
template <class t>
unsortedType<t>::~unsortedType()
{
    MakeEmpty();
}
template <class t>
int unsortedType<t>::LengthIs()
{
    return length;
}
template <class t>
bool unsortedType<t>::IsFull()
{
    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (exception e)
    {
        return true;
    }
}
template <class t>
void unsortedType<t>::InsertItem(t item)
{
    NodeType *location;
    location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;
}
template <class t>
void unsortedType<t>::DeleteItem(t item)
{
    NodeType *location;
    NodeType *tempData;
    location = listData;

    if (item == location->info)
    {
        tempData = location;
        listData = listData->next;
    }
    else
        (!(item == (location->next)->info))
        {
            location = location->next;
            tempData = location->next;
            location->next = (location->next)->next;
        }
    delete tempData;
    length--;
}
template <class t>
void unsortedType<t>::RetriveItem(t &item, bool &found)
{
    NodeType *location;
    location = listData;
    found = false;
    while (location != NULL && !found)
    {
        if (item == location->info)
            ;
        found = true;
        else 
        location = location->next;
    }    
    
}
template <class t>
void unsortedType<t>::MakeEmpty()
{
    NodeType *location;
    while (listData != NULL)
    {
        location = listData;
        listData = listData->next;
    }
    length = 0;
}
template <class t>
void unsortedType<t>::ResetList()
{
    CurrentPos = NULL;
}
template <class t>
void unsortedType<t>::GetNextItem(t &item)
{
    if (CurrentPos == NULL)
    {
        CurrentPos = listData;
    }
    else
    {
        CurrentPos = listData->next;
        item = CurrentPos->info;
    }
}