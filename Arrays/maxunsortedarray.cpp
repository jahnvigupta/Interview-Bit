vector<int> Solution::subUnsort(vector<int> &A) {
    if(is_sorted(A.begin(),A.end())==1)
        return {-1};
    else{
        int l,r,flg1=0,flg2=0,X,Y;
        for(int i=0;i<A.size()-1;i++){
            if(A[i]>A[i+1] and flg1==0){
                l=i;
                X=A[i];
                flg1=1;
            }
        }
        
        for(int i=A.size()-1;i>0;i--){
            if(A[i]<A[i-1] and flg2==0){
                r=i;
                Y=A[i];
                flg2=1;
            }
        }
        int mi=INT_MAX,ma=INT_MIN;
        for(int i=l;i<=r;i++){
            if(A[i]<mi){
                mi=A[i];
            }
            if(A[i]>ma){
                ma=A[i];
            }
        }
        
        int i=0;
        while(A[i]<=mi){
            i++;
        }
        l=i;
        i=A.size()-1;
        while(A[i]>=ma){
            i--;
        }
        r=i;
        return {l,r};
    }
    
}
