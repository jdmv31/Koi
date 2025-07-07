#pragma once
#include "funciones.h"
#include <cstdlib>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "VentanaUsuarios.h"
#include "Descubrimientos.h"

namespace Koi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ventana3
	/// </summary>
	public ref class Ventana3 : public System::Windows::Forms::Form
	{
	public:
		Ventana3(void)
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
		~Ventana3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ventana3::typeid));
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(53, 131);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(362, 229);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ventana3::checkedListBox1_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-15, -15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(153, 106);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Ventana3::pictureBox2_Click);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(449, 186);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(195, 94);
			this->checkedListBox2->TabIndex = 31;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(449, 302);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(195, 94);
			this->checkedListBox3->TabIndex = 32;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(234, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Te podria gustar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(395, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Usuarios";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ventana3::button2_Click);
			// 
			// Ventana3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(733, 434);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Ventana3";
			this->Text = L"Koi";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Ventana3::Ventana3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Ventana3::Ventana3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Ventana3_FormClosing(System::Object^ sender,
		System::Windows::Forms::FormClosingEventArgs^ e) {
		LiberarMemoria(arbol);
	}

	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Ventana3_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < CANT_JUEGOS; i++) {
			std::string texto = juego[i].nombre +
				" | Géneros: " + GenerosString(juego[i].generos) +
				" | Calidad: " + std::to_string(juego[i].calidad) + " / 5";

			checkedListBox1->Items->Add(gcnew String(texto.c_str()));

			std::string aux = juego[i].publisher;

			if (i == 0) {
				texto = juego[i].publisher + " (" + std::to_string(CantidadPublisher(juego[i].publisher)) + ")";
				checkedListBox3->Items->Add(gcnew String(texto.c_str()));
			}
			else if (!PublisherRegistrado(juego[i].publisher, i)) {
				texto = juego[i].publisher + " (" + std::to_string(CantidadPublisher(juego[i].publisher)) + ")";
				checkedListBox3->Items->Add(gcnew String(texto.c_str()));

			}
		}

		string* aux = new string[14];

		aux[0] = "FPS";
		aux[1] = "MOBA";
		aux[2] = "RPG";
		aux[3] = "Accion";
		aux[4] = "Aventura";
		aux[5] = "SurvivalHorror";
		aux[6] = "Plataformas";
		aux[7] = "Roguelike";
		aux[8] = "Carreras";
		aux[9] = "Peleas";
		aux[10] = "Sandbox";
		aux[11] = "Shooter";
		aux[12] = "Indie";
		aux[13] = "MundoAbierto";

		for (int i = 0; i < 14; i++) {
			std::string texto = aux[i] + " (" + std::to_string(CantidadEtiquetas(aux[i], i)) + ")";
			checkedListBox2->Items->Add(gcnew String(texto.c_str()));
		}

		delete [] aux;
		aux = nullptr;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bool aux2;
		nodo* temp = arbol;

		for (int i = 0; i < 14; i++) {
			if (generos[i] == " - 1")
				break;

			string aux = generos[i];
			aux2 = Busqueda(temp, aux);
			if (aux2)
				break;

		}

		if (!aux2)
			MessageBox::Show("Error. No se han encontrado usuarios con gustos similares", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			VentanaUsuarios^ Ov = gcnew VentanaUsuarios();
			Ov->Show();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Descubrimientos^ Ov = gcnew Descubrimientos();
		Ov->Show();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
