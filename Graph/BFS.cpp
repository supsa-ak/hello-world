# include <iostream>
# include <stdlib.h>
# include <stdbool.h>
using namespace std;
 
struct VX{
    char data;
    bool visited;
};

int Q[10];
int rear = -1;
int front = 0;
int count = 0;
struct VX * FirstVertices[10];
int adj_Matrix[10][10];
int vertexCount = 0;
void insert(int data){
    Q[++rear] = data;
    count++;
}
int removeEle(){
    count--;
    return Q[front++];
}
bool isQEmpty(){
    return count == 0;
}
void insertVertex(char data){
    struct VX* VX = (struct VX*) malloc(sizeof(struct VX));
    VX -> data = data;
    VX -> visited = false;
    FirstVertices[vertexCount++] = VX;
}
void insertEdge(int start, int end){
    adj_Matrix[start][end] = 1;
    adj_Matrix[end][start] = 1;
}
void displayVertex(int vertexIndex){
    cout<<FirstVertices[vertexIndex]->data;
}
int getAdjUnvisitedVertex(int vertexIndex){
    int i;
    for(i=0; i < vertexCount; i++){
        if(adj_Matrix[vertexIndex][i] == 1 && FirstVertices[i]->visited == false){
            return i;
        }
        return -1;
    }
    return 0;
}
void BFS(){
    int i;
    FirstVertices[0]->visited = true;
    displayVertex(0);
    // insert VX index in Q
    insert(0);
    int unvisitedVertex;
    while(!isQEmpty()){
        int tempVertex = removeEle();
        while((unvisitedVertex = getAdjUnvisitedVertex(tempVertex)) != -1){
            FirstVertices[unvisitedVertex]->visited = true;
            displayVertex(unvisitedVertex);
            insert(unvisitedVertex);
        }
    }
    for(i=0; i<vertexCount; i++){
        FirstVertices[i]->visited = false;
    }
}

int main(){
    int i,j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            adj_Matrix[i][j] = 0;
        }
    }    
    insertVertex('S');
    insertVertex('A');
    insertVertex('R');
    insertVertex('T');
    insertVertex('H');
    insertVertex('A');
    insertVertex('K');
    insertEdge(0, 1);
    insertEdge(0, 2);
    insertEdge(0, 3);
    insertEdge(0, 4);
    insertEdge(0, 5);
    insertEdge(1, 6);
    insertEdge(2, 6);
    insertEdge(3, 6);
    insertEdge(4, 6);
    insertEdge(5, 6);
    
    cout<<"Breadth First Search: ";
    BFS();

    return 0;
}
