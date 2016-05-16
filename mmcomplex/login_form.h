#pragma once

namespace mmcomplex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login_form
	/// </summary>
	public ref class login_form : public System::Windows::Forms::Form
	{
	public:
		login_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_login;
	protected:
	private: System::Windows::Forms::Label^  label_password;
	private: System::Windows::Forms::TextBox^  edit_login;
	private: System::Windows::Forms::TextBox^  edit_password;
	private: System::Windows::Forms::Button^  button_go;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->edit_login = (gcnew System::Windows::Forms::TextBox());
			this->edit_password = (gcnew System::Windows::Forms::TextBox());
			this->button_go = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->Location = System::Drawing::Point(9, 9);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(38, 13);
			this->label_login->TabIndex = 0;
			this->label_login->Text = L"Логин";
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->Location = System::Drawing::Point(9, 48);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(45, 13);
			this->label_password->TabIndex = 1;
			this->label_password->Text = L"Пароль";
			// 
			// edit_login
			// 
			this->edit_login->Location = System::Drawing::Point(12, 25);
			this->edit_login->Name = L"edit_login";
			this->edit_login->Size = System::Drawing::Size(146, 20);
			this->edit_login->TabIndex = 2;
			this->edit_login->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login_form::login_form_KeyDown);
			// 
			// edit_password
			// 
			this->edit_password->Location = System::Drawing::Point(12, 64);
			this->edit_password->Name = L"edit_password";
			this->edit_password->PasswordChar = '*';
			this->edit_password->Size = System::Drawing::Size(146, 20);
			this->edit_password->TabIndex = 3;
			this->edit_password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login_form::login_form_KeyDown);
			// 
			// button_go
			// 
			this->button_go->Location = System::Drawing::Point(12, 90);
			this->button_go->Name = L"button_go";
			this->button_go->Size = System::Drawing::Size(146, 23);
			this->button_go->TabIndex = 0;
			this->button_go->Text = L"Войти";
			this->button_go->UseVisualStyleBackColor = true;
			this->button_go->Click += gcnew System::EventHandler(this, &login_form::button_go_Click);
			this->button_go->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login_form::login_form_KeyDown);
			// 
			// login_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(170, 123);
			this->Controls->Add(this->button_go);
			this->Controls->Add(this->edit_password);
			this->Controls->Add(this->edit_login);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->label_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"login_form";
			this->ShowIcon = false;
			this->Text = L"mmcomplex login";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login_form::login_form_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_go_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void login_form_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
	private: System::Void auth_do();
};
}
