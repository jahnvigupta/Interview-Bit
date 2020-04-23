bool isPossible(int A,vector<int> C,long long int B){
    long long int t=B;
    long long i=0,cnt=1;
    while(i<C.size()){
        if(cnt>A){
            return false;
        }
        if(C[i]>t){
            cnt++;
            t=B;
        }
        else {
            t-=C[i];
            i++;
        }
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    int n=C.size();
    long long sum=0;
    for(int i=0;i<n;i++)
        sum=(sum%10000003+C[i]%10000003);
    long long mi=0,ma=sum*B;
    if(A==1)
        return ma%10000003;
    long long int ans=sum%10000003;
    while(mi<ma){
        long long int mid=mi+(ma-mi)/2;
        if(isPossible(A,C,mid/B)){
            ans=mid%10000003;
            ma=mid;
        }
        else
            mi=mid+1;
    }
    return ans%10000003;
}

