#pragma once

namespace mmcomplex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для complex_form
	/// </summary>
	public ref class complex_form : public System::Windows::Forms::Form
	{
	public:
		complex_form(void)
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
		~complex_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  list_lesson;
	protected:
	private: System::Windows::Forms::WebBrowser^  browser_lesson;
	private: System::Windows::Forms::Button^  button_exit;
	private: System::Windows::Forms::Button^  button_backtologin;
	private: System::Windows::Forms::Button^  button_fullscreen;

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
			this->list_lesson = (gcnew System::Windows::Forms::ListBox());
			this->browser_lesson = (gcnew System::Windows::Forms::WebBrowser());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_backtologin = (gcnew System::Windows::Forms::Button());
			this->button_fullscreen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// list_lesson
			// 
			this->list_lesson->FormattingEnabled = true;
			this->list_lesson->Location = System::Drawing::Point(12, 12);
			this->list_lesson->Name = L"list_lesson";
			this->list_lesson->Size = System::Drawing::Size(111, 472);
			this->list_lesson->TabIndex = 1;
			// 
			// browser_lesson
			// 
			this->browser_lesson->Location = System::Drawing::Point(129, 12);
			this->browser_lesson->MinimumSize = System::Drawing::Size(20, 20);
			this->browser_lesson->Name = L"browser_lesson";
			this->browser_lesson->Size = System::Drawing::Size(783, 472);
			this->browser_lesson->TabIndex = 2;
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(793, 494);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(129, 23);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &complex_form::button_exit_Click);
			// 
			// button_backtologin
			// 
			this->button_backtologin->Location = System::Drawing::Point(12, 494);
			this->button_backtologin->Name = L"button_backtologin";
			this->button_backtologin->Size = System::Drawing::Size(186, 23);
			this->button_backtologin->TabIndex = 4;
			this->button_backtologin->Text = L"Вернуться к авторизации";
			this->button_backtologin->UseVisualStyleBackColor = true;
			this->button_backtologin->Click += gcnew System::EventHandler(this, &complex_form::button_backtologin_Click);
			// 
			// button_fullscreen
			// 
			this->button_fullscreen->Location = System::Drawing::Point(204, 494);
			this->button_fullscreen->Name = L"button_fullscreen";
			this->button_fullscreen->Size = System::Drawing::Size(583, 23);
			this->button_fullscreen->TabIndex = 5;
			this->button_fullscreen->Text = L"На весь экран";
			this->button_fullscreen->UseVisualStyleBackColor = true;
			this->button_fullscreen->Click += gcnew System::EventHandler(this, &complex_form::button_fullscreen_Click);
			// 
			// complex_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 529);
			this->Controls->Add(this->button_fullscreen);
			this->Controls->Add(this->button_backtologin);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->browser_lesson);
			this->Controls->Add(this->list_lesson);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"complex_form";
			this->ShowIcon = false;
			this->Text = L"Мультимедиа Комплекс";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &complex_form::complex_form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &complex_form::complex_form_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void complex_form_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_backtologin_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_fullscreen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_exit_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void complex_form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e);
};
}
