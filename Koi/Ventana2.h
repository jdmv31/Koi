#pragma once
#include "funciones.h"
#include <string>
#include <iostream>

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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(37, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Indícanos que juegos te gustan";
			this->label2->Click += gcnew System::EventHandler(this, &Ventana2::label2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(31, 143);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(487, 94);
			this->checkedListBox1->TabIndex = 5;
			// 
			// Ventana2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->ClientSize = System::Drawing::Size(600, 390);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelBienvenida);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(616, 429);
			this->Name = L"Ventana2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Koi";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Ventana2::Ventana2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		std::string GeneroAString(int genero) {
			switch (genero) {
			case FPS: return "FPS";
			case MOBA: return "MOBA";
			case RPG: return "RPG";
			case Accion: return "Acción";
			case Aventura: return "Aventura";
			case SurvivalHorror: return "Survival Horror";
			case Plataformas: return "Plataformas";
			case Roguelike: return "Roguelike";
			case Estrategia: return "Estrategia";
			case Carreras: return "Carreras";
			case Peleas: return "Peleas";
			case Sandbox: return "Sandbox";
			case Shooter: return "Shooter";
			case Indie: return "Indie";
			case MundoAbierto: return "Mundo Abierto";
			default: return "Desconocido";
			}
		}
		std::string GenerosToString(Genero generos[4]) {
			std::string resultado;
			for (int i = 0; i < 4; ++i) {
				if (generos[i] != -1) {
					if (!resultado.empty()) resultado += ", ";
					resultado += GeneroAString(generos[i]);
				}
			}
			return resultado;
		}
	private: System::Void Ventana2_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = gcnew System::String(("Bienvenid@ " + arbol->usuario.username + "!").c_str());
		for (int i = 0; i < CANT_JUEGOS; ++i) {
			std::string texto = juego[i].nombre +
				" | Géneros: " + GenerosToString(juego[i].generos) +
				" | Calidad: " + std::to_string(juego[i].calidad);

			checkedListBox1->Items->Add(gcnew String(texto.c_str()));
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listViewJuegos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
