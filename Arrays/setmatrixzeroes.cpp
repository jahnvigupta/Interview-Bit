void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int>> B;
    int R[A.size()]={0};
    int C[A[0].size()]={0};
    B=A;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            if(B[i][j]==0){
                
                if(R[i]!=1)
                for(int k=0;k<A[i].size();k++)
                    A[i][k]=0;
                if(C[j]!=1)
                for(int k=0;k<A.size();k++)
                    A[k][j]=0;
            
                C[j]=1;
                R[i]=1;
            }
        }
    }
    
}

