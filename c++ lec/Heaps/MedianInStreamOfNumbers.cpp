#include <vector>
#include <queue>
using namespace std;

vector<double> getMedian(vector<int> &arr) {
    vector<double> medians;
    
    priority_queue<int> max_pq; // Max heap for the smaller half
    priority_queue<int, vector<int>, greater<int>> min_pq; // Min heap for the larger half
    
    for(int num : arr) {
        max_pq.push(num);
        min_pq.push(max_pq.top());
        max_pq.pop();
        
        // Balance heaps: max_pq can have at most one extra element
        if (max_pq.size() < min_pq.size()) {
            max_pq.push(min_pq.top());
            min_pq.pop();
        }

        // Compute median
        if (max_pq.size() == min_pq.size()) {
            medians.push_back((max_pq.top() + min_pq.top()) / 2.0);
        } else {
            medians.push_back(max_pq.top());
        }
    }
    
    return medians;
}