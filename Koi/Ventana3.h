#pragma once
#include "funciones.h"
#include <cstdlib>
#include <string>

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

	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
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
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(80, 202);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(541, 345);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ventana3::checkedListBox1_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-22, -23);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(230, 163);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(695, 202);
			this->checkedListBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(290, 142);
			this->checkedListBox2->TabIndex = 31;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->CheckOnClick = true;
			this->checkedListBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(695, 405);
			this->checkedListBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(290, 142);
			this->checkedListBox3->TabIndex = 32;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(695, 74);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 33;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(901, 74);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 34;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Ventana3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1100, 668);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
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
		for (int i = 0; i < CANT_JUEGOS; ++i) {
			std::string texto = juego[i].nombre +
				" | Géneros: " + GenerosString(juego[i].generos) +
				" | Calidad: " + std::to_string(juego[i].calidad) + " / 5";

			checkedListBox1->Items->Add(gcnew String(texto.c_str()));

			texto = juego[i].publisher + " (" + std::to_string(CantidadPublisher(juego[i].publisher)) + ")";
			checkedListBox3->Items->Add(gcnew String(texto.c_str()));
		}

		string* aux = new string[15];

		aux[0] = "FPS";
		aux[1] = "MOBA";
		aux[2] = "RPG";
		aux[3] = "Accion";
		aux[4] = "Aventura";
		aux[5] = "SurvivalHorror";
		aux[6] = "Plataformas";
		aux[7] = "Roguelike";
		aux[8] = "Estrategia";
		aux[9] = "Carreras";
		aux[10] = "Peleas";
		aux[11] = "Sandbox";
		aux[12] = "Shooter";
		aux[13] = "Indie";
		aux[14] = "MundoAbierto";

		for (int i = 0; i < 15; i++) {
			std::string texto = aux[i] + " (" + std::to_string(CantidadEtiquetas(aux[i])) + ")";
			checkedListBox2->Items->Add(gcnew String(texto.c_str()));
		}

		delete [] aux;
		aux = nullptr;

	}
};
}
