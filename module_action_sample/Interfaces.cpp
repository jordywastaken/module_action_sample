
#include "Interfaces.hpp"

int ModuleInterface::Init(paf::View* view)
{
	vsh::printf("ModuleInterface::Init()\nview: 0x%p\n", view);

	g_ModuleView = view;

	int actionInterfaceId = 0x41435430; // 'ACT0'
	g_ModuleView->SetInterface(actionInterfaceId, &g_ActionInterface);
	return 0;
}

int ModuleInterface::Start(paf::View* view)
{
    vsh::printf("ModuleInterface::Start()\nview: 0x%p\n", view);
	return 0;
}

int ModuleInterface::Stop()
{
    vsh::puts("ModuleInterface::Stop()");
	return 0;
}

int ModuleInterface::Exit()
{
    vsh::puts("ModuleInterface::Exit()");
	return 0;
}


int ActionInterface::ActionHandler(char const* action)
{
    vsh::printf("ActionInterface::ActionHandler()\naction: %s\n", action);
	return 0;
}