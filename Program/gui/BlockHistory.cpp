#include <vcl.h>
#pragma hdrstop
#include "BlockHistory.h"
#pragma package(smart_init)

BlockHistory::BlockHistory()
{
	configRevision=0;
	date=date.CurrentDateTime();
}

BlockHistory::BlockHistory(BlockHistory &b)
{
	configRevision=b.configRevision;
	date=b.date;
	leftInput=b.leftInput;
	topInput=b.topInput;
	rightOutput=b.rightOutput;
	bottomOutput=b.bottomOutput;
}

BlockHistory::~BlockHistory()
{ 
	while(leftInput.size()>0)
	{
	  delete leftInput[0];
	  leftInput.erase(leftInput.begin());
	}
	
	while(topInput.size()>0)
	{
	  delete topInput[0];
	  topInput.erase(topInput.begin());
	}

	while(rightOutput.size()>0)
	{
	  delete rightOutput[0];
	  rightOutput.erase(rightOutput.begin());
	}

	while(bottomOutput.size()>0)
	{
	  delete bottomOutput[0];
	  bottomOutput.erase(bottomOutput.begin());
	}
}

