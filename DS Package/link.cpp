#include <bits/stdc++.h> 
#include <windows.h> 
#include<string>
using namespace std; 

class Song
{
    public:
        LPCSTR vak;
};
  
int main() 
{ 
    Song sms;
    sms.vak="https://docs.microsoft.com/en-in/windows/win32/api/shellapi/nf-shellapi-shellexecutea?redirectedfrom=MSDN#find"; 
    LPCSTR a="open";
    ShellExecuteA(NULL,a,sms.vak, NULL, NULL, SW_SHOWNORMAL); 
    return 0; 
} 