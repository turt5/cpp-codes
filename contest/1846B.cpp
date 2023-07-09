/*              
                         "لا تفقد الأمل ولا تحزن." - القرآن 3: 139
                         “Do not lose hope, nor be sad.” -Quran 3:139

**********************  Author: Kaium Al Limon                    *******************
**********************  Facebook: www.facebook.com/codewithlimon  **********************
**********************  Github: www.github.com/codewithLimon      **********************
**********************  Codeforces Handle: TheShadowHunter        **********************
**********************  Submission Date: 07/07/2023                    **********************   


*/ 


#include<bits/stdc++.h>

using namespace std;

char checkWinner(char field[3][3])
{
    
    for (int i = 0; i < 3; i++) {
        if (field[i][0] != '.' && field[i][0] == field[i][1] && field[i][0] == field[i][2])
            return field[i][0];
    }

    
    for (int j = 0; j < 3; j++) {
        if (field[0][j] != '.' && field[0][j] == field[1][j] && field[0][j] == field[2][j])
            return field[0][j];
    }

    
    if (field[0][0] != '.' && field[0][0] == field[1][1] && field[0][0] == field[2][2])
        return field[0][0];

    if (field[0][2] != '.' && field[0][2] == field[1][1] && field[0][2] == field[2][0])
        return field[0][2];

    return 'D'; 
}

void start(){

    char field[3][3];

        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> field[i][j];
            }
        }

        char winner = checkWinner(field);

        if (winner == 'X')
            cout << "X" << endl;
        else if (winner == 'O')
            cout << "O" << endl;
        else if (winner == '+')
            cout << "+" << endl;
        else
            cout << "DRAW" << endl;
}

int main(int argc, char const *argv[])
{
    
    int t;
    
    cin>>t;

    while(t--){
        start();
    }
    return 0;
}

