class NumArray {
public:
    vector<int>seg;
    int n;
    void build(vector<int>&nums,int l,int r,int v){
        if(l==r)seg[v]=nums[l];
        else{
            int m=(l+r)/2;
            build(nums,l,m,2*v);
            build(nums,m+1,r,2*v+1);
            seg[v]=seg[2*v]+seg[2*v+1];
        }
    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        seg.resize(4*n);
        if(n)
        build(nums,0,n-1,1);
    }
    
    void updation(int l,int r,int val,int pos,int v){
        if(l==r){
            seg[v]=val;
        }
        else{
            int m=(l+r)/2;
            if(pos<=m)updation(l,m,val,pos,2*v);
            else updation(m+1,r,val,pos,2*v+1);
            seg[v]=seg[2*v]+seg[2*v+1];
        }
    }
    
    void update(int i, int val) {
        updation(0,n-1,val,i,1);
    }
    
    int rangeSumQuery(int l,int r,int range_l,int range_r,int v){
        if(range_l>range_r)return 0;
        if(l==range_l && r==range_r)return seg[v];
        else{
            int m=(l+r)/2;
            return rangeSumQuery(l,m,range_l,min(range_r,m),2*v)+
                rangeSumQuery(m+1,r,max(range_l,m+1),range_r,2*v+1);
        }
    }
    
    int sumRange(int i, int j) {
        return rangeSumQuery(0,n-1,i,j,1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
