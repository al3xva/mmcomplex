#pragma once
#include "error_code.h"

namespace mmcomplex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для error_form
	/// </summary>
	public ref class error_form : public System::Windows::Forms::Form
	{
	public:
		error_form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~error_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_ok;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^  edit_message;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->edit_message = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_ok
			// 
			this->button_ok->Location = System::Drawing::Point(12, 102);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(246, 23);
			this->button_ok->TabIndex = 0;
			this->button_ok->Text = L"ОК";
			this->button_ok->UseVisualStyleBackColor = true;
			this->button_ok->Click += gcnew System::EventHandler(this, &error_form::button_ok_Click);
			// 
			// edit_message
			// 
			this->edit_message->Location = System::Drawing::Point(12, 12);
			this->edit_message->Multiline = true;
			this->edit_message->Name = L"edit_message";
			this->edit_message->ReadOnly = true;
			this->edit_message->Size = System::Drawing::Size(246, 84);
			this->edit_message->TabIndex = 1;
			// 
			// error_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(270, 137);
			this->Controls->Add(this->edit_message);
			this->Controls->Add(this->button_ok);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"error_form";
			this->Text = L"Ошибка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_ok_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void show_error(error_code code);
	};
}
