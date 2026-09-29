# TRABAJO-DE-FIN-DE-PARCIAL

Repositorio correspondiente al **Trabajo de Fin de Parcial**, desarrollado en lenguaje **C**.

## 📥 Descarga

### Clonar el repositorio con Git

```bash
git clone https://github.com/Calaco234/TRABAJO-DE-FIN-DE-PARCIAL.git
```

Entrar a la carpeta:

```bash
cd TRABAJO-DE-FIN-DE-PARCIAL
```

### Descargar ZIP

También puedes descargar el proyecto directamente desde GitHub:

**Code → Download ZIP**

Después, descomprime el archivo y abre la carpeta del proyecto.

---

## 🔧 Requisitos

Para compilar el proyecto necesitas:

* **GCC**
* **Make**
* **Git** (si utilizas `git clone`)
* **Visual Studio Code** (opcional)

---

## 🐧 Linux

### Instalar herramientas de compilación

En Ubuntu o distribuciones basadas en Debian:

```bash
sudo apt update
sudo apt install build-essential
```

Verificar la instalación:

```bash
gcc --version
make --version
```

### Compilar

Dentro de la carpeta del proyecto:

```bash
make
```

### Ejecutar

```bash
./trabajo
```

### Limpiar archivos compilados

```bash
make clean
```

---

## 🍎 macOS

Verifica que tengas instaladas las herramientas necesarias.

Para compilar:

```bash
make
```

Ejecutar:

```bash
./trabajo
```

Limpiar:

```bash
make clean
```

---

## 🪟 Windows

Se recomienda utilizar **MinGW-w64**, **MSYS2** o **Git Bash**.

Verifica que `gcc` y `make` estén disponibles:

```bash
gcc --version
```

```bash
make --version
```

### Compilar

```bash
make
```

### Ejecutar

```bash
trabajo.exe
```

### Limpiar

```bash
make clean
```

---

## 💻 Visual Studio Code

Puedes abrir el proyecto directamente desde la terminal:

```bash
code .
```

O desde Visual Studio Code:

**Archivo → Abrir carpeta → TRABAJO-DE-FIN-DE-PARCIAL**

Después abre el terminal integrado y ejecuta:

```bash
make
```

### Linux / macOS

```bash
./trabajo
```

### Windows

```bash
trabajo.exe
```

---

## ⚡ Ejecución rápida

### Linux / macOS

```bash
git clone https://github.com/Calaco234/TRABAJO-DE-FIN-DE-PARCIAL.git
cd TRABAJO-DE-FIN-DE-PARCIAL
make
./trabajo
```

### Windows

```bash
git clone https://github.com/Calaco234/TRABAJO-DE-FIN-DE-PARCIAL.git
cd TRABAJO-DE-FIN-DE-PARCIAL
make
trabajo.exe
```

---

## 📂 Estructura del proyecto

```text
TRABAJO-DE-FIN-DE-PARCIAL/
│
├── README.md
├── Makefile
├── *.c
└── trabajo
```

El archivo `trabajo` se genera automáticamente al ejecutar:

```bash
make
```

---

## 🧹 Limpiar el proyecto

Para eliminar los archivos generados durante la compilación:

```bash
make clean
```

Después puedes volver a compilar con:

```bash
make
```

---

## 👨‍💻 Autor

**Calaco234**

Repositorio:

https://github.com/Calaco234/TRABAJO-DE-FIN-DE-PARCIAL.git
