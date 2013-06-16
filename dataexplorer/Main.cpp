#include "c4d.h";

Bool RegisterCGMenu();

Bool PluginStart(void)
{
	if(RegisterCGMenu() == FALSE) return FALSE;
	return TRUE;
}

void PluginEnd()
{
}

Bool PluginMessage(LONG id, void *data)
{
	return FALSE;
}