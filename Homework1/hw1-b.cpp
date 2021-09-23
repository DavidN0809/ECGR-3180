#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
//functions
void sort(int& a, int& b, int& c){//swap three integers into antepenultimate, penumlitate, and ultimate
    if (a > b){
        swap(a, b);
    }
    
    if (b > c){
        swap(b, c);
    }
    
    if (a > b){
        swap(a, b);
    }
    cout << c << endl << a << endl << b << endl;
}

int main(){
int totalinput=0,val=0,input1=0,input2=0,input3=0,sum=0,counter=0;
   while (cin >> val){
       sum += val;
       if(counter==0){
        input1=val;
        counter++;}
       else if(counter==1){
        input2=val;
        counter++;}
       else{
        input3=val;
        counter=0;}
    totalinput++;}//end of loop and total number of inputs

cout << "Number of inputs "<< totalinput << " sum is " << sum << endl;
sort(input1,input2,input3);
   return EXIT_SUCCESS;
}
