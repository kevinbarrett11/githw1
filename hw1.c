#include <stdio.h>
#include "hw1.h"
//Kbarre8 UIN: 675281207 9-15-19
static void I_have_written(){}
static int the_code[3] = {1,2,3};

static int that_you_need(){static int to_compile =4; //have to_compile return to make sure it returns before you_need
    return to_compile;
}



int sides_and(){
    static unsigned int symbols[2]; //putting these variables in here would appear before sides
    static unsigned int ridiculous = 1;
    static unsigned int has_a_bunch_of = 44;
}


int main(int argc,char* argv[]){
    char *id = "Kbarre8";  //put into char pointer so that printf would appear instead of puts
    printf(id);
    return 0;
}
void Forgive_me(){
}
int they_are_arbitrary;  //uninitialized so it would be bss
int so_random [2] = {1,2};
void and_so_varied(){
}
static void and_which(){ //put at end so that it would skip section 5
}


