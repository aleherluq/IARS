# Proyecto IARS

_Pasos fundamentales_

## DOCKER

### Paso 1. Instalar docker y descargar imaagen de riot

Se instala docker a través de la plataforma https://docs.docker.com/docker-for-windows/install/

La imagen de riot se descarga de dockerHub, la documentación se encuentra en el siguiente enlace:
https://hub.docker.com/r/riot/riotbuild

La sentencia para descargar la imagen de riot es la siguiente:
```
docker pull riot/riotbuild
```

Para comprobar que se ha descargado la imagen:
```
docker images
```

### Paso 2. Crear contenedor con carpeta conjunta.

una vez descargado la imagen se crea un contenedor con la anterior imagen. 
Se debe crear la carpeta que se desea compartir, se puede utilizar ```mkdir```

La sentencia utilizada es la siguiente:

```
docker run -ti --rm --name ritop1 -v $PWD/riotospruebas:/doc riot/riotbuild
```
Se necesitan los credenciales de docker que se pueden añadir a través de ```docker login```

```-ti``` ejecuta el terminal
```--rm``` elimina el contenedor cuando se sale de el 
```--name``` para ponerle nombre al volumen
```-v ``` para creal el volumen 
```$PWD/riotospruebas:/doc``` justo antes de los : se tiene el PATH de la carpeta que se quiere compartir en este caso, yo quiero compartir la carpeta riotospruebas a la derecha de :/ la carpeta dentro del directorio de riot (que puede ser existente o crearse) 

Una vez ejecutada esa última línea,, debería saltar el terminal de riotos

**Una vez dentro del terminal, hay que busar la carpeta que hemod definido para compartir, en este caso doc**
yo lo he conseguido haciendo dos veces cd .. , al hacer ls me aparecen muchas carpetas, entre ellas la mia

### Paso 3. Descargar el repositorio de RIOT de GUITHUB

Para descargar el repositorio se utiliza el siguiente comando:

```git clone https://github.com/RIOT-OS/RIOT.git```

### Paso 4. Ejecutar el ejemplo hello-world

una vez se ha descargado el repositorio de git de Riot, se ha creado una carpeta en la carpeta que queríamos compartir con dicho repositorio. 
dentro de la carpeta RIOT, queremos acceder a los ejemplos y en concreto el de hello-world. Los pasos a seguir son los siguientes:

#### 1. Acceder a la carpeta del ejemplo
```cd riot/examples/hello-world```
#### 2. Compilar el ejemplo para la placa deseada
```make=BOARD```

Ejecutando esta última sentencia se compila el programa para el micro creandose la carpeta bin
