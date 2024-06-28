#include<iostream>

using namespace std;

void solveMaze(int maze[20][20],int solution[20][20],int x,int y,int n,bool* flag)
{

if(x==n-1 && y==n-1) 

{

solution[x][y]=1;

*flag-true;

return;

}
 if(x>n-1 || x<0 ||y>n-1 || y<0){

return;

}
if (x > n - 1 || x < 0 || y > n - 1 || y < 0 || maze[x][y] == 0 ||
    solution[x][y] == 1) {

return;
}

solution[x][y] = 1;

solveMaze(maze, solution, x - 1, y, n, flag);
solveMaze(maze, solution, x + 1, y, n, flag);
solveMaze(maze, solution, x, y - 1, n, flag);
solveMaze(maze, solution, x, y + 1, n, flag);
solution[x][y] = 0;
}
bool ratInAMaze(int maze [20][20], int n){
    int solution [20][20];
    for (int i = 0; i<n; i++){
    for (int j =0; j<n; j++){
        solution[i][j] = 0;
    }
    }
    bool * flag = new bool;
    *flag = false ;
    solveMaze(maze, solution, 0,0,n ,flag);
    if (*flag){
        return true;

    }
    return false;
}





