//http://codeforces.com/problemset/problem/431/B
#include<bits/stdc++.h>
int permutations[120][5]={
  { 1, 2, 3, 4, 5 },
  { 1, 2, 3, 5, 4 },
  { 1, 2, 4, 3, 5 },
  { 1, 2, 4, 5, 3 },
  { 1, 2, 5, 3, 4 },
  { 1, 2, 5, 4, 3 },
  { 1, 3, 2, 4, 5 },
  { 1, 3, 2, 5, 4 },
  { 1, 3, 4, 2, 5 },
  { 1, 3, 4, 5, 2 },
  { 1, 3, 5, 2, 4 },
  { 1, 3, 5, 4, 2 },
  { 1, 4, 2, 3, 5 },
  { 1, 4, 2, 5, 3 },
  { 1, 4, 3, 2, 5 },
  { 1, 4, 3, 5, 2 },
  { 1, 4, 5, 2, 3 },
  { 1, 4, 5, 3, 2 },
  { 1, 5, 2, 3, 4 },
  { 1, 5, 2, 4, 3 },
  { 1, 5, 3, 2, 4 },
  { 1, 5, 3, 4, 2 },
  { 1, 5, 4, 2, 3 },
  { 1, 5, 4, 3, 2 },
  { 2, 1, 3, 4, 5 },
  { 2, 1, 3, 5, 4 },
  { 2, 1, 4, 3, 5 },
  { 2, 1, 4, 5, 3 },
  { 2, 1, 5, 3, 4 },
  { 2, 1, 5, 4, 3 },
  { 2, 3, 1, 4, 5 },
  { 2, 3, 1, 5, 4 },
  { 2, 3, 4, 1, 5 },
  { 2, 3, 4, 5, 1 },
  { 2, 3, 5, 1, 4 },
  { 2, 3, 5, 4, 1 },
  { 2, 4, 1, 3, 5 },
  { 2, 4, 1, 5, 3 },
  { 2, 4, 3, 1, 5 },
  { 2, 4, 3, 5, 1 },
  { 2, 4, 5, 1, 3 },
  { 2, 4, 5, 3, 1 },
  { 2, 5, 1, 3, 4 },
  { 2, 5, 1, 4, 3 },
  { 2, 5, 3, 1, 4 },
  { 2, 5, 3, 4, 1 },
  { 2, 5, 4, 1, 3 },
  { 2, 5, 4, 3, 1 },
  { 3, 1, 2, 4, 5 },
  { 3, 1, 2, 5, 4 },
  { 3, 1, 4, 2, 5 },
  { 3, 1, 4, 5, 2 },
  { 3, 1, 5, 2, 4 },
  { 3, 1, 5, 4, 2 },
  { 3, 2, 1, 4, 5 },
  { 3, 2, 1, 5, 4 },
  { 3, 2, 4, 1, 5 },
  { 3, 2, 4, 5, 1 },
  { 3, 2, 5, 1, 4 },
  { 3, 2, 5, 4, 1 },
  { 3, 4, 1, 5, 2 },
  { 3, 4, 2, 1, 5 },
  { 3, 4, 2, 5, 1 },
  { 3, 4, 5, 1, 2 },
  { 3, 4, 5, 2, 1 },
  { 3, 5, 1, 2, 4 },
  { 3, 5, 1, 4, 2 },
  { 3, 5, 2, 1, 4 },
  { 3, 5, 2, 4, 1 },
  { 3, 5, 4, 1, 2 },
  { 3, 5, 4, 2, 1 },
  { 4, 1, 2, 3, 5 },
  { 4, 1, 2, 5, 3 },
  { 4, 1, 3, 2, 5 },
  { 4, 1, 3, 5, 2 },
  { 4, 1, 5, 2, 3 },
  { 4, 1, 5, 3, 2 },
  { 4, 2, 1, 3, 5 },
  { 4, 2, 1, 5, 3 },
  { 4, 2, 3, 1, 5 },
  { 4, 2, 3, 5, 1 },
  { 4, 2, 5, 1, 3 },
  { 4, 2, 5, 3, 1 },
  { 4, 3, 1, 2, 5 },
  { 4, 3, 1, 5, 2 },
  { 4, 3, 2, 1, 5 },
  { 4, 3, 2, 5, 1 },
  { 4, 3, 5, 1, 2 },
  { 4, 3, 5, 2, 1 },
  { 4, 5, 1, 2, 3 },
  { 4, 5, 1, 3, 2 },
  { 4, 5, 2, 1, 3 },
  { 4, 5, 2, 3, 1 },
  { 4, 5, 3, 1, 2 },
  { 4, 5, 3, 2, 1 },
  { 5, 1, 2, 3, 4 },
  { 5, 1, 2, 4, 3 },
  { 5, 1, 3, 2, 4 },
  { 5, 1, 3, 4, 2 },
  { 5, 1, 4, 2, 3 },
  { 5, 1, 4, 3, 2 },
  { 5, 2, 1, 3, 4 },
  { 5, 2, 1, 4, 3 },
  { 5, 2, 3, 1, 4 },
  { 5, 2, 3, 4, 1 },
  { 5, 2, 4, 1, 3 },
  { 5, 2, 4, 3, 1 },
  { 5, 3, 1, 2, 4 },
  { 5, 3, 1, 4, 2 },
  { 5, 3, 2, 1, 4 },
  { 5, 3, 2, 4, 1 },
  { 5, 3, 4, 1, 2 },
  { 5, 3, 4, 2, 1 },
  { 5, 4, 1, 2, 3 },
  { 5, 4, 1, 3, 2 },
  { 5, 4, 2, 1, 3 },
  { 5, 4, 2, 3, 1 },
  { 5, 4, 3, 1, 2 },
  { 5, 4, 3, 2, 1 }
};
int main(){
    int size = 5;
    int mat[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
            std::cin>>mat[i][j];
    }
    int maxTalk = 0;
    for(int i=0;i<120;i++){
      int talk = 0;
      for(int j=0;j<5;j++){
        int steptalk = 0;
        for(int k=j;k<5;k+=2){
          int idx1 = permutations[i][k];
          int idx2 = permutations[i][k+1];
          steptalk += mat[idx1][idx2+1] + mat[idx1+1][idx2];
        }
        talk += steptalk;
      }
      // std::cout<<"for combination "<<
      if(talk>maxTalk)
        maxTalk = talk;
    }
    std::cout<<maxTalk<<"\n";
}
