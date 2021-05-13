#include <iostream>

using namespace std;
int main(){
  
}

int diagonalDifference(vector<vector<int>> arr, int n) {
    int firstDiagonal= 0;
    int secondDiagonal= 0;
    int tmp = n;
    
for(int i=0; i<n;i++){
    for (int j=0; j<n;j++){
        if (i==j){
            firstDiagonal += arr[i][j];
            
        }
         if(j == tmp-1){
                secondDiagonal += arr[i][j];
                tmp--;
            }
    }
}

return abs(firstDiagonal - secondDiagonal);
}
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    
    vector<int> scoreBoard{0,0};

    for (int i=0; i<=2; i++){
        if (a[i] > b[i]){
            scoreBoard[0]++;
        }
        else if(b[i] > a[i]){
            scoreBoard[1]++;
        }
    }
    return scoreBoard;

}
//s sffs