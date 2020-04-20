//
//  main.cpp
//  game2048
//
//  Created by Mani Kireeti on 16/04/20.
//  Copyright © 2020 Mani Kireeti. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;
int A[5][5];


void display(){
    cout<<"-------------------------"<<endl;
    for(int i=1;i<5;i++){
        cout<<"|";
        for(int j=1;j<5;j++) cout<<"     |";
        cout<<endl;
        cout<<"|";
        for(int j=1;j<5;j++){
            if(A[i][j]>0 && A[i][j]<10) cout<<"  "<<A[i][j]<<"  |";
            if(A[i][j]>10 && A[i][j]<100) cout<<" "<<A[i][j]<<"  |";
            if(A[i][j]>100 && A[i][j]<1000) cout<<" "<<A[i][j]<<" |";
            if(A[i][j]>1000) cout<<A[i][j]<<"|";
            if(A[i][j]==0) cout<<"     |";
        }
        cout<<endl;
        cout<<"|";
        for(int j=1;j<5;j++) cout<<"     |";
        cout<<endl;
        cout<<"-------------------------"<<endl;
    }
}

void game(){
    
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            A[i][j]=0;
        }
    }
    int a=rand()%4+1;
    int b=rand()%4+1;
    int f=(rand() > RAND_MAX/2) ? 2 : 4;
    A[a][b]=f;
    int c=rand()%4+1;
    int d=rand()%4+1;
    int g=(rand() > RAND_MAX/2) ? 2 : 4;
    A[c][d]=g;
    display();
    while(true){
        int max=0,count=0;
        for(int i=1;i<5;i++){
            for(int j=1;j<5;j++){
                if(A[i][j]!=0){
                    count++;
                    if(A[i][j]>max) max=A[i][j];
                }
            }
        }
        if(count==16){
            cout<<"GAME OVER"<<endl;
            cout<<"YOUR SCORE: "<<max<<endl;
            cout<<"wnat to play another game press p or n: ";
            char w;
            cin>>w;
            if(w=='p' || w=='P') {
                system("clear");
                game();
            }
            else return;
        }
        
            char a;
            cin>>a;
            if(a=='W' || a=='w'){
                for(int i=1;i<5;i++){
                    int B[6];
                    for(int l=0;l<6;l++) B[l]=0;
                    for(int j=1;j<5;j++){
                        B[j]=A[j][i];
                    }
                    for(int k=1;k<5;k++){
                        if(B[k]!=0){
                            int l=k+1;
                            for(;l<5;l++){
                                if(B[l]!=0) break;
                            }
                            if(B[l]==B[k]){
                                B[k]=2*B[k];
                                B[l]=0;
                            }
                        }
                    }
                    int r=1;
                    int C[6];
                    for(int i=0;i<6;i++){
                        C[i]=0;
                    }
                    for(int p=1;p<5;p++){
                        if(B[p]!=0){
                            C[r]=B[p];
                            r++;
                        }
                    }
                    for(int h=1;h<5;h++){
                        A[h][i]=C[h];
                    }
                }
                while(true){
                    int a=rand()%4+1;
                    int b=rand()%4+1;
                    if(A[a][b]==0) {
                        int s=(rand() > RAND_MAX/2) ? 2 : 4;
                        A[a][b]=s;
                        break;
                    }
                    
                }
            }
            if(a=='A' || a=='a'){
                for(int i=1;i<5;i++){
                    int B[6];
                    for(int l=0;l<6;l++) B[l]=0;
                    for(int j=1;j<5;j++){
                        B[j]=A[i][j];
                    }
                    for(int k=1;k<5;k++){
                        if(B[k]!=0){
                            int l=k+1;
                            for(;l<5;l++){
                                if(B[l]!=0) break;
                            }
                            if(B[l]==B[k]){
                                B[k]=2*B[k];
                                B[l]=0;
                            }
                        }
                    }
                    int r=1;
                    int C[6];
                    for(int i=0;i<6;i++){
                        C[i]=0;
                    }
                    for(int p=1;p<5;p++){
                        if(B[p]!=0){
                            C[r]=B[p];
                            r++;
                        }
                    }
                    for(int h=1;h<5;h++){
                        A[i][h]=C[h];
                    }
                }
                while(true){
                    int a=rand()%4+1;
                    int b=rand()%4+1;
                    if(A[a][b]==0) {
                        int s=(rand() > RAND_MAX/2) ? 2 : 4;
                        A[a][b]=s;
                        break;
                    }
                }
            }
            if(a=='S' || a=='s'){
                for(int i=1;i<5;i++){
                    int B[6];
                    for(int t=1;t<6;t++) B[t]=0;
                    for(int j=1;j<5;j++){
                        B[j]=A[j][i];
                    }
                    for(int k=4;k>0;k--){
                        if(B[k]!=0){
                            int l=k-1;
                            for(;l>0;l--){
                                if(B[l]!=0) break;
                            }
                            if(B[l]==B[k]){
                                B[k]=2*B[k];
                                B[l]=0;
                            }
                        }
                    }
                    int r=4;
                    int C[6];
                    for(int i=0;i<6;i++){
                        C[i]=0;
                    }
                    for(int p=4;p>0;p--){
                        if(B[p]!=0){
                            C[r]=B[p];
                            r--;
                        }
                    }
                    for(int h=1;h<5;h++){
                        A[h][i]=C[h];
                    }
                }
                while(true){
                    int a=rand()%4+1;
                    int b=rand()%4+1;
                    if(A[a][b]==0) {
                        int s=(rand() > RAND_MAX/2) ? 2 : 4;
                        A[a][b]=s;
                        break;
                    }
                }

            }
            if(a=='D' || a=='d'){
                for(int i=1;i<5;i++){
                    int B[6];
                    for(int t=1;t<6;t++) B[t]=0;
                    for(int j=1;j<5;j++){
                        B[j]=A[i][j];
                    }
                    for(int k=4;k>0;k--){
                        if(B[k]!=0){
                            int l=k-1;
                            for(;l>0;l--){
                                if(B[l]!=0) break;
                            }
                            if(B[l]==B[k]){
                                B[k]=2*B[k];
                                B[l]=0;
                            }
                        }
                    }
                    int r=4;
                    int C[6];
                    for(int i=0;i<6;i++){
                        C[i]=0;
                    }
                    for(int p=4;p>0;p--){
                        if(B[p]!=0){
                            C[r]=B[p];
                            r--;
                        }
                    }
                    for(int h=1;h<5;h++){
                        A[i][h]=C[h];
                    }
                }
                while(true){
                    int a=rand()%4+1;
                    int b=rand()%4+1;
                    if(A[a][b]==0) {
                        int s=(rand() > RAND_MAX/2) ? 2 : 4;
                        A[a][b]=s;
                        break;
                    }
                }
            }
        system("clear");
        display();
    }
}

int main() {
    srand( static_cast<unsigned int>(time(nullptr)));
    system("clear");
    cout<<"WELCOME TO THE 2048 GAME"<<endl;
    cout<<"Press P to play or Q to quit: ";
    char a;
    cin>>a;
    if(a=='p' || a=='P') game();
    return 0;
}
