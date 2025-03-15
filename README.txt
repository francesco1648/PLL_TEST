Test di Comunicazione e Controllo Motori
Questa cartella contiene una serie di test progettati per valutare il comportamento del sistema.

Obiettivi dei Test
1. Modalità RX_NO_PRINT
Collegamento
PC → Serial → Pico1 (TX_CAN) → CAN1 → CAN2 → Pico2 (RX_NO_PRINT) → Sistema Motori & Encoder
Scopo:
Stimare il tempo impiegato dal Pico per eseguire due aggiornamenti consecutivi dei motori.

Osservazioni:
L'intervallo di tempo (in millisecondi) tra un motor.update e il successivo può influenzare significativamente il controllo PID.
 In particolare, se questo intervallo supera gli 80 ms, il sistema fatica a rispondere correttamente all'RPM target impostato.

2. Modalità RX_PRINT
Collegamento
PC → Serial → Pico1 (TX_CAN) → CAN1 → CAN2 → Pico2 (RX_PRINT) → Sistema Motori & Encoder
Scopo:
Raccogliere dati da utilizzare in MATLAB per ottenere un modello più preciso del sistema.

Procedura:

I dati raccolti vengono salvati nel file picolowlevel_data.txt.
Lo sketch MATLAB picolowlevel_data_analysis.m legge questo file e li visualizza tramite grafici, evidenziando l'evoluzione del 
sistema in risposta a vari input.
La funzione iddata viene utilizzata per determinare, sulla base dei dati sperimentali raccolti, 
i parametri del numeratore e denominatore della funzione di trasferimento del motore in analisi.
Applicazioni:

I parametri ottenuti possono essere utilizzati in pseudo_calibrate per ottenere i valori teorici di ki, kp e kd.
Con pid_sim è possibile simulare la risposta del sistema dotato di controllo PID.
Il parametro dt è fondamentale poiché definisce l'intervallo di tempo tra due aggiornamenti consecutivi del sistema.
Questo layout è pensato per essere chiaro e funzionale, facilitando la comprensione del flusso dei test e delle finalità 
specifiche di ogni modalità. Puoi personalizzare ulteriormente il testo in base alle tue esigenze.
lLo script picolowlevel_data_analysis_cmp.m sere invece per comparare diverse risposte agli stimoli
del nostro sistema nel caso di tempi diversi tra una funzione uppdate e la successiva.
