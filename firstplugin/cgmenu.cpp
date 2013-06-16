#include "c4d.h"

class CGMenu : public CommandData
{
public:
	virtual Bool Execute(BaseDocument *doc);
};

Bool CGMenu::Execute(BaseDocument *doc)
{
	MessageDialog("My First Plugin");
	return true;
}

Bool RegisterCGMenu()
{
	return RegisterCommandPlugin(1001999,"Cybernetic Genetics first plugin",0,AutoBitmap("cg.tiff"),String("ize"),gNew CGMenu);
}