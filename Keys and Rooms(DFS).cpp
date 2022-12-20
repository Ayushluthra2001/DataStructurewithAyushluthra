class Solution {
public:
    void dfs(vector<vector<int>>&rooms, vector<bool>&visited,int index){
        visited[index]=true;
        for(auto i : rooms[index]){
            if(!visited[i]){
                dfs(rooms,visited,i);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n+1,false);
        visited[0]=true;
        dfs(rooms,visited,0);
        for(int i=0;i<n;i++){
            if(visited[i]==false) return false;
        }
        return true;
    }
};
