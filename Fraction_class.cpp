\\Fraction Class
#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {
    public:
    int n;
    int d;
    Fraction(int p,int q){
        n=p;
        d=q;
    }
    void add(Fraction obj){
        n=n*obj.d+obj.n*d;
        d=d*obj.d;
    }
    void multiply(Fraction obj){
        n=n*obj.n;
        d=d*obj.d;
    }
    void simplify(){
        int gcd=1;
        int m=min(n,d);
        for(int i=1;i<=m;i++){
            if(n%i==0&&d%i==0){
                gcd=i;
            }
        }
        n=n/gcd;
        d=d/gcd;
    }
    void print(){
        cout<<n<<"/"<<d<<endl;
    }

    

};

int main() {
int n,d;
    cin>>n>>d;
    Fraction ob(n,d);
    int q;
    cin>>q;
  
    for(int i=0;i<q;i++){
          int q1,n1,d1;
        cin>>q1>>n1>>d1;
        Fraction obj(n1,d1);
        if(q1==1){
            ob.add(obj);
            ob.simplify();
            ob.print();
        }
        else{
            ob.multiply(obj);
            ob.simplify();
            ob.print();
        }
    }
  

    return 0;
}
