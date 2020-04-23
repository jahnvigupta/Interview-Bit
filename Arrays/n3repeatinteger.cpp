int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m1=INT_MAX,m2=INT_MAX,cnt1=0,cnt2=0;
    for(int i=0;i<A.size();i++){
        if(m1==A[i])
            cnt1++;
        else if(m2==A[i])
            cnt2++;
        else if(cnt1==0){
            cnt1=1;
            m1=A[i];
        }
        else if(cnt2==0){
            cnt2=1;
            m2=A[i];
        }
        else {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==m1)
            cnt1++;
        else if(A[i]==m2)
            cnt2++;
    }
    if(cnt1>A.size()/3)
        return m1;
    else if(cnt2>A.size()/3)
        return m2;
    return -1;
}

