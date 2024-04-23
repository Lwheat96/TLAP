#include <iostream>
#include <vector>
/*  I need there to be a program that looks like this.

#
##
###
####
###
##
#

*/
int main() {
for (int row = 1; row <= 6; row++) {
    for (int hashNum = 1; hashNum <= 6 - row; hashNum++) {
        std::cout << "#";
    } 
    std::cout << "\n";
}
    //std::cout << "The first line is showing correctly.\n";
}