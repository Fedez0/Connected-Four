# Forza Quattro in C++ con SFML

## Descrizione del Gioco
Forza Quattro è un classico gioco da tavolo in cui due giocatori si sfidano cercando di allineare quattro loro pedine orizzontalmente, verticalmente o diagonalmente su una griglia 6x7.

## Requisiti
- C++11 o versione successiva
- SFML 2.5.1 o versione successiva

## Come Compilare e Eseguire
1. Assicurati di avere SFML installato nel tuo sistema. Puoi scaricarlo da [SFML website](https://www.sfml-dev.org/download.php).
2. Clona questo repository:

    ```bash
    git clone https://github.com/tuonome/forza-quattro-cpp-sfml.git
    cd forza-quattro-cpp-sfml
    ```

3. Compila il gioco utilizzando un compilatore C++ che supporta almeno C++11. Esempio con g++:

    ```bash
    g++ -std=c++11 -o forza_quattro main.cpp -lsfml-graphics -lsfml-window -lsfml-system
    ```

4. Esegui il gioco:

    ```bash
    ./forza_quattro
    ```

## Comandi di Gioco
- Usa le frecce sinistra/destra per spostare la freccia di selezione orizzontalmente.
- Premi il tasto 'Giù' per far cadere la pedina nella colonna selezionata.

## Contributi
Siamo aperti a contributi! Se desideri migliorare o espandere il gioco, invia una pull request.

## Licenza
Questo gioco è rilasciato sotto la licenza [MIT](LICENSE).

