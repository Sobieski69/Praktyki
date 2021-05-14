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

//wojti
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    int AliceScore = 0;
    int BobScore = 0;

   for (int i = 0; i <= 2; i++ )
    {
        if ( a[i] > b[i] )
        {    
           AliceScore += 1;
        }
        else if ( b[i] > a[i] ) 
        {
            BobScore += 1;
        }
        else 
        {
            AliceScore += 0;
            BobScore +=0;
        }
        return AliceScore;
        return BobScore;
    }
}

void plusMinus(vector<int> arr, int n)
{
    int number_of_negative = 0;
    int number_of_zero = 0;
    int number_of_positive = 0;
    
    for ( int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        { 
            number_of_zero++;
        }
        else if(arr[i] > 0)
        {
            number_of_positive++;
        }
        else if (arr[i] < 0)
        {
            number_of_negative++;
        }
    }
    
    cout << fixed << setprecision(6) 
    
    << number_of_positive/(n*1.0) << "\n" 
    << number_of_negative/(n*1.0) << "\n" 
    << number_of_zero/(n*1.0);
    
}


//s sffs