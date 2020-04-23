int Solution::solve(vector<string> &A) {
    vector<float> B;
    for(int i=0;i<A.size();i++)
        B.push_back(stof(A[i]));
    float a=B[0],b=B[1],c=B[2];
    for(int i=3;i<B.size();i++){
        if(a+b+c>1 and a+b+c<2)
            return 1;
        else if(a+b+c>2){
            if(a>b && a>c)
                a=B[i];
            else if(b>a && b>c)
                b=B[i];
            else
                c=B[i];
        }
        else {
            if(a<b && a<c)
                a=B[i];
            else if(b<a && b<c)
                b=B[i];
            else
                c=B[i];
        }
    }
    if(a+b+c>1 and a+b+c<2)
        return 1;
    else
        return 0;
}
