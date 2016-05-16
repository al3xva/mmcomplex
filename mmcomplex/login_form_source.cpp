#include "login_form.h"
#include "complex_form.h"

using namespace mmcomplex;

void login_form::auth_do()
{
	String^ login = L"admin\n";
	String^ password = L"admin\n";
	bool auth = true;
	if (edit_login->Text == L"" || edit_password->Text == L"")
	{
		edit_login->Text = L"Введите логин и пароль!";
		auth = false;
	}
	if (!auth)
	{
		return;
	}
	if (edit_password->Text == L"admin" && edit_login->Text == L"admin")
	{
		complex_form^ form = gcnew complex_form();
		form->Show();
		this->Hide();
	}
	else
	{
		edit_password->Clear();
		edit_login->Text = L"Неправильный логин или пароль!";
	}
}

void login_form::button_go_Click(System::Object^  sender, System::EventArgs^  e)
{
	auth_do();
}

void login_form::login_form_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
{
	if (e->KeyCode == System::Windows::Forms::Keys::Enter)
	{
		auth_do();
	}
}