# LoksimSound
Neues Soundsystem für Loksim3D

## Beschreibung/Zielsetzung
Bei diesem Projekt handelt es sich um eine Neuimplementierung des Soundsystems für Loksim3D. Ziel ist es, die Logik zu kapseln und auszulagern, sodass im eigentlichen Projekt nur noch eine simple API verwendet werden muss. Zusätzliche
sollen neue Features ermöglicht werden, um den Sound realistischer gestalten zu können. Dazu soll der neue Code modular gestaltet werden, um übersichtlicher und einfach erweiterbar zu sein.
Das neue Soundsystem soll komplett Open-Source sein.

## Installation
Um das Modul in Loksim einzubinden, falls dieses noch nicht eingerichtet ist, sind folgende Schritte notwendig:
1. Pullen als Submodul nach `./Loksim`
2. Das Modul in die include-Liste eintragen, das Projekt in VS in die Solutin einfügen und anschließend eine Referenz vom Hauptprojekt auf das LoksimSound-Modul erstellen
3. Als include-Directory den include-Ordner hinzufügen
4. Die `soloud_static.lib` im lib-Ordner des Moduls zum Linker hinzufügen

## Abhängigkeiten
In diesem Soundmodul wird [SoLoud](https://sol.gfxile.net/soloud/index.html) als Audio-Engine verwendet. Es handelt sich hierbei um eine vergleichsweise simple Open-Source-Engine. Der Code liegt auf [GitHub](https://github.com/jarikomppa/soloud).
SoLoud ist plattformunabhängig, das zu verwendende Audio-Backend ist konfigurierbar. Dieses ist abhängig vom OS. Eine für Windows kompilierte Version befindet sich unter `./LoksimSound/lib`.

### Kompilieren von SoLoud
Das Kompilieren von SoLoud ist nicht zwangsläufig notwendig, da sich bereits eine .lib-Datei in dem Projekt befindet (siehe oben). Wenn ein erneutes kompilieren z.B. für Linux gewünscht ist, sind folgende Schritte notwendig. Am einfachsten geht dies mit Hilfe von GENie:
1. SoLoud von github klonen: `git clone https://github.com/jarikomppa/soloud.git`
2. Die GENie-executable herunterladen: https://github.com/bkaradzic/GENie#download-stable
3. Die Excutable in das SoLoud-Projekt kopieren nach `./build`. In diesem Verzeichnis befindet sich auch eine `genie.lua`. Diese sollte abhängig vom OS das richtige Backend auswählen. Bei Bedarf kann sie angepasst werden.
4. Eine Konsole in diesem Verzeichnis (`./build`) öffnen und folgenden Befehl ausführen: `./genie vs2019` (vs2019 ggf. durch gewünschte IDE ersetzen)
5. In dem `./build`-Verzeichnis sollte nun ein Ordner`vs2019` angelegt worden sein. Die .sln darin öffnen. Anschließend kann in der Solution das Projekt SoloudStatic gebuildet werden. Bei den anderen Projekten handelt es sich lediglich um Beispiele!
6. Die entstandende `.lib`-Datei sollte nun unter `./lib` liegen und kann verwendet werden

Zusätzliche Informationen dazu findet man unter https://sol.gfxile.net/soloud/premake.html