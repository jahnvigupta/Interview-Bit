void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> c;
    int i=0,j=0;
    while(i<A.size() and j<B.size()){
        if(A[i]<B[j]){
            c.push_back(A[i]);
            i++;
        }
        else {
            c.push_back(B[j]);
            j++;
        }
    }
    for(int k=i;k<A.size();k++)
        c.push_back(A[k]);
    for(int k=j;k<B.size();k++)
        c.push_back(B[k]);
    A.clear();
    for(int k=0;k<c.size();k++){
        A.push_back(c[k]);
    }
}

