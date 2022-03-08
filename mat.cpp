#include <iostream>
#include <string>
#include "mat.hpp"
using namespace std;

namespace ariel{
    string mat(int col, int row, char c1, char c2){
        // missimg parameter
        if (!col || !row || !c1 || !c2 || c1=='\0' || c2=='\0'){
           throw std::domain_error( "missimg parameter!" );
        }
        // bad input
        if ( (col<1) || (row<1) || (col%2==0) || (row%2==0) ){
            throw std::domain_error( "bad input!" );
        }
        return "function works";
    }
}