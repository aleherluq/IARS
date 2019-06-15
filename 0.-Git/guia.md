# Guía de uso de Git

### Instalar Git

## Conectarse a este repositorio

### Iniciar el repositorio de git

En la carpeta en la que se desea tener el proyecto se debe realizar un 
git init. El git init se realiza desde el terminal si se encuentra en 
linux o en el bash de git si se encuentra en windows

```
git init
```

Una vez se ejecuta este comando se crea una carpeta .git en la carpeta 
de trabajo.

### Conectarse al repositorio

Una vez iniciado el git, se ejecuta la siguiente sentencia para 
conectarse a este repositorio. Al final de la url tiene que aparecer 
siempre .git

```
git remote add origin https://github.com/blalebla/IARS.git
```

Se suele utilizar origin como etiqueta de carpeta de origen. Se ha 
conectado con el repositorio pero no se ha descargado nada todavía.

A continuación se ejecuta lo siguiente:
```
git fetch origin
```

fetch hace una comprobación del repositorio online, enumero los objetos 
y las ramas presenters, en este caso solo se tiene la rama master.


### Descarga archivos del repositorio

Para descargar los archivos del repositorio se realiza un pull:

```
git pull origin master
```
se ha realizado un pull de la rama master del repositorio online

### Una vez realizado lo anterior ya se tiene acceso de forma local a 
los archivos

## Realizar cambios en git

Una vez se ha descargado el repositorio en el que se desea trabajar, ya 
se pueden realizar modificaciones, crear archivos nuevos, eliminar 
algunos exitentes, crear carpetas...

### Estructura de Git

Las versiones en git se distribuyen en 3 espacios:

* Working Directory: es el directorio donde se trabaja, todo lo que hay 
aquí se puede perder.
* Staging: es la zona de preparado
* Commit: la zona donde se guardan directamente

### Pasar de WD al área de Staging

Para pasar del working directory al área de Staging se hace uso del 
siguiente comando:

```
gitt add .
```
El punto lo que hace que agrega al area de staging todos los archivos 
que se han creado o modificado. También se pueden añadir los archivos 
uno a uno, o declarandolos de forma consecutiva tras el add.

```
git add <archivo1.md> <archivo2.bin> 
```
### Commit

Para realizar un commit se realiza la siguiente operación:

```
git commit -m "comentario del comit"
```

## Realizar subida de los cambios realizados

Para subir los cambios realizados se debe realizar un push de la 
siguiente manera:

```
git push origin master
```

Una vez ejecutado este comando suele pedir las credenciales de github
