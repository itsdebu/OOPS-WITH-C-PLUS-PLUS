#include <iostream>

#include "first.h"
#include "second.h"
using namespace std;
int main()
{
    cout<<first::add(56,10)<<"\n";
    cout<<second::add(2.3,4.5)<<"\n";
} 
