import android.app.PendingIntent
import android.content.Intent
import android.nfc.NfcAdapter
import android.nfc.Tag
import android.os.Bundle
import android.util.Log
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import com.cegb03.lectortarjetas.R
import com.cegb03.lectortarjetas.SumaActivity

class LectorTarjetas : AppCompatActivity() {

    private var nfcAdapter: NfcAdapter? = null
    private var pendingIntent: PendingIntent? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        nfcAdapter = NfcAdapter.getDefaultAdapter(this)
        if (nfcAdapter == null) {
            // NFC no es compatible en este dispositivo
            // Maneja esto según tus necesidades
        }

        val intent = Intent(this, javaClass).addFlags(Intent.FLAG_ACTIVITY_SINGLE_TOP)
        pendingIntent = PendingIntent.getActivity(this, 0, intent, PendingIntent.FLAG_UPDATE_CURRENT)

        // Obtener referencias a los botones
        val btnLeerTarjeta: Button = findViewById(R.id.btnLeerTarjeta)
        val btnIrASuma: Button = findViewById(R.id.btnIrASuma)

        // Configurar OnClickListener para el botón de lectura de tarjeta
        btnLeerTarjeta.setOnClickListener {
            // Código para la lectura de tarjeta
            // Aquí debes implementar la lógica para leer tarjetas RFID/NFC
            // Puedes mantener o modificar esta parte según tus necesidades
            Log.d("NFC_TAG", "Iniciar la lectura de tarjeta")
        }

        // Configurar OnClickListener para el botón de ir a la actividad de suma
        btnIrASuma.setOnClickListener {
            // Código para ir a la actividad de suma
            val intentSuma = Intent(this, SumaActivity::class.java)
            startActivity(intentSuma)
        }
    }

    override fun onResume() {
        super.onResume()
        nfcAdapter?.enableForegroundDispatch(this, pendingIntent, null, null)
    }

    override fun onPause() {
        super.onPause()
        nfcAdapter?.disableForegroundDispatch(this)
    }

    override fun onNewIntent(intent: Intent?) {
        super.onNewIntent(intent)
        if (intent?.action == NfcAdapter.ACTION_TAG_DISCOVERED) {
            val tag: Tag? = intent.getParcelableExtra(NfcAdapter.EXTRA_TAG)

            // Procesar la información de la etiqueta/tag según tus necesidades
            val message = "¡Se leyó correctamente el RFID!"
            Log.d("NFC_TAG", message)

            // Puedes imprimir más detalles sobre la etiqueta/tag
            val tagDetails = "ID: ${tag?.id}\nTech List: ${tag?.techList?.contentToString()}"
            Log.d("NFC_TAG", tagDetails)
        }
    }
}
