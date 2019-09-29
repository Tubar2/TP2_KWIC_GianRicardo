//
//  Storage_Manager.cpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 10/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

#include <iostream>
#include "Storage_Manager.hpp"

/*
 BUILDING THE CLASS
 */

//Constructors
//2 Args Constructor
Storage_Manager::Storage_Manager(){
    std::cout << "Storage initialized" << std::endl;
}

//Destructor
Storage_Manager::~Storage_Manager(){
    std::cout << "Storage cleared" << std::endl;
}
