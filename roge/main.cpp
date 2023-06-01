#include <iostream>
// #include <libtcode.hpp>
#include "../include/libtcod.hpp"

int main()
{
	std::cout << " sello" << std::endl;
	TCODConsole::initRoot(160, 80, "window");

	while(!TCODConsole::root->isWindowClosed())
	{
		TCOD_key_t k;
		TCOD_mouse_t m;

		TCODSystem::waitForEvent(TCOD_EVENT_ANY, &k, &m, true);

		TCODConsole::root->flush();
	}

	return 0;
}