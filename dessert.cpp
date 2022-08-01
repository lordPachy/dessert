#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream in("input0.txt");
    ofstream out("output.txt");

    int N = 0;
    int k = 0;

    in >> N;

    int storage[N][2] = {0};
    vector <vector <int>> friends;
    bool check[N] = {0};

    for(int i = 0; i < N; i++){
        in >> storage[i][0];
        in >> storage[i][1];
        friends.push_back();
        for(int a = 0; a < storage[i][0]; a++){
        int tmp;
        in >> tmp;
        friends[i].push_back(tmp);     //temporary variable
        }
    }

    while(k >= 0){
        if(storage[k][1] == 0){
            check[k] = 1;
        }
        /*if(k = N){
            k = 0;
        }*/
    }

    int count = 0;

    for(int b = 0; b < N; b++){
        if(check[b] == 1){
            count +=1;
        }
    }

    cout << count;

    return 0;
}
