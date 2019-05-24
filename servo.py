import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(7,GPIO.OUT)
p=GPIO.PWM(7,50)
p.start(7.5)
try:
    while True:
        p.ChangeDutyCycle(7.5) #Neutral (90A)
        time.sleep(2)
        print ("servo rotates 90 A C")
        p.ChangeDutyCycle(12.5)#180A
        time.sleep(2)
        print ("servo rotates 180 A C")
        p.ChangeDutyCycle(2.5)#0A
        time.sleep(2)
        print ("servo rotates 0 A C")
except KeyboardInterrupt:
    p.stop()
