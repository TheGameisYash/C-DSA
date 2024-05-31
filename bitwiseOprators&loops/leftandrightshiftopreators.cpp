#include<iostream>
using namespace std;

int main() {
    
    int a=7;
    int ans = (a << 5);

    cout << ans << endl;



    // <<---- ye opreator se sari bit lift jati hai or *2 hota hai(left most bit udd jayegi)

    // >> ----- ye opreator sari bit ko right bhej rha hai and kisi bhi number ko right shift karte hai n times to wo divide hoga 2 ki power n se
    // (right most bit udd jayegi)


    int n=-100;
    int anss = (n >> 1);

    cout << anss << endl;

    // negative number ho or signed int ho to iss case me compiler handle karlega right shift ko

    unsigned int x=-100;
    

    cout << (x >> 1) << endl;

    // usigned int ke undar ek positive large number milega


    int y = 10;
    cout << (y << -1);




}