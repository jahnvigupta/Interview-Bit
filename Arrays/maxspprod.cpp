int Solution::maxSpecialProduct(vector<int> &A) {
    if(A.size()<3)
        return 0;
    else {
        long long VL[A.size()]={0};
        stack<int> sl;
        for(int i=A.size()-1;i>-1;i--){
            while(!sl.empty() and A[i]>A[sl.top()]){
                int l=sl.top();
                sl.pop();
                VL[l]=i;
            }
            sl.push(i);
        }
        long long VR[A.size()]={0};
        stack<int> sr;
        for(int i=0;i<A.size();i++){
            while(!sr.empty() and A[i]>A[sr.top()] ){
                int r=sr.top();
                sr.pop();
                VR[r]=i;
            }
            sr.push(i);
        }
        long long ans=INT_MIN;
        for(int i=0;i<A.size();i++){
            //cout<<"VL[i] "<<VL[i]<<"VR[i] "<<VR[i]<<endl;
            ans=max(ans,VL[i]*VR[i]);
        }
        return ans%1000000007;
        
    }
}

