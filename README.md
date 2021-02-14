# First-task
Testavimo, 1-oji užduotis - Įrėmintas pasisveikinimas

## Programos veikimas:

Paleidus programa, prašoma įvesti mažiausiai 3 simbolių ilgio vardą:


```shell
Enter your name:
Tomas
Enter number of lines between 0 and 20
10
*****************************
*                           *
*      Sveikas, Tomas!      *
*                           *
*****************************
```

Jei vartotojo įvestas vardas yra moteriškas, programa prisitaiko pakeisdama žodį:

```shell
Enter your name:
smilte
Enter number of lines between 0 and 20
5
************************
*                      *
*   Sveika, Smilte!    *
*                      *
************************
```

Jei vartotojas įveda neteisingą rėmelio plotį, programa prašo pakartotinai įvesti skaičių:

```shell
Enter your name:
Tomas
Enter number of lines between 0 and 20
24
Enter number of lines between 0 and 20
0
*******************
*                 *
* Sveikas, Tomas! *
*                 *
*******************
```

## Programos paleidimas

* Atsisiųskite programą iš [Releases](https://github.com/gameg0065/first-task/releases).
* Komandinėje eilutėje įveskite:

```shell
cd path_to_file
g++ -std=c++11 'main.cpp' -o 'main'
./main
```

arba (Mac ar Linux)

```shell
cd path_to_file
bash run.sh
```



### Changelog

* [v0.1](https://github.com/gameg0065/first-task/releases/tag/0.1) Vartotojo vardas su sveikinimu pateikiamas rėmelyje.
* [v0.2](https://github.com/gameg0065/first-task/releases/tag/0.2) Vartotojo vardo sveikinimas su linksniu.
* [v1.0](https://github.com/gameg0065/first-task/releases/tag/1.0) Vartotojas leidžiama įvesti rėmelio papildomą plotį.