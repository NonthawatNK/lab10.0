#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main (){
    string g[9]={"A","B+","B","C+","C","D+","D","F","W"};
    cout <<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x =rand()%9;
    cout <<"You will get "<< g[x] <<" in this 261102.";
    return 0;
}