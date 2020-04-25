int Solution::romanToInt(string A) {
    int ans=0;
    for(int i=0;i<A.length();i++){
        if(i<A.length()-1 and A[i]=='I' and A[i+1]=='V'){
            i++;
            ans+=4;
        }
        else if(i<A.length()-1 and A[i]=='I' and A[i+1]=='X'){
            i++;
            ans+=9;
        }
        else if(i<A.length()-1 and A[i]=='X' and A[i+1]=='L'){
            i++;
            ans+=40;
        }
        else if(i<A.length()-1 and A[i]=='X' and A[i+1]=='C'){
            i++;
            ans+=90;
        }
        else if(i<A.length()-1 and A[i]=='C' and A[i+1]=='D'){
            i++;
            ans+=400;
        }
        else if(i<A.length()-1 and A[i]=='C' and A[i+1]=='M'){
            i++;
            ans+=900;
        }
        else if(A[i]=='I')
            ans+=1;
        else if(A[i]=='V')
            ans+=5;
        else if(A[i]=='X')
            ans+=10;
        else if(A[i]=='L')
            ans+=50;
        else if(A[i]=='C')
            ans+=100;
        else if(A[i]=='D')
            ans+=500;
        else if(A[i]=='M')
            ans+=1000;
    }
    return ans;
}

