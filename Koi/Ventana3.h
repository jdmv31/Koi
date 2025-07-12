#pragma once
#include "funciones.h"
#include <cstdlib>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "VentanaUsuarios.h"
#include "Descubrimientos.h"
#include "Historial.h"

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



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
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
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox2->ForeColor = System::Drawing::Color::Firebrick;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(804, 341);
			this->checkedListBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(403, 140);
			this->checkedListBox2->TabIndex = 31;
			this->checkedListBox2->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Ventana3::checkedListBox2_ItemCheck);
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox3->CheckOnClick = true;
			this->checkedListBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox3->ForeColor = System::Drawing::Color::Firebrick;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(804, 540);
			this->checkedListBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(403, 170);
			this->checkedListBox3->TabIndex = 32;
			this->checkedListBox3->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Ventana3::checkedListBox3_ItemCheck);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(804, 20);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 83);
			this->button1->TabIndex = 33;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(1043, 29);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 68);
			this->button2->TabIndex = 34;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ventana3::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(56, 195);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(661, 515);
			this->dataGridView1->TabIndex = 35;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Generos";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Calidad";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(208, 46);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(459, 26);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"Buscar";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Ventana3::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &Ventana3::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Ventana3::textBox1_Leave);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(812, 250);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 35);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Calidad Descendente";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ventana3::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1021, 250);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 35);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Calidad Ascendente";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Ventana3::button4_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->trackBar1->Location = System::Drawing::Point(812, 182);
			this->trackBar1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->trackBar1->Maximum = 60;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(282, 69);
			this->trackBar1->TabIndex = 39;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Ventana3::trackBar1_Scroll);
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Ventana3::trackBar1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(1124, 182);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 32);
			this->label1->TabIndex = 40;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Ventana3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(911, 145);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 32);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Rango de Precios";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(671, 35);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 48);
			this->button5->TabIndex = 42;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Ventana3::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(52, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 20);
			this->label3->TabIndex = 43;
			this->label3->Tag = L"";
			this->label3->Text = L"Elije los juegos que mas te gustan";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(1126, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 20);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Usuarios";
			this->label4->Click += gcnew System::EventHandler(this, &Ventana3::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(895, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 20);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Te podria gustar";
			this->label5->Click += gcnew System::EventHandler(this, &Ventana3::label5_Click);
			// 
			// Ventana3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1300, 760);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Ventana3";
			this->Text = L"Koi";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Ventana3::Ventana3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Ventana3::Ventana3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ventana3_FormClosing(System::Object^ sender,
		System::Windows::Forms::FormClosingEventArgs^ e) {
		LiberarMemoria(arbol);
	}

	private: System::Void Ventana3_Load(System::Object^ sender, System::EventArgs^ e) {
		for each(DataGridViewColumn ^ column in dataGridView1->Columns)
		{
			column->SortMode = DataGridViewColumnSortMode::NotSortable;
		}
		trackBar1->Value = 60;
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
			int filas = dataGridView1->Rows->Add();
			dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
			dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
			dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
			dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
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

		delete[] aux;
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
	private: System::Void dataGridView1_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) return;

		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
		String^ seleccion = safe_cast<String^>(row->Cells["Column1"]->Value);

		std::string aux = msclr::interop::marshal_as<std::string>(seleccion);
		int pos = BuscarJuego(aux);
		global = pos;
		if (pos >= 0 && pos < CANT_JUEGOS) {
			pos = juego[pos].ID;
			if (final == -1 || !RegistradoEnHistorial(pos))
				Encolar(pos);
			Historial^ Ov = gcnew Historial();
			Ov->Show();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (final == -1)
			MessageBox::Show("Error. Visite los juegos registrados antes de visualizar tu lista de descubrimientos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			Descubrimientos^ Ov = gcnew Descubrimientos();
			Ov->Show();
		}
	}
	private: System::Void checkedListBox2_ItemCheck(System::Object^ sender,
			System::Windows::Forms::ItemCheckEventArgs^ e) {
		if (e->NewValue == CheckState::Checked) {
			if (checkedListBox2->CheckedItems->Count != 0) {
				for (int i = 0; i < checkedListBox2->Items->Count; i++) {
					checkedListBox2->SetItemChecked(i, false);
				}
			}
			else if (checkedListBox3->CheckedItems->Count != 0) {
				for (int i = 0; i < checkedListBox3->Items->Count; i++) {
					checkedListBox3->SetItemChecked(i, false);
				}
			}

			String^ itemText = checkedListBox2->Items[e->Index]->ToString();
			int pos = itemText->IndexOf("(");
			String^ nombre = itemText->Substring(0, pos)->Trim();
			std::string genero = msclr::interop::marshal_as<std::string>(nombre);
			
			dataGridView1->Rows->Clear();
			int row = 0;
			for (int i = 0; i < CANT_JUEGOS; i++) {
				if (GeneroComun(genero, i)) {
					std::string texto;
					std::string auxiliar;
					for (int j = 0; j < 4; j++) {
						if (juego[i].generos[j] == -1)
							break;
						texto = GeneroAString(juego[i].generos[j]);
						texto.append(" ");
						auxiliar.append(texto);

					}
					int filas = dataGridView1->Rows->Add();
					dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
					dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(auxiliar);
					dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
					dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
				}
			}
		}
		else {
			dataGridView1->Rows->Clear();
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
				int filas = dataGridView1->Rows->Add();
				dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
				dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
				dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
				dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
			}
		}
	}

	private: System::Void checkedListBox3_ItemCheck(System::Object^ sender,
		System::Windows::Forms::ItemCheckEventArgs^ e) {
		if (e->NewValue == CheckState::Checked) {
			if (checkedListBox3->CheckedItems->Count != 0) {
				for (int i = 0; i < checkedListBox3->Items->Count; i++) {
					checkedListBox3->SetItemChecked(i, false);
				}
			}
			else if (checkedListBox2->CheckedItems->Count != 0) {
				for (int i = 0; i < checkedListBox2->Items->Count; i++) {
					checkedListBox2->SetItemChecked(i, false);
				}
			}

			String^ itemText = checkedListBox3->Items[e->Index]->ToString();
			int pos = itemText->IndexOf("(");
			String^ nombre = itemText->Substring(0, pos)->Trim();
			std::string publisher = msclr::interop::marshal_as<std::string>(nombre);


			dataGridView1->Rows->Clear();
			int row = 0;
			for (int i = 0; i < CANT_JUEGOS; i++) {
				if (publisher == juego[i].publisher) {
					std::string texto;
					std::string auxiliar;
					for (int j = 0; j < 4; j++) {
						if (juego[i].generos[j] == -1)
							break;
						texto = GeneroAString(juego[i].generos[j]);
						texto.append(" ");
						auxiliar.append(texto);

					}
					int filas = dataGridView1->Rows->Add();
					dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
					dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(auxiliar);
					dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
					dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
				}
			}
		}
		else {
			dataGridView1->Rows->Clear();
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
				int filas = dataGridView1->Rows->Add();
				dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
				dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
				dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
				dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		BubbleSort();
		dataGridView1->Rows->Clear();
		trackBar1->Value = 60;
		textBox1->Text = "";
		if (checkedListBox3->CheckedItems->Count != 0) {
			for (int i = 0; i < checkedListBox3->Items->Count; i++) {
				checkedListBox3->SetItemChecked(i, false);
			}
		}
		if (checkedListBox2->CheckedItems->Count != 0) {
			for (int i = 0; i < checkedListBox2->Items->Count; i++) {
				checkedListBox2->SetItemChecked(i, false);
			}
		}
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
			int filas = dataGridView1->Rows->Add();
			dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
			dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
			dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
			dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		BubbleSort2();
		dataGridView1->Rows->Clear();
		trackBar1->Value = 60;
		textBox1->Text = "";
		if (checkedListBox3->CheckedItems->Count != 0) {
			for (int i = 0; i < checkedListBox3->Items->Count; i++) {
				checkedListBox3->SetItemChecked(i, false);
			}
		}
		if (checkedListBox2->CheckedItems->Count != 0) {
			for (int i = 0; i < checkedListBox2->Items->Count; i++) {
				checkedListBox2->SetItemChecked(i, false);
			}
		}

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
			int filas = dataGridView1->Rows->Add();
			dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
			dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
			dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
			dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
		}
	}
	private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int valor = this->trackBar1->Value;
		label1->Text = String::Format("0 - " + valor.ToString() + " $");
		dataGridView1->Rows->Clear();

		for (int i = 0; i < CANT_JUEGOS; i++) {
			std::string texto;
			std::string aux;
			if (juego[i].precio <= valor) {
				for (int j = 0; j < 4; j++) {
					if (juego[i].generos[j] == -1)
						break;
					texto = GeneroAString(juego[i].generos[j]);
					texto.append(" ");
					aux.append(texto);

				}
				int filas = dataGridView1->Rows->Add();
				dataGridView1->Rows[filas]->Cells["Column1"]->Value = msclr::interop::marshal_as<String^>(juego[i].nombre);
				dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(aux);
				dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
				dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
			}
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto = textBox1->Text->Trim();
		String^ temp = texto;



		textBox1->Text = "";

		if (String::IsNullOrWhiteSpace(texto)) {
			MessageBox::Show("Por favor ingrese un término de búsqueda", "Búsqueda",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		else
			dataGridView1->Rows->Clear();

		texto = texto->ToLower();
		bool encontrado = false;

		for (int i = 0; i < CANT_JUEGOS; i++) {
			String^ nombreJuego = msclr::interop::marshal_as<String^>(juego[i].nombre);

			if (nombreJuego->ToLower()->Contains(texto)) {
				encontrado = true;
				std::string generos;
				for (int j = 0; j < 4 && juego[i].generos[j] != -1; j++) {
					generos += GeneroAString(juego[i].generos[j]) + " ";
				}
				int filas = dataGridView1->Rows->Add();
				dataGridView1->Rows[filas]->Cells["Column1"]->Value = nombreJuego;
				dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(generos);
				dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
				dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
			}
		}
		if (!encontrado) {
			MessageBox::Show("No se encontraron juegos que coincidan con: " + temp,
				"Resultados",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
			textBox1->Text = "";
			for (int i = 0; i < CANT_JUEGOS; i++) {
				String^ nombreJuego = msclr::interop::marshal_as<String^>(juego[i].nombre);
				std::string generos;
				for (int j = 0; j < 4 && juego[i].generos[j] != -1; j++) {
					generos += GeneroAString(juego[i].generos[j]) + " ";
				}
				int filas = dataGridView1->Rows->Add();
				dataGridView1->Rows[filas]->Cells["Column1"]->Value = nombreJuego;
				dataGridView1->Rows[filas]->Cells["Column2"]->Value = msclr::interop::marshal_as<String^>(generos);
				dataGridView1->Rows[filas]->Cells["Column3"]->Value = juego[i].calidad.ToString();
				dataGridView1->Rows[filas]->Cells["Column4"]->Value = juego[i].precio.ToString() + " $";
			}
		}
	}

		private:
			System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
				if (this->textBox1->Text == L"Buscar") {
					this->textBox1->Text = L""; 
					this->textBox1->ForeColor = System::Drawing::Color::Black;
				}
			}

			System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
			
				if (System::String::IsNullOrWhiteSpace(this->textBox1->Text)) {
					this->textBox1->Text = L"Buscar"; 
					this->textBox1->ForeColor = System::Drawing::Color::Gray; 
				}
			}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}