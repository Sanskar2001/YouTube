void Solution::solve(vector<vector<char> > &A) {


  int n = A.size(), m = A[0].size();
  queue<pair<int,int> > q; //STORES X AND Y INDICES OF EACH ELEMENT
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if((i==0 || j==0 || i==n-1 || j==m-1) && A[i][j]=='O'){
            A[i][j] = 'A'; 
            q.push({i,j});
        }
    }
}
    
// W N E S    
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

//MULTI LEVEL BFS TRAVERSAL
while(!q.empty()){
    auto p = q.front(); q.pop();
    int i = p.first, j = p.second;
    
    for(int k=0; k<4; k++){
        int x = i + dx[k], y = j + dy[k];
        if(x>=0 && x<n && y>=0 && y<m && A[x][y] == 'O'){
            A[x][y] = 'A';
            q.push({x,y});
        }
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(A[i][j] == 'A') A[i][j] = 'O';

        else if(A[i][j]=='O')
        A[i][j] = 'X';
    }
}



}