#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits>
#include <algorithm>

using namespace std;

class Graph {
public:
    unordered_map<string, vector<pair<string, int>>> adjList;

    void addEdge(const string& src, const string& dest, int weight) {
        adjList[src].push_back(make_pair(dest, weight));
        adjList[dest].push_back(make_pair(src, weight)); 
        }

    vector<string> dijkstra(const string& start, const string& end) {
        unordered_map<string, int> dist;
        unordered_map<string, string> prev;
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;

        for (const auto& node : adjList) {
            dist[node.first] = numeric_limits<int>::max();
            prev[node.first] = "";
        }
        dist[start] = 0;
        pq.push(make_pair(0, start));

        while (!pq.empty()) {
            pair<int, string> top = pq.top();
            pq.pop();
            int d = top.first;
            string u = top.second;

            if (d > dist[u]) continue;

            for (const pair<string, int>& neighbor : adjList[u]) {
                string v = neighbor.first;
                int weight = neighbor.second;
                int newDist = d + weight;
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    prev[v] = u;
                    pq.push(make_pair(newDist, v));
                }
            }
        }

        vector<string> path;
        for (string at = end; !at.empty(); at = prev[at]) {
            path.push_back(at);
        }
        reverse(path.begin(), path.end());
        return path;
    }

    void viewAllRoutes() {
        for (const auto& node : adjList) {
            cout << "Routes from " << node.first << ":" << endl;
            for (const pair<string, int>& neighbor : node.second) {
                cout << "  To " << neighbor.first << " with distance/time: " << neighbor.second << endl;
            }
        }
    }
};


void printPath(const vector<string>& path) {
    for (const string& node : path) {
        cout << node << " ";
    }
    cout << endl;
}


void menu() {
    Graph g;
    while (true) {
        cout << "\nTravel Planner" << endl;
        cout << "1. Add Route" << endl;
        cout << "2. Find Shortest Path" << endl;
        cout << "3. View All Routes" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            string src, dest;
            int weight;
            cout << "Enter source: ";
            getline(cin, src);
            cout << "Enter destination: ";
            getline(cin, dest);
            cout << "Enter weight (distance/time): ";
            cin >> weight;
            cin.ignore();
            g.addEdge(src, dest, weight);
            cout << "Route added!" << endl;
        } else if (choice == 2) {
            string start, end;
            cout << "Enter start destination: ";
            getline(cin, start);
            cout << "Enter end destination: ";
            getline(cin, end);
            vector<string> path = g.dijkstra(start, end);
            cout << "Shortest path from " << start << " to " << end << " is: ";
            printPath(path);
        } else if (choice == 3) {
            g.viewAllRoutes();
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }
}

int main() {
    menu();
    return 0;
}
