vector<int> Solution::wave(vector<int> &A) {
    vector<int> res;
    int n=A.size();
    res=A;
    sort(res.begin(),res.end());
    for(int i=0;i<n-1;i+=2){
        swap(res[i],res[i+1]);
    }
    return res;
}

