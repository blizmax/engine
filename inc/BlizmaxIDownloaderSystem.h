








#ifndef H_BlizmaxIDownloaderSystem
#define H_BlizmaxIDownloaderSystem


class BM_API IDownloaderSystem : public ISubSystem
{
public:
	virtual DownloaderPtr	Create_Downloader(EventHandlerPtr pHandler);
};


#endif