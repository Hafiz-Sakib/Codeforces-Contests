#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(const unordered_map<int, unordered_map<int, int>> &graph, int startNode)
{
    // Priority queue to store nodes with the shortest distance
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Map to store distances from the start node
    unordered_map<int, int> distances;

    // Initialize distances with INF
    for (auto &pair : graph)
    {
        distances[pair.first] = INF;
    }

    // Set distance to start node to 0
    distances[startNode] = 0;

    // Push start node into priority queue
    pq.push({0, startNode});

    // Dijkstra's algorithm
    while (!pq.empty())
    {
        int current = pq.top().second;
        int currentDistance = pq.top().first;
        pq.pop();

        // If the current distance is greater than the stored distance, skip
        if (currentDistance > distances[current])
            continue;

        // Iterate through neighbors of current node
        for (auto &neighbor : graph.at(current))
        {
            int neighborNode = neighbor.first;
            int weight = neighbor.second;
            int newDistance = distances[current] + weight;

            // If the new distance is shorter, update distance and push neighbor into priority queue
            if (newDistance < distances[neighborNode])
            {
                distances[neighborNode] = newDistance;
                pq.push({newDistance, neighborNode});
            }
        }
    }

    // Print distances
    cout << "Node\tDistance from " << startNode << endl;
    for (auto &pair : distances)
    {
        cout << pair.first << "\t" << pair.second << endl;
    }
}

int main()
{
    // Initialize the graph
    unordered_map<int, unordered_map<int, int>> graph = {
        {0, {{1, 9}, {4, 7}, {3, 3}}},
        {1, {{0, 9}, {4, 8}, {5, 11}, {7, 6}, {3, 17}, {2, 2}}},
        {2, {{1, 2}, {7, 3}, {6, 11}, {5, 19}}},
        {3, {{0, 3}, {1, 17}, {4, 5}}},
        {4, {{0, 7}, {1, 8}, {6, 5}, {5, 12}}},
        {5, {{1, 11}, {4, 12}, {7, 13}, {6, 6}}},
        {6, {{2, 11}, {4, 5}, {5, 6}, {7, 8}}},
        {7, {{1, 6}, {2, 3}, {5, 13}, {6, 8}}}};

    // Run Dijkstra's algorithm from node 0
    dijkstra(graph, 0);

    return 0;
}
