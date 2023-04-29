import pyautogui
import random
keyboard ="1234567890qwertyuiopasdfghjklzxcvbnm"
keyboard_list = list(keyboard) 

passwork = pyautogui.password("Nhập passwork: ")
guess_passwork =''
while (guess_passwork != passwork):
    guess_passwork = random.choices(keyboard_list, k = len(passwork))
    print(str(guess_passwork))

    if (guess_passwork == list(passwork)):
        print("tôi đã có mật khẩu: "+" ".join(guess_passwork))
        break 