# Python code to create child process  
import os
from datetime import datetime
  
n = os.fork() 
# n greater than 0  means parent process 
if n > 0: 
    print("Parent process id is : ", os.getpid()) 
# n equals to 0 means child process 
else: 
    print("Child process id is : ", os.getpid()) 

print(datetime.now())