class LRUCache {
    list<pair<int,int>>ls;
    int sz;
    unordered_map<int,list<pair<int,int>>::iterator>m;
public:
    LRUCache(int capacity) {
       sz=capacity; 
    }
    
    int get(int key) {
        auto pos=m.find(key);
        if(pos!=m.end()){
            ls.splice(ls.begin(),ls,pos->second);
            m[key]=ls.begin();
            return ls.begin()->second;
        }
        else return -1;
    }
    
    void put(int key, int value) {
        auto pos=m.find(key);
        if(pos!=m.end()){
            ls.splice(ls.begin(),ls,pos->second);
            ls.begin()->second=value;
            m[key]=ls.begin();
        }
        else if(ls.size()<sz){
            pair<int,int>p={key,value};
            ls.push_front(p);
            m[key]=ls.begin();
        }
        else {
            pair<int,int>p={key,value};
            int last_element=ls.back().first;
            ls.pop_back();
            m.erase(last_element);
            ls.push_front(p);
            m[key]=ls.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
