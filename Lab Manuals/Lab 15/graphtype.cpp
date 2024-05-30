//
// Created by rajam on 5/25/2024.
//

#include "graphtype.h"
#include "quetype.cpp"
#include<iostream>
using namespace std;
template<class t>
GraphType<t>::GraphType() {
    numVertices =0;
    maxVertices =50;
    vertices = new t[50];
    edges = new int*[50];
    for(int i=0;i<50;i++) {
        edges[i] = new int [50];
    }
}
template<class t>
GraphType<t>::GraphType(int maxV) {
    numVertices =0;
    maxVertices =maxV;
    vertices = new t[maxV];
    edges = new int*[maxV];
    for(int i=0;i<maxV;i++) {
        edges[i] = new int [maxV];
    }
}

template<class t>
GraphType<t>::~GraphType() {
    delete [] vertices;
    for(int i=0;i<maxVertices;i++) {
        delete edges[i];
    }
    delete []edges;
}

template<class t>
void GraphType<t>::MakeEmpty() {
    numVertices =0;
}

template<class t>
bool GraphType<t>::IsEmpty() {
    return numVertices==0;
}
template<class t>
bool GraphType<t>::IsFull() {
    return numVertices == maxVertices;
}

template<class t>
void GraphType<t>::AddVertex(t vertex) {
    vertices[numVertices]=vertex;
    for(int i=0;i<=numVertices;i++) {
        edges[numVertices][i]= NULL_EDGE;
        edges[i][numVertices]= NULL_EDGE;
    }
    numVertices++;
}
template<class t>
int IndexIs(t* vertices,t vertex) {
    int index =0;
    while(!(vertex==vertices[index]))
        index++;
    return index;
}

template<class t>
void GraphType<t>::AddEdge(t fromVertex, t toVertex, int weigth) {
    int row = IndexIs(vertices,fromVertex);
    int colom = IndexIs(vertices,toVertex);
    edges[row][colom]=weigth;
}

template<class t>
int GraphType<t>::WeigthIs(t fromVertex, t toVertex) {
    int row = IndexIs(vertices,fromVertex);
    int colom = IndexIs(vertices,toVertex);
    return edges[row][colom];
}

template<class t>
void GraphType<t>::GetToVertices(t vertex, quetype<t> &adjVertices) {
    int fromindex, toindex;
    fromindex= IndexIs(vertices,vertex);
    for(toindex=0;toindex<numVertices;toindex++) {
        if(edges[fromindex][toindex]!=NULL_EDGE)
            adjVertices.enque(vertices[toindex]);
    }
}

template<class t>
int GraphType<t>::outDegree(t v) {
    int fromIndex, toIndex, degree=0;
    fromIndex=IndexIs(vertices,v);
    for(toIndex=0;toIndex<numVertices;toIndex++) {
        if(edges[fromIndex][toIndex]!=NULL_EDGE)
            degree++;
    }
    return degree;


}

template<class t>
bool GraphType<t>::FoundEdge(t v, t c) {
    int indexu =IndexIs(vertices,v);
    int indecv =IndexIs(vertices,c);
    return edges[indecv][indexu]!=NULL_EDGE || edges[indexu][indecv]!=NULL_EDGE;
}
