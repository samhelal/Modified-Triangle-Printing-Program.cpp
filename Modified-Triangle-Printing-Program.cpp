/*(Modified Triangle-Printing Program) Modify Exercise 5.15 to combine your code from 
the four separate triangles of asterisks such that all four patterns print side by side.
[Hint: Make clever use of nested for loops.] (c++ how to program) */
#include<iostream>
using namespace std;

int main (){

    for( int x(1) ; x<=10 ; x++ ){
        cout << " " << endl ;

        for(int y(1) ; y<=x ; y++ ){
            cout << "*"  ;
        }

        for(int z(10) ; z>x ; z--){
            cout << " " ;
        }

        cout <<" " ;
        
        for(int a(10) ; a>=x ; a--){
            cout << "*" ;
        }

        for(int b(1) ; b<x ; b++ ){
            cout << " " ;
        }
        
        for(int c(1) ; c<x ; c++){
            cout << " " ;
        }
        
        cout << " " ;

        for(int d(10) ; d>=x ; d--){
            cout << "*" ;
        }
        
        cout <<" " ;
        
        for(int e(10) ; e>x ; e--){
            cout << " " ;
        }
        
        for(int f(1) ; f<=x ; f++){
            cout << "*" ;
        }
        
        
    }
    cout << endl ;
    
}