#include<bits/stdc++.h>
using namespace std;
class MedianFinder {
public:
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    
    double median;
    
    MedianFinder() {
        median = 0;
    }
    
    void addNum(int num) {

        if(max_heap.size() > min_heap.size()) {

            if(num < median) {
                min_heap.push(max_heap.top());
                max_heap.pop();
                max_heap.push(num);
            }
            else{
                min_heap.push(num);
            }
            
            median = (double)(min_heap.top() + max_heap.top()) / 2.0;
        }

        else if (max_heap.size() < min_heap.size()){

            if(num > median){
                max_heap.push(min_heap.top());
                min_heap.pop();
                min_heap.push(num);
            }
            else{
                max_heap.push(num);
            }
            
            median = (double)(min_heap.top() + max_heap.top()) / 2.0;
        }
        else {
            if( num < median){
                max_heap.push(num);
                median = (double)max_heap.top();
            }
            else{
                min_heap.push(num);
                median = (double)min_heap.top();
            }
        }
        
    }
    double findMedian() {
        return median;
    }
};
int main(){
	MedianFinder* obj = new MedianFinder();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int num;cin>>num;
		obj->addNum(num);
		double ans= obj->findMedian();
		cout<<"median now = "<<ans<<endl;
	}
}

