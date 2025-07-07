#pragma once
#include "funciones.h"
#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <cstdlib>
#include "Ventana3.h"

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
			this->labelBienvenida->Location = System::Drawing::Point(87, 48);
			this->labelBienvenida->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelBienvenida->Name = L"labelBienvenida";
			this->labelBienvenida->Size = System::Drawing::Size(0, 20);
			this->labelBienvenida->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(95, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 69);
			this->label1->TabIndex = 1;
			this->label1->Text = L".";
			this->label1->Click += gcnew System::EventHandler(this, &Ventana2::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(584, 93);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(883, 59);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Selecciona qué juegos te gustan";
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
			this->checkedListBox1->Location = System::Drawing::Point(558, 171);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(937, 400);
			this->checkedListBox1->TabIndex = 5;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ventana2::checkedListBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-22, -17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(146, 131);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(1015, 598);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(480, 97);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana2::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-77, 71);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(401, 680);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Ventana2::pictureBox2_Click);
			// 
			// Ventana2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1565, 760);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelBienvenida);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(910, 621);
			this->Name = L"Ventana2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Koi";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Ventana2::Ventana2_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Ventana2::Ventana2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Ventana2_FormClosing(System::Object^ sender,
			System::Windows::Forms::FormClosingEventArgs^ e) {
			LiberarMemoria(arbol);
	}

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
		int cont = 0;
		// josue: al extraer el nombre del juego en la checkedlist se va a buscar su posicion
		// en el arreglo juegos para insertarlo sin problemas en la lista enlazada

		if (checkedListBox1->CheckedItems->Count < 3) {
			MessageBox::Show("Error. Debe tildar al menos 3 juegos como favoritos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				checkedListBox1->SetItemChecked(i, false);
			}
		}
		else if (checkedListBox1->CheckedItems->Count > 10) {
			MessageBox::Show("Error. Debe tildar como máximo 10 juegos como favoritos",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			for (int i = 0; i < checkedListBox1->Items->Count; i++) {
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
				for (int j = 0; j < 4; j++) {
					if (juego[posicion].generos[j] == -1)
						break;
					else {
						string aux = GeneroAString(juego[posicion].generos[j]);
						if (cont == 0)
							generos[0] = aux;
						else if (!GenerosFavoritos(cont,aux)) {
							generos[cont] = aux;
						}
						cont++;
					}
				}
			}

			aux = PublisherFavorito();
			QuickSort(juego, 0, CANT_JUEGOS - 1, aux);

			Ventana3^ Ov = gcnew Ventana3();
			Ov->Show();
			Application::OpenForms[1]->Hide();
		}
	}
};
}
