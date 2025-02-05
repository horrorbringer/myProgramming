import pyautogui
imagePath = "anime.jpg"
a = 0
#text = ""
while a<100 :
    pyautogui.typewrite(imagePath)
    pyautogui.press("enter")
    a +=1



