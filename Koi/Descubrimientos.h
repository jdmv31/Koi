#pragma once
#include <string>
#include "funciones.h"
#include <msclr/marshal_cppstd.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>


namespace Koi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Descubrimientos
	/// </summary>
	public ref class Descubrimientos : public System::Windows::Forms::Form
	{
	public:
		Descubrimientos(void)
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
		~Descubrimientos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Descubrimientos::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-12, -17);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(188, 132);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(158, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(701, 99);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Lista de Descubrimientos";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(1128, 380);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 48);
			this->button1->TabIndex = 34;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Descubrimientos::button1_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(40, 380);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 48);
			this->button3->TabIndex = 36;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Descubrimientos::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(169, 125);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(460, 550);
			this->pictureBox1->TabIndex = 37;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Firebrick;
			this->label2->Location = System::Drawing::Point(687, 208);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 55);
			this->label2->TabIndex = 39;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(855, 280);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 63);
			this->label3->TabIndex = 40;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 18, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label4->Location = System::Drawing::Point(686, 280);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 63);
			this->label4->TabIndex = 41;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(855, 340);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 63);
			this->label5->TabIndex = 42;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(669, 502);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 50);
			this->label6->TabIndex = 43;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 18, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(855, 400);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 63);
			this->label7->TabIndex = 44;
			this->label7->Text = L"label7";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(662, 178);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(437, 287);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 45;
			this->pictureBox3->TabStop = false;
			// 
			// Descubrimientos
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1228, 724);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Descubrimientos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Descubrimientos";
			this->Load += gcnew System::EventHandler(this, &Descubrimientos::Descubrimientos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Descubrimientos_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		int numero = rand() % 3 + 1;
		int cont = 0;
		int acum = 0;
		int pos;
		global = 0;
		std::string publish;
		int publishers = 0;
		std::string* vec_publishers = new std::string[20];
		/*
		josue:

		esto va a determinar que se recomendara segun lo que se ha encolado
		si es 1 se ordenara en funcion de una calidad similar  (promedio)
		si es 2 se ordenara por el publisher
		si es 3 se ordenara por el precio
		*/
		switch (numero) {
			case 1:
				for (int i = 0; i < indices; i++) {
					pos = BuscarPosicion(cola[i]);
					acum += juego[pos].calidad;
					cont++;
				}
				acum /= cont;
				PriorizarCalidad(acum);
			break;

			case 2:
				for (int i = 0; i < indices; i++) {
					pos = BuscarPosicion(cola[i]);
					publish = juego[pos].publisher;
					bool encontrado = false;
					
					for (int j = 0; j < publishers; j++) {
						if (vec_publishers[j] == publish) {
							encontrado = true;
							break;
						}
					}
					if (!encontrado) {
						vec_publishers[publishers] = publish;
						publishers++;
					}
				}
				/*
				aca lo que hare es simplemente enlistar los publishers de los juegos en la cola
				y generara un numero aleatorio simbolizando su posicion, el cual sera ingresado en 
				la funcion y ordenado en funcion a dicho publisher
				*/
				publish = vec_publishers[rand() % publishers + 0];
				QuickSort(juego, 0, CANT_JUEGOS - 1, publish);
			break;

			case 3:
				for (int i = 0; i < indices; i++) {
					pos = BuscarPosicion(cola[i]);
					acum += juego[pos].precio;
					cont++;
				}
				acum /= cont;
				PriorizarPrecio(acum);
			break;
		}
		label2->Text = gcnew System::String((juego[global].nombre).c_str());
		label3->Text = gcnew System::String((juego[global].publisher).c_str());
		int aux = static_cast<int>(juego[global].peso);
		label4->Text = gcnew System::String((to_string(aux) + " MB").c_str());
		label5->Text = gcnew System::String((to_string(juego[global].calidad) + " / 5").c_str());
		label6->AutoSize = false;
		label6->Width = 400;
		label6->MaximumSize = System::Drawing::Size(400, 0);
		label6->MinimumSize = System::Drawing::Size(400, 20);
		label6->Text = gcnew System::String((juego[global].descripcion).c_str());
		label6->TextAlign = ContentAlignment::TopLeft;
		int altura = TextRenderer::MeasureText(
			label6->Text,
			label6->Font,
			System::Drawing::Size(label6->Width, Int32::MaxValue),
			TextFormatFlags::WordBreak | TextFormatFlags::TextBoxControl
		).Height;
		label6->Height = altura + 5;
		label7->Text = gcnew System::String((to_string(juego[global].precio) + " $").c_str());
		String^ nombreJuego = gcnew String((juego[global].nombre).c_str());
		nombreJuego = nombreJuego->Replace(" ", "")
			->Replace(":", "")
			->Replace("/", "")
			->Replace("\\", "")
			->ToLower();
		String^ RutaRelativa = "imagenes\\portadas\\" + nombreJuego + ".jpg";
		String^ RutaCompleta = Path::Combine(Application::StartupPath, RutaRelativa);
		if (File::Exists(RutaCompleta)) {
			try {
				if (pictureBox1->Image != nullptr) {
					delete pictureBox1->Image;
				}
				pictureBox1->Image = Image::FromFile(RutaCompleta);
				pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
			}
			catch (Exception^ e) {
				MessageBox::Show("Error al cargar imagen: " + e->Message);
				pictureBox1->Image = nullptr;
			}
		}
		else {
			MessageBox::Show("No se encontró la imagen en:\n" + RutaCompleta,
				"Archivo no encontrado",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
		delete[] vec_publishers;
		vec_publishers = nullptr;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (global == 4) {
			MessageBox::Show("Se han agotado nuestras recomendaciones!",
				"Se ha llegado al limite",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
			this->Close();
		}
		else {
			global++;
			label2->Text = gcnew System::String((juego[global].nombre).c_str());
			label3->Text = gcnew System::String((juego[global].publisher).c_str());
			int aux = static_cast<int>(juego[global].peso);
			label4->Text = gcnew System::String((to_string(aux) + " MB").c_str());
			label5->Text = gcnew System::String((to_string(juego[global].calidad) + " / 5").c_str());
			label6->AutoSize = false;
			label6->Width = 400;
			label6->MaximumSize = System::Drawing::Size(400, 0);
			label6->MinimumSize = System::Drawing::Size(400, 20);
			label6->Text = gcnew System::String((juego[global].descripcion).c_str());
			label6->TextAlign = ContentAlignment::TopLeft;
			int altura = TextRenderer::MeasureText(
				label6->Text,
				label6->Font,
				System::Drawing::Size(label6->Width, Int32::MaxValue),
				TextFormatFlags::WordBreak | TextFormatFlags::TextBoxControl
			).Height;
			label6->Height = altura + 5;
			label7->Text = gcnew System::String((to_string(juego[global].precio) + " $").c_str());
			String^ nombreJuego = gcnew String((juego[global].nombre).c_str());
			nombreJuego = nombreJuego->Replace(" ", "")
				->Replace(":", "")
				->Replace("/", "")
				->Replace("\\", "")
				->ToLower();
			String^ RutaRelativa = "imagenes\\portadas\\" + nombreJuego + ".jpg";
			String^ RutaCompleta = Path::Combine(Application::StartupPath, RutaRelativa);
			if (File::Exists(RutaCompleta)) {
				try {
					if (pictureBox1->Image != nullptr) {
						delete pictureBox1->Image;
					}
					pictureBox1->Image = Image::FromFile(RutaCompleta);
					pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
				}
				catch (Exception^ e) {
					MessageBox::Show("Error al cargar imagen: " + e->Message);
					pictureBox1->Image = nullptr;
				}
			}
			else {
				MessageBox::Show("No se encontró la imagen en:\n" + RutaCompleta,
					"Archivo no encontrado",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (global != 0) {
			global--;
			label2->Text = gcnew System::String((juego[global].nombre).c_str());
			label3->Text = gcnew System::String((juego[global].publisher).c_str());
			int aux = static_cast<int>(juego[global].peso);
			label4->Text = gcnew System::String((to_string(aux) + " MB").c_str());
			label5->Text = gcnew System::String((to_string(juego[global].calidad) + " / 5").c_str());
			label6->AutoSize = false;
			label6->Width = 400;
			label6->MaximumSize = System::Drawing::Size(400, 0);
			label6->MinimumSize = System::Drawing::Size(400, 20);
			label6->Text = gcnew System::String((juego[global].descripcion).c_str());
			label6->TextAlign = ContentAlignment::TopLeft;
			int altura = TextRenderer::MeasureText(
				label6->Text,
				label6->Font,
				System::Drawing::Size(label6->Width, Int32::MaxValue),
				TextFormatFlags::WordBreak | TextFormatFlags::TextBoxControl
			).Height;
			label6->Height = altura + 5;
			label7->Text = gcnew System::String((to_string(juego[global].precio) + " $").c_str());
			String^ nombreJuego = gcnew String((juego[global].nombre).c_str());
			nombreJuego = nombreJuego->Replace(" ", "")
				->Replace(":", "")
				->Replace("/", "")
				->Replace("\\", "")
				->ToLower();
			String^ RutaRelativa = "imagenes\\portadas\\" + nombreJuego + ".jpg";
			String^ RutaCompleta = Path::Combine(Application::StartupPath, RutaRelativa);
			if (File::Exists(RutaCompleta)) {
				try {
					if (pictureBox1->Image != nullptr) {
						delete pictureBox1->Image;
					}
					pictureBox1->Image = Image::FromFile(RutaCompleta);
					pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
				}
				catch (Exception^ e) {
					MessageBox::Show("Error al cargar imagen: " + e->Message);
					pictureBox1->Image = nullptr;
				}
			}
			else {
				MessageBox::Show("No se encontró la imagen en:\n" + RutaCompleta,
					"Archivo no encontrado",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
		}
	}
};
}
