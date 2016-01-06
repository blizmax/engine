








#ifndef H_BlizmaxIConsole
#define H_BlizmaxIConsole

class BM_API IConsole : public ISubSystem
{
	//
public:
	virtual Result Post_Command(const char* pCommand);
	virtual Result Regist_Command(const char* pCommand , EventHandlePtr pHandler);
};

#endif
