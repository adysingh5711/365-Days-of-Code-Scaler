
// Couldn't finish
// https://www.interviewbit.com/problems/kingdom-of-friendship/


#include <list>

vector<pair<int,int>> vec;


void dfs(int node,int parent,unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited){

    visited[node] = 1;

    for(auto i:adjList[node]){

        if(!visited[i]){

            dfs(i,node,adjList,visited);

        }else if(i == parent){

            vec.push_back(make_pair(i,parent));

        }

    }

}



int Solution::solve(vector<int> &A) {

    unordered_map<int,list<int>> adjList;

    unordered_map<int,bool> visited;

    vec = {};

    for(int i=0; i<A.size(); i++){

        adjList[i+1].push_back(A[i]);

    }

    int n = A.size();

    for(int i=1; i<=n; i++){

        if(!visited[i]){

            dfs(i,-1,adjList,visited);

        }
    }
    return vec.size();

}
