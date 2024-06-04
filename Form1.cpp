
#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
    // Habilitar estilos visuales para la aplicación
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Crear y ejecutar el formulario principal
    MultilistaDE::Form1^ form = gcnew MultilistaDE::Form1();
    Application::Run(form);
}