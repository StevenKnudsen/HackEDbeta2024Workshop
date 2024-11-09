import machine
import rp2
import time

from machine import Pin

p0 = Pin(0, Pin.OUT)
p1 = Pin(1, Pin.OUT)
p2 = Pin(2, Pin.OUT)

while True:
    p0.off() # pull low to turn on LED
    p1.on()  # pull high to turn off LED
    p2.on()  # pull high to turn off LED
    time.sleep(0.15)
    p0.on()  # pull high to turn off LED
    p1.off() # pull low to turn on LED
    p2.on()  # pull high to turn off LED
    time.sleep(0.15)
    p0.on()  # pull high to turn off LED
    p1.on()  # pull high to turn off LED
    p2.off() # pull low to turn on LED
    time.sleep(0.15)
    

