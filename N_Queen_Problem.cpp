
// Complexity = O(n!)
#include<iostream>
#include<vector>
using namespace std;
bool is_safe(vector<string>&board,int row,int col,int n){
    for(int i=0;i<n;i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void nQueens(vector<string>&board,int row,int n,vector<vector<string>>&ans){
    if(row == n){
        ans.push_back({board});
        return;
    }
    for(int j=0;j<n;j++){
        if(is_safe(board,row,j,n)){
            board[row][j] ='Q';
            nQueens(board,row+1,n,ans);
            board[row][j]='.';
        }
    }

}
vector<vector<string>> solve_nQueeens(int n){
    vector<string>board(n,string(n,'.'));
    vector<vector<string>> ans;
    nQueens(board,0,n,ans);
    return ans;
}
int main(){
    vector<vector<string>>a = solve_nQueeens(4);
    int x= 1;
    for (vector<string> board : a) {
        for (string s : board) { 
            for(char ch:s){
                cout << ch;
                if(ch == 'Q'){
                  cout<<x;
                  x++;
                }
            }
            cout<<endl;
        }
        cout << endl;
        x=1;
    }
    return 0;
}