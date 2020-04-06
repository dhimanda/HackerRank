/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU

#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    sp          fixed<<setprecision
#define    nl          '\n'
#define    endl        '\n'
#define    forr(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    fora(i,n)   for(int (i)=0; (i) < (n); (i)++)


int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010
char chk (char ch) {
    if(ch==']') return '[';
    elif (ch=='}') return '{';
    else return '(';
}
int main()
{
    //fast;
    //in_file;
    //out_file;
    int t=Int;
    while(t--){
        string a;
        cin >> a;
        stack <char> bra;
        bra.push('D');
        bool f = false;
        for(int i=0 ; i < a.size() ; i++){
            if(a[i]=='(' or a[i]=='{' or a[i]=='['){
                bra.push(a[i]);
            }
            else {
                //cout << bra.top()<<endl ;
                if( chk(a[i])== bra.top() ) {
                    //cout<< a[i] << chk(a[i]);
                    bra.pop();
                }
                else{
                    //cout <<endl<< a[i]<<endl;
                    f = true;
                    break;
                }
            }
        }
        bra.pop();
        //printf("Case %d: ", i);
        if (bra.empty() and f == false) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


// Contact : chessdhiman@gmail.com

