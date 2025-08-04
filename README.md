SignalChat est une application qui permet la communication entre deux programmes via des signaux UNIX. L'objectif principal est de créer un système simple où un programme client envoie des messages à un programme serveur en utilisant des signaux, qui sont un moyen de communication inter-processus (IPC) dans les systèmes d'exploitation de type UNIX.
Voici quelques caractéristiques clés de SignalChat :


Communication par Signaux : Utilisation des signaux UNIX (comme SIGUSR1 et SIGUSR2) pour envoyer des messages entre le client et le serveur.


Encodage et Décodage : Implémentation d'un mécanisme pour encoder les messages en binaire et les décoder à la réception, permettant ainsi l'envoi de textes et de données simples.


Gestion des Processus : Le serveur doit être capable de gérer les signaux entrants et de les interpréter correctement pour reconstruire le message original envoyé par le client.


Simplicité et Efficacité : Le projet met l'accent sur la simplicité et l'efficacité, en utilisant des concepts de base de la programmation système pour accomplir la tâche de communication.


Robustesse : Le programme doit être capable de gérer les erreurs et les interruptions potentielles, assurant une communication fiable entre les deux processus.


Ce projet est une excellente introduction à la programmation système et à la gestion des signaux dans un environnement UNIX, offrant une compréhension pratique de la communication inter-processus.
