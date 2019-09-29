//
//  main.cpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 09/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

/*
 Execution of program need to be in the following format:
 
 ----------------------------------------------------------
 ./a.out entry_type output_type mainFileName stopWordsFile
 ----------------------------------------------------------
          argv[1]   argv[2]     argv[3]       argv[4]
 output of the program will be saved on
 
 */

#include <iostream>

#include "Read.hpp"
#include "ReadFromText.hpp"

using namespace std;

int defineType(const char *arg);                    //Function to define inputs and output formats

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i< argc; i++) {
        cout << argv[i] << endl;
    }
    
    int type = defineType(argv[1]);
    
    switch (type) {                                 //Definition of document reading type
        case 1: {                                   //Reading from JSON
            
            break;
        }
        
        case 2: {                                   //Reading from Text Initialization
            ReadFromText reader(argv[3], argv[4]);
            cout << "Text reader built with the following args: " << argv[3] << ", " << argv[4] << endl;
            
            break;
        }
            
        default:
            cout << "Error" << endl;
            break;
    }
    
    return 0;
}

int defineType(const char *arg){
    int type(0);

    if (!strcmp(arg, "JSON")) {                    //Comparison returns 0 upon equal strings
        type = 1;
    } else if(!strcmp(arg, "txt")){
        type = 2;
    }
    
    return type;
}
