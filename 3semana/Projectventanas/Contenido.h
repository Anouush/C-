#pragma once

namespace Projectventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Contenido
	/// </summary>
	public ref class Contenido : public System::Windows::Forms::Form
	{
	public:
		String^ recibido;
		Contenido(String^ str)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			recibido = str;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Contenido()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(463, 390);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Contenido::label1_Click);
			// 
			// Contenido
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 740);
			this->Controls->Add(this->label1);
			this->Name = L"Contenido";
			this->Text = L"Contenido";
			this->Load += gcnew System::EventHandler(this, &Contenido::Contenido_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Contenido_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = recibido;
	}
	};
}
