#include <iostream>
using namespace std;


int cal(int input, int count){
    for (int i=1;i<=input/2;i++){
        count++;
        if(i/2!=0) {
            count=cal(i,count);
        }
    }
    return count;
}


int main() {
    int n, count;
    cin >> n;
    count=cal(n, 0);

    cout << count +1 << endl;
    return 0;
}