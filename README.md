# Arduino-Rock-Paper-Scissors-Duel
Acest proiect transformă o placă Arduino într-un arbitru electronic care joacă singur celebrul joc **„Piatră, Foarfecă, Hârtie”**. Codul alege aleatoriu două simboluri (LED-uri) și decide câștigătorul pe baza regulilor clasice.

**Cum funcționează?**

Sistemul folosește trei LED-uri pentru a reprezenta simbolurile:
* **LED 1 (Pin 8):** Piatră 
* **LED 2 (Pin 9):** Foarfecă 
* **LED 3 (Pin 10):** Hârtie 

Logica de joc:
1.  **Generare Aleatorie:** Arduino alege două numere la întâmplare între 8 și 10.
2.  **Validare:** O buclă `while` se asigură că cele două numere sunt diferite (nu putem avea Piatră vs Piatră).
3.  **Comparație:** Codul verifică care LED **NU** a fost aprins (`LOW`) pentru a deduce cine sunt "luptătorii":
    * Dacă LED 1 (Piatră) este STINS -> Se bat **Foarfeca** vs **Hârtia**. Câștigă **Foarfeca** (LED 2 va clipi).
    * Dacă LED 2 (Foarfecă) este STINS -> Se bat **Piatra** vs **Hârtia**. Câștigă **Hârtia** (LED 3 va clipi).
    * Dacă LED 3 (Hârtie) este STINS -> Se bat **Piatra** vs **Foarfeca**. Câștigă **Piatra** (LED 1 va clipi).

Componente necesare
* 1x Arduino Uno
* 3x LED-uri 
* 3x Rezistențe 220Ω
* Fire de legătură & Breadboard
