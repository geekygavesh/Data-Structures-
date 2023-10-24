#include<iostream>
using namespace std;

int maze2(int row, int col){   // is case me matrix ki numbering ulti assume krrhe
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightway = maze2(row,col-1);
    int downway = maze2(row-1,col);
    return rightway + downway;
}
void printpath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && er==ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int main(){
    
      cout<<maze2(3,3);
}
