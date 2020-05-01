int Solution::maxArea(vector<int> &A) {
    if(A.size()<2)
        return 0;
    else {
        int ans=INT_MIN;
        int i=0,j=A.size()-1;
        while(i<j){
            ans=max(ans,(j-i)*min(A[i],A[j]));
            A[i]<A[j] ? i++ : j--;
        }
        return ans;
    }
}

