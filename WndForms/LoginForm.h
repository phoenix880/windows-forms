#pragma once
#include"User.h"
int qstate;

namespace WndForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// —водка дл€ LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			this->CenterToScreen();
			this->linklRegister->TabStop = false;
			System::Drawing::Drawing2D::GraphicsPath^ gPath = gcnew System::Drawing::Drawing2D::GraphicsPath();
			gPath->AddEllipse(0, 0, 46, 46);
			System::Drawing::Region^ rgn = gcnew System::Drawing::Region(gPath);
			this->button1->Region = rgn;
			this->button1->Image = Image::FromFile("img.png");
			//
			//TODO: добавьте код конструктора
			//

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
			//delete gPath;
		}
	private: System::Windows::Forms::TextBox^ login;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnFocus;
	public:  User^ user = nullptr;
	private: System::Windows::Forms::Label^ label6;
	public:  bool switchToRegister = false;
	private: System::Windows::Forms::LinkLabel^ linklRegister;
	public:



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnFocus = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->linklRegister = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->AccessibleDescription = L"";
			this->login->BackColor = System::Drawing::Color::White;
			this->login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->login->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->login->Location = System::Drawing::Point(140, 109);
			this->login->Margin = System::Windows::Forms::Padding(0);
			this->login->MaxLength = 13;
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(193, 32);
			this->login->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(49, 108);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(42, 166);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// password
			// 
			this->password->AccessibleDescription = L"";
			this->password->BackColor = System::Drawing::Color::White;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->password->Location = System::Drawing::Point(140, 166);
			this->password->Margin = System::Windows::Forms::Padding(0);
			this->password->MaxLength = 13;
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(193, 32);
			this->password->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(158, 220);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 52);
			this->button1->TabIndex = 5;
			this->button1->TabStop = false;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::button1_MouseDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 108);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 166);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// btnFocus
			// 
			this->btnFocus->Location = System::Drawing::Point(174, 382);
			this->btnFocus->Name = L"btnFocus";
			this->btnFocus->Size = System::Drawing::Size(0, 0);
			this->btnFocus->TabIndex = 8;
			this->btnFocus->TabStop = false;
			this->btnFocus->Text = L"button2";
			this->btnFocus->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 394);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 29);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Not registered yet\?";
			// 
			// linklRegister
			// 
			this->linklRegister->AutoEllipsis = true;
			this->linklRegister->AutoSize = true;
			this->linklRegister->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linklRegister->Location = System::Drawing::Point(215, 394);
			this->linklRegister->Name = L"linklRegister";
			this->linklRegister->Size = System::Drawing::Size(68, 29);
			this->linklRegister->TabIndex = 3;
			this->linklRegister->Text = L"Register";
			this->linklRegister->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::linklRegister_MouseDown);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(351, 494);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->linklRegister);
			this->Controls->Add(this->btnFocus);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->btnFocus->Focus();

		String^ login = this->login->Text;
		String^ password = this->password->Text;

		if (login->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try
		{
			MySqlConnection^ sqlConn = gcnew MySqlConnection("server=localhost;user=root;database=testdb;port=3306;password=57itoruv");
			sqlConn->Open();

			String^ sqlQuery = "SELECT * FROM autorization WHERE login=@login AND password=@pwd";

			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@login", login);
			command->Parameters->AddWithValue("@pwd", password);
			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt16(0);
				user->login = reader->GetString(1);
				user->password = reader->GetString(2);
				user->name = reader->GetString(3);
				user->phone = reader->GetString(4);
				user->address = reader->GetString(5);
				this->Close();
			}
			else
			{
				MessageBox::Show("Email or password is incorrect", "Email or Password error", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ e)
		{
			Console::WriteLine(e->ToString());
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void linklRegister_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		this->switchToRegister = true;
		this->Close();
	}
	};
}