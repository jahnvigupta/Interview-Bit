string Solution::intToRoman(int A) {
    string s="";
    int B[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    while(A>0){
        //cout<<A<<endl;
        int t=-1;
        for(int i=0;i<13;i++){
            //cout<<B[i]<<" ";
            if(A>=B[i]){
                //cout<<"hi!"<<endl;
                t=i;
            }
        }
        //cout<<t<<endl;
        A-=B[t];
        if(t==0)
            s+='I';
        if(t==1)
            s+="IV";
        if(t==2)
            s+='V';
        if(t==3)
            s+="IX";
        if(t==4)
            s+='X';
        if(t==5)
            s+="XL";
        if(t==6)
            s+='L';
        if(t==7)
            s+="XC";
        if(t==8)
            s+='C';
        if(t==9)
            s+="CD";
        if(t==10)
            s+='D';
        if(t==11)
            s+="CM";
        if(t==12)
            s+='M';
    }
    return s;
}

