#include "Calculator_extra.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project5::Calculator_extra form;
	Application::Run(% form);
}

