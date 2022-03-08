#include "mat.hpp"
using namespace ariel;

#include <iostream>
#include <stdexcept>
using namespace std;

std::string ariel::mat(int a, int b, char c, char d){
    
    if (a%2==0 || b%2==0 ){
        throw invalid_argument("number must odd ");
    }
    if (a<0 || b<0)
    {
       throw invalid_argument("number must positive");
    }
    
     return "a";
    
    };

