#include <iostream>
#include "BinarySearchTreeCD.h"
using namespace std;

    // Test program
int main( )
{
    BinarySearchTree<int> t;
//    int NUMS = 400000;
    int NUMS = 20;
    const int GAP  = 3 ;
    const int CAP  = 19;
    int i;
    int key ;

    cout << "Start of BSTtest" << endl;

    key = CAP/2;
    for( i = 1 ; i <= NUMS ; i++ ){
        key = (key + GAP) % CAP ;
        t.insert( key );
    }

    if( NUMS < 40 ){
        cout << "Keys:" << endl;
        t.printTree( );
        cout << "Tree:" << endl;
        t.displayTree(); 
        //cout << endl << "there are 6 leaves hardcoded in the tree" << endl;
        //cout << "Now calculating how many leaves this tree has with count_leaves()" << endl;
        //int p = t.count_leaves();
        //cout << endl << "Laves found: "<< p << endl;
        cout << "*********************************" << endl;
        cout << "tree of 19 nodes, maximum depth 6" << endl;
        cout << "*********************************" << endl;

        int CD0 = t.countDeep(0);
        int CD1 = t.countDeep(1);
        int CD2 = t.countDeep(2);
        int CD3 = t.countDeep(3);
        int CD4 = t.countDeep(4);
        int CD5 = t.countDeep(5);
        int CD6 = t.countDeep(6);
        int CD7 = t.countDeep(7);

        cout << "Leaves of depth 0 or more should be 19, countDeep: " << CD0 << endl;
        cout << "Leaves of depth 1 or more should be 18, countDeep: " << CD1 << endl;
        cout << "Leaves of depth 2 or more should be 16, countDeep: " << CD2 << endl;
        cout << "Leaves of depth 3 or more should be 12, countDeep: " << CD3 << endl;
        cout << "Leaves of depth 4 or more should be 7, countDeep: " << CD4 << endl;
        cout << "Leaves of depth 5 or more should be 3, countDeep: " << CD5 << endl;
        cout << "Leaves of depth 6 or more should be 1, countDeep: " << CD6 << endl;
        cout << "Leaves of depth 7 or more should be 0, countDeep: " << CD7 << endl;

        
        
    }

/*
    for( i = 1; i < NUMS; i+= 2 )
        t.remove( i );

    if( NUMS < 40 ) t.printTree( );

    BinarySearchTree<int> t2;
    t2 = t;
*/
    cout << "End of BSTtest" << endl;

    return 0;
}