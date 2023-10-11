import pyautogui,time
time.sleep(2)
f = open("./NEOCOLAB/neoque24.cpp","r")
data = f.readlines()

for i in data:
    i = i.strip()
    
    if i != "}":
        pyautogui.typewrite(i)
        pyautogui.press('ENTER')
    
    elif i == "}":
        pyautogui.keyDown('CTRL')
        pyautogui.press("backspace")
        pyautogui.keyUp('CTRL')
        pyautogui.press("backspace")

        pyautogui.press('down')
        pyautogui.press('ENTER')
    time.sleep(0.01)
f.close()

