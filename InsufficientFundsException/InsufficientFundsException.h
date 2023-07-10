#pragma once
#include "exception"
#include <iostream>
using namespace std;
class InsufficientFundsException : public exception
{
	const char* errorTxt;
public:
	InsufficientFundsException(const char* error) : exception{ error }, errorTxt{error} {};
	const char* what() const noexcept override;

};

