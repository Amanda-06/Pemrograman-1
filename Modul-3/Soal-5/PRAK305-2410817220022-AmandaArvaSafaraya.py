input_detik = int(input())
hari, jam, menit, detik = 0, 0, 0, 0 

while input_detik > 0:
    if input_detik >= 86400:
        hari += 1
        input_detik -= 86400
    elif input_detik >= 3600:
        jam += 1
        input_detik -= 3600
    elif input_detik >= 60:
        menit += 1
        input_detik -= 60
    else:
        detik += 1
        input_detik -= 1

if hari >= 1:
    print("%d hari %.2d:%.2d:%.2d" % (hari, jam, menit, detik))
else:
    print("%.2d:%.2d:%.2d" % (jam, menit, detik))