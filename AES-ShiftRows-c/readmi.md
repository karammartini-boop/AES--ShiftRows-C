# AES ShiftRows ve InvShiftRows Uygulaması (C)

## Genel Açıklama
Bu proje, Bilgi Güvenliği dersi kapsamında hazırlanmıştır.
Çalışmanın amacı, AES (Advanced Encryption Standard)
algoritmasında kullanılan ShiftRows ve InvShiftRows
işlemlerinin C programlama dili ile uygulanmasıdır.

Bu projede AES algoritmasının tamamı değil,
yalnızca belirli bir modülü (ShiftRows) uygulanmıştır.

## ShiftRows İşlemi
ShiftRows işlemi, AES algoritmasında kullanılan
4x4 boyutundaki state matrisi üzerinde uygulanır.

Satırlar aşağıdaki şekilde sola kaydırılır:
- 0. satır: Kaydırma yok
- 1. satır: 1 bayt sola
- 2. satır: 2 bayt sola
- 3. satır: 3 bayt sola

Bu işlem, algoritmada difüzyon sağlamaya yardımcı olur.

## InvShiftRows İşlemi
InvShiftRows, ShiftRows işleminin tersidir.
Bu işlemde satırlar sağa kaydırılarak
orijinal state matrisi geri elde edilir.

## Programın Çalışması
Program çalıştırıldığında:
1. Başlangıç state matrisi ekrana yazdırılır
2. ShiftRows işlemi uygulanır ve sonuç yazdırılır
3. InvShiftRows işlemi uygulanır ve orijinal state geri elde edilir

## Kullanılan Dil
- C Programlama Dili

## Ders
Bilgi Güvenliği – Uygulama Projesi