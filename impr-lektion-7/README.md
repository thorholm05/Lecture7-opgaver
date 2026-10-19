# Opgaver til IMPR Lektion 7

## Gruppeopgaver
Disse opgaver laves sammen i gruppen. Der er rigeligt med opgaver.
Arbejd grundigt med de opgaver, I kan nå, i den skemalagte tid.

### [Opgave A](src/opgave-a.c): Dynamisk allokering og qsort
Dette er Kurt Nørmark's [opgave 9.5](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-3.html).
Du kan skrive dit program i filen [`opgave-a.c`](src/opgave-a.c).

> Brug `malloc` til at allokere plads til 100 doubles. Check at allokeringen blev gennemført, og dealloker dit lager når du er færdig med at bruge det.
> 
> Opfat det allokerede lager som et array af 100 doubles, og indskriv 100 tilfældige tal i dit array. Udskriv dem på skærmen.
> 
> Brug nu `qsort` til at sortere dine tal. Udskriv dem igen, så du kan se at dit array rent faktisk er blevet sorteret.

**Hints**:
 - Se [HER](https://homes.cs.aau.dk/~normark/impr-c/types-slide-rand-numbers.html) for detaljer om håndteringen af tilfældige tal i C. 
 - I anbefales kraftig at se [videointroen](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-opgaver-lektion-9-2020&course-id=impr&lecture-number=7&course-year=2026&video-width=640&lang=dk&video-start-time=00:00&auto-play=0) til denne opgave inden I går i gang.

---
### [Opgave B](src/opgave-b.c): Multiple terningekast
Dette er Kurt Nørmark's [opgave 9.8](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-6.html).
Du kan skrive dit program i filen [`opgave-b.c`](src/opgave-b.c).

> På [siden om tilfældige tal](http://people.cs.aau.dk/~normark/impr-c/types-slide-rand-numbers.html), 
> har vi set en simpel funktion, der simulerer et kast med en terning.
> 
> I nogle sammenhænge er der behov for kast med $n$ terninger, hvor $n > 1$. 
> I det simple tilfælde kan vi naturligvis blot kaste én terning $n$ gange (i en løkke). 
> I andre tilfælde har vi behov for at have adgang til udfaldene af de $n$ terninger samtidigt, i et array, 
> for at kunne vurdere de $n$ kast på én gang.
> 
> Skriv derfor en funktion `roll_multiple_dies`, med en heltals parameter `n`, der kaster $n$ terninger, 
> og som afleverer et array af de $n$ terningekast.
> 
> Afleveringen af de $n$ kast kan ske på to måder: 
> gennem en parameter af pointer type eller via funktionens returværdi. 
> Allokering af arrayet kan også varieres: 
> enten allokerer `roll_multiple_dies` plads, eller også er der allerede allokeret plads, når `roll_multiple_dies` kaldes. 
> Hvis `roll_multiple_dies` allokerer plads med dynamisk lagerallokering, i hvert kald, 
> udestår der et efterfølgende arbejde med passende kald af `free`.
> 
> Skriv, ud fra denne analyse, din foretrukne variant af funktionen `roll_multiple_dies`.
> 
> Programmer endvidere, i `main`, 10 kald af `roll_multiple_dies`. 
> Giv indledningsvis brugeren mulighed for at indlæse størrelsen $n$ (antallet af terninger). 
> Udskriv, for hvert kald af `roll_multiple_dies`, udfaldet af de $n$ terningekast.


---
### [Opgave C](src/opgave-c.c):
Dette er opgave 5 på side 469 i kapitel 7 af Problem Solving and Program Design in C, eighth edition.
Du kan skrive dit program i filen [`opgave-c.c`](src/opgave-c.c).

Vær sikker på at nedbryde problemløsningen i et antal små funktioner: Som altid, top-down programmering ved trinvis forfinelse.

> A barcode scanner for Universal Product Codes (UPCs) verifies the 12-digit code scanned by comparing the code's last digit 
> (called a _check digit_) to its own computation of the check digit from the first 11 digits as follows:
> 1. Calculate the sum of the digits in the odd-numbered positions (the first, third, ..., eleventh digits)
>    and multiply this sum by 3.
> 2. Calculate the sum of the digits in the even-numbered positions (the second, fourth, ..., tenth digits) 
>    and add this to the previous result.
> 3. If the last digit of the result from step 2 is 0, then 0 is the check digit.
>    Otherwise, subtract the last digit from 10 to calculate the check digit.
> 4. If the check digit matches the final digit of the 12-digit UPC, the UPC is assumed correct.
>
> Write a program that prompts the user to enter the 12 digits of a barcode seperated by spaces. 
> The program should store the digits in an integer array, calculate the check digit, and compare it to the final barcode digit. 
> If the digits match, output the barcode with the message "validated". 
> If not, output the barcode with the message "error in barcode". 
> Also, output with labels the results from steps 1 and 2 of the check-digit calculations. 
> Note that the "first" digit of the barcode will be stored in element 0 of the array. 
> Try your program on the following barcodes, three of which are valid. 
> For the first barcode, the result from step 2 is $79 = (0+9+0+8+4+0)*3+(7+4+0+0+5)$.
> ```
> 0 7 9 4 0 0 8 0 4 5 0 1
> 0 2 4 0 0 0 1 6 2 8 6 0
> 0 1 1 1 1 0 8 5 6 8 0 7
> 0 5 1 0 0 0 1 3 8 1 0 1
> ```

---
### [Opgave D](src/opgave-d.c): Reduktion af et array
Dette er Kurt Nørmark's [opgave 9.3](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-1.html).
Du kan skrive dit program i filen [`opgave-d.c`](src/opgave-d.c).

> Vi har [tidligere i undervisningsmaterialet](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ptr-fn-slide-program-1.html)
> set hvordan vi kan reducere/kombinere en række tal med en 'binær funktion' (en funktion fra to doubles til én double).
> 
> I denne opgave skal I skrive en funktion
> ```c++
> double combine_right(double a[], int n, double (*combiner)(double, double))
> ```
> som kombinerer alle `n` elementer i `a`, på samme måde som [`combine`](https://homes.cs.aau.dk/~normark/impr-c/more-functions-ptr-fn-slide-program-1.html) gør det for fire faste tal. 
> Antag at $n \ge 2$. 
> 
> Skriv først en version, `combine_right`, der kombinerer elementerne fra højre mod venstre. 
> Skriv også gerne en version, `combine_left`, som kombinerer i den modsatte retning.
> 
> Afprøv dit program på tilsvarende måde, som vi gjorde da vi første gange mødte `combine` funktionen.

---
### [Opgave E](src/opgave-e.c): bsort
Den sidste opgave i dag, eller den første hvis I ønsker en anderledes udfordring.

Dette er Kurt Nørmark's [opgave 9.4](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-2.html).
Du kan skrive dit program i filen [`opgave-e.c`](src/opgave-e.c).

> Omskriv [bubblesort funktionen](https://homes.cs.aau.dk/~normark/impr-c/arrays-slide-bubble-sort.html) 
> så den ligner `qsort` så meget som muligt. 
> Du skal ikke lave om på algoritmen bag bubblesort - det handler om parametrene til funktionen. 
> Kald den nye variant af bubblesort for `bsort`.
> 
> Dette indebærer at `bsort` skal have fire parametre:
> 1. En pointer til det array der skal sorteres
> 2. Antallet af elementer i arrayet
> 3. Byte-størrelsen af hvert element
> 4. En sammenligningsfunktion (med `int` returtype og to generiske pointere som input parametre).
> 
> Start gerne med at generalisere [den eksisterende version af bubblesort](https://homes.cs.aau.dk/~normark/impr-c/arrays-slide-bubble-sort.html) med en sammenligningsfunktion.
> 
> Når dette er på plads bedes du overveje hvordan du vil håndtere ombytningen af elementer. 
> (Hint: Overvej at bruge `memcpy` fra `string.h` når du skal kopiere array elementer).
> 
> Du kan bruge følgende prototype af funktionen:
> ```c++
> void bsort(void *base, size_t n, size_t size, int(*compare)(const void *, const void *))
> ```
> hvor `size_t` er en passende unsigned integer type (som altid findes i C).


---
## Hjemmeopgaver
Dette er opgaver, som I kan arbejde med derhjemme.
Enten som forberedelse inden lektionen, eller som afrunding og repetition efter lektionen.

### [Opgave F](src/opgave-f.c)
Dette er Review Question 1 på side 464 i kapitel 7 af Problem Solving and Program Design in C, eighth edition.

> Identify an error in the following C statements:
> ```c++
> int p[12], i;
> for (i = 12; i > 0; --i)
>     p[i] = i * i;
> ```
> Will the error be detected? If so, when?

Du kan evt. afprøve din hypotese i filen [`opgave-f.c`](src/opgave-f.c).

---
### [Opgave G](src/opgave-g.c)
Dette er Review Question 5 på side 465 i kapitel 7 i Problem Solving and Program Design in C, eighth edition.
Du kan skrive dit program i filen [opgave-g.c](src/opgave-g.c).

> Write a C program segment to display the index of the smallest and the largest numbers in an array `x` of 20 integers.
> Assume array `x` already has values assigned to each element.

---
### [Opgave H](src/opgave-h.c): Polynomier
Dette er Kurt Nørmark's [opgave 9.2](https://homes.cs.aau.dk/~normark/impr-c/arrays-arrays-input-output-pars-slide-exercise-1.html).
Du kan skrive dit program i filen [opgave-h.c](src/opgave-h.c)

> I denne opgave vil vi repræsentere et polynomium $p$ af grad $n$ som et array af koefficienter $a_0, \dots, a_n$, hver af typen `double`,
> 
> $$ p(x) = a_0 + a_1 x + a_2 x^2 + \dots + a_n x^n$$
> 
> hvor $a_n$ er forskellig fra nul.
> 
> Skriv et C program som indlæser et polynomium af grad højst 8, og som kan beregne polynomiets værdi for forskellige $x$ værdier.
> 
> Opdel din problemløsning i delproblemer, `get_polynomium`, som indlæser et polynomium i et array, 
> og `eval_polynomium`, som beregner polynomiets værdi for en given $x$ værdi:
> ```c++
> void get_polynomium(double coeff[], int* degreep);
> double eval_polynomium(const double coeff[], int degree, double x);
> ```
