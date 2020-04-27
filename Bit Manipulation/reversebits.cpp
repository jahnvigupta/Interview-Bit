unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int B[32]={0};
    for(int i=0;i<32;i++){
        if(A & (1<<i))
            B[i]=1;
    }
    // for(int i=0;i<32;i++)
    //     cout<<B[i]<<" ";
    unsigned int ans=0;
    for(int i=31;i>-1;i--){
        ans |=(B[i]<<(31-i));
    }
    return ans;
}

