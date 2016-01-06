








#ifndef H_BlizmaxIDownloader
#define H_BlizmaxIDownloader



class BM_API IDownloader
{
public:
	virtual Result Down(const char* pURL,UserData& rContext)=0;
};


#endif