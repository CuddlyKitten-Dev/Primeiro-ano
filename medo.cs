using System;
using System.Windows.Forms;

namespace MinhaCalculadora
{
    public partial class MainForm : Form
    {
        double valor1 = 0;
        double valor2 = 0;
        string operador = "";

        public MainForm()
        {
            InitializeComponent();
        }

        private void numeroButton_Click(object sender, EventArgs e)
        {
            Button btn = (Button)sender;
            if (resultadoTextBox.Text == "0" || operador != "")
                resultadoTextBox.Clear();
            resultadoTextBox.Text += btn.Text;
        }

        private void operadorButton_Click(object sender, EventArgs e)
        {
            Button btn = (Button)sender;
            operador = btn.Text;
            valor1 = Convert.ToDouble(resultadoTextBox.Text);
            resultadoTextBox.Text = "";
        }

        private void igualButton_Click(object sender, EventArgs e)
        {
            valor2 = Convert.ToDouble(resultadoTextBox.Text);
            double resultado = 0;
            switch (operador)
            {
                case "+":
                    resultado = valor1 + valor2;
                    break;
                case "-":
                    resultado = valor1 - valor2;
                    break;
                case "*":
                    resultado = valor1 * valor2;
                    break;
                case "/":
                    if (valor2 != 0)
                        resultado = valor1 / valor2;
                    else
                        MessageBox.Show("Não é possível dividir por zero!", "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    break;
            }
            resultadoTextBox.Text = resultado.ToString();
            operador = "";
        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            resultadoTextBox.Text = "0";
            valor1 = 0;
            valor2 = 0;
            operador = "";
        }
    }
}
