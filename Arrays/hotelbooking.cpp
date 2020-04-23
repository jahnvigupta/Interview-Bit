
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>> A;
    for(int i=0;i<arrive.size();i++)
        A.push_back(make_pair(arrive[i],depart[i]));
    sort(A.begin(),A.end());
    priority_queue <int, vector<int>, greater<int> > occ;
    for(int i=0;i<arrive.size();i++){
        if(A[i].first==A[i].second)
            continue;
        else if(occ.size()<K){
            occ.push(A[i].second);
        }
        else if(occ.size()==K){
            if(occ.top()>A[i].first){
                //cout<<occ.top()<<" "<<A[i].first<<endl;
                return 0;
            }
            else {
                occ.pop();
                occ.push(A[i].second);
            }
        }
    }
    return 1;
}

