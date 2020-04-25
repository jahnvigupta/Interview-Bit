int Solution::lengthOfLastWord(const string A) {
    int cnt=0;
    int k=A.length()-1;
    while(A[k]==' ')
        k--;
    for(int i=k;i>-1;i--){
        if(A[i]==' ')
            break;
        else
            cnt++;
    }
    return cnt;
}

