# Sistema de riego automatico
para este proyecto he trabajado junto a [Angel](https://github.com/ANGEY33) y [Arnau](https://github.com/aRnAu1012) lo que hemos hecho es un sitema de riego automatico 
que funciona con arduino.

## Materiales usados

- [Sensor de humedad de tierra](https://www.luisllamas.es/arduino-humedad-suelo-fc-28/#:~:text=Un%20higrómetro%20de%20suelo%20FC,la%20variación%20de%20su%20conductividad.)
- Cables 
- Tubos
- [Panel solar](https://es.wikipedia.org/wiki/Panel_solar)
- [Relé](https://es.wikipedia.org/wiki/Relé)
- [Motor CC](https://es.wikipedia.org/wiki/Motor_de_corriente_continua)
- [Turbina de agua](https://www.thingiverse.com/thing:3113040)
- [Regulador de voltaje](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjK4tW63PH3AhVqMewKHcI0Aw4QFnoECDAQAQ&url=https%3A%2F%2Fes.wikipedia.org%2Fwiki%2FRegulador_de_tensi%25C3%25B3n&usg=AOvVaw0ZXwxuQZXcGkpgiitAvUR3)

## Procedimiento 

### Codigo 

Lo primero que hicimos fue buscar un codigo que hiciera lo que necesitábamos, era que la bomba de agua cuando el sensor detectara poca humedad en la tierra.

Encontramos un primer codigo pero lastimosamente tenia errores asi que decidimos buscar un codigo que solo leyera el sensor y lo modificamos para que hiciera
funcionar la bomba de agua.

[Codigo](https://github.com/miguelamgel1107/Proyecto-Integrado/blob/main/codigo.ino)

### Circuito

Para el circuito lo que hicimos fue conectar a un PIN donde el arduino resibe señar del sensor, y el motor lo conectamos a otro PIN donde el arduino le manda la señar 
para que este funcione. 

Lego lo modificamos un poco ya que el audino no le daba el suficiente voltaje al motor para que funcionara bien.

Lo que hicimos fue conescar una bateria al motor mediante un relé que funciona como un interructor y esta conectado al arduino, lo que hace es que cuando el 
arduino le envia la señal para que el motor funcione el relé deja pasar la corriente de la bateria al motor asi el motor dependeria de la bateria y no del arduino.

Aqui una imagen del circuto:


![](https://github.com/miguelamgel1107/Proyecto-Integrado/blob/main/a/Escaneado_%2020220506-0935_page-0001.jpg)


### Montaje 

Ya que el sistema de riego va a estar afuera en el huerto decidimos que el arduino se va a limentar con energia solar usando un panel solar y el motor igual, 
y para esto necesitaremos uno reguladores de voltaje 
