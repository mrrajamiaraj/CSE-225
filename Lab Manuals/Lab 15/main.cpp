#include <iostream>
#include "graphtype.cpp"

using namespace std;

void print(bool b) {
    if(b) {
        cout<<"There is an edge"<<endl;
    }
    else {
        cout<<"There is not an edge"<<endl;
    }
}

int main() {
    GraphType<char> a;

    a.AddVertex('A');
    a.AddVertex('B');
    a.AddVertex('C');
    a.AddVertex('D');
    a.AddVertex('E');
    a.AddVertex('F');
    a.AddVertex('G');
    a.AddVertex('H');

    a.AddEdge('A','B',1);
    a.AddEdge('A', 'C', 1);
    a.AddEdge('A','D',1);

    a.AddEdge('B','A',1);

    a.AddEdge('D','A',1);
    a.AddEdge('D','E',1);
    a.AddEdge('D','G',1);

    a.AddEdge('G','F',1);
    a.AddEdge('F','H',1);
    a.AddEdge('H','E',1);

    cout<<a.outDegree('C');

    print(a.FoundEdge('A','D'));
    print(a.FoundEdge('B','D'));
}