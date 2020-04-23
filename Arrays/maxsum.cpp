int Solution::maxSubArray(const vector<int> &A) {
    long long su=0,ans=INT_MIN;
    for(int i=0;i<A.size();i++){
        su+=A[i];
        if(su>ans)
            ans=su;
        if(su<0)    
            su=0;
        
    }
    return ans;
}

