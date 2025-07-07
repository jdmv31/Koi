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

	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;







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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox2->ForeColor = System::Drawing::Color::Firebrick;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(463, 164);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(195, 92);
			this->checkedListBox2->TabIndex = 31;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->CheckOnClick = true;
			this->checkedListBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox3->ForeColor = System::Drawing::Color::Firebrick;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(463, 296);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(195, 92);
			this->checkedListBox3->TabIndex = 32;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 15);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Te podria gustar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(583, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Usuarios";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ventana3::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 164);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(406, 150);
			this->dataGridView1->TabIndex = 35;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Ventana3::dataGridView1_CellContentClick);
			/*
						DataGridViewImageColumn^ colImagen = gcnew DataGridViewImageColumn();
			colImagen->Name = "colImagen";
			colImagen->HeaderText = "Portada";
			colImagen->ImageLayout = DataGridViewImageCellLayout::Zoom;
			dataGridView1->Columns->Add(colImagen);
			dataGridView1->RowTemplate->Height = 80;
			colImagen->Width = 120;
			
			*/
			
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Generos";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Calidad";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Ventana3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(733, 434);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Ventana3";
			this->Text = L"Koi";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Ventana3::Ventana3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Ventana3::Ventana3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
			std::string texto;
			std::string aux;
			for (int j = 0; j < 4; j++) {
				if (juego[i].generos[j] == -1)
					break;
				texto = GeneroAString(juego[i].generos[j]);
				texto.append(" ");
				aux.append(texto);

			}
			dataGridView1->Rows->Add();
			//dataGridView1->Rows[i]->Cells["colImagen"]->Value = Image::FromFile("C:\\Users\\josue\\OneDrive\\Desktop\\Koi\\Koi\\imagenes\\portadas\\terraria.jpg");
			dataGridView1->Rows[i]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
			dataGridView1->Rows[i]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
			dataGridView1->Rows[i]->Cells["Column3"]->Value = juego[i].calidad.ToString();

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
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
