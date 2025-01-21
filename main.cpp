#define OLC_PGE_APPLICATION
#include <iostream>
#include <string>
#include "OPGE.hpp"

class Game: public olc::PixelGameEngine {
public:
	void example() {
		std::cout << "Hello, World!" <<std::endl;
	}
};

int main(void) {
		Game demo;
	if (demo.Construct(256, 240, 4, 4))
		demo.Start();
	return (0);
}
