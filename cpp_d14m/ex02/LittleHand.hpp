//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14m
// File description:
//
//

#ifndef CPP_D14M_LITTLEHAND_HPP
#define CPP_D14M_LITTLEHAND_HPP


#include "FruitBox.hpp"
#include "Coconut.hpp"

class LittleHand {

public:
    static void  sortFruitBox(FruitBox &unsorted , FruitBox &lemons
	    , FruitBox &bananas , FruitBox &
    limes);
    static FruitBox * const *organizeCoconut(Coconut const * const *coconuts);
};


#endif //CPP_D14M_LITTLEHAND_HPP
