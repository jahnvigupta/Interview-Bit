vector<int> Solution::findPerm(const string A, int B) {
    vector<int> v;
    for(int i=1;i<=B;i++)
        v.push_back(i);
    for(int i=0;i<A.length();i++){
        if(A[i]=='D'){
            int k=i;
            while(A[k]!='I' and k>-1){
                swap(v[k],v[k+1]);
                k--;
            }
        }
    }
    return v;
}

