int pivot(vector<int> A){
    int mi=0,ma=A.size()-1;
    while(mi<ma){
        //cout<<mi<<" "<<ma<<endl;
        int mid=(mi+ma)/2;
        if(A[mid]<A[ma])
            ma=mid;
        else if(A[mid]>A[ma])
            mi=mid+1;
    }
    return mi;
    
}
int Solution::search(const vector<int> &A, int B) {
    int ans=0;
    int k=pivot(A);
    if(binary_search(A.begin()+k,A.end(),B))
        return k+lower_bound(A.begin()+k,A.end(),B)-(A.begin()+k);
    else if(binary_search(A.begin(),A.begin()+k,B))
        return lower_bound(A.begin(),A.begin()+k,B)-A.begin();
    else 
        return -1;
    
}

