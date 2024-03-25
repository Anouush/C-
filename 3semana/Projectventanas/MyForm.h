#pragma once
#include <iostream>
#include <fstream>
#include "msclr/marshal_cppstd.h"
#include "Contenido.h"

namespace Projectventanas {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ nombre;
	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::TextBox^ entradanombre;
	private: System::Windows::Forms::TextBox^ entradaemail;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ entradapassword;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->entradanombre = (gcnew System::Windows::Forms::TextBox());
			this->entradaemail = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->entradapassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(509, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 83);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Haz click aqui";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// nombre
			// 
			this->nombre->AutoSize = true;
			this->nombre->Location = System::Drawing::Point(181, 145);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(186, 25);
			this->nombre->TabIndex = 1;
			this->nombre->Text = L"Escribe tu nombre";
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Location = System::Drawing::Point(181, 221);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(165, 25);
			this->email->TabIndex = 2;
			this->email->Text = L"Escribe tu email";
			// 
			// entradanombre
			// 
			this->entradanombre->Location = System::Drawing::Point(430, 139);
			this->entradanombre->Name = L"entradanombre";
			this->entradanombre->Size = System::Drawing::Size(432, 31);
			this->entradanombre->TabIndex = 3;
			// 
			// entradaemail
			// 
			this->entradaemail->Location = System::Drawing::Point(430, 221);
			this->entradaemail->Name = L"entradaemail";
			this->entradaemail->Size = System::Drawing::Size(432, 31);
			this->entradaemail->TabIndex = 4;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Location = System::Drawing::Point(181, 300);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(206, 25);
			this->password->TabIndex = 5;
			this->password->Text = L"Escribe tu password";
			// 
			// entradapassword
			// 
			this->entradapassword->Location = System::Drawing::Point(430, 294);
			this->entradapassword->Name = L"entradapassword";
			this->entradapassword->Size = System::Drawing::Size(432, 31);
			this->entradapassword->TabIndex = 6;
			this->entradapassword->UseSystemPasswordChar = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 687);
			this->Controls->Add(this->entradapassword);
			this->Controls->Add(this->password);
			this->Controls->Add(this->entradaemail);
			this->Controls->Add(this->entradanombre);
			this->Controls->Add(this->email);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->entradanombre->Text;
		String^ email = this->entradaemail->Text;
		String^ password = this->entradapassword->Text;

		bool usuarioExistente = false; // Variable para indicar si el usuario ya existe

		// Abrir el archivo para leer y verificar si el usuario ya existe
		ifstream inputFile("password.txt");
		if (inputFile.is_open()) {
			string line;
			while (getline(inputFile, line)) {
				// Buscar si el nombre o el email ya están presentes en el archivo
				if (line.find(msclr::interop::marshal_as<std::string>(email)) != string::npos) {
					usuarioExistente = true;
					break;
				}
			}
			inputFile.close();
		}
		else {
			// Manejar el caso de error al abrir el archivo para lectura
			MessageBox::Show("Error al abrir el archivo para leer los datos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Si el usuario ya existe, mostrar un mensaje y no agregar los datos al archivo
		if (usuarioExistente) {
			MessageBox::Show("El usuario ya existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		ofstream MyWriteFile("password.txt", ios::app); // Abrir en modo de añadir

		// Verificar si el archivo se abrió correctamente
		if (MyWriteFile.is_open()) {
			// Escribir los datos del usuario en el archivo
			MyWriteFile << "Nombre: " << msclr::interop::marshal_as<std::string>(name) << std::endl;
			MyWriteFile << "Email: " << msclr::interop::marshal_as<std::string>(email) << std::endl;
			MyWriteFile << "Password: " << msclr::interop::marshal_as<std::string>(password) << std::endl;

			// Cerrar el archivo
			MyWriteFile.close();



			Contenido^ Inicio = gcnew Contenido("Tu nombre es " + name + "\nTu email es " + email);
			Contenido^ Segundo = gcnew Contenido("Tu password es " + password);
			this->Visible = false;
			Inicio->ShowDialog();
			Segundo->ShowDialog();
			this->Visible = true;
			//en cuanto se oculta el otro.

			this->entradanombre->Clear();
			this->entradaemail->Clear();
			this->entradapassword->Clear();
		}
		else {
			// Manejar el caso de error al abrir el archivo
			MessageBox::Show("Error al abrir el archivo para escribir los datos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	};
	};
}
