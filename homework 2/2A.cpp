#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
#include "list.h"
using namespace std ;

int main ( ) {
    List    a_list ;
    cin >> a_list ;

    //Now adding Head and TAIL
    a_list.prepend("HEAD");
    a_list.append("TAIL");
    cout << a_list << endl;
    
    return 0 ;
}