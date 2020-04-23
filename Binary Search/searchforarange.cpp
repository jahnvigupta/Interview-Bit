vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int ans=0;
    if(lower_bound(A.begin(),A.end(),B)==A.end())
        return {-1,-1};
    else {
        int lo=lower_bound(A.begin(),A.end(),B)-A.begin();
        int hi=upper_bound(A.begin(),A.end(),B)-A.begin();
        //cout<<lo<<" "<<hi<<endl;
        if(A[lo]!=B or A[hi-1]!=B)
            return {-1,-1};
        else    
            return {lo,hi-1};
    }
}

