#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices = 4;
    vector<int> graph[4];

    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);

    for(int i = 0; i < vertices; i++) {
        cout << "Vertex " << i << ": ";
        for(int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
