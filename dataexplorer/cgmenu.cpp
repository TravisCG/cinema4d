#include "c4d.h"

class CGMenu : public CommandData
{
public:
	virtual Bool Execute(BaseDocument *doc);
};

Bool CGMenu::Execute(BaseDocument *doc)
{
	MessageDialog("Data explorer plugin. See the output window");
	BaseDocument *iter = doc;

	do{
		Filename fn = iter->GetDocumentName();
		GePrint(fn.GetString());
	}while( (iter = iter->GetNext()) != NULL);

	return true;
}

Bool RegisterCGMenu()
{
	return RegisterCommandPlugin(1001999,"Cybernetic Genetics data explorer",0,AutoBitmap("cg.tiff"),String("ize"),gNew CGMenu);
}