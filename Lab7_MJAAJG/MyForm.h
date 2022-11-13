#pragma once
#include <string>
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Poligonos.h"
#include "List.h"

namespace Lab7MJAAJG {

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
		int ID = 1;
		int* arreglo;
		int cantidad;
		List<Poligonos>* poligonos;
		List<int>* Arreglo;
		array<List<int>*, 1>^ Hash = gcnew array<List<int>*, 1>(100);
		MyForm(void)
		{
			InitializeComponent();
			poligonos = new List<Poligonos>();
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
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnInicializar;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxCuadrado;
	private: System::Windows::Forms::Button^ btnCuadrado;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtLadoC;
	private: System::Windows::Forms::TextBox^ txtColorC;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBoxRectangulo;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::TextBox^ txtAlturaR;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtBaseR;
	private: System::Windows::Forms::TextBox^ txtColorR;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBoxTriangulo;
	private: System::Windows::Forms::Button^ btnTriangulo;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtColorT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtBaseT;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtLadoT;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txtBinaria;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtSecuencial;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbCantidad;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAceptar;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnInicializar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBoxRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->txtAlturaR = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtBaseR = (gcnew System::Windows::Forms::TextBox());
			this->txtColorR = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCuadrado = (gcnew System::Windows::Forms::GroupBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtLadoC = (gcnew System::Windows::Forms::TextBox());
			this->txtColorC = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBoxTriangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtColorT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBaseT = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtLadoT = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtBinaria = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtSecuencial = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbCantidad = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBoxRectangulo->SuspendLayout();
			this->groupBoxCuadrado->SuspendLayout();
			this->groupBoxTriangulo->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Black;
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnInicializar);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->groupBoxRectangulo);
			this->groupBox2->Controls->Add(this->groupBoxTriangulo);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox2->Location = System::Drawing::Point(399, 28);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(696, 849);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Herencia";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::Window;
			this->label15->Location = System::Drawing::Point(473, 546);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 20);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Perímetro";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(399, 546);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 20);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Área";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::Window;
			this->label11->Location = System::Drawing::Point(311, 546);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 20);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Color";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(213, 546);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Figura";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(148, 546);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"ID";
			// 
			// btnInicializar
			// 
			this->btnInicializar->ForeColor = System::Drawing::SystemColors::MenuText;
			this->btnInicializar->Location = System::Drawing::Point(279, 764);
			this->btnInicializar->Name = L"btnInicializar";
			this->btnInicializar->Size = System::Drawing::Size(159, 31);
			this->btnInicializar->TabIndex = 8;
			this->btnInicializar->Text = L"Inicializar lista";
			this->btnInicializar->UseVisualStyleBackColor = true;
			this->btnInicializar->Click += gcnew System::EventHandler(this, &MyForm::btnInicializar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(137, 578);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(425, 164);
			this->listBox1->TabIndex = 7;
			// 
			// groupBoxRectangulo
			// 
			this->groupBoxRectangulo->Controls->Add(this->btnRectangulo);
			this->groupBoxRectangulo->Controls->Add(this->txtAlturaR);
			this->groupBoxRectangulo->Controls->Add(this->label7);
			this->groupBoxRectangulo->Controls->Add(this->txtBaseR);
			this->groupBoxRectangulo->Controls->Add(this->txtColorR);
			this->groupBoxRectangulo->Controls->Add(this->label12);
			this->groupBoxRectangulo->Controls->Add(this->label10);
			this->groupBoxRectangulo->Controls->Add(this->groupBoxCuadrado);
			this->groupBoxRectangulo->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBoxRectangulo->Location = System::Drawing::Point(46, 208);
			this->groupBoxRectangulo->Name = L"groupBoxRectangulo";
			this->groupBoxRectangulo->Size = System::Drawing::Size(607, 304);
			this->groupBoxRectangulo->TabIndex = 3;
			this->groupBoxRectangulo->TabStop = false;
			this->groupBoxRectangulo->Text = L"Rectángulo";
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnRectangulo->Location = System::Drawing::Point(496, 25);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(84, 31);
			this->btnRectangulo->TabIndex = 14;
			this->btnRectangulo->Text = L"Enviar";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &MyForm::btnRectangulo_Click);
			// 
			// txtAlturaR
			// 
			this->txtAlturaR->Location = System::Drawing::Point(212, 76);
			this->txtAlturaR->Name = L"txtAlturaR";
			this->txtAlturaR->Size = System::Drawing::Size(88, 26);
			this->txtAlturaR->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(391, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Color";
			// 
			// txtBaseR
			// 
			this->txtBaseR->Location = System::Drawing::Point(40, 77);
			this->txtBaseR->Name = L"txtBaseR";
			this->txtBaseR->Size = System::Drawing::Size(88, 26);
			this->txtBaseR->TabIndex = 13;
			// 
			// txtColorR
			// 
			this->txtColorR->Location = System::Drawing::Point(379, 77);
			this->txtColorR->Name = L"txtColorR";
			this->txtColorR->Size = System::Drawing::Size(88, 26);
			this->txtColorR->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::Window;
			this->label12->Location = System::Drawing::Point(53, 53);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 20);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Base";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::Window;
			this->label10->Location = System::Drawing::Point(230, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Altura";
			// 
			// groupBoxCuadrado
			// 
			this->groupBoxCuadrado->Controls->Add(this->btnCuadrado);
			this->groupBoxCuadrado->Controls->Add(this->label13);
			this->groupBoxCuadrado->Controls->Add(this->txtLadoC);
			this->groupBoxCuadrado->Controls->Add(this->txtColorC);
			this->groupBoxCuadrado->Controls->Add(this->label17);
			this->groupBoxCuadrado->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBoxCuadrado->Location = System::Drawing::Point(25, 138);
			this->groupBoxCuadrado->Name = L"groupBoxCuadrado";
			this->groupBoxCuadrado->Size = System::Drawing::Size(417, 147);
			this->groupBoxCuadrado->TabIndex = 4;
			this->groupBoxCuadrado->TabStop = false;
			this->groupBoxCuadrado->Text = L"Cuadrado";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnCuadrado->Location = System::Drawing::Point(303, 25);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(84, 31);
			this->btnCuadrado->TabIndex = 14;
			this->btnCuadrado->Text = L"Enviar";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MyForm::btnCuadrado_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(205, 41);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 20);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Color";
			// 
			// txtLadoC
			// 
			this->txtLadoC->Location = System::Drawing::Point(50, 71);
			this->txtLadoC->Name = L"txtLadoC";
			this->txtLadoC->Size = System::Drawing::Size(88, 26);
			this->txtLadoC->TabIndex = 13;
			// 
			// txtColorC
			// 
			this->txtColorC->Location = System::Drawing::Point(187, 71);
			this->txtColorC->Name = L"txtColorC";
			this->txtColorC->Size = System::Drawing::Size(88, 26);
			this->txtColorC->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::Window;
			this->label17->Location = System::Drawing::Point(28, 44);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(140, 20);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Medida de lados";
			// 
			// groupBoxTriangulo
			// 
			this->groupBoxTriangulo->Controls->Add(this->btnTriangulo);
			this->groupBoxTriangulo->Controls->Add(this->label8);
			this->groupBoxTriangulo->Controls->Add(this->txtColorT);
			this->groupBoxTriangulo->Controls->Add(this->label6);
			this->groupBoxTriangulo->Controls->Add(this->txtBaseT);
			this->groupBoxTriangulo->Controls->Add(this->label4);
			this->groupBoxTriangulo->Controls->Add(this->txtLadoT);
			this->groupBoxTriangulo->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBoxTriangulo->Location = System::Drawing::Point(46, 31);
			this->groupBoxTriangulo->Name = L"groupBoxTriangulo";
			this->groupBoxTriangulo->Size = System::Drawing::Size(607, 158);
			this->groupBoxTriangulo->TabIndex = 2;
			this->groupBoxTriangulo->TabStop = false;
			this->groupBoxTriangulo->Text = L"Triángulo isósceles";
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnTriangulo->Location = System::Drawing::Point(498, 44);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(84, 31);
			this->btnTriangulo->TabIndex = 6;
			this->btnTriangulo->Text = L"Enviar";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &MyForm::btnTriangulo_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::Window;
			this->label8->Location = System::Drawing::Point(391, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Color";
			// 
			// txtColorT
			// 
			this->txtColorT->Location = System::Drawing::Point(379, 89);
			this->txtColorT->Name = L"txtColorT";
			this->txtColorT->Size = System::Drawing::Size(88, 26);
			this->txtColorT->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(190, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Medida de base";
			// 
			// txtBaseT
			// 
			this->txtBaseT->Location = System::Drawing::Point(212, 89);
			this->txtBaseT->Name = L"txtBaseT";
			this->txtBaseT->Size = System::Drawing::Size(88, 26);
			this->txtBaseT->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(21, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Medida de lados";
			// 
			// txtLadoT
			// 
			this->txtLadoT->Location = System::Drawing::Point(40, 89);
			this->txtLadoT->Name = L"txtLadoT";
			this->txtLadoT->Size = System::Drawing::Size(88, 26);
			this->txtLadoT->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Black;
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->txtBinaria);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->txtSecuencial);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->lbCantidad);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnAceptar);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox1->Location = System::Drawing::Point(31, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(362, 849);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Hashing";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(228, 384);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(84, 26);
			this->textBox4->TabIndex = 22;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::SystemColors::Window;
			this->label19->Location = System::Drawing::Point(15, 387);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(168, 20);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Búsqueda por Hash";
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button4->Location = System::Drawing::Point(117, 433);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 38);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txtBinaria
			// 
			this->txtBinaria->Location = System::Drawing::Point(228, 267);
			this->txtBinaria->Name = L"txtBinaria";
			this->txtBinaria->Size = System::Drawing::Size(84, 26);
			this->txtBinaria->TabIndex = 19;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::Window;
			this->label18->Location = System::Drawing::Point(15, 270);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(149, 20);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Búsqueda binaria";
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button3->Location = System::Drawing::Point(117, 319);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 38);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtSecuencial
			// 
			this->txtSecuencial->Location = System::Drawing::Point(228, 161);
			this->txtSecuencial->Name = L"txtSecuencial";
			this->txtSecuencial->Size = System::Drawing::Size(84, 26);
			this->txtSecuencial->TabIndex = 16;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::Window;
			this->label16->Location = System::Drawing::Point(15, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(180, 20);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Búsqueda secuencial";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->Location = System::Drawing::Point(117, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 38);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lbCantidad
			// 
			this->lbCantidad->AutoSize = true;
			this->lbCantidad->Location = System::Drawing::Point(474, 765);
			this->lbCantidad->Name = L"lbCantidad";
			this->lbCantidad->Size = System::Drawing::Size(0, 20);
			this->lbCantidad->TabIndex = 13;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(29, 494);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(294, 324);
			this->listBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 26);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(15, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Números a generar";
			// 
			// btnAceptar
			// 
			this->btnAceptar->ForeColor = System::Drawing::SystemColors::WindowText;
			this->btnAceptar->Location = System::Drawing::Point(117, 77);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(93, 38);
			this->btnAceptar->TabIndex = 0;
			this->btnAceptar->Text = L"Ingresar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &MyForm::btnAceptar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1120, 903);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBoxRectangulo->ResumeLayout(false);
			this->groupBoxRectangulo->PerformLayout();
			this->groupBoxCuadrado->ResumeLayout(false);
			this->groupBoxCuadrado->PerformLayout();
			this->groupBoxTriangulo->ResumeLayout(false);
			this->groupBoxTriangulo->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void funcionRandom() {
			int cantidad = Convert::ToInt16(textBox1->Text);
			arreglo = new int[cantidad];
			for (int i = 0; i < cantidad; i++) {
				int numero = rand() % (900 - (1 + 1)) + 1;
				arreglo[i] = numero;
				insertarHashDinamico(&numero);
			}
		}
		void Burbuja(int n)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (arreglo[j] > arreglo[j + 1])
					{
						int aux = arreglo[j];
						arreglo[j] = arreglo[j + 1];
						arreglo[j + 1] = aux;

					}
				}
			}
		}
		void llenarListaConArreglo(int n) {
			int contador = 0;
			for (int i = 0; i < n; i++) {
				listBox2->Items->Add(contador + " --- " + arreglo[i]);
				contador++;
			}
		}
		int metodoSecuencial(int cantidad, int numero) {

			for (int i = 0; i < cantidad; i++)
			{
				if (this->arreglo[i] == numero)
				{
					return i;
				}
			}
			return -1;
		}
		int Binario(int m, int s, int numero)
		{
			int medio = 0;
			while (m <= s) {
				medio = (m + s) / 2;
				if (this->arreglo[medio] == numero) {
					return medio;
				}
				if (arreglo[medio] > numero) {
					s = medio;
					medio = (m + s) / 2;
				}
				if (this->arreglo[medio] < numero) {
					m = medio;
					medio = (m + s) / 2;
				}
			}
			return -1;
		}
		int insertarHashDinamico(int* value)
		{
			int Indice = *value % 100;
			if (Hash[Indice] == nullptr)
				Hash[Indice] = new List<int>;
			Hash[Indice]->add(value);
			return Indice;
		}

		int busquedaHashDinamico(int value)
		{
			int Indice = value % 100;
			if (Hash[Indice] == nullptr)
				return -1;
			int Pos = Hash[Indice]->getPosicion(&value);
			if (Pos != 1) {
				return Indice;
			}
			else {
				return -1;
			}
		}
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		void llenarListBox() {
			listBox1->Items->Clear();
			int contador = 0;
			while (poligonos->get(contador) != nullptr) {
				string Figura;
				string Color;
				Color = poligonos->get(contador)->getColor();
				String^ color = gcnew String(Color.c_str());
				Figura = poligonos->get(contador)->getFigura();
				String^ figura = gcnew String(Figura.c_str());
				listBox1->Items->Add(poligonos->get(contador)->id() + "        " + figura + "    " + color + "\t   " + (poligonos->get(contador)->Area()) + "\t    " + poligonos->get(contador)->Perimetro());
				contador++;
			}
		}

private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
	if (textBox1->Text != "") {
		cantidad = Convert::ToInt16(textBox1->Text);
		funcionRandom();
		Burbuja(cantidad);
		llenarListaConArreglo(cantidad);
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtSecuencial->Text != "") {
		int numero = Convert::ToInt16(txtSecuencial->Text);
		if (metodoSecuencial(cantidad, numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición: " + metodoSecuencial(cantidad, numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBinaria->Text != "") {
		int numero = Convert::ToInt16(txtBinaria->Text);
		if (Binario(0, cantidad, numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición: " + Binario(0, cantidad, numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text != "") {
		int numero = Convert::ToInt16(textBox4->Text);
		busquedaHashDinamico(numero);
		if (busquedaHashDinamico(numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición de la Hashtable: " + busquedaHashDinamico(numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtBaseT->Text->Trim() != "") && (txtLadoT->Text->Trim() != "") && (txtColorT->Text->Trim() != "")) {
		double base = Convert::ToDouble(txtBaseT->Text);
		double ladoT = Convert::ToDouble(txtLadoT->Text);
		String^ color = txtColorT->Text->Trim();
		string color2;
		MarshalString(color, color2);
		String^ figura = "Triángulo";
		string figura2;
		MarshalString(figura, figura2);
		Triangulo* triangulito = new Triangulo(figura2, color2, ID, ladoT, base);
		poligonos->add(triangulito);
		ID++;
		MessageBox::Show("Ingresado, cantidad de elementos: " + poligonos->getSize(), "Ingreso", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Complete todos los campos", "Ingreso incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtAlturaR->Text->Trim() != "") && (txtBaseR->Text->Trim() != "") && (txtColorR->Text->Trim() != "")) {
		double base = Convert::ToDouble(txtBaseR->Text);
		double ladoT = Convert::ToDouble(txtAlturaR->Text);
		String^ color = txtColorR->Text->Trim();
		string color2;
		MarshalString(color, color2);
		String^ figura = "Rectángulo";
		string figura2;
		MarshalString(figura, figura2);
		Rectangulo* rectangulito = new Rectangulo(figura2, color2, ID, base, ladoT);
		poligonos->add(rectangulito);
		ID++;
		MessageBox::Show("Ingresado, cantidad de elementos: " + poligonos->getSize(), "Ingreso", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Complete todos los campos", "Ingreso incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtLadoC->Text->Trim() != "") && (txtColorC->Text->Trim() != "")) {
		double base = Convert::ToDouble(txtLadoC->Text);
		String^ color = txtColorC->Text->Trim();
		string color2;
		MarshalString(color, color2);
		String^ figura = "Cuadrado";
		string figura2;
		MarshalString(figura, figura2);
		Cuadrado* cuadradito = new Cuadrado(figura2, color2, ID, base);
		poligonos->add(cuadradito);
		ID++;
		MessageBox::Show("Ingresado, cantidad de elementos: " + poligonos->getSize(), "Ingreso", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Complete todos los campos", "Ingreso incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnInicializar_Click(System::Object^ sender, System::EventArgs^ e) {
	llenarListBox();
}
};
}