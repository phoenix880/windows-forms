#pragma once
#include"User.h"

namespace WndForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
		/// —водка дл€ RegisterForm
		/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->CenterToScreen();
			this->linklLogin->TabStop = false;
			System::Drawing::Drawing2D::GraphicsPath^ gPath = gcnew System::Drawing::Drawing2D::GraphicsPath();
			gPath->AddEllipse(0, 0, 46, 46);
			System::Drawing::Region^ rgn = gcnew System::Drawing::Region(gPath);
			this->btnOK->Region = rgn;
			this->btnOK->Image = Image::FromFile("img.png");
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbLogin;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPhone;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::LinkLabel^ linklLogin;


	private: System::Windows::Forms::Label^ label6;
	public: bool switchToLogin = false;
	public: User^ user = nullptr;
	private: System::Windows::Forms::Button^ btnFocus;
	private: System::Windows::Forms::Button^ btnOK;
	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->linklLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnFocus = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 134);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(60, 88);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->AccessibleDescription = L"";
			this->tbName->BackColor = System::Drawing::Color::White;
			this->tbName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbName->Location = System::Drawing::Point(169, 88);
			this->tbName->Margin = System::Windows::Forms::Padding(0);
			this->tbName->MaxLength = 13;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(193, 32);
			this->tbName->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(60, 134);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 29);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Login";
			// 
			// tbLogin
			// 
			this->tbLogin->AccessibleDescription = L"";
			this->tbLogin->BackColor = System::Drawing::Color::White;
			this->tbLogin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbLogin->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbLogin->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbLogin->Location = System::Drawing::Point(169, 134);
			this->tbLogin->Margin = System::Windows::Forms::Padding(0);
			this->tbLogin->MaxLength = 13;
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(193, 32);
			this->tbLogin->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(60, 180);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->AccessibleDescription = L"";
			this->tbPhone->BackColor = System::Drawing::Color::White;
			this->tbPhone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPhone->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbPhone->Location = System::Drawing::Point(169, 180);
			this->tbPhone->Margin = System::Windows::Forms::Padding(0);
			this->tbPhone->MaxLength = 13;
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(193, 32);
			this->tbPhone->TabIndex = 12;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(23, 180);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(60, 226);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 29);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->AccessibleDescription = L"";
			this->tbPassword->BackColor = System::Drawing::Color::White;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPassword->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbPassword->Location = System::Drawing::Point(169, 226);
			this->tbPassword->Margin = System::Windows::Forms::Padding(0);
			this->tbPassword->MaxLength = 13;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(193, 32);
			this->tbPassword->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(60, 268);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 58);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Confirm\r\nPassword\r\n";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->AccessibleDescription = L"";
			this->tbConfirmPassword->BackColor = System::Drawing::Color::White;
			this->tbConfirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbConfirmPassword->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbConfirmPassword->Location = System::Drawing::Point(169, 272);
			this->tbConfirmPassword->Margin = System::Windows::Forms::Padding(0);
			this->tbConfirmPassword->MaxLength = 13;
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(193, 32);
			this->tbConfirmPassword->TabIndex = 18;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(23, 226);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 32);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(23, 274);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 32);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// btnOK
			// 
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnOK->FlatAppearance->BorderSize = 0;
			this->btnOK->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnOK->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOK.Image")));
			this->btnOK->Location = System::Drawing::Point(194, 342);
			this->btnOK->Margin = System::Windows::Forms::Padding(2);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(48, 52);
			this->btnOK->TabIndex = 22;
			this->btnOK->TabStop = false;
			this->btnOK->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RegisterForm::btnOK_MouseDown);
			// 
			// linklLogin
			// 
			this->linklLogin->AutoSize = true;
			this->linklLogin->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linklLogin->Location = System::Drawing::Point(256, 438);
			this->linklLogin->Name = L"linklLogin";
			this->linklLogin->Size = System::Drawing::Size(50, 29);
			this->linklLogin->TabIndex = 23;
			this->linklLogin->Text = L"Login";
			this->linklLogin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RegisterForm::linklLogin_MouseDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(115, 438);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 29);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Already registered\?";
			// 
			// btnFocus
			// 
			this->btnFocus->Location = System::Drawing::Point(112, 400);
			this->btnFocus->Name = L"btnFocus";
			this->btnFocus->Size = System::Drawing::Size(0, 0);
			this->btnFocus->TabIndex = 25;
			this->btnFocus->TabStop = false;
			this->btnFocus->Text = L"button2";
			this->btnFocus->UseVisualStyleBackColor = true;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 532);
			this->Controls->Add(this->btnFocus);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->linklLogin);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbLogin);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RegisterForm";
			this->Text = L"Register";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linklLogin_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void btnOK_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->btnFocus->Focus();
		String^ name = tbName->Text;
		String^ login = tbLogin->Text;
		String^ phone = tbPhone->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (name->Length == 0 || login->Length == 0 || phone->Length == 0 || password->Length == 0 || confirmPassword->Length == 0)
		{
			MessageBox::Show("Please, enter all the fields", "1 or more empty fields", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0)
		{
			MessageBox::Show("Password fields don't match!", "Password Error", MessageBoxButtons::OK);
			return;
		}
		try
		{
			MySqlConnection^ sqlConn = gcnew MySqlConnection("server=localhost;user=root;database=testdb;port=3306;password=57itoruv");
			sqlConn->Open();
			String^ sqlQuery = "INSERT INTO autorization " + "(login, name, phone, password) VALUES " + "(@login, @name, @phone, @password)";
			MySqlCommand^ command = gcnew MySqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@login", login);
			command->Parameters->AddWithValue("@name", name);
			command->Parameters->AddWithValue("@phone", phone);
			command->Parameters->AddWithValue("@password", password);

			command->ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->login = login;
			user->phone = phone;
			user->password = password;

			this->Close();
		}
		catch (Exception^ e)
		{
			Console::WriteLine(e->ToString());
			MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
		}
	}
	};
}
