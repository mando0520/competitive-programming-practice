/* 
N個のマスが一列に並んでいる。
K個のコマがあり、左からi番目のコマはマスAiに置かれている。
以下Q回の操作を行う
左からLi番目のコマが一番右のマスにあるときは何も行わない
左からLi番目のコマの一つ右のマスにコマがないなら、一つ右に移動させる

入力例
5 3 5
1 3 4
3 3 1 1 2

出力例
2 4 5

*/


#include <bits/stdc++.h>
using namespace std;

int N, K, Q;
int A[10009];
int L[10009];

int main() {

    cin >> N >> K >> Q;

    for (int i = 1; i <= K; i++){
        cin >> A[i];
    }

    for (int i = 1; i <= Q; i++){
        cin >> L[i];
    }

    for (int i = 1; i <= Q; i++){

        // 一番右にあるときは何も行わない
        if(A[L[i]] == N) continue;
        
        // 一つ右のマスにコマがあるときは何も行わない
        if(L[i] < K && A[L[i]]+1 == A[L[i]+1]) continue;

        A[L[i]]++;
    }

    for (int i = 1; i <= K; i++){
        cout << A[i] << " ";
    }


    return 0;
}