//
//  Read.hpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 09/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

#ifndef Read_hpp
#define Read_hpp

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

class Read {
    
    /*
     DEFINING VARIABLES AND CONSTANTS
     */
    
protected:
    std::vector<std::string> read_lines;               //Lines from document where KWIC will be applied
    std::vector<std::string> stop_words;               //List of stop words
    
    const std::ifstream mainFileName;                    //ifstream for first file's name -> Read only
    const std::ifstream stopWordsFileName;               //ifstream for stop words file name -> Read only
    
    int lines[2];                                      //Number of lines read for read_lines and stop_words
                                                       //respectively
    
    
public:
    
    /*
     BUILDING THE CLASS
     */
    
    //Constructors
    Read(std::string fileName, std::string stopsName);               //2 args Constructor
    
    //Destructor
    ~Read();                                           //Destructor
    
    //Methods
    std::string Read_line(const char * argv[]);        //Read single line
};


#endif /* Read_hpp */
