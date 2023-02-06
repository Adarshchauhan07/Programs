#include<bits/stdc++.h>
using namespace std;
vector<string>final;
bool check(int x,int y,vector<vector<bool>>map,vector<vector<int>>maze,int n){
    if((x>=0 && x<n) && (y>=0 && y<n) && maze[x][y]==1  && map[x][y]==0){
        return true;
    }
    return false;
}
void ratInMaze(int x,int y,int n,vector<vector<bool>> &map,vector<vector<int>>maze, string &str){
    if(x==n-1 && y==n-1){
        final.push_back(str);
        return;
    }
    //L R U D
    if(check(x,y-1,map,maze,n)){
        map[x][y]=1;
        map[x][y]=1;
        str.push_back('L');
        ratInMaze(x,y-1,n,map,maze,str);
        str.pop_back();
        map[x][y]=0;
    }
    if(check(x,y+1,map,maze,n)){
        map[x][y]=1;
        str.push_back('R');
        ratInMaze(x,y+1,n,map,maze,str);
        str.pop_back();
        map[x][y]=0;
    }
    if(check(x-1,y,map,maze,n)){
        map[x][y]=1;
        str.push_back('U');
        ratInMaze(x-1,y,n,map,maze,str);
        str.pop_back();
        map[x][y]=0;
    }
    if(check(x+1,y,map,maze,n)){
        map[x][y]=1;
        str.push_back('D');
        ratInMaze(x+1,y,n,map,maze,str);
        str.pop_back();
        map[x][y]=0;
    }
}
int main(){
    int size;
    cin >> size;
    vector<vector<int>>maze;
    string str = "";
    vector<vector<bool>> map(size, vector<bool>(size, 0));

    for (int i = 0; i < size; i++)
    {
        vector<int> vtr;
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            vtr.push_back(x);
        }
        maze.push_back(vtr);
    }
    ratInMaze(0,0,size,map,maze,str);
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }
}