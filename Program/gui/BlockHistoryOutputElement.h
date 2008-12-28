#ifndef BlockHistoryOutputElementH
#define BlockHistoryOutputElementH

#include "../engine/BlockOutput.h"
#include "../engine/TypeConfig.h"

class BlockHistoryOutputElement
{
     private:
	TypeConfig* data;
     public:
	BlockOutput* output;

	void setData(TypeConfig &d);
	void setNULL();
	TypeConfig* getData();

	BlockHistoryOutputElement();
	~BlockHistoryOutputElement();
};

#endif
