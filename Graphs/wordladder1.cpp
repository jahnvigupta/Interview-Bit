int Solution::solve(string A, string B, vector<string> &C) {
    unordered_map<string,bool> vis;
    for(int i=0;i<C.size();i++){
        vis[C[i]]=false;
    }
    vis[A] = true;
    queue<string> q;
    unordered_map<string,int> dist;
    q.push(A);
    while(!q.empty()){
        string temp=q.front();
        q.pop();
        for(int i=0;i<temp.size();i++){
            string x=temp;
            for(char a='a';a<='z';a++){
                x[i]=a;
                if(vis.find(x)!=vis.end() and !vis[x]){
                    vis[x]=true;
                    q.push(x);
                    dist[x]=dist[temp]+1;
                }
            }
        }
    }
    if(dist.find(B)!=dist.end())
        return dist[B]+1;
    else
        return 0;
}
// Using dijsktra
// int minDistance(vector<int> &dist, bool sptSet[],int V) 
// { 
//     int min = INT_MAX, min_index; 
//     for (int v = 0; v < V; v++) 
//         if (sptSet[v] == false && dist[v] <= min) 
//             min = dist[v], min_index = v;
//     return min_index; 
// } 
// void dijsktra(vector<vector<int>> &G,int src, int size,vector<int> &dist){
//     bool sptSet[size];
//     for(int l=0;l<size;l++)
//         sptSet[l]=false;
//     dist[src]=0;
//     for (int count = 0; count < size - 1; count++) { 
//         int u = minDistance(dist, sptSet,size); 
//         sptSet[u] = true; 
//         for (int v = 0; v < size; v++) 
//             if (!sptSet[v] && G[u][v] && dist[u] != INT_MAX 
//                 && dist[u] + G[u][v] < dist[v]) 
//                 dist[v] = dist[u] + G[u][v]; 
//     } 
// }
// int Solution::solve(string A, string B, vector<string> &C) {
//     int start=-1,end=-1;
//     vector<string> vec;
//     for(int i=0;i<C.size();i++){
//         vec.push_back(C[i]);
//     }
//     for(int i=0;i<C.size();i++){
//         if(C[i]==A)
//             start=i;
//     }
//     if(start==-1){
//         vec.push_back(A);
//         start=vec.size()-1;
//     }
//     for(int i=0;i<C.size();i++){
//         if(C[i]==B)
//             end=i;
//     }
//     if(end==-1){
//         vec.push_back(B);
//         end=vec.size()-1;
//     }
//     vector<vector<int>> G;
//     for(int i=0;i<vec.size();i++){
//         vector<int> tmp;
//         for(int j=0;j<vec.size();j++){
//             tmp.push_back(0);
//         }    
//         G.push_back(tmp);
//     }
//     for(int i=0;i<vec.size();i++){
//         for(int j=i;j<vec.size();j++){
//             int cnt=0;
//             for(int k=0;k<vec[0].length();k++){
//                 if(vec[i][k]!=vec[j][k])
//                     cnt++;
//             }
//             if(cnt==1) {
//                 G[i][j]=1;
//                 G[j][i]=1;
//             }
//         }    
//     }
//     vector<int> dist;
//     for(int i=0;i<vec.size();i++){
//         dist.push_back(INT_MAX);
//     }
//     dijsktra(G,start,vec.size(),dist);
//     // for(int i=0;i<dist.size();i++)
//     //     cout<<dist[i]<<" ";
//     // cout<<endl;
//     //cout<<"end "<<end<<endl;
//     if(dist[end]!=INT_MAX)
//         return dist[end]+1;
//     else 
//         return 0;
// }
