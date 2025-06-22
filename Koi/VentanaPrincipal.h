#pragma once
#include "Ventana2.h"
#include "funciones.h"
#include <msclr/marshal_cppstd.h>
#include <string>
#include <ctime>
#include <cstdlib>


namespace Koi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VentanaPrincipal
	/// </summary>
	public ref class VentanaPrincipal : public System::Windows::Forms::Form
	{
	public:
		VentanaPrincipal(void)
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
		~VentanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtUsername;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaPrincipal::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala Text", 10));
			this->button1->Location = System::Drawing::Point(491, 542);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(324, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(490, 439);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 36);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Contraseña";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(491, 479);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(324, 26);
			this->txtPassword->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(490, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 36);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Usuario\r\n";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(491, 392);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(324, 26);
			this->txtUsername->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(489, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 36);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Apellido";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(491, 306);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(324, 26);
			this->txtApellido->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(489, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 36);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Nombre";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(491, 216);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(324, 26);
			this->txtNombre->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(566, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 76);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Login";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-40, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(490, 730);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(694, -33);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(229, 163);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &VentanaPrincipal::pictureBox2_Click);
			// 
			// VentanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(891, 674);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(913, 730);
			this->MinimumSize = System::Drawing::Size(913, 730);
			this->Name = L"VentanaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Koi";
			this->Load += gcnew System::EventHandler(this, &VentanaPrincipal::VentanaPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		srand(time(NULL));
		arbol = new nodo();
		arbol->der = nullptr;
		arbol->izq = nullptr;
		arbol->usuario.nombre = msclr::interop::marshal_as<std::string>(txtNombre->Text);
		arbol->usuario.apellido = msclr::interop::marshal_as<std::string>(txtApellido->Text);
		arbol->usuario.username = msclr::interop::marshal_as<std::string>(txtUsername->Text);
		arbol->usuario.password = msclr::interop::marshal_as<std::string>(txtPassword->Text);

		if (arbol->usuario.password.empty() || arbol->usuario.username.empty()
			|| arbol->usuario.nombre.empty() || arbol->usuario.apellido.empty()) {
			MessageBox::Show("Error. Ingrese todos los campos requeridos para continuar con el registro", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			aux = false;
		}
		else {
			if (arbol->usuario.nombre.length() < 3) {
				MessageBox::Show("Error. Su nombre debe contener al menos 3 caracteres", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				aux = false;
			}
				
			if (arbol->usuario.apellido.length() < 3) {
				MessageBox::Show("Error. Su apellido debe contener al menos 3 caracteres", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				aux = false;
			}

			if (arbol->usuario.username.length() < 3) {
				MessageBox::Show("Error. Su nombre de usuario debe contener al menos 3 caracteres", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				aux = false;
			}
			if (arbol->usuario.password.length() < 5) {
				MessageBox::Show("Error. Su contraseña debe contener al menos 5 caracteres", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				aux = false;
			}

		}

		txtNombre->Text = "";
		txtApellido->Text = "";
		txtUsername->Text = "";
		txtPassword->Text = "";

		if (aux) {
			arbol->usuario.ID = rand() % 500 + 1;
			ID[0] = arbol->usuario.ID;
			GenerarArbol(arbol);
			delete[] ID;
			ID = nullptr;
			Ventana2^ Ov = gcnew Ventana2();
			Ov->Show();
			Application::OpenForms[0]->Hide();
		}
		else
			aux = true;
	}

private: System::Void VentanaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
	float aux, aux2;
	for (int i = 0; i < CANT_JUEGOS; i++) {
		do {
			aux = rand() % 200 + 1;
			aux2 = rand() % 200 + 1;
			if (aux > aux2)
				juego[i].precio = aux / aux2;
		} while (aux < aux2);

		juego[i].ID = i + 1;
		juego[i].peso = rand() % 50000 + 1;
		juego[i].visitado = false;
		aux = rand() % 5 + 1;
		juego[i].calidad = static_cast<int>(aux);

		for (int j = 0; j < 4; j++) {
			juego[i].generos[j] = static_cast<Genero>(-1);
		}

		PreCargarJuegos(i);
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
