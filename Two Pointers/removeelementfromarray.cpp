int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // Here I have used flg to reduce complexity.
    int k=0,j=0,flg=0;
    for(int i=0;i<A.size();i++){
        //cout<<j<<endl;
        if(A[i]==B and flg==0){
            k=i;
            j=i+1;
            while(A[j]==B and j<A.size()){
                j++;
            }
            if(j==A.size())
                break;
            swap(A[j],A[k]);
            k++;
            flg=1;
        }
        else if(A[i]==B and flg==1){
            k=i;
            while(A[j]==B and j<A.size()){
                j++;
            }
            if(j==A.size())
                break;
            swap(A[j],A[k]);
            k++;
        }
    }
    int rem=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==B)
            break;
        rem++;
    }
    return rem;
}

