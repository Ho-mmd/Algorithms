# DFS

- Algorithm for traversing or searching tree or graph data structures
- Starts at the root node and explores as far as possible along each branch before backtracking

--------------------------------------------------

### Code

```
// Recursion

void DFS(int n, node, std::vector<int> visited) {
        visited[n] = 1;

        for(int i = 0; i < node.size(); i++) {  
                if(visited[i] != 1)
                        DFS(i, node, visited);
        }
}

// Stack

#include <stack>

void DFS(int n, std::stack<>nodes[], std::vector<int> visited) {
        node;
        stack.push(n);
        visited[n] = 1;

        while(stack.size() > 0) {
                node = nodes.top();
                nodes.pop();

                for(int i = 0; i < nodes[node].size(); i++) {
                        next = nodes[node][i];

                        if(visited[node] != 1) {
                                visited[node] = 1;    
                                nodes.push(node);    
                                nodes.push(next);    
    
                                break;    
                        }    
                }    
        }    
}    
```

------------------------------------------

# BFS

- Fundamental graph traversal algorithm
- Involves visiting all the connected nodes of a graph in a level-by-level manner

------------------------------------------

### Code

```
#include <queue>

void BFS(int n, std::vector<>graph, std::vector<int> visited, std::queue<>que[]) {

        que.push(n);
        visited[n] = 1;

        while(que.size() > 0) {
                n = que.front();
                que.pop();

                for(int i = 0; i < que[].size(); i++) {
                        next = graph[n][i];
                        if(visited[next] != 1) {
                                que.push(next);
                                visited[next] = 1;
                        }
                }
        }

}

```

--------------------------------------
