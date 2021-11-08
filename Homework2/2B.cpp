#include <iostream>
#include "list-b.h"
#include "list-b.cpp"
using namespace std ;

int main ( ) {
    List    a_list ;
    cin >> a_list ;

    a_list.is_empty();
	a_list.has_id("s");
	cout << a_list<<endl;
    a_list.reverse();
    cout << a_list << endl;

    return 0 ;
}
