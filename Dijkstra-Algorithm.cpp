#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;

    cout << "Enter nodes and edges: ";
    cin >> n >> e;

    vector<pair<int,int>> graph[n];

    cout << "Enter u v w:\n";

    for(int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int source;

    cout << "Enter source node: ";
    cin >> source;

    vector<int> dist(n, INT_MAX);

    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;

    dist[source] = 0;

    pq.push({0, source});

    while(!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        for(auto child : graph[node])
        {
            int nextNode = child.first;
            int weight = child.second;

            if(dist[node] + weight < dist[nextNode])
            {
                dist[nextNode] = dist[node] + weight;

                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    cout << "Shortest Distance:\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Node " << i << " = " << dist[i] << endl;
    }

    return 0;
}
