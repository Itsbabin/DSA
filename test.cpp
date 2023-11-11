#include <bits/stdc++.h>
using namespace std ;

int findfibo (int a){

    if(a==1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{

    int tem1 = findfibo(a-1);
    int tem2 = findfibo(a-2);
        
        return (tem1+tem2);
    }

}

 int main() {
    int a ;
    cout << "enter a value" << endl;
    cin >> a ;
    int b = findfibo(a);

    cout << b << endl;
    
     return 0 ;
}