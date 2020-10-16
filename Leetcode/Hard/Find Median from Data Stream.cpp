class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int>mx;
    priority_queue<int,vector<int>,greater<int>>mn;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int p=mx.size();
        int q=mn.size();
        if(p==q){
            if(!p)mn.push(num);
            else if(num<mx.top())mx.push(num);
            else mn.push(num);
        }
        else if(p>q){
            if(num>mx.top())mn.push(num);
            else {
                int x=mx.top();
                mx.pop();
                mx.push(num);
                mn.push(x);
            }
        }
        else{
            if(num<mn.top())mx.push(num);
            else{
                int x=mn.top();
                mn.pop();
                mn.push(num);
                mx.push(x);
            }
        }
    }
    
    double findMedian() {
        double ans;
        int p=mx.size();
        int q=mn.size();
        if(p==q)
        ans=(double)(mn.top()+mx.top())/2;
        else if(p>q)ans=mx.top();
        else ans=mn.top();
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
