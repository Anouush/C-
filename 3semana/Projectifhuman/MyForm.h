#pragma once

namespace Projectifhuman {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ resultado;
	private: System::Windows::Forms::Button^ enviar;

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
			this->resultado = (gcnew System::Windows::Forms::TextBox());
			this->enviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(491, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Introduce resultado de 5 + 9";
			// 
			// resultado
			// 
			this->resultado->Location = System::Drawing::Point(570, 319);
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(130, 31);
			this->resultado->TabIndex = 1;
			// 
			// enviar
			// 
			this->enviar->Location = System::Drawing::Point(570, 384);
			this->enviar->Name = L"enviar";
			this->enviar->Size = System::Drawing::Size(130, 43);
			this->enviar->TabIndex = 2;
			this->enviar->Text = L"Enviar";
			this->enviar->UseVisualStyleBackColor = true;
			this->enviar->Click += gcnew System::EventHandler(this, &MyForm::enviar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1276, 744);
			this->Controls->Add(this->enviar);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int i = 0;
	private: System::Void enviar_Click(System::Object^ sender, System::EventArgs^ e) {
		int result = Convert::ToInt32(resultado->Text);

		if (result == 14)
		{
			MessageBox::Show("El resultado es corecto!Bienvenido!");
			Application::Exit();
		}
		else
			if (i == 2)
			{
				MessageBox::Show("Has superado el numero de intentos");
				Application::Exit();

			}
			i++;
			MessageBox::Show("Has fallado " + i + "veces. Vuelve a intentar ");
			this->resultado->Clear();
	}
	};
}
