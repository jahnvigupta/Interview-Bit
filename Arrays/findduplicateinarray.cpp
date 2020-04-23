int Solution::repeatedNumber(const vector<int> &A) {
    int sq=sqrt(A.size());
    int range=(A.size()/sq)+1;
    int c[range]={0};
    for(int i=0;i<A.size();i++){
        c[(A[i]-1)/sq]++;
    }
    int sb=range-1;
    for(int i=0;i<range;i++){
        if(c[i]>sq){
            sb=i;
            break;
        }
    }
    map<int,int> m;
    for(int i=0;i<A.size();i++){
        if(A[i]>sb*sq and A[i]<=(sb+1)*sq){
            m[A[i]]++;
            if(m[A[i]]>1)
                return A[i];
        }
    }
    return -1;
}

