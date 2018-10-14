#include <Windows.h>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int select = MessageBoxA(NULL, "당신 앞에 콜라와 사이다가 있습니다.\n콜라를 선택하시겠습니까?", "심리 테스트", MB_YESNO);

	if (select == IDYES) MessageBoxA(NULL, "당신은 콜라를 좋아하는 사람입니다.", "테스트 결과", MB_OK | MB_ICONINFORMATION);
	else MessageBoxA(NULL, "당신은 사이다를 좋아하는 사람입니다.", "테스트 결과", MB_OK | MB_ICONINFORMATION);

	return 0;
}