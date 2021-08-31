/**
 *  Name - Tejas Patil
 *  GR No - xxxxxxxx
 *  Roll No - xxxxxx
 *  Div - TY-C (C3 Batch) 
 *
 *  @author Tejas-PC
 **/

#include <iostream>
#include <list>
using namespace std;

class Graph
{
    list<int> *adjacencyList;
    int v;

public:
    void visitEdge(int, bool[]);
    void dfs();
    void addEdge(int, int);
    Graph(int v)
    {
        this->v = v;
        adjacencyList = new list<int>[v];
    }
};

void Graph::addEdge(int vertex, int v)
{
    adjacencyList[vertex].push_back(v);
}
void Graph::visitEdge(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adjacencyList[v].begin(); i != adjacencyList[v].end(); i++)
    {
        if (!visited[*i])
        {
            visitEdge(*i, visited);
        }
    }
}

void Graph::dfs()
{
    int i;
    bool *visited = new bool[v];
    for (i = 0; i < v; i++)
        visited[i] = false;
    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            visitEdge(i, visited);
}

int main()
{
    Graph g(6);
    g.addEdge(0, 3);
    g.addEdge(5, 0);
    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(3, 3);
    g.addEdge(4, 4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.dfs();
    return 0;
}