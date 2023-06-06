class Solution {
public:
    int  find_and(int l, int r ) 
    {
        // Code here.
       while(l<r){
           r=r&(r-1);
       }
       return r;
    }
};