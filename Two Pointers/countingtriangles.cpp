int Solution::nTriang(vector<int> &A) {
    long long ans=0;
    int m=1e9+7;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++){
        for(int j=i+1;j<A.size()-1;j++){
            ans=ans+(lower_bound(A.begin(),A.end(),A[i]+A[j])-(A.begin()+j+1))%m;
                
        }
    }
    return (int)(ans%m);
    
}

