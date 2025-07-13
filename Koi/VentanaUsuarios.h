#pragma once
#include "funciones.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace Koi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaUsuarios
	/// </summary>
	public ref class VentanaUsuarios : public System::Windows::Forms::Form
	{
	public:
		VentanaUsuarios(void)
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
		~VentanaUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ usuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ intereses;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaUsuarios::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->intereses = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 21, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(108, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(656, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuarios con intereses similares";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &VentanaUsuarios::label1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-19, -1);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(152, 104);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->UseWaitCursor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ID, this->usuario,
					this->intereses
			});
			this->dataGridView1->GridColor = System::Drawing::Color::Firebrick;
			this->dataGridView1->Location = System::Drawing::Point(36, 169);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(723, 387);
			this->dataGridView1->TabIndex = 31;
			this->dataGridView1->UseWaitCursor = true;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VentanaUsuarios::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 8;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// usuario
			// 
			this->usuario->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->usuario->HeaderText = L"Username";
			this->usuario->MinimumWidth = 8;
			this->usuario->Name = L"usuario";
			this->usuario->ReadOnly = true;
			// 
			// intereses
			// 
			this->intereses->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->intereses->HeaderText = L"Gustos en Comun";
			this->intereses->MinimumWidth = 8;
			this->intereses->Name = L"intereses";
			this->intereses->ReadOnly = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(791, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(418, 703);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(28, 154);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(742, 428);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 33;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->UseWaitCursor = true;
			// 
			// VentanaUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1200, 691);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"VentanaUsuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Usuarios";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &VentanaUsuarios::VentanaUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void VentanaUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
		for each (DataGridViewColumn ^ column in dataGridView1->Columns)
		{
			column->SortMode = DataGridViewColumnSortMode::NotSortable;
		}
		dataGridView1->Rows->Clear();
		PreOrder(arbol);
	}

	void PreOrder(nodo* arbol) {
		if (arbol == nullptr) return;
		
		if (arbol->usuario.username != username) {
			bool haysimilitud = false;
			std::string interesesComunes;

			for (int i = 0; i < 14 && generos[i] != "-1"; i++) {
				nodo2* actual = arbol->usuario.lista;

				while (actual != nullptr) {
					for (int j = 0; j < 4 && actual->dato.generos[j] != -1; j++) {
						std::string generoArbol = GeneroAString(actual->dato.generos[j]);

						if (generos[i] == generoArbol) {
							interesesComunes.append(generoArbol + ", ");
							haysimilitud = true;
							break;
						}
					}
					actual = actual->siguiente;
				}
			}

			if (haysimilitud) {
				if (!interesesComunes.empty())
					interesesComunes.erase(interesesComunes.size() - 2);

				String^ idUsuario = arbol->usuario.ID.ToString();
				String^ user = msclr::interop::marshal_as<String^>(arbol->usuario.username);
				String^ intereses = msclr::interop::marshal_as<String^>(interesesComunes);

				dataGridView1->Rows->Add(idUsuario,user,intereses);
			}
		}
		PreOrder(arbol->izq);
		PreOrder(arbol->der);
	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
