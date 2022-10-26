#pragma once
#include<string>
#include"User.h"
namespace WndForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			lbUserProfileName->Text = "Profile: " + user->name;
			login->Text = "Login: " + user->login;
			phone->Text = "Phone: " + user->phone;
			address->Text = "Address: " + user->address;
			ID->Text = "Your ID:   " + user->id;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbUserProfileName;
	private: System::Windows::Forms::Label^ login;
	private: System::Windows::Forms::Label^ phone;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ address;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Profile;
	private: System::Windows::Forms::Button^ Catalog;
	private: System::Windows::Forms::Button^ Chat;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;








	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->lbUserProfileName = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Label());
			this->phone = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Profile = (gcnew System::Windows::Forms::Button());
			this->Catalog = (gcnew System::Windows::Forms::Button());
			this->Chat = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbUserProfileName
			// 
			this->lbUserProfileName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbUserProfileName->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserProfileName->Location = System::Drawing::Point(41, 227);
			this->lbUserProfileName->Name = L"lbUserProfileName";
			this->lbUserProfileName->Size = System::Drawing::Size(251, 22);
			this->lbUserProfileName->TabIndex = 0;
			this->lbUserProfileName->Text = L"Profile:";
			this->lbUserProfileName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// login
			// 
			this->login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->login->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(41, 258);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(251, 22);
			this->login->TabIndex = 1;
			this->login->Text = L"Login: ";
			this->login->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// phone
			// 
			this->phone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->phone->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone->Location = System::Drawing::Point(41, 289);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(251, 22);
			this->phone->TabIndex = 2;
			this->phone->Text = L"Phone: ";
			this->phone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ID
			// 
			this->ID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ID->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(510, 61);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(96, 22);
			this->ID->TabIndex = 4;
			this->ID->Text = L"Your ID: ";
			this->ID->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// address
			// 
			this->address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->address->Font = (gcnew System::Drawing::Font(L"Calisto MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(41, 320);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(251, 22);
			this->address->TabIndex = 3;
			this->address->Text = L"Address: ";
			this->address->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(45, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Profile
			// 
			this->Profile->BackColor = System::Drawing::Color::White;
			this->Profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Profile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Profile->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Profile->FlatAppearance->BorderSize = 0;
			this->Profile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Profile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Profile->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Profile->Location = System::Drawing::Point(0, 0);
			this->Profile->Name = L"Profile";
			this->Profile->Size = System::Drawing::Size(208, 41);
			this->Profile->TabIndex = 6;
			this->Profile->TabStop = false;
			this->Profile->Text = L"Profile";
			this->Profile->UseVisualStyleBackColor = false;
			this->Profile->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Profile_MouseDown);
			// 
			// Catalog
			// 
			this->Catalog->BackColor = System::Drawing::Color::White;
			this->Catalog->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Catalog->FlatAppearance->BorderSize = 0;
			this->Catalog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Catalog->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Catalog->Location = System::Drawing::Point(209, 0);
			this->Catalog->Name = L"Catalog";
			this->Catalog->Size = System::Drawing::Size(208, 41);
			this->Catalog->TabIndex = 7;
			this->Catalog->TabStop = false;
			this->Catalog->Text = L"Сatalog";
			this->Catalog->UseVisualStyleBackColor = false;
			this->Catalog->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Catalog_MouseDown);
			// 
			// Chat
			// 
			this->Chat->BackColor = System::Drawing::Color::White;
			this->Chat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Chat->FlatAppearance->BorderSize = 0;
			this->Chat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Chat->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Chat->Location = System::Drawing::Point(418, 0);
			this->Chat->Name = L"Chat";
			this->Chat->Size = System::Drawing::Size(208, 41);
			this->Chat->TabIndex = 8;
			this->Chat->TabStop = false;
			this->Chat->Text = L"Chat";
			this->Chat->UseVisualStyleBackColor = false;
			this->Chat->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Chat_MouseDown);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 39, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(191, -9);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 60);
			this->label1->TabIndex = 9;
			this->label1->Text = L"I";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 39, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(397, -9);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 60);
			this->label2->TabIndex = 10;
			this->label2->Text = L"I";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(626, 532);
			this->Controls->Add(this->Chat);
			this->Controls->Add(this->Catalog);
			this->Controls->Add(this->Profile);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->address);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->login);
			this->Controls->Add(this->lbUserProfileName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Welcome Back!";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Profile_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Profile->Cursor = System::Windows::Forms::Cursors::Arrow;
		_sleep(70);
		this->Profile->Cursor = System::Windows::Forms::Cursors::Hand;
	}
	private: System::Void Catalog_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Catalog->Cursor = System::Windows::Forms::Cursors::Arrow;
		_sleep(70);
		this->Catalog->Cursor = System::Windows::Forms::Cursors::Hand;
	}
	private: System::Void Chat_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Chat->Cursor = System::Windows::Forms::Cursors::Arrow;
		_sleep(70);
		this->Chat->Cursor = System::Windows::Forms::Cursors::Hand;
	}
	};
}
