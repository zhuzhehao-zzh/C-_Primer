//page 6

#include <iostream>
#include <fstream>

int main(){
    std::ofstream my_cout("/dev/tty");
    my_cout<<"hello world"<<std::endl;
    return 0;
}