#include <bits/stdc++.h>
using namespace std ;


 int main() {

    string name = "11011" ;

   //  string new_name = name.substr(4);


   bitset<32> binaryNumber(name);
   int decimalNumber = static_cast<int>(binaryNumber.to_ulong());

    cout << decimalNumber << endl;


   return 0 ;
}