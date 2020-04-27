vector<string> Solution::prettyJSON(string A) {
    int tb=0,i=0;
    string s="";
    string B="";
    for(int k=0;k<A.length();k++){
        if(A[k]!=' ')
            B+=A[k];
    }
    A=B;
    vector<string> vec;
    while(i<A.length()){
        for(int i=0;i<tb;i++)
            s+='\t';
        for(int j=i;j<A.length();j++){
            if(A[i]=='[' or A[i]=='{'){
                s+=A[j];
                vec.push_back(s);
                tb++;
                s="";
                i=j+1;
                break;
            }
            else if(A[i]==']' or A[i]=='}'){
                tb--;
                string s1="";
                for(int k=0;k<tb;k++)
                    s1+='\t';
                s1+=A[j];
                if(A[j+1]==','){
                    s1+=A[j+1];
                    vec.push_back(s1);
                    i=j+2;
                    s="";
                    break;
                }
                vec.push_back(s1);
                s="";
                i=j+1;
                break;
            }
            else if(A[j+1]=='[' or A[j+1]=='{'){
                s+=A[j];
                vec.push_back(s);
                s="";
                i=j+1;
                break;
            }
            else if(A[j]==',' or A[j+1]==']' or A[j+1]=='}'){
                s+=A[j];
                vec.push_back(s);
                s="";
                i=j+1;
                break;
            }
            
            else {
                s+=A[j];
            }
            
        }
    }
    return vec;
}

