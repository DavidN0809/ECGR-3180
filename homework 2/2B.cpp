#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
#include "list.h"
using namespace std ;

int main ( ) {
    List    a_list ;
    cin >> a_list ;

    a_list.is_empty();
	a_list.has_id("s");
    a_list.reverse();
    cout << a_list << endl;

    return 0 ;
}