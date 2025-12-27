// In C there are 3 types of Constants:
// 1) Integer Constant: 1,2,3,4,5
// 2) Real Constants: 1.2,3.14,3.54
// 3) Character constant: 'a','e','%'

// IMPORTANT IN char constant always put single quotes
// example: char start = '*';
//---------------------------------------------------


// KEYWORDS
// These are reserved words used in C ( 32 words )

// Stucture of C

// #include <stdio.h> , here stdio.h is the pre-processor directive
/*
int main (){
    printf("The function to print anything")
    reture 0; // this tell compiler the code has 0 errors
    
}*///Here main function is used to print the code line by lin
//--------------------------------------------------------

// Output in new line
#include <stdio.h>
int main() {
    printf("Hi World"); 
    printf("Hi World"); 
    printf("Hi World"); 
    printf("Hi World"); 
    return 0; ;
}


//C allows only one main() and only one #include block per program structure.
// Run 1 progrma while making other a comment 
//      OR
#include <stdio.h>

int main() {

    // Output in new line
    printf("Hi World\n");

    // Without '\n'
    
    printf("Hi World\n");
    printf("Hi World\n");
    printf("Hi World\n");
    printf("Hi World\n");

    return 0;
}
