#pragma once
#include "funciones.h"
#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <cstdlib>

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


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ventana2::typeid));
			this->labelBienvenida = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(63, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L".";
			this->label1->Click += gcnew System::EventHandler(this, &Ventana2::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(337, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(306, 44);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Indícanos qué juegos te gustan";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Ventana2::label2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBox1->BackColor = System::Drawing::Color::White;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->ForeColor = System::Drawing::Color::Firebrick;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(443, 116);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(128, 124);
			this->checkedListBox1->TabIndex = 5;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ventana2::checkedListBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-24, -12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(111, 105);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(8, 263);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(353, 55);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana2::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, -25);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(400, 390);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Ventana2::pictureBox2_Click);
			// 
			// Ventana2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->ClientSize = System::Drawing::Size(600, 390);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelBienvenida);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(614, 423);
			this->Name = L"Ventana2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Koi";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Ventana2::Ventana2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Ventana2_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = gcnew System::String(("Bienvenid@ " + arbol->usuario.username + "!").c_str());
		for (int i = 0; i < CANT_JUEGOS; ++i) {
			std::string texto = juego[i].nombre +
				" | Géneros: " + GenerosString(juego[i].generos) +
				" | Calidad: " + std::to_string(juego[i].calidad) + " / 5";
			 
			checkedListBox1->Items->Add(gcnew String(texto.c_str()));
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string aux;
		int posicion;
		heap = nullptr;
		String^ aux2;
		arbol->usuario.lista = nullptr;
		// josue: al extraer el nombre del juego en la checkedlist se va a buscar su posicion
		// en el arreglo juegos para insertarlo sin problemas en la lista enlazada

		if (checkedListBox1->CheckedItems->Count < 3) {
			MessageBox::Show("Error. Debe tildar al menos 3 juegos como favoritos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				checkedListBox1->SetItemChecked(i, false);
			}
		}
		else if (checkedListBox1->CheckedItems->Count > 10){
			MessageBox::Show("Error. Debe tildar como maximo 10 juegos como favoritos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				checkedListBox1->SetItemChecked(i, false);
			}
		}
		else {
			for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				String^ item = checkedListBox1->CheckedItems[i]->ToString();
				int pos = item->IndexOf("|");
				String^ nombre = item->Substring(0, pos)->Trim();
				aux = msclr::interop::marshal_as<std::string>(nombre);
				posicion = BuscarJuego(aux);
				arbol->usuario.lista = NuevoJuego(juego[posicion]);
			}
			aux = PublisherFavorito();
			QuickSort(juego, 0, CANT_JUEGOS - 1, aux);
		}
	}
};
}
