#pragma once  
#include <msclr/marshal_cppstd.h>
#include "funciones.h"

namespace Koi {  

	using namespace System;  
	using namespace System::ComponentModel;  
	using namespace System::Collections;  
	using namespace System::Windows::Forms;  
	using namespace System::Data;  
	using namespace System::Drawing;  
	using namespace System::IO;

	/// <summary>  
	/// Summary for Historial  
	/// </summary>  
	public ref class Historial : public System::Windows::Forms::Form  
	{  
	public:  
		Historial(void)  
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
		~Historial()  
		{  
			if (components)  
			{  
				delete components;  
			}  
		}  
	private: System::Windows::Forms::PictureBox^ pictureBox2;  
	private: System::Windows::Forms::Label^ label1;  
	private: System::Windows::Forms::Label^ label2;  
	private: System::Windows::Forms::Label^ label3;  
	private: System::Windows::Forms::Label^ label4;  
	private: System::Windows::Forms::Label^ label5;  
	private: System::Windows::Forms::PictureBox^ pictureBox1;  
	private: System::Windows::Forms::Label^ label6;  
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Historial::typeid));  
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());  
			this->label1 = (gcnew System::Windows::Forms::Label());  
			this->label2 = (gcnew System::Windows::Forms::Label());  
			this->label3 = (gcnew System::Windows::Forms::Label());  
			this->label4 = (gcnew System::Windows::Forms::Label());  
			this->label5 = (gcnew System::Windows::Forms::Label());  
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());  
			this->label6 = (gcnew System::Windows::Forms::Label());  
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();  
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();  
			this->SuspendLayout();  
			//  
			// pictureBox2  
			//  
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));  
			this->pictureBox2->Location = System::Drawing::Point(-8, -10);  
			this->pictureBox2->Name = L"pictureBox2";  
			this->pictureBox2->Size = System::Drawing::Size(153, 106);  
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;  
			this->pictureBox2->TabIndex = 30;  
			this->pictureBox2->TabStop = false;  
			//  
			// label1  
			//  
			this->label1->AutoSize = true;  
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,  
				static_cast<System::Byte>(0)));  
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;  
			this->label1->Location = System::Drawing::Point(389, 59);  
			this->label1->Name = L"label1";  
			this->label1->Size = System::Drawing::Size(94, 37);  
			this->label1->TabIndex = 31;  
			this->label1->Text = L"label1";  
			//  
			// label2  
			//  
			this->label2->AutoSize = true;  
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,  
				static_cast<System::Byte>(0)));  
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;  
			this->label2->Location = System::Drawing::Point(389, 102);  
			this->label2->Name = L"label2";  
			this->label2->Size = System::Drawing::Size(66, 26);  
			this->label2->TabIndex = 32;  
			this->label2->Text = L"label2";  
			//  
			// label3  
			//  
			this->label3->AutoSize = true;  
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,  
				static_cast<System::Byte>(0)));  
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;  
			this->label3->Location = System::Drawing::Point(608, 102);  
			this->label3->Name = L"label3";  
			this->label3->Size = System::Drawing::Size(94, 37);  
			this->label3->TabIndex = 33;  
			this->label3->Text = L"label3";  
			//  
			// label4  
			//  
			this->label4->AutoSize = true;  
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,  
				static_cast<System::Byte>(0)));  
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;  
			this->label4->Location = System::Drawing::Point(608, 149);  
			this->label4->Name = L"label4";  
			this->label4->Size = System::Drawing::Size(94, 37);  
			this->label4->TabIndex = 34;  
			this->label4->Text = L"label4";  
			//  
			// label5  
			//  
			this->label5->AutoSize = true;  
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,  
				static_cast<System::Byte>(0)));  
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;  
			this->label5->Location = System::Drawing::Point(389, 264);  
			this->label5->Name = L"label5";  
			this->label5->Size = System::Drawing::Size(94, 37);  
			this->label5->TabIndex = 35;  
			this->label5->Text = L"label5";  
			//  
			// pictureBox1  
			//  
			this->pictureBox1->Location = System::Drawing::Point(21, 102);  
			this->pictureBox1->Name = L"pictureBox1";  
			this->pictureBox1->Size = System::Drawing::Size(315, 367);  
			this->pictureBox1->TabIndex = 36;  
			this->pictureBox1->TabStop = false;  
			//  
			// label6  
			//  
			this->label6->AutoSize = true;  
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,  
				static_cast<System::Byte>(0)));  
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;  
			this->label6->Location = System::Drawing::Point(608, 196);  
			this->label6->Name = L"label6";  
			this->label6->Size = System::Drawing::Size(94, 37);  
			this->label6->TabIndex = 37;  
			this->label6->Text = L"label6";  
			//  
			// Historial  
			//  
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);  
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;  
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;  
			this->ClientSize = System::Drawing::Size(815, 503);  
			this->Controls->Add(this->label6);  
			this->Controls->Add(this->pictureBox1);  
			this->Controls->Add(this->label5);  
			this->Controls->Add(this->label4);  
			this->Controls->Add(this->label3);  
			this->Controls->Add(this->label2);  
			this->Controls->Add(this->label1);  
			this->Controls->Add(this->pictureBox2);  
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));  
			this->Name = L"Historial";  
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;  
			this->Text = L"Historial";  
			this->Load += gcnew System::EventHandler(this, &Historial::Historial_Load);  
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();  
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();  
			this->ResumeLayout(false);  
			this->PerformLayout();  

		}  
#pragma endregion  
	private: System::Void Historial_Load(System::Object^ sender, System::EventArgs^ e) { 
		this->Text = msclr::interop::marshal_as<String^>(juego[global].nombre);
		label1->Text = gcnew System::String((juego[global].nombre).c_str());  
		label2->Text = gcnew System::String((juego[global].publisher).c_str());  
		int aux = static_cast<int>(juego[global].peso);  
		label3->Text = gcnew System::String((to_string(aux) + " MB").c_str());  
		label4->Text = gcnew System::String((to_string(juego[global].calidad) + " / 5").c_str());

		label5->AutoSize = false;  
		label5->Width = 400;  
		label5->MaximumSize = System::Drawing::Size(400, 0);  
		label5->MinimumSize = System::Drawing::Size(400, 20);  
		label5->Text = gcnew System::String((juego[global].descripcion).c_str());  
		label5->TextAlign = ContentAlignment::TopLeft;  
		int altura = TextRenderer::MeasureText(  
			label5->Text,  
			label5->Font,  
			System::Drawing::Size(label5->Width, Int32::MaxValue),  
			TextFormatFlags::WordBreak | TextFormatFlags::TextBoxControl  
		).Height;
		label5->Height = altura + 5;
		label6->Text = gcnew System::String((to_string(juego[global].precio) + " $").c_str());

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
	};  
}