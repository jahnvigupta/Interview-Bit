int Solution::findMedian(vector<vector<int> > &A) {
    int mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<A.size();i++){
        mi=min(mi,A[i][0]);
        ma=max(ma,A[i][A[0].size()-1]);
    }
    //cout<<mi<<" "<<ma<<endl;
    int n=A.size()*(A[0].size())/2+1;
    while(mi<ma){
        
        //cout<<mi<<" "<<ma<<endl;
        int mid=(mi+ma)/2;
        int temp=0;
        for(int i=0;i<A.size();i++){
            temp+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        if(temp<n)
            mi=mid+1;
        else
            ma=mid;
    }
    return mi;
}

