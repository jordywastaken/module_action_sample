
#pragma once

#include <vshlib.hpp>

static paf::Module* g_Module;
static paf::View* g_ModuleView;


class ModuleInterface
{
public:
	static int Init(paf::View* view);
	static int Start(paf::View* view);
	static int Stop();
	static int Exit();

	int(*m_Init)(paf::View* view);
	int(*m_Start)(paf::View* view);
	int(*m_Stop)();
	int(*m_Exit)();
};

static ModuleInterface g_ModuleInterface 
{
	ModuleInterface::Init,
	ModuleInterface::Start,
	ModuleInterface::Stop,
	ModuleInterface::Exit
};


class ActionInterface
{
public:
	static int ActionHandler(char const* action);

	int(*m_ActionHandler)(char const* action);
	void* m_Unknown1;
	void* m_Unknown2;
};

static ActionInterface g_ActionInterface 
{
	ActionInterface::ActionHandler,
	nullptr,
	nullptr
};