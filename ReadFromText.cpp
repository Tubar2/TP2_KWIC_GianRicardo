//
//  ReadFromText.cpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 09/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

#include <iostream>
#include "ReadFromText.hpp"

/*
 BUILDING THE CLASS
 */

//Constructors
//2 Args Constructor
ReadFromText::ReadFromText(std::string fileName, std::string stopsName)
:Read(fileName, stopsName){
    std::cout << "Text Reader object initialized" << std::endl;
}

//Destructor
ReadFromText::~ReadFromText(){
    std::cout << "Text Reader object destroyed" << std::endl;
}
