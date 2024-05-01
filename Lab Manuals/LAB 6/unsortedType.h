//
// Created by rajam on 5/1/2024.
//

#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

template <class t>
class unsortedType
{
      struct NodeType
      {
            t info;
            NodeType *next;
      };

public:
      NodeType *listData;
      NodeType *CurrentPos;
      int length;

      unsortedType();
      ~unsortedType();
      int LengthIs();
      bool IsFull();
      void InsertItem(t);
      void DeleteItem(t);
      void RetriveItem(t&,bool&);
      void MakeEmpty();
      void ResetList();
      void GetNextItem(t&);

};

#endif // UNSORTEDTYPE_H
