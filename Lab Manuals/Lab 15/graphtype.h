//
// Created by rajam on 5/25/2024.
//

#ifndef GRAPHTYPE_H
#define GRAPHTYPE_H
#include "quetype.h"
const int NULL_EDGE=0;

template<class t>
class GraphType {
private :
    int numVertices;
    int maxVertices;
    t* vertices;
    int **edges;
public:
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void AddVertex(t vertex);
    void AddEdge(t fromVertex,t toVertex, int weigth);
    int WeigthIs(t fromVertex,t toVertex);
    void GetToVertices(t vertex, quetype<t>& adjVertices);
    int outDegree(t v);
    bool FoundEdge(t v,t c);

public:
    GraphType();
    GraphType(int maxV);
    ~GraphType();

};



#endif //GRAPHTYPE_H
