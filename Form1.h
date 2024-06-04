#pragma once

#include "TListaJ.h"


namespace MultilistaDE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		TListaJ^ list; // Declarar la instancia de la multilista

	public:
		Form1(void)
		{
			InitializeComponent();
			list = gcnew TListaJ(); // Inicializar la multilista en el constructor del formulario
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonLimpiar;
	protected:
	private: System::Windows::Forms::Button^ buttonInsertar;
	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::Button^ buttonPrimero;
	private: System::Windows::Forms::Button^ buttonAntecesor;
	private: System::Windows::Forms::Button^ buttonSucesor;
	private: System::Windows::Forms::Button^ buttonUltimo;

	private: System::Windows::Forms::Button^ buttonInsertarT;
	private: System::Windows::Forms::Button^ buttonEliminarT;



	private: System::Windows::Forms::Label^ NB;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ NOM;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Identificador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Oficio;
	private: System::Windows::Forms::TextBox^ textBoxNBrigada;
	private: System::Windows::Forms::TextBox^ textBoxIdentificador;
	private: System::Windows::Forms::TextBox^ textBoxNombre;












	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonInsertar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonPrimero = (gcnew System::Windows::Forms::Button());
			this->buttonAntecesor = (gcnew System::Windows::Forms::Button());
			this->buttonSucesor = (gcnew System::Windows::Forms::Button());
			this->buttonUltimo = (gcnew System::Windows::Forms::Button());
			this->buttonInsertarT = (gcnew System::Windows::Forms::Button());
			this->buttonEliminarT = (gcnew System::Windows::Forms::Button());
			this->NB = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->NOM = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Identificador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Oficio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxNBrigada = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIdentificador = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(427, 148);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(116, 42);
			this->buttonLimpiar->TabIndex = 0;
			this->buttonLimpiar->Text = L"LIMPIAR";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Form1::buttonLimpiar_Click);
			// 
			// buttonInsertar
			// 
			this->buttonInsertar->Location = System::Drawing::Point(565, 148);
			this->buttonInsertar->Name = L"buttonInsertar";
			this->buttonInsertar->Size = System::Drawing::Size(112, 42);
			this->buttonInsertar->TabIndex = 1;
			this->buttonInsertar->Text = L"INSERTAR";
			this->buttonInsertar->UseVisualStyleBackColor = true;
			this->buttonInsertar->Click += gcnew System::EventHandler(this, &Form1::buttonInsertar_Click);
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(717, 148);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(109, 42);
			this->buttonEliminar->TabIndex = 2;
			this->buttonEliminar->Text = L"ELIMINAR";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &Form1::buttonEliminar_Click);
			// 
			// buttonPrimero
			// 
			this->buttonPrimero->Location = System::Drawing::Point(375, 204);
			this->buttonPrimero->Name = L"buttonPrimero";
			this->buttonPrimero->Size = System::Drawing::Size(143, 43);
			this->buttonPrimero->TabIndex = 3;
			this->buttonPrimero->Text = L"PRIMERO";
			this->buttonPrimero->UseVisualStyleBackColor = true;
			this->buttonPrimero->Click += gcnew System::EventHandler(this, &Form1::buttonPrimero_Click);
			// 
			// buttonAntecesor
			// 
			this->buttonAntecesor->Location = System::Drawing::Point(524, 204);
			this->buttonAntecesor->Name = L"buttonAntecesor";
			this->buttonAntecesor->Size = System::Drawing::Size(154, 44);
			this->buttonAntecesor->TabIndex = 4;
			this->buttonAntecesor->Text = L"ANTECESOR";
			this->buttonAntecesor->UseVisualStyleBackColor = true;
			this->buttonAntecesor->Click += gcnew System::EventHandler(this, &Form1::buttonAntecesor_Click);
			// 
			// buttonSucesor
			// 
			this->buttonSucesor->Location = System::Drawing::Point(684, 205);
			this->buttonSucesor->Name = L"buttonSucesor";
			this->buttonSucesor->Size = System::Drawing::Size(111, 43);
			this->buttonSucesor->TabIndex = 5;
			this->buttonSucesor->Text = L"SUCESOR";
			this->buttonSucesor->UseVisualStyleBackColor = true;
			this->buttonSucesor->Click += gcnew System::EventHandler(this, &Form1::buttonSucesor_Click);
			// 
			// buttonUltimo
			// 
			this->buttonUltimo->Location = System::Drawing::Point(801, 205);
			this->buttonUltimo->Name = L"buttonUltimo";
			this->buttonUltimo->Size = System::Drawing::Size(123, 43);
			this->buttonUltimo->TabIndex = 6;
			this->buttonUltimo->Text = L"ULTIMO";
			this->buttonUltimo->UseVisualStyleBackColor = true;
			this->buttonUltimo->Click += gcnew System::EventHandler(this, &Form1::buttonUltimo_Click);
			// 
			// buttonInsertarT
			// 
			this->buttonInsertarT->Location = System::Drawing::Point(361, 473);
			this->buttonInsertarT->Name = L"buttonInsertarT";
			this->buttonInsertarT->Size = System::Drawing::Size(184, 40);
			this->buttonInsertarT->TabIndex = 8;
			this->buttonInsertarT->Text = L"INSERTAR";
			this->buttonInsertarT->UseVisualStyleBackColor = true;
			this->buttonInsertarT->Click += gcnew System::EventHandler(this, &Form1::buttonInsertarT_Click);
			// 
			// buttonEliminarT
			// 
			this->buttonEliminarT->Location = System::Drawing::Point(723, 473);
			this->buttonEliminarT->Name = L"buttonEliminarT";
			this->buttonEliminarT->Size = System::Drawing::Size(187, 40);
			this->buttonEliminarT->TabIndex = 9;
			this->buttonEliminarT->Text = L"ELIMINAR";
			this->buttonEliminarT->UseVisualStyleBackColor = true;
			this->buttonEliminarT->Click += gcnew System::EventHandler(this, &Form1::buttonEliminarT_Click);
			// 
			// NB
			// 
			this->NB->AutoSize = true;
			this->NB->Location = System::Drawing::Point(187, 23);
			this->NB->Name = L"NB";
			this->NB->Size = System::Drawing::Size(152, 16);
			this->NB->TabIndex = 13;
			this->NB->Text = L"NUMERO DE BRIGADA";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(190, 63);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(110, 16);
			this->ID->TabIndex = 14;
			this->ID->Text = L"IDENTIFICADOR";
			// 
			// NOM
			// 
			this->NOM->AutoSize = true;
			this->NOM->Location = System::Drawing::Point(190, 108);
			this->NOM->Name = L"NOM";
			this->NOM->Size = System::Drawing::Size(66, 16);
			this->NOM->TabIndex = 15;
			this->NOM->Text = L"NOMBRE";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Identificador,
					this->Nombre, this->Oficio
			});
			this->dataGridView1->Location = System::Drawing::Point(336, 263);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(782, 179);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick_1);
			// 
			// Identificador
			// 
			this->Identificador->HeaderText = L"Identificador";
			this->Identificador->MinimumWidth = 6;
			this->Identificador->Name = L"Identificador";
			this->Identificador->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Oficio
			// 
			this->Oficio->HeaderText = L"Oficio";
			this->Oficio->MinimumWidth = 6;
			this->Oficio->Name = L"Oficio";
			this->Oficio->Width = 125;
			// 
			// textBoxNBrigada
			// 
			this->textBoxNBrigada->Location = System::Drawing::Point(535, 23);
			this->textBoxNBrigada->Name = L"textBoxNBrigada";
			this->textBoxNBrigada->Size = System::Drawing::Size(213, 22);
			this->textBoxNBrigada->TabIndex = 17;
			this->textBoxNBrigada->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxNBrigada_TextChanged);
			// 
			// textBoxIdentificador
			// 
			this->textBoxIdentificador->Location = System::Drawing::Point(535, 63);
			this->textBoxIdentificador->Name = L"textBoxIdentificador";
			this->textBoxIdentificador->Size = System::Drawing::Size(213, 22);
			this->textBoxIdentificador->TabIndex = 18;
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(535, 101);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(213, 22);
			this->textBoxNombre->TabIndex = 19;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1334, 525);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->textBoxIdentificador);
			this->Controls->Add(this->textBoxNBrigada);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->NOM);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->NB);
			this->Controls->Add(this->buttonEliminarT);
			this->Controls->Add(this->buttonInsertarT);
			this->Controls->Add(this->buttonUltimo);
			this->Controls->Add(this->buttonSucesor);
			this->Controls->Add(this->buttonAntecesor);
			this->Controls->Add(this->buttonPrimero);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonInsertar);
			this->Controls->Add(this->buttonLimpiar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxIdentificador->Clear();
		textBoxNBrigada->Clear();
		textBoxNombre->Clear();
		dataGridView1->Rows->Clear();
		
	}
private: System::Void buttonInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si las cajas de texto están vacías
	if (textBoxIdentificador->Text == "" || textBoxNBrigada->Text == "" || textBoxNombre->Text == "") {
		MessageBox::Show("Las cajas de texto están vacías");
	}
	else {
		// Si las cajas de texto no están vacías, insertar en la lista
		int nBrigada = System::Convert::ToInt32(textBoxNBrigada->Text);
		int identificador = System::Convert::ToInt32(textBoxIdentificador->Text);
		String^ nombre = textBoxNombre->Text;

		// Llamar al método de inserción en la lista
		list->crearLista(nBrigada, identificador, nombre);
	}
	
}
private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si las cajas de texto están vacías
	if (textBoxIdentificador->Text == "" || textBoxNBrigada->Text == "" || textBoxNombre->Text == "") {
		MessageBox::Show("Las cajas de texto están vacías");
	}
	else {
		// Si las cajas de texto no están vacías, buscar y eliminar de la lista
		int nBrigada = System::Convert::ToInt32(textBoxNBrigada->Text);

		// Llamar al método para buscar la brigada en la lista
		list->BuscarBrigada(nBrigada);

		// Llamar al método para eliminar la lista
		list->EliminarLista();
	}
	
}

private: System::Void buttonPrimero_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el primer nodo de la lista
	p = (TNodoJ^)list->getPrimero();

	// Mostrar los datos del nodo en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getNBrigada());
	textBoxIdentificador->Text = System::Convert::ToString(p->getID());
	textBoxNombre->Text = p->getNombre();

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarTrab(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);

	// Establecer el cursor en el primer nodo de la lista
	list->setCursor((TNodoJ^)list->getPrimero());
	
	
}
private: System::Void buttonAntecesor_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el nodo actual del cursor
	p = (TNodoJ^)list->getCursor();

	// Obtener el antecesor del nodo actual
	p = (TNodoJ^)list->getAntCursor();

	// Mostrar los datos del antecesor en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getNBrigada());
	textBoxIdentificador->Text = System::Convert::ToString(p->getID());
	textBoxNombre->Text = p->getNombre();

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarTrab(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);
	
}
private: System::Void buttonSucesor_Click(System::Object^ sender, System::EventArgs^ e) {
	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el nodo actual del cursor
	p = (TNodoJ^)list->getCursor();

	// Obtener el sucesor del nodo actual
	p = (TNodoJ^)list->getProxCursor();

	// Mostrar los datos del sucesor en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getNBrigada());
	textBoxIdentificador->Text = System::Convert::ToString(p->getID());
	textBoxNombre->Text = p->getNombre();

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada en el DataGridView
	list->MostrarTrab(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);
	
}
private: System::Void buttonUltimo_Click(System::Object^ sender, System::EventArgs^ e) {

	// Declarar una variable TNodoJ
	TNodoJ^ p;

	// Obtener el último nodo de la lista
	p = (TNodoJ^)list->getUltimo();

	// Mostrar los datos del último nodo en las cajas de texto
	textBoxNBrigada->Text = System::Convert::ToString(p->getNBrigada());
	textBoxIdentificador->Text = System::Convert::ToString(p->getID());
	textBoxNombre->Text = p->getNombre();

	// Limpiar el DataGridView
	dataGridView1->Rows->Clear();

	// Mostrar los trabajadores de la brigada asociada al último nodo en el DataGridView
	list->MostrarTrab(System::Convert::ToInt32(textBoxNBrigada->Text), dataGridView1);

	// Establecer el cursor en el último nodo
	list->setCursor((TNodoJ^)list->getUltimo());
	
}
private: System::Void buttonInsertarT_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtener el índice de la fila seleccionada en el DataGridView
	int index = dataGridView1->CurrentRow->Index;

	// Insertar un nuevo trabajador en la lista
	list->InsertarTrab(
		System::Convert::ToInt32(textBoxNBrigada->Text),
		System::Convert::ToInt32(dataGridView1->Rows[index]->Cells[0]->Value->ToString()),
		dataGridView1->Rows[index]->Cells[1]->Value->ToString(),
		dataGridView1->Rows[index]->Cells[2]->Value->ToString()
	);

	// Limpiar el DataGridView
	// dataGridView1->Rows->Clear(); // Este paso no es necesario según tu implementación original

}
private: System::Void buttonEliminarT_Click(System::Object^ sender, System::EventArgs^ e) {
	TNodoJ^ p; // Declarar un puntero a TNodoJ

	// Obtener el índice de la fila seleccionada en el DataGridView
	int index = dataGridView1->CurrentRow->Index;

	// Verificar si la multilista está vacía
	if (dataGridView1->Rows[index]->Cells[0]->Value->ToString() == "") {
		MessageBox::Show("La multilista está vacía", "Mensaje", MessageBoxButtons::OK);
	}
	else {
		// Si no está vacía, eliminar el trabajador de la lista
		p = (TNodoJ^)list->getCursor();
		list->EliminarTrab(
			System::Convert::ToInt32(textBoxNBrigada->Text),
			System::Convert::ToInt32(dataGridView1->Rows[index]->Cells[0]->Value->ToString())
		);
	}
	
}

private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBoxNBrigada_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


