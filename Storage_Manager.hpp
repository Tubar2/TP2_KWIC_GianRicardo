//
//  Storage_Manager.hpp
//  KWIC
//
//  Created by Ricardo de Castro Giometti Santos on 10/09/19.
//  Copyright © 2019 Ricardo de Castro Giometti Santos. All rights reserved.
//

#ifndef Storage_Manager_hpp
#define Storage_Manager_hpp

#include <vector>
#include <string>

class Storage_Manager {
    //Core data
protected:
    std::vector<std::string> data;
    
public:
    /*
     BUILDING THE CLASS
     */
    
    //Constructors
    Storage_Manager();               //No args Constructor
    
    //Destructor
    ~Storage_Manager();
    
};

#endif /* Storage_Manager_hpp */
