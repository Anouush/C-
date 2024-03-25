#pragma once

namespace secondform {

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
	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::Label^ nombre;


	private: System::Windows::Forms::TextBox^ entradaUsuario;
	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::TextBox^ entradaEmail;
	private: System::Windows::Forms::Label^ salida;
	private: System::Windows::Forms::CheckBox^ cpp;
	private: System::Windows::Forms::CheckBox^ csharp;
	private: System::Windows::Forms::Label^ cursos;
	private: System::Windows::Forms::Label^ genero;
	private: System::Windows::Forms::RadioButton^ radiomasculino;
	private: System::Windows::Forms::RadioButton^ radiofeminino;
	private: System::Windows::Forms::RadioButton^ radiootro;
	private: System::Windows::Forms::Label^ notas;
	private: System::Windows::Forms::TextBox^ ccpnota;
	private: System::Windows::Forms::TextBox^ csharpnota;












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
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->entradaUsuario = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->entradaEmail = (gcnew System::Windows::Forms::TextBox());
			this->salida = (gcnew System::Windows::Forms::Label());
			this->cpp = (gcnew System::Windows::Forms::CheckBox());
			this->csharp = (gcnew System::Windows::Forms::CheckBox());
			this->cursos = (gcnew System::Windows::Forms::Label());
			this->genero = (gcnew System::Windows::Forms::Label());
			this->radiomasculino = (gcnew System::Windows::Forms::RadioButton());
			this->radiofeminino = (gcnew System::Windows::Forms::RadioButton());
			this->radiootro = (gcnew System::Windows::Forms::RadioButton());
			this->notas = (gcnew System::Windows::Forms::Label());
			this->ccpnota = (gcnew System::Windows::Forms::TextBox());
			this->csharpnota = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			this->btnEnter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->Location = System::Drawing::Point(260, 664);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(182, 68);
			this->btnEnter->TabIndex = 0;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &MyForm::btnEnter_Click);
			this->nombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nombre->AutoSize = true;
			this->nombre->BackColor = System::Drawing::SystemColors::Control;
			this->nombre->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->nombre->Location = System::Drawing::Point(33, 249);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(186, 21);
			this->nombre->TabIndex = 1;
			this->nombre->Text = L"Ecribe tu Nombre";
			this->nombre->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			this->entradaUsuario->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->entradaUsuario->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.125, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entradaUsuario->Location = System::Drawing::Point(236, 240);
			this->entradaUsuario->Name = L"entradaUsuario";
			this->entradaUsuario->Size = System::Drawing::Size(308, 36);
			this->entradaUsuario->TabIndex = 2;
			this->email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->email->AutoSize = true;
			this->email->Location = System::Drawing::Point(33, 315);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(186, 21);
			this->email->TabIndex = 3;
			this->email->Text = L"Escribe tu email";
			this->email->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			this->entradaEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->entradaEmail->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.125, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entradaEmail->Location = System::Drawing::Point(236, 306);
			this->entradaEmail->Name = L"entradaEmail";
			this->entradaEmail->Size = System::Drawing::Size(308, 36);
			this->entradaEmail->TabIndex = 4;
			this->salida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->salida->AutoSize = true;
			this->salida->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salida->Location = System::Drawing::Point(27, 44);
			this->salida->Name = L"salida";
			this->salida->Size = System::Drawing::Size(517, 60);
			this->salida->TabIndex = 5;
			this->salida->Text = L"Introduce tus datos";
			this->salida->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->cpp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cpp->AutoSize = true;
			this->cpp->Location = System::Drawing::Point(115, 507);
			this->cpp->Name = L"cpp";
			this->cpp->Size = System::Drawing::Size(75, 27);
			this->cpp->TabIndex = 6;
			this->cpp->Text = L"CPP";
			this->cpp->UseVisualStyleBackColor = true;
			this->csharp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->csharp->AutoSize = true;
			this->csharp->Location = System::Drawing::Point(115, 575);
			this->csharp->Name = L"csharp";
			this->csharp->Size = System::Drawing::Size(108, 27);
			this->csharp->TabIndex = 7;
			this->csharp->Text = L"CSharp";
			this->csharp->UseVisualStyleBackColor = true;
			this->cursos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cursos->AutoSize = true;
			this->cursos->Location = System::Drawing::Point(33, 438);
			this->cursos->Name = L"cursos";
			this->cursos->Size = System::Drawing::Size(164, 21);
			this->cursos->TabIndex = 8;
			this->cursos->Text = L"Elige el curso";
			this->genero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->genero->AutoSize = true;
			this->genero->Location = System::Drawing::Point(720, 438);
			this->genero->Name = L"genero";
			this->genero->Size = System::Drawing::Size(175, 21);
			this->genero->TabIndex = 9;
			this->genero->Text = L"Elige tu genero";
			this->radiomasculino->AutoSize = true;
			this->radiomasculino->Location = System::Drawing::Point(724, 495);
			this->radiomasculino->Name = L"radiomasculino";
			this->radiomasculino->Size = System::Drawing::Size(140, 26);
			this->radiomasculino->TabIndex = 10;
			this->radiomasculino->TabStop = true;
			this->radiomasculino->Text = L"Masculino";
			this->radiomasculino->UseVisualStyleBackColor = true;
			this->radiofeminino->AutoSize = true;
			this->radiofeminino->Location = System::Drawing::Point(724, 544);
			this->radiofeminino->Name = L"radiofeminino";
			this->radiofeminino->Size = System::Drawing::Size(129, 26);
			this->radiofeminino->TabIndex = 11;
			this->radiofeminino->TabStop = true;
			this->radiofeminino->Text = L"Feminino";
			this->radiofeminino->UseVisualStyleBackColor = true;
			this->radiootro->AutoSize = true;
			this->radiootro->Location = System::Drawing::Point(724, 596);
			this->radiootro->Name = L"radiootro";
			this->radiootro->Size = System::Drawing::Size(85, 26);
			this->radiootro->TabIndex = 12;
			this->radiootro->TabStop = true;
			this->radiootro->Text = L"Otro";
			this->radiootro->UseVisualStyleBackColor = true;
			this->notas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->notas->AutoSize = true;
			this->notas->Location = System::Drawing::Point(285, 438);
			this->notas->Name = L"notas";
			this->notas->Size = System::Drawing::Size(65, 21);
			this->notas->TabIndex = 13;
			this->notas->Text = L"Notas";
			this->notas->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			this->ccpnota->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ccpnota->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.125, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ccpnota->Location = System::Drawing::Point(260, 489);
			this->ccpnota->Name = L"ccpnota";
			this->ccpnota->Size = System::Drawing::Size(150, 36);
			this->ccpnota->TabIndex = 14;
			this->csharpnota->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->csharpnota->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.125, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->csharpnota->Location = System::Drawing::Point(260, 568);
			this->csharpnota->Name = L"csharpnota";
			this->csharpnota->Size = System::Drawing::Size(150, 36);
			this->csharpnota->TabIndex = 15;
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1240, 838);
			this->Controls->Add(this->csharpnota);
			this->Controls->Add(this->ccpnota);
			this->Controls->Add(this->notas);
			this->Controls->Add(this->radiootro);
			this->Controls->Add(this->radiofeminino);
			this->Controls->Add(this->radiomasculino);
			this->Controls->Add(this->genero);
			this->Controls->Add(this->cursos);
			this->Controls->Add(this->csharp);
			this->Controls->Add(this->cpp);
			this->Controls->Add(this->salida);
			this->Controls->Add(this->entradaEmail);
			this->Controls->Add(this->email);
			this->Controls->Add(this->entradaUsuario);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->btnEnter);
			this->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 7.875, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cursos;
		String^ genero;

		if (this->cpp->Checked)
		{
			cursos += this->cpp->Text + " " + this->ccpnota->Text + "\n";
		}
		if (this->csharp->Checked)
		{
			cursos += this->csharp->Text + " " + this->csharpnota->Text + "\n";
		}
		
		if (this->radiomasculino->Checked)
		{
			genero = this->radiomasculino->Text;
		}
		else if (this->radiofeminino->Checked)
		{
			genero = this->radiofeminino->Text;
		}
		else if (this->radiootro->Checked)
		{
			genero = this->radiootro->Text;
		}
		else
		{
			genero = "Nececitas elegir un genero";
		}

		int nota_cpp = Convert::ToInt32(this->ccpnota->Text);
		int nota_csharp = Convert::ToInt32(this->csharpnota->Text);
		int media = (nota_cpp + nota_csharp) / 2;


		this->salida->Text = "Bienvenida " + this->entradaUsuario->Text + "!\n" 
		+"Tu email es: " + this->entradaEmail->Text + "\n"
		+"Tu curso y la nota son: " + cursos + "La media de la nota es :" + media + "\n"
		+ "Tu genero es: " + genero;
		//MessageBox::Show("Bienvenida " + this->entradaUsuario->Text + "!!!!!!" 
		//+ "tu email es: " + this->entradaEmail->Text);
		
		//MessageBox::Show(this->btnEnter->Text);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
