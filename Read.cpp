//
//  Read.cpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 09/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

#include <iostream>
#include "Read.hpp"

/*
 BUILDING THE CLASS
 */

//Constructors
//2 Args Constructor
Read::Read(std::string fileName, std::string stopsName)
:mainFileName(fileName), stopWordsFileName(stopsName){
    std::cout << "Read object initialized" << std::endl;
}

//Destructor
Read::~Read(){
    std::cout << "Read object destroyed" << std::endl;
}
