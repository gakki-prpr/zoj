#include <iostream>
#include <algorithm>

using namespace std;

int dfs(int* t, int ind, int n, int count){
    if(ind == n * n)
        return count;
    if(t[ind] == -1)
         return dfs(t, ind + 1, n, count);

    int* rep = new int[n * n];
    bool legal = true;
    int sum = 0, temp;

    for(int i = 0; i < n * n; i++)
        rep[i] = t[i];

    rep[ind] = 1;

    for(int i = 0; i < n; i++){
        temp = rep[ind / n * n + i];
        sum += temp;
        if(sum < 0)
            sum -= temp;
        else if(sum > 1){
            legal = false;
            break;
        }
    }

    sum = 0;
    for(int i = 0; i < n; i++){
        temp = rep[n*i + ind % n];
		sum += temp;
        if(sum < 0)
            sum -= temp;
        else if(sum > 1){
            legal = false;
            break;
        }
    }

    if(legal == false)
         return dfs(t, ind + 1, n, count);
    else{
        int tmp1 = dfs(t, ind + 1, n, count);
        int tmp2 = dfs(rep, ind + 1, n, count + 1);
        return max(tmp1, tmp2);
    }
}

int main()
{
    int n;
    int* t;
    while(cin >> n){
        if(n == 0)
            break;
        t = new int[n * n];

        for(int i = 0; i < n * n; i++){
            char tmp;
            cin >> tmp;
            t[i] = tmp == '.' ? 0 : -1;
        }
        cout << dfs(t, 0, n, 0) << endl;
    }
}
