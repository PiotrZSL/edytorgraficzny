#include "BlockInput.h"

bool BlockInput::connect(const AnsiString aName)
{
   if (aName.IsEmpty()) return false;
   inputType=aName;
   return true;
}

void BlockInput::disconnect()
{
   inputType="";
}

AnsiString& BlockInput::getConnectedType()
{
   return inputType;
}

BlockInput::BlockInput(const AnsiString aName):BlockElement(aName)
{
}

BlockInput::BlockInput(const BlockInput &kopia):BlockElement(kopia)
{
   inputType=kopia.inputType;
   allowedTypes=kopia.allowedTypes;
}

BlockInput::~BlockInput()
{

}

