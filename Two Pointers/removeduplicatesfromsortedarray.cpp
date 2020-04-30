int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int k=0;
    for(int i=0;i<A.size();i++){
        int cnt=1,j=i;
        //cout<<"i "<<i<<endl;
        if(i<A.size()-1 and A[i]==A[i+1]){
            int j=i;
            while(j<A.size()-1 and A[j]==A[j+1]){
                j++;
                cnt++;
            }
            i=j;
        }
        if(cnt>1){
            A[k]=A[i-1];
            k+=1;
        }
        else {
            A[k]=A[i];
            k++;
        }
    }
    //cout<<"k "<<k<<endl;
    return k;
        
}
