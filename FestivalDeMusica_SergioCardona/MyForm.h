#pragma once
#include "Canciones.h"
#include "Pila.h"
#include "Cola.h"
#include "OrdenarPlayList.h"
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace std;

namespace FestivalDeMusicaSergioCardona {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;
	using namespace System::IO;

	Canciones objeto;
	OrdenarPlayList datos;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		List* pila1 = new List();
		List* pilaCopia1 = new List();
		List* pilaCopia2 = new List();
		List* pila2 = new List();
		List* pilaRep1 = new List();
		List* PilaRep2 = new List();
		List* pilaCancionesOrdenada = new List();
		List* PilaArtistasOrdenada = new List();
		List* PilaHistorial = new List();

		Cola* cola1 = new Cola();
		Cola* colaCopia1 = new Cola();
		Cola* cola2 = new Cola();
		Cola* colaCopia2 = new Cola();

		String^ artsita;
	private: System::Windows::Forms::OpenFileDialog^ opflPlayList;
	private: System::Windows::Forms::SaveFileDialog^ sfdiGuardar;
	private: System::Windows::Forms::PictureBox^ pictureBoxCancion;

	private: System::Windows::Forms::PictureBox^ pictureBoxBarra;
	private: System::Windows::Forms::PictureBox^ pictureBoxCarga;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBoxFondo;

	public:

	public:
		String^ cancion;
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
	private: System::Windows::Forms::Button^ btnCargarPlaylist;
	private: System::Windows::Forms::Button^ btnPrimeracancion;
	private: System::Windows::Forms::Button^ btnMostrarPlayList;
	private: System::Windows::Forms::Button^ btnSincronizar;
	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::Button^ btnSiguiente;
	private: System::Windows::Forms::Button^ btnAnterior;
	private: System::Windows::Forms::Button^ btnArtista;
	private: System::Windows::Forms::Button^ btnCancion;
	private: System::Windows::Forms::RichTextBox^ richCancionPila;
	private: System::Windows::Forms::RichTextBox^ richArtistaPila;
	private: System::Windows::Forms::RichTextBox^ richArtistaFila;
	private: System::Windows::Forms::RichTextBox^ richCancionFila;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblPrimeraCancion;
	private: System::Windows::Forms::Label^ lblCancionActual;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtCancion;
	private: System::Windows::Forms::TextBox^ txtArtista;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Label^ label5;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnCargarPlaylist = (gcnew System::Windows::Forms::Button());
			this->btnPrimeracancion = (gcnew System::Windows::Forms::Button());
			this->btnMostrarPlayList = (gcnew System::Windows::Forms::Button());
			this->btnSincronizar = (gcnew System::Windows::Forms::Button());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->btnAnterior = (gcnew System::Windows::Forms::Button());
			this->btnArtista = (gcnew System::Windows::Forms::Button());
			this->btnCancion = (gcnew System::Windows::Forms::Button());
			this->richCancionPila = (gcnew System::Windows::Forms::RichTextBox());
			this->richArtistaPila = (gcnew System::Windows::Forms::RichTextBox());
			this->richArtistaFila = (gcnew System::Windows::Forms::RichTextBox());
			this->richCancionFila = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPrimeraCancion = (gcnew System::Windows::Forms::Label());
			this->lblCancionActual = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCancion = (gcnew System::Windows::Forms::TextBox());
			this->txtArtista = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->opflPlayList = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdiGuardar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBoxCancion = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBarra = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCarga = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFondo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCancion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBarra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCarga))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFondo))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCargarPlaylist
			// 
			this->btnCargarPlaylist->Location = System::Drawing::Point(12, 25);
			this->btnCargarPlaylist->Name = L"btnCargarPlaylist";
			this->btnCargarPlaylist->Size = System::Drawing::Size(114, 33);
			this->btnCargarPlaylist->TabIndex = 0;
			this->btnCargarPlaylist->Text = L"Cargar PlayList";
			this->btnCargarPlaylist->UseVisualStyleBackColor = true;
			this->btnCargarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::btnCargarPlaylist_Click);
			// 
			// btnPrimeracancion
			// 
			this->btnPrimeracancion->Location = System::Drawing::Point(132, 20);
			this->btnPrimeracancion->Name = L"btnPrimeracancion";
			this->btnPrimeracancion->Size = System::Drawing::Size(135, 43);
			this->btnPrimeracancion->TabIndex = 1;
			this->btnPrimeracancion->Text = L"Mostrar primera cancion";
			this->btnPrimeracancion->UseVisualStyleBackColor = true;
			this->btnPrimeracancion->Click += gcnew System::EventHandler(this, &MyForm::btnPrimeracancion_Click);
			// 
			// btnMostrarPlayList
			// 
			this->btnMostrarPlayList->Location = System::Drawing::Point(273, 25);
			this->btnMostrarPlayList->Name = L"btnMostrarPlayList";
			this->btnMostrarPlayList->Size = System::Drawing::Size(130, 38);
			this->btnMostrarPlayList->TabIndex = 2;
			this->btnMostrarPlayList->Text = L"Mostrar PlayList";
			this->btnMostrarPlayList->UseVisualStyleBackColor = true;
			this->btnMostrarPlayList->Click += gcnew System::EventHandler(this, &MyForm::btnMostrarPlayList_Click);
			// 
			// btnSincronizar
			// 
			this->btnSincronizar->Location = System::Drawing::Point(981, 12);
			this->btnSincronizar->Name = L"btnSincronizar";
			this->btnSincronizar->Size = System::Drawing::Size(93, 38);
			this->btnSincronizar->TabIndex = 3;
			this->btnSincronizar->Text = L"Sincronizar";
			this->btnSincronizar->UseVisualStyleBackColor = true;
			this->btnSincronizar->Click += gcnew System::EventHandler(this, &MyForm::btnSincronizar_Click);
			// 
			// btnExportar
			// 
			this->btnExportar->Location = System::Drawing::Point(1109, 9);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(119, 41);
			this->btnExportar->TabIndex = 4;
			this->btnExportar->Text = L"Crear PlayList";
			this->btnExportar->UseVisualStyleBackColor = true;
			this->btnExportar->Click += gcnew System::EventHandler(this, &MyForm::btnExportar_Click);
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->Location = System::Drawing::Point(766, 462);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(82, 30);
			this->btnSiguiente->TabIndex = 5;
			this->btnSiguiente->Text = L">>";
			this->btnSiguiente->UseVisualStyleBackColor = true;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &MyForm::btnSiguiente_Click);
			// 
			// btnAnterior
			// 
			this->btnAnterior->Location = System::Drawing::Point(481, 462);
			this->btnAnterior->Name = L"btnAnterior";
			this->btnAnterior->Size = System::Drawing::Size(75, 23);
			this->btnAnterior->TabIndex = 6;
			this->btnAnterior->Text = L"<<";
			this->btnAnterior->UseVisualStyleBackColor = true;
			this->btnAnterior->Click += gcnew System::EventHandler(this, &MyForm::btnAnterior_Click);
			// 
			// btnArtista
			// 
			this->btnArtista->Location = System::Drawing::Point(51, 378);
			this->btnArtista->Name = L"btnArtista";
			this->btnArtista->Size = System::Drawing::Size(75, 23);
			this->btnArtista->TabIndex = 7;
			this->btnArtista->Text = L"Artista";
			this->btnArtista->UseVisualStyleBackColor = true;
			this->btnArtista->Click += gcnew System::EventHandler(this, &MyForm::btnArtista_Click);
			// 
			// btnCancion
			// 
			this->btnCancion->Location = System::Drawing::Point(236, 378);
			this->btnCancion->Name = L"btnCancion";
			this->btnCancion->Size = System::Drawing::Size(75, 23);
			this->btnCancion->TabIndex = 8;
			this->btnCancion->Text = L"Cancion";
			this->btnCancion->UseVisualStyleBackColor = true;
			this->btnCancion->Click += gcnew System::EventHandler(this, &MyForm::btnCancion_Click);
			// 
			// richCancionPila
			// 
			this->richCancionPila->Location = System::Drawing::Point(34, 113);
			this->richCancionPila->Name = L"richCancionPila";
			this->richCancionPila->Size = System::Drawing::Size(164, 246);
			this->richCancionPila->TabIndex = 9;
			this->richCancionPila->Text = L"";
			// 
			// richArtistaPila
			// 
			this->richArtistaPila->Location = System::Drawing::Point(195, 113);
			this->richArtistaPila->Name = L"richArtistaPila";
			this->richArtistaPila->Size = System::Drawing::Size(159, 246);
			this->richArtistaPila->TabIndex = 10;
			this->richArtistaPila->Text = L"";
			// 
			// richArtistaFila
			// 
			this->richArtistaFila->Location = System::Drawing::Point(1132, 113);
			this->richArtistaFila->Name = L"richArtistaFila";
			this->richArtistaFila->Size = System::Drawing::Size(159, 246);
			this->richArtistaFila->TabIndex = 11;
			this->richArtistaFila->Text = L"";
			// 
			// richCancionFila
			// 
			this->richCancionFila->Location = System::Drawing::Point(981, 113);
			this->richCancionFila->Name = L"richCancionFila";
			this->richCancionFila->Size = System::Drawing::Size(155, 246);
			this->richCancionFila->TabIndex = 12;
			this->richCancionFila->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(162, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Play List";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(1073, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Fila de reproducción";
			// 
			// lblPrimeraCancion
			// 
			this->lblPrimeraCancion->AutoSize = true;
			this->lblPrimeraCancion->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblPrimeraCancion->Location = System::Drawing::Point(129, 475);
			this->lblPrimeraCancion->Name = L"lblPrimeraCancion";
			this->lblPrimeraCancion->Size = System::Drawing::Size(0, 17);
			this->lblPrimeraCancion->TabIndex = 15;
			// 
			// lblCancionActual
			// 
			this->lblCancionActual->AutoSize = true;
			this->lblCancionActual->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblCancionActual->Location = System::Drawing::Point(588, 326);
			this->lblCancionActual->Name = L"lblCancionActual";
			this->lblCancionActual->Size = System::Drawing::Size(0, 17);
			this->lblCancionActual->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(978, 384);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Cancion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(978, 426);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Artista";
			// 
			// txtCancion
			// 
			this->txtCancion->Location = System::Drawing::Point(1065, 381);
			this->txtCancion->Name = L"txtCancion";
			this->txtCancion->Size = System::Drawing::Size(145, 22);
			this->txtCancion->TabIndex = 19;
			// 
			// txtArtista
			// 
			this->txtArtista->Location = System::Drawing::Point(1065, 426);
			this->txtArtista->Name = L"txtArtista";
			this->txtArtista->Size = System::Drawing::Size(145, 22);
			this->txtArtista->TabIndex = 20;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(981, 472);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 21;
			this->btnEliminar->Text = L"-";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(1173, 472);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 22;
			this->btnAgregar->Text = L"+";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(129, 439);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 17);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Primera cancion";
			// 
			// opflPlayList
			// 
			this->opflPlayList->FileName = L"opflPlayList";
			// 
			// pictureBoxCancion
			// 
			this->pictureBoxCancion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCancion.Image")));
			this->pictureBoxCancion->Location = System::Drawing::Point(457, 48);
			this->pictureBoxCancion->Name = L"pictureBoxCancion";
			this->pictureBoxCancion->Size = System::Drawing::Size(424, 239);
			this->pictureBoxCancion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCancion->TabIndex = 24;
			this->pictureBoxCancion->TabStop = false;
			// 
			// pictureBoxBarra
			// 
			this->pictureBoxBarra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxBarra.Image")));
			this->pictureBoxBarra->Location = System::Drawing::Point(444, 371);
			this->pictureBoxBarra->Name = L"pictureBoxBarra";
			this->pictureBoxBarra->Size = System::Drawing::Size(437, 72);
			this->pictureBoxBarra->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBoxBarra->TabIndex = 25;
			this->pictureBoxBarra->TabStop = false;
			// 
			// pictureBoxCarga
			// 
			this->pictureBoxCarga->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCarga.Image")));
			this->pictureBoxCarga->Location = System::Drawing::Point(457, 48);
			this->pictureBoxCarga->Name = L"pictureBoxCarga";
			this->pictureBoxCarga->Size = System::Drawing::Size(424, 239);
			this->pictureBoxCarga->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBoxCarga->TabIndex = 26;
			this->pictureBoxCarga->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(364, 445);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBoxFondo
			// 
			this->pictureBoxFondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxFondo.Image")));
			this->pictureBoxFondo->Location = System::Drawing::Point(444, 371);
			this->pictureBoxFondo->Name = L"pictureBoxFondo";
			this->pictureBoxFondo->Size = System::Drawing::Size(437, 72);
			this->pictureBoxFondo->TabIndex = 28;
			this->pictureBoxFondo->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1322, 524);
			this->Controls->Add(this->pictureBoxFondo);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBoxCarga);
			this->Controls->Add(this->pictureBoxBarra);
			this->Controls->Add(this->pictureBoxCancion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->txtArtista);
			this->Controls->Add(this->txtCancion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblCancionActual);
			this->Controls->Add(this->lblPrimeraCancion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richCancionFila);
			this->Controls->Add(this->richArtistaFila);
			this->Controls->Add(this->richArtistaPila);
			this->Controls->Add(this->richCancionPila);
			this->Controls->Add(this->btnCancion);
			this->Controls->Add(this->btnArtista);
			this->Controls->Add(this->btnAnterior);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->btnExportar);
			this->Controls->Add(this->btnSincronizar);
			this->Controls->Add(this->btnMostrarPlayList);
			this->Controls->Add(this->btnPrimeracancion);
			this->Controls->Add(this->btnCargarPlaylist);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCancion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBarra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCarga))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFondo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		void mostarPila() {
			richArtistaPila->Clear();
			richCancionPila->Clear();

			string mostrando1 = pila1->print();
			string mostrando2 = pila2->print();

			String^ string3 = gcnew String(mostrando1.c_str());
			String^ string4 = gcnew String(mostrando2.c_str());

			richCancionPila->Text = string3;
			richArtistaPila->Text = string4;

		}

		void mostrarCola() {
			richArtistaFila->Clear();
			richCancionFila->Clear();

			string mostrando1 = cola1->print();
			string mostrando2 = cola2->print();

			String^ string3 = gcnew String(mostrando1.c_str());
			String^ string4 = gcnew String(mostrando2.c_str());

			richCancionFila->Text = string3;
			richArtistaFila->Text = string4;

		}

		void habilitar() {
			btnAgregar->Enabled = true;
			btnCargarPlaylist->Enabled = true;
			btnEliminar->Enabled = true;
			btnExportar->Enabled = true;
			btnMostrarPlayList->Enabled = true;
			btnPrimeracancion->Enabled = true;
			btnSiguiente->Enabled = true;
			btnSincronizar->Enabled = true;
			
		}
		
		

		string Convertir(String^ convertir) {
			char cStr[50] = { 0 };
			if (convertir->Length < sizeof(cStr))
			{
				sprintf(cStr, "%s", convertir);

			}
			string stlString(cStr);
			return stlString;
		}
	private: System::Void btnMostrarPlayList_Click(System::Object^ sender, System::EventArgs^ e) {
		mostarPila();
	}
private: System::Void btnCargarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBoxCarga->Visible = true;
	pictureBoxCancion->Visible = false;
	pictureBoxBarra->Visible = false;
	String^ ruta;
	string ruta_std;
	opflPlayList->ShowDialog();
	ruta = opflPlayList->FileName;

	ruta_std = this->Convertir(ruta);
	objeto.cargar_archivo(ruta_std);

	int cantidad = 0;
	for (int j = 0; j < 500; j++) {
		if (objeto.cargar_archivo(ruta_std)[j] == "") {
			cantidad = j;
			j = 501;
		}
	}


	string Cancion[500];
	string Artista[500];
	size_t posicion;


	for (int i = 0; i < cantidad; i++) {

		string cadena = objeto.cargar_archivo(ruta_std)[i];

		int r = 0;
		for (int j = 0; j < 2; j++) {

			posicion = cadena.find("-");
			string dato = cadena.substr(0, posicion);

			//En este espacio se llenan todas las pilas y colas declaradas
			if (r == 0) {
				Cancion[i] = dato;
				pila1->add(Cancion[i]);
				pilaCopia1->add(Cancion[i]);
				pilaRep1->add(Cancion[i]);
				cola1->add(Cancion[i]);
				cadena.erase(0, posicion + 1);
			}
			if (r == 1) {
				Artista[i] = dato;
				pila2->add(Artista[i]);
				pilaCopia2->add(Artista[i]);
				PilaRep2->add(Artista[i]);
				cola2->add(Artista[i]);
				cadena.erase(0, posicion + 1);
			}
			r++;
		}
	}
	habilitar();
	datos.start(Cancion, Artista, cantidad);
	mostrarCola();
}
private: System::Void btnExportar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sfdiGuardar->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ texto = sfdiGuardar->FileName;
		StreamWriter^ txtg = File::CreateText(texto);
		txtg->Write(richCancionPila->Text + "-" + richArtistaPila->Text);
		txtg->Flush();
		txtg->Close();
	}
	else
	{
		String^ texto = sfdiGuardar->FileName;
		StreamWriter^ txtg = File::CreateText(texto);
		txtg->Write(richCancionPila->Text + "-" + richArtistaPila->Text);
		txtg->Flush();
		txtg->Close();
	}
}
private: System::Void btnPrimeracancion_Click(System::Object^ sender, System::EventArgs^ e) {
	string tope_cancion;
	string tope_artista;

	tope_cancion = pilaCopia1->top();
	tope_artista = pilaCopia2->top();

	String^ string1 = gcnew String(tope_cancion.c_str());
	String^ string2 = gcnew String(tope_artista.c_str());

	lblPrimeraCancion->Text = string1 + "-" + string2;
}
private: System::Void btnSiguiente_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPrimeraCancion->Visible = true;
	lblCancionActual->Visible = true;
	pictureBoxCancion->Visible = true;
	pictureBoxBarra->Visible = true;
	pictureBoxCarga->Visible = false;
	pictureBoxFondo->Visible = false;

	string cancion_reproduccion;
	string artista_reproduccion;
	String^ string3;
	String^ string4;

	if (!pila1->empty() && !pila2->empty())
	{


		cancion_reproduccion = pila1->pop();
		artista_reproduccion = pila2->pop();

		string3 = gcnew String(cancion_reproduccion.c_str());
		string4 = gcnew String(artista_reproduccion.c_str());
		lblCancionActual->Text = string3 + "-" + string4;
		this->Refresh();
		mostarPila();


	}


	if (pila1->empty() || pila2->empty())
	{
		while (!cola1->empty() || !cola2->empty())
		{
			pila1->add(cola1->desapilar());
			pila2->add(cola2->desapilar());

			mostarPila();
			mostrarCola();
			this->Refresh();
		}
	}
}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	artsita = Convert::ToString(txtArtista->Text);
	cancion = Convert::ToString(txtCancion->Text);

	if (artsita == "" || cancion == "")
	{
		MessageBox::Show("¡Debe ingresar la cancion y artista!", "¡CUIDADO!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else
	{
		string cancionstd;
		string artistastd;

		msclr::interop::marshal_context a;
		artistastd = a.marshal_as<std::string>(txtArtista->Text);
		cancionstd = a.marshal_as<std::string>(txtCancion->Text);

		MessageBox::Show("Se agrgo la cancion: " + cancion + "-" + artsita);
		cola1->add(cancionstd);
		cola2->add(artistastd);

		mostrarCola();
		txtArtista->Clear();
		txtCancion->Clear();
	}
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cola1->empty() || cola2->empty())
	{
		MessageBox::Show("No se puede eliminar mas canciones de la cola");
	}

	else
	{
		cola1->desapilar();
		cola2->desapilar();
	}
	mostrarCola();
}
private: System::Void btnCancion_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.OrdenPorNombre();


	richArtistaPila->Clear();
	richCancionPila->Clear();

	for (int j = 0; j < datos.InicializarC(); j++)
	{
		string ordenado1 = datos.InicializarA(j) + "\n";
		string ordenado2 = datos.InicializarN(j) + "\n";

		String^ string3 = gcnew String(ordenado1.c_str());
		String^ string4 = gcnew String(ordenado2.c_str());

		richArtistaPila->Text += string3;
		richCancionPila->Text += string4;

	}
}
private: System::Void btnArtista_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.OrdenPorArtista();

	richArtistaPila->Clear();
	richCancionPila->Clear();



	for (int j = 0; j < datos.InicializarC(); j++)
	{
		string ordenado1 = datos.InicializarA(j) + "\n";
		string ordenado2 = datos.InicializarN(j) + "\n";

		String^ string3 = gcnew String(ordenado1.c_str());
		String^ string4 = gcnew String(ordenado2.c_str());

		richArtistaPila->Text += string3;
		richCancionPila->Text += string4;

	}
}
private: System::Void btnSincronizar_Click(System::Object^ sender, System::EventArgs^ e) {
	while (!cola1->empty())
	{
		pila1->add(cola1->desapilar());
		pila2->add(cola2->desapilar());
	}
	mostrarCola();
	mostarPila();
}
private: System::Void btnAnterior_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
