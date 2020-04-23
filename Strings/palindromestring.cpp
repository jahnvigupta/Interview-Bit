int Solution::isPalindrome(string A) {
    for(int i=0;i<A.length();i++)
        A[i]=tolower(A[i]);
    //cout<<A;
    string B="";
    for(int i=0;i<A.length();i++){
        if((A[i]>=48 and A[i]<=57) or (A[i]>=65 and A[i]<=90) or (A[i]>=90 and A[i]<=122))
            B+=tolower(A[i]);
    }
    string C=B;
    reverse(B.begin(),B.end());
    if(C==B)
        return 1;
    return 0;
}

