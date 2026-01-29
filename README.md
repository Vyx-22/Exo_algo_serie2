# 💻 Algorithmes en langage C — Fonctions et modularisation

## 📌 Présentation du projet

Ce dépôt regroupe plusieurs algorithmes et fonctions en langage C, traduits depuis des pseudo-codes.  
Ils abordent des notions de **modularisation**, **validation de données**, **calculs mathématiques** et **manipulation de tableaux**.  

L’objectif principal est de **s’habituer à la syntaxe du C**, écrire un **code propre et lisible**, et développer la **rigueur algorithmique**.  

---

## 🛠️ Technologies utilisées

- Langage : C (ANSI C)  
- Bibliothèque standard : `stdio.h`  
- Concepts abordés :
  - Fonctions et retour de valeurs
  - Tableaux
  - Boucles (`for`, `while`)
  - Conditions (`if / else`)
  - Validation de données
  - Calcul de moyenne, PGCD, sommes, aires et périmètres
  - Conversion de valeurs (température)  

---

## 📁 Structure du dépôt

```
| Fichier / Dossier                | Description 
|----------------------------------|------------------------------------------------------------------------------
| `afficher_nombre_premier.c`      | Affiche tous les nombres premiers inférieurs à une limite donnée. 
| `calculs_cercle.c`               | Calcule l’aire et le périmètre d’un cercle à partir du rayon. 
| `convertion_temperature.c`       | Conversion entre Celsius et Fahrenheit selon le choix de l’utilisateur. 
| `gestion_notes_complete.c`       | Gestion complète des notes d’étudiants : saisie, validation, moyenne, note max/min et statistiques. 
| `gestion_tableau.c`              | Saisie d’un tableau de valeurs, calcul de la moyenne et comptage des valeurs supérieures à la moyenne. 
| `saisie_notes.c`                 | Saisie sécurisée de notes avec validation (0-20) et calcul de la moyenne. 
| `test_aire_rectangle.c`          | Calcule l’aire d’un rectangle à partir de sa longueur et sa largeur. 
| `test_divisibilite.c`            | Vérifie si un nombre est divisible par un autre. 
| `test_PGCCD.c`                   | Calcule le PGCD de deux nombres avec l’algorithme d’Euclide. 
| `test_somme_entier.c`            | Calcule la somme des n premiers entiers. 
```

## 📘 Description des algorithmes et fonctions

### 📄 test_aire_rectangle.c
- Fonction `CalculerAireRectangle(longueur, largeur)`  
- Calcul et retour de l’aire d’un rectangle  
- Algorithme de test pour saisir longueur et largeur et afficher l’aire

### 📄 test_divisibilite.c
- Fonction `EstDivisible(dividende, diviseur)`  
- Retourne vrai si le premier nombre est divisible par le deuxième  
- Gestion du cas où le diviseur est zéro  

### 📄 test_somme_entier.c
- Fonction `CalculerSommeEntiers(n)`  
- Calcul de la somme des `n` premiers entiers  
- Affichage du résultat  

### 📄 calculs_cercle.c
- Fonctions `CalculerAireCercle(rayon)` et `CalculerPerimétreCercle(rayon)`  
- Calcul et affichage de l’aire et du périmètre d’un cercle  

### 📄 gestion_tableau.c
- Fonctions :
  - `CalculerMoyenneTableau(tableau, taille)`  
  - `CompterSuperieursMoyenne(tableau, taille, moyenne)`  
- Lecture d’un tableau de 10 valeurs  
- Calcul de la moyenne et affichage des éléments supérieurs à la moyenne  

### 📄 convertion_temperature.c
- Fonctions `CelsiusVersFahrenheit(celsius)` et `FahrenheitVersCelsius(fahrenheit)`  
- Conversion bidirectionnelle et affichage selon choix utilisateur  

### 📄 saisie_notes.c
- Fonction `EstNoteValide(note)` pour valider qu’une note est entre 0 et 20  
- Fonction `SaisirNoteValide()` pour saisie sécurisée  
- Algorithme pour saisir 5 notes et calculer la moyenne  

### 📄 test_PGCCD.c
- Fonction `CalculerPGCD(nombre1, nombre2)` utilisant l’algorithme d’Euclide  
- Algorithme de test avec affichage du résultat  

### 📄 gestion_notes_complete.c
- Fonctions :
  - `SaisirNotesTableau(notes, nombreNotes)`  
  - `CalculerMoyenne(notes, nombreNotes)`  
  - `TrouverNoteMaximale(notes, nombreNotes)`  
  - `TrouverNoteMinimale(notes, nombreNotes)`  
  - `CompterNotesSuperieurSeuil(notes, nombreNotes, seuil)`  
- Algorithme principal pour gérer les notes d’un nombre d’étudiants donné (max 20)  
- Affichage de statistiques complètes : moyenne, max, min, nombre d’admis  

### 📄 afficher_nombre_premier.c
- Fonction `EstNombrePremier(nombre)`  
- Algorithme pour afficher tous les nombres premiers inférieurs à une limite et le total  

---

## ▶️ Compilation et exécution

Exemple avec GCC pour chaque fichier :

```bash
gcc test_aire_rectangle.c -o test_aire_rectangle
./test_aire_rectangle
```
---

## 🎯 Objectifs du projet

S’habituer à la syntaxe du C

Écrire un code structuré, lisible et réutilisable

Consolider les bases de l’algorithmique et des fonctions

Gérer la validation de données et les calculs simples de manière fiable

## 👤 Auteur

Vyx 
