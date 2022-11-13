
#include "prxmain.hpp"
#include "Interfaces.hpp"

extern "C"
{
	int __cdecl module_start(size_t args, const void *argp)
	{
		vsh::puts("module_start()");

		g_Module = *(paf::Module**)argp;
		g_Module->SetInterface(1, &g_ModuleInterface);

		return 0;
	}

	int __cdecl module_stop(size_t args, const void *argp)
	{
		vsh::puts("module_stop()");
		return 0;
	}
}