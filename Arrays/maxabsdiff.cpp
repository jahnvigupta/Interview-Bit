int Solution::maxArr(vector<int> &A) {
    int ma1=INT_MIN,mi1=INT_MAX,ma2=INT_MIN,mi2=INT_MAX;
    for(int i=0;i<A.size();i++){
        ma1=max(ma1,A[i]+i);
        mi1=min(mi1,A[i]+i);
        ma2=max(ma2,A[i]-i);
        mi2=min(mi2,A[i]-i);
    }
    return max(abs(ma1-mi1),abs(ma2-mi2));
}

