class UndergroundSystem {
    unordered_map<int,pair<string,int>>a;
    unordered_map<string,pair<int,int>>b;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        a[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string s=a[id].first+"+"+stationName;
        b[s].first+=t-a[id].second;
        b[s].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s=startStation+"+"+endStation;
        double ans=(double)(b[s].first)/(double)(b[s].second);
        return ans;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
