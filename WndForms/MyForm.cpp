#include<iostream>
#include"LoginForm.h"
#include"MainForm.h"
#include"RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true)
	{
		WndForms::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister)
		{
			WndForms::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin)
			{
				continue;
			}
			else
			{
				user = registerForm.user;
				break;
			}
		}
		else
		{
			user = loginForm.user;
			break;
		}
	}
	if (user != nullptr)
	{
		WndForms::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else
	{
		MessageBox::Show("Authentication Canceled", ":(", MessageBoxButtons::OK);
	}



}