#include <iostream>

using namespace std;

long d_sum(long n){
    long sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long next_prime(long n){
    for(long i = 2; i*i <= n; i++){
        if(n % i == 0){
            n /= i;
            return i;
        }
    }
    return -1;
}

int main()
{
    long input, tmp, sum1, sum2, tt;

    while(cin >> input){
        if(input == 0)
            break;
        for(long n = 1;; n++){
            tmp = input + n;
            sum1 = d_sum(tmp);
            sum2 = 0;
            tt = next_prime(tmp);
            while(tt > 0){
                sum2 += d_sum(tt);
                tmp /= tt;
                tt = next_prime(tmp);
            }
            if(tmp < input + n)
                sum2 += d_sum(tmp);

            if(sum1 == sum2){
                tmp = input + n;
                break;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}
