int Solution::threeSumClosest(vector<int> &A, int B) {
    long long sum=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++){
        int p1=i+1,p2=A.size()-1;
        while(p1<p2){
            long long tmp=A[i]+A[p1]+A[p2];
            if(abs(B-tmp)<abs(B-sum))
                sum=tmp;
            if(tmp==B)
                return B;
            if(tmp<B)
                p1++;
            if(tmp>B)
                p2--;
        }
    }
    return sum;
}

