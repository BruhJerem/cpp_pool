//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#ifndef CPP_D07M_BORG_HPP
#define CPP_D07M_BORG_HPP

#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Borg
{
    class Ship {
    private:
	int _size;
	short _maxWarp;
	WarpSystem::Core *core;
	Destination  _location;
	Destination  _home;

    public:
	Ship();
	void setupCore(WarpSystem::Core *);
	void checkCore();
	bool  move(int warp , Destination d);
	bool  move(int  warp);
	bool  move(Destination d);
	bool  move();
    };
}


#endif //CPP_D07M_BORG_HPP
