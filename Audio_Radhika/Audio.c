// Win32 Headers
#include<Windows.h>
#include <stdbool.h>
#include <stdio.h>
#include<mmsystem.h>

// global function declarations
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


// audio function prototypes
void playSoundTrack(const char*);
bool file_exists(const char*);


// Entry Point Function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	// variable declaration
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("RTR6");

	// code
	// Window Class Initialization
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.hInstance = hInstance;
	wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	// Registraion of Window Class
	RegisterClassEx(&wndclass);

	// Create Window
	hwnd = CreateWindow(
		szAppName,
		TEXT("Radhika Vishwakarma"),
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,
		NULL,
		hInstance,
		NULL
	);
	
	// Show Window
	ShowWindow(hwnd, iCmdShow);

	

	// Point Background & Window
	UpdateWindow(hwnd);

	// Message Loop
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return((int)msg.wParam);

}

// Callback Function
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	
playSoundTrack("C:\\AstroMediComp\\C++_practice\\Audio_Radhika\\Kholo_Kholo.mp3");
	// code
	switch (iMsg)
	{
		case WM_CHAR:
			switch (wParam)
			{
				case 'R':
				case 'r':
					// Call for play sound at initialization 
					// playSoundTrack("C:\\AstroMediComp\\C++_practice\\Audio_Radhika\\Kholo_Kholo.mp3");
					break;
				
				
				default:
					break;
			}
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		
		default:
			break;
	}

	return(DefWindowProc(hWnd, iMsg, wParam, lParam));
}

void playSoundTrack(const char* soundFileName)
{
	// SND_ASYNC : The sound is played asynchronously and PlaySound returns immediately after beginning the sound. To terminate an asynchronously played waveform sound, call PlaySound with pszSound set to NULL.
	// SND_LOOP : The sound plays repeatedly until PlaySound is called again with the pszSound parameter set to NULL. If this flag is set, you must also set the SND_ASYNC flag.
	if (file_exists(soundFileName))
	{
		PlaySound(soundFileName, NULL, SND_ASYNC | SND_FILENAME);
	}
	else
	{
		printf("File %s doesn't exist.", soundFileName);
	}
}

// returns true if the file specified by the filename exists false otherwise
bool file_exists(const char* filename)
{
	FILE* fp = fopen(filename, "r");
	bool is_exist = false;
	if (fp != NULL)
	{
		is_exist = true;
		fclose(fp); // close the file
	}
	return is_exist;
}
