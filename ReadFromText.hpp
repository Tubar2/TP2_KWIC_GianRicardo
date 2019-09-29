//
//  ReadFromText.hpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 09/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

#ifndef ReadFromText_hpp
#define ReadFromText_hpp

#include "Read.hpp"
#include <string>

class ReadFromText: public Read {
    
    //Variables aalready instanciated in Read.h
    
public:
    
    /*
     BUILDING THE CLASS
     */
    
    //Constructors
    ReadFromText(std::string fileName, std::string stopsName);               //2 args Constructor
    
    //Destructor
    ~ReadFromText();
    
    
    
};

#endif /* ReadFromText_hpp */
