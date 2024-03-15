package com.cegb03.lectortarjetas

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

class SumaActivity : AppCompatActivity() {

    private lateinit var editTextNumero1: EditText
    private lateinit var editTextNumero2: EditText
    private lateinit var buttonSumar: Button
    private lateinit var textViewResultado: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_suma)

        editTextNumero1 = findViewById(R.id.editTextNumero1)
        editTextNumero2 = findViewById(R.id.editTextNumero2)
        buttonSumar = findViewById(R.id.buttonSumar)
        textViewResultado = findViewById(R.id.textViewResultado)

        buttonSumar.setOnClickListener {
            sumarNumeros()
        }
    }

    private fun sumarNumeros() {
        val num1 = editTextNumero1.text.toString().toDoubleOrNull() ?: 0.0
        val num2 = editTextNumero2.text.toString().toDoubleOrNull() ?: 0.0

        val resultado = num1 + num2
        textViewResultado.text = "Resultado: $resultado"
    }
}
