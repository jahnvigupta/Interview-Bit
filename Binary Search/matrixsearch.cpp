int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int m=A.size();
    int n=A[0].size();
    int mi=0,ma=m-1;
    while(mi<=ma){
        //cout<<mi<<" "<<ma<<endl;
        int mid=(mi+ma)/2;
        if((A[mid][0]<=B and A[mid][n-1]>=B) or (mi==ma)){
            if(binary_search(A[mid].begin(),A[mid].end(), B))
                return 1;
            else
                return 0;
        }
        if(A[mid][0]>B)
            ma=mid;
        else
            mi=mid+1;
    }
    return 0;
}

