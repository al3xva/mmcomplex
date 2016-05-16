#include "error_form.h"

using namespace mmcomplex;

void error_form::show_error(error_code code)
{
	edit_message->Text = L"��� ������: " + code + L"\r\n";
	switch (code)
	{
	case LISTINIMISSING:
		edit_message->Text += "���� list.ini �� ������!";
		break;
	}
}

void error_form::button_ok_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}


