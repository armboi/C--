#include<iostream>
#include<queue>
using namespace std;

bool hasPath(int **edges , int sv , int ev , int n , int *visited){
    if(sv == ev){
    	return true;
	}
	
	bool b ;;
	for(int i=0;i<n;i++){
		if(edges[sv][i]==1 && !visited[i]){
			visited[i] = true;
			b = hasPath(edges , i , ev , n ,visited);
			if(b)
			return true;
		}
	}
	return false;
}

int main() {
    int n, e;
    cin >> n >> e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
        	edges[i][j] = 0;
		}
	}
	
	for(int i=0;i<e;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}
	
	int sv , ev;
	cin>>sv>>ev;
	int *visited = new int[n];
	for(int i=0;i<n;i++){
		visited[i] = false;
	}
	bool fans = hasPath(edges,sv , ev , n , visited );
	if(fans){
		cout<<"true";
	}else{
		cout<<"false";
	}
}

