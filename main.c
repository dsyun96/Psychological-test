#include <Windows.h>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int select = MessageBoxA(NULL, "��� �տ� �ݶ�� ���̴ٰ� �ֽ��ϴ�.\n�ݶ� �����Ͻðڽ��ϱ�?", "�ɸ� �׽�Ʈ", MB_YESNO);

	if (select == IDYES) MessageBoxA(NULL, "����� �ݶ� �����ϴ� ����Դϴ�.", "�׽�Ʈ ���", MB_OK | MB_ICONINFORMATION);
	else MessageBoxA(NULL, "����� ���̴ٸ� �����ϴ� ����Դϴ�.", "�׽�Ʈ ���", MB_OK | MB_ICONINFORMATION);

	return 0;
}