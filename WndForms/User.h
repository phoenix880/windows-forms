#pragma once
using namespace System;

public ref struct User
{
	int id;
	String^ login;
	String^ password;
	String^ name;
	String^ phone;
	String^ address;
};