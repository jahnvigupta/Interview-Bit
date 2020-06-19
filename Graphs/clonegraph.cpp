/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode* clone(UndirectedGraphNode *node,unordered_map<UndirectedGraphNode *,UndirectedGraphNode *> &ma) {
    UndirectedGraphNode * cloneNode= new UndirectedGraphNode(node->label);
    ma[node]=cloneNode;
    for(auto ne:node->neighbors){
        if(ma.find(ne)==ma.end())
            cloneNode->neighbors.push_back(clone(ne,ma));
        else
            cloneNode->neighbors.push_back(ma[ne]);
    }
    return cloneNode;
}
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    unordered_map<UndirectedGraphNode *,UndirectedGraphNode *> ma;
    
    return clone(node,ma);
}

