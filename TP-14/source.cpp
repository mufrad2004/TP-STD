#include "header.h"
void createVertex_1301223029(char newVertexId , adrVertex &x){
    x = new vertex;
    x->firstEdge = NULL;
    x->nextVertex = NULL;
    x->idVertex = newVertexId;
}
void initGraph_1301223029(graph &g){
    g.first = NULL;
}
void addVertex_1301223029(graph &g, char newVertexId){
    adrVertex p;
    createVertex_1301223029(newVertexId , p);
    if(g.first == NULL){    
        g.first = p;
    }else {
        p->nextVertex = g.first;
        g.first = p;
    }
}
bool cekVertex_1301223029(graph g, char x){
    // True kalo ada
    bool duplikat = false;
    adrVertex p;
    p = g.first;
    while(p != NULL && !duplikat){
        if (p->idVertex == x){
            duplikat = true;
        }
        p = p->nextVertex;
    }

    return duplikat;
}
void buildGraph_1301223029(graph &g){
    char isi;
    int i = 1;
    initGraph_1301223029(g);
    cout << "Masukkan vertex ke-" << i <<  " (A-Z) : ";
    cin >> isi;
    addVertex_1301223029(g,isi);
    i++;
    while (isi >= 'A' && isi <= 'Z'){
        cout << "Masukkan vertex ke-" << i <<  " (A-Z) : ";
        cin >> isi;
        if (isi >= 'A' && isi <= 'Z'){
            if (!cekVertex_1301223029(g,isi) ){
                addVertex_1301223029(g,isi);
                i++;
            }else {
                cout << "Vertex sudah ada " << endl;
            }
        }else {
            cout << "Input berakhir" << endl;
        }
    }
}
void tampilkan_1301223029(graph g){
    adrVertex p ;
    p = g.first;
    int i = 1;
    cout << "Isi Graph : " << endl;
    while(p != NULL ){
        cout << "   -Vertex ke-" << i << " : " << p->idVertex << endl;
        p = p->nextVertex;
        i++;
    }

}

