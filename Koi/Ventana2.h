#pragma once
#include "funciones.h"

namespace Koi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ventana2
	/// </summary>
	public ref class Ventana2 : public System::Windows::Forms::Form
	{
	public:
		Ventana2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ventana2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelBienvenida;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TreeView^ treeViewUsuarios;
	private: System::Windows::Forms::Button^ button1;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelBienvenida = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treeViewUsuarios = (gcnew System::Windows::Forms::TreeView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelBienvenida
			// 
			this->labelBienvenida->AutoSize = true;
			this->labelBienvenida->Location = System::Drawing::Point(58, 31);
			this->labelBienvenida->Name = L"labelBienvenida";
			this->labelBienvenida->Size = System::Drawing::Size(0, 13);
			this->labelBienvenida->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(34, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L".";
			this->label1->Click += gcnew System::EventHandler(this, &Ventana2::label1_Click);
			// 
			// treeViewUsuarios
			// 
			this->treeViewUsuarios->Location = System::Drawing::Point(293, 31);
			this->treeViewUsuarios->Name = L"treeViewUsuarios";
			this->treeViewUsuarios->Size = System::Drawing::Size(233, 158);
			this->treeViewUsuarios->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana2::button1_Click);
			// 
			// Ventana2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->ClientSize = System::Drawing::Size(600, 390);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->treeViewUsuarios);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelBienvenida);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Ventana2";
			this->Text = L"Ventana2";
			this->Load += gcnew System::EventHandler(this, &Ventana2::Ventana2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Ventana2_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = gcnew System::String(("Bienvenid@ " + arbol->usuario.username + "!").c_str());
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	void AgregarNodoTreeView(nodo* arbol, TreeNode^ parentNode, TreeView^ treeViewUsuarios) {
		if (arbol != nullptr) {
			TreeNode^ nuevoNodo = gcnew TreeNode("ID: " + arbol->usuario.ID + " - " + gcnew System::String(arbol->usuario.username.c_str()));
			if (parentNode != nullptr) {
				parentNode->Nodes->Add(nuevoNodo);
			}
			else {
				treeViewUsuarios->Nodes->Add(nuevoNodo);
			}
			AgregarNodoTreeView(arbol->izq, nuevoNodo, treeViewUsuarios);
			AgregarNodoTreeView(arbol->der, nuevoNodo, treeViewUsuarios);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		treeViewUsuarios->Nodes->Clear();
		AgregarNodoTreeView(arbol, nullptr, treeViewUsuarios);
	}
};
}
