#include<iostream>
#include<queue>
using namespace std;

void print(int **edges ,int n ,int currN, int sv){
	queue<int> pendingVertices;
	bool *visited = new bool[currN];
	for(int i=0;i<currN;i++){
		visited[i] = false;
	}
	pendingVertices.push(sv);
	visited[sv] = true;
	
	int currentVertex;
	while(!pendingVertices.empty() ){
	    currentVertex = pendingVertices.front();
	    pendingVertices.pop();
	    cout<<currentVertex<<" ";
	    for(int i=0;i<currN;i++){
	    	if(currentVertex == i){
	    		continue;
			}
	    	if(edges[currentVertex][i] == 1 && !visited[i]){
	    		pendingVertices.push(i);
	    		visited[i] = true;
			}
		}
	}
	
	if(currentVertex!=n-1){
		print(edges , n ,n-currentVertex-1,currentVertex+1);
	}
}

int main(){
	int n , e;
	cin>>n>>e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
        	edges[i][j] = 0;
		}
	}
	
	for(int i=0;i<e;i++){
		int f, s;
		cin>>f>>s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}
	
	print(edges , n , n, 0);
}
