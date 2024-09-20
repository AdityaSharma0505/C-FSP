#include <iostream>

using namespace std;    

int main(){
    int r1, c1, r2, c2;

    cout<<"Enter R1 : ";
    cin>>r1;

    cout<<"Enter C1 : ";
    cin>>c1;

    cout<<"Enter R2 : ";
    cin>>r2;

    cout<<"Enter C2 : ";
    cin>>c2;

    if(c1 != r2) {
        cout<<"The no. of rows of first matrix should be equal to the no. of columns.";
    }
    else {
        int matrix1[r1][c1];
        int matrix2[r2][c2];
        int result[r1][c2];

        cout<<"Enter the elements of the first matrix : \n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                cout<<"Enter the element ["<<i<<"]["<<j<<"] : ";
                cin>>matrix1[i][j];
            }
        }

        cout<<"Enter the elements of the second matrix : \n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                cout<<"Enter the element ["<<i<<"]["<<j<<"] : ";
                cin>>matrix2[i][j];
            }
        }

        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                result[i][j] = 0;
            }
        }

        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                for(int k = 0; k < c1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        cout<<"The resultant matrix is : \n";

        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
    }
    }

    return 0;
    
}