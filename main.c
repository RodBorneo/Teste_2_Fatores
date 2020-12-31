//
//  main.c
//  array de string
//
//  Created by Rodrigo Bornéo on 12/03/17.
//  Copyright © 2017 Rodrigo Bornéo. All rights reserved.
//

#include <stdio.h>
#define SIZE 6

int main(void) {
    char president [SIZE][11] = {
    "Clinton",
        "Bush",
        "Obama",
        "Washington",
        "Nixon",
        "Jefferson"
    };
    
    int x, index;
    
    for (x=0; x<SIZE; x++) {
    //    index = 0;
    //    while (president [x] [index] != '\0') {
    //        putchar(president [x][index]);
    //        index++;
    //    }
    //    putchar('\n');
        puts(president[x]);
    }
    return 0;
}
