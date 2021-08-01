#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int sqSize;
        scanf("%d", &sqSize);

        if(sqSize == 1){ char i; cin>>i; cout<<i<<'\n'; continue; }

        // All Square contents are saved here
        vector<string> sq;
        // Position of the stars in the square denoted by y, x
        vector<int> posX, posY;


        for(int i = 0; i < sqSize; i++){
            string l;
            cin>>l;
            sq.push_back(l);

            for(int j = 0; j < sqSize; j++){
                // Initializing the positions of the stars
                if(l[j] == '*'){
                    // x = j, y = i
                    posX.push_back(j);
                    posY.push_back(i);
                }
            }
        }

        vector<int> addX, addY;
        if(posX[0] == posX[1]){
            // *.
            // *.
            // ..* = last or back
                // ..* = is Blank in back position
            if(posX[0] > 0){
                sq[posY[0]][posX[0]-1] = '*';
                sq[posY[1]][posX[0]-1] = '*';
            }
            else{
                sq[posY[0]][posX[0]+1] = '*';
                sq[posY[1]][posX[0]+1] = '*';
            }
        }
        else if(posY[0] == posY[1]){
            // *..
            // *..

            // add in <----
            if(posY[0] > 0){
                sq[posY[0]-1][posX[0]] = '*';
                sq[posY[1]-1][posX[1]] = '*';
                // cout<<"adding to: "<<posY[0]<<" "<<posX[0];
                // cout<<"adding to: "<<posY[1]<<" "<<posX[0];
            }
            else{
                sq[posY[0]+1][posX[0]] = '*';
                sq[posY[1]+1][posX[1]] = '*';
            }
        }
        else{
            // *.
            // .*
            sq[posY[0]][posX[1]] = '*';
            sq[posY[1]][posX[0]] = '*';
        }

        // printing the square
        // cout<<"ANS: \n";
        for(int i = 0; i < sqSize; i++){
            cout<<sq[i]<<'\n';
        }
    }
    return 0;
}
/*
Test
1
4
..*.
....
*...
....

1
2
*.
.*

1
2
.*
.*

1
3
*.*
...
...

1
5
.....
..*..
.....
.*...
.....

1
4
....
....
*...
*...


Ans
4
*.*.
....
*.*.
....

2
**
**

2
**
**

3
*.*
*.*
...

5
.....
.**..
.....
.**..
.....

4
....
**..
**..
*/