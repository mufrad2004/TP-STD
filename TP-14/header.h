#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
using namespace std;

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;
struct vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};
struct edge {
    char desVertexId;
    int weight;
    adrEdge nextEdge;
};
struct graph {
    adrVertex first;
};

void createVertex_1301223029(char newVertexId , adrVertex &x);
void initGraph_1301223029(graph &g);
void addVertex_1301223029(graph &g, char newVertexId);
void buildGraph_1301223029(graph &g);
bool cekVertex_1301223029(graph g, char x);
void tampilkan_1301223029(graph g);
#endif