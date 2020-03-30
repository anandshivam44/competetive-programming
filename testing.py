import urllib.request
import cv2
import numpy as np
import time
cap = cv2.VideoCapture(0)
if (cap.isOpened() == False):
    print("Error opening video stream or file")
else:
    print('File Loaded')

while(cap.isOpened()):
    ret, frame = cap.read()
    if ret == True:
        cv2.imshow('Frame', frame)
    if cv2.waitKey(25) & 0xFF == ord('q'):
        break
    else:
        break
cap.release()
cv2.destroyAllWindows()
