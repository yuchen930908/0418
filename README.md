# 可調式電阻調整LED明暗程度

此專案展示如何使用可調式電阻（電位器）來調整LED的亮度。

## 硬體需求
- Arduino 開發板
- LED
- 電阻（330歐姆或適合的值）
- 可調式電阻（電位器）
- 連接線

## 電路連接
1. 將LED的正極（長腳）連接到Arduino的數位腳位（例如：9號腳位），並在中間串聯一個電阻。
2. LED的負極（短腳）連接到GND。
3. 將電位器的中間腳連接到Arduino的模擬輸入腳位（例如：A0）。
4. 電位器的兩側分別連接到5V和GND。

## 程式碼
請參考 `adjustable_resistor_led.ino` 檔案中的程式碼。

## 使用方式
1. 將程式碼上傳到Arduino開發板。
2. 旋轉電位器即可調整LED的亮度。
