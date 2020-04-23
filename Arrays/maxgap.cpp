int Solution::maximumGap(const vector<int> &A) {
    vector<int> B=A;
    sort(B.begin(), B.end()); 
    if(B.size()<2)
        return 0;
    int ans=B[1]-B[0];
    for(int i=2;i<B.size();i++){
        ans=max(ans,B[i]-B[i-1]);
    }
    return ans;
}

