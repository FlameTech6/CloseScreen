#include <Windows.h>
#define MONITOR_ON -1
#define MONITOR_OFF 2
#define MONITOR_STANBY 1
int main()
{
	//о╒фа
	PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, MONITOR_OFF);
	return 0;
}
