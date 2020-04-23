bool isPossible(vector<int> A, int B, long long C){
    long long p=C;
    int i=0,cnt=1;
    while(i<A.size()){
        if(cnt>B)
            return false;
        if(A[i]>p){
            cnt++;
            p=C;
        }
        else {
            p=p-A[i];
            i++;
        }
    }
    return true;
}
int Solution::books(vector<int> &A, int B) {
    if(B>A.size() or B==0)
        return -1;
    long long sum=0;
    for(int i=0;i<A.size();i++)
        sum+=A[i];
    if(B==1)    
        return sum;
    long long mi=0,ma=sum,ans=0;
    while(mi<ma){
        long long mid=(mi+ma)/2;
        if(isPossible(A,B,mid)){
            ans=mid;
            ma=mid;
        }
        else {
            mi=mid+1;
        }
    }
    return ans;
}

