#include "complex_form.h"
#include "login_form.h"
#include <cstdio>

#define NUMBEROFLESSONS 3

using namespace mmcomplex;

void complex_form::complex_form_Load(System::Object^  sender, System::EventArgs^  e)
{
	char buffer;
	FILE *list_ini = fopen("list.ini", "rt");
	list_lesson->Items->Clear();
	for (int i = 0; i <= NUMBEROFLESSONS; i++)
	{
		list_lesson->Items->Add(L"_auto_lesson_" + System::Convert::ToString(i) + L"_");
	}
}

void complex_form::button_backtologin_Click(System::Object^  sender, System::EventArgs^  e)
{
	login_form^ form = gcnew login_form();
	form->Show();
	this->Hide();
}

void complex_form::button_fullscreen_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
}

void complex_form::button_exit_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}

void complex_form::complex_form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
{
	Application::Exit();
}