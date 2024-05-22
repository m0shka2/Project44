#pragma once
#include<cmath>
#include<math.h>


using namespace System::Windows::Forms::DataVisualization::Charting;

namespace Project44 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(207, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Постоение графика функции на интервалк [xn;xk]";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(442, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите интервал постороения графика";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(411, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введите начальное значение XN=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(413, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(230, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Введите начальное значение XK=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(411, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Введите начальное значение XH=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(649, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"-5.2";
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(649, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"11.7";
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(649, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0.5";
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Нарисовать  график ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(643, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(176, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Функция";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(348, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(32, 198);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(686, 156);
			this->chart1->TabIndex = 13;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 404);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Выпонил студент группы 23-КФ Есепёнок М.К. Задание 4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, xn, xk, xh, y;
	Series^ plot1 = chart1->Series[0];
	//Очистка компонента Chart1
	plot1->Points->Clear();
	//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа
	Double

		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != ""));
	{
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		//Проверка правильности ввода данных
		if ((xn >= xk) || (xh > (xk - xn)))
		{
			MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
			while (x <= xk)
			{
				if (x <= 0) y = 2 * x + 2;
				else
					if (x > 0 && x < 5) y = sqrt(x + 3);
					else y = pow(cos(x + 2), 2);
				//Нанесение точки с координатами Х и У в компоненте Chart1
				plot1->Points->AddXY(x, y);

				x = x + xh;
			}
		}

	}
	   else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, xn, xk, xh, y;
	Series^ plot1 = chart1->Series[0];
	//Очистка компонента Chart1
	plot1->Points->Clear();
	//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа
	Double
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != ""));
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			//Проверка правильности ввода данных
			if ((xn >= xk) || (xh > (xk - xn)))
			{
				MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				while (x <= xk)
				{
					if (x <= 0) y = 2 * x + 2;
					else
						if (x > 0 && x < 5) y = sqrt(x + 3);
						else y = pow(cos(x + 2), 2);
					//Нанесение точки с координатами Х и У в компоненте Chart1
					plot1->Points->AddXY(x, y);

					x = x + xh;
				}
			}

		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем t=0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число)
	 k = 0;
	//двигаем индексатор, если наше число отрицательное if(str[t]=='-') t++;
	//число не может начинаться с запятой if(str[t]==',') a=false; while(t<l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' else if(str[t]<'0' ||str[t] > '9') a = false;

		t++;
}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибкаввода данных",MessageBoxButtons :: OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем t=0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное if(str[t]=='-') t++;
	//число не может начинаться с запятой if(str[t]==',') a=false; while(t<l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' else if(str[t]<'0' ||str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибкаввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю this->textBox1->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем t=0;
	//колличество запятых в строке (дабы избежать варианта0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное if(str[t]=='-') t++;
	//число не может начинаться с запятой if(str[t]==',') a=false; while(t<l)
	{
		if (str[t] == ',')
			//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' else if(str[t]<'0' ||str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибкаввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю this->textBox1->Focus();
	}
}
};
}
