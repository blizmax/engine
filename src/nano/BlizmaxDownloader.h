








#ifndef H_BlizmaxDownloader
#define H_BlizmaxDownloader


/*
Async Download


*/
class BM_API Downloader : public IDownloader
{
public:
	virtual Result Down(const char* pURL, UserDataPtr pContext);

protected:
	EventHandlerPtr pHandler;
};


#endif

