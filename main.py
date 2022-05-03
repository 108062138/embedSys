from MotorModule import Motor
import KeyPressModule as kp

motor= Motor(2,3,4,17)

kp.init()

def main():
    f=0
    t=0
    #motor.move(0.1,0,2)
    #motor.stop(2)
    if kp.getKey('UP'):
        f=-0.2
    elif kp.getKey('DOWN'):
        f=0.2
    if kp.getKey('LEFT'):
        f*=0.5
        t=-0.1
    elif kp.getKey('RIGHT'):
        f*=0.5
        t=0.1
    
    
    motor.move(f,t,0.1)
 
if __name__ == '__main__':
    while True:
        main()