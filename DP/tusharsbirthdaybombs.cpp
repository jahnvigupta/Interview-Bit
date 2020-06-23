vector<int> Solution::solve(int A, vector<int> &B) {
    int min=INT_MAX,mini=-1;
    for(int i=0;i<B.size();i++){
        if(B[i]<min) {
            min=B[i];
            mini=i;
        }
    }
    int sz=A/min;
    vector<int> ans(sz,mini);
    if(sz*min==A)
        return ans;
    int diff=A-sz*min,k=0,i=0;
    while(diff>0 and k<ans.size() and i<mini){
        if(diff-(B[i]-min)<diff and diff-(B[i]-min)>=0){
            ans[k]=i;
            k++;
            diff=diff-(B[i]-min);
        }
        else {
            i++;
        }
    }
    return ans; 
}

