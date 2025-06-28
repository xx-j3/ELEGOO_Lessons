## ■Lesson4_RGB_LED

### ▼概要  
RGB LED（光の三原色を表現できるLED）を使用して
パルス幅変調（PWM）で電力を制御する。
つまり、各LEDの輝度を制御して赤色→緑色→青色と色を循環させます。


### ▼必要な構成部品  
(1) x Elegoo Uno R3
(1) x 830 Tie Points Breadboard
(4) x M-M wires (Male to Male jumper wires)
(1) x RGB LED
(3) x 220 ohm resistors

### ▼回路図  
- [回路図_Lesson4_RGB_LED](Lesson3_LED_回路図.png)

### ▼スケッチコード
- [コード_Lesson4_RGB_LED](Lesson3_LED.ino)  

### ▼注意事項  
- LEDには、アノードとカソードと呼ばれる極性があります。
また、RGB LEDは赤色、緑色、青色の各ピンはアノードであり、ピンの順番（＝位置）に注意すること。

- パルス幅変調（PWM）を使用するため、Elegoo Uno R3のジャンパーワイヤ取り付け位置に注意すること。
	※~チルダのマークが付いている数字の場所に取り付けること。

## ■配線の様子
下の写真はブレッドボードに回路を組んだ様子です。

![配線の写真](./Lesson3_LED_picture/circuit_layout.jpg)

## ■実行結果
LEDが光っている様子はこちらです。

![LEDの点灯写真_10kΩ](./Lesson3_LED_picture/result_10kohm2.jpg)
![LEDの点灯写真_1kΩ](./Lesson3_LED_picture/result_1kohm2.jpg)
![LEDの点灯写真_220Ω](./Lesson3_LED_picture/result_220ohm2.jpg)

### ▼工作していて気付いたこと  
- RGB LEDの赤色、緑色、青色の各ピンとジャンパーワイヤーの色を合わせると分かりやすい。
- 電流の流れは、負の電荷を持つ電子がマイナス極からプラス極へと移動することで発生するので
GNDと接続している黒色の線-だけブレッドボードのスリット（溝）の反対側に接続されている。  
- LEDのカソードはGNDと同じ-の行に接続する  
-LEDを光らせると、赤色→緑色→青色とブツ切りになるのではなく、
赤色→黄色→緑色→水色→青色→紫色→赤色というようにグラデーションがあった。
（恐らく、PWMとプログラム内容が要因）
-Arduino IDE 27行目:#define delayTime 10となっていたが、
色の変化が速かったので、27行目:#define delayTime 20とした。

### ▼感想  
- 電流の流れは、負の電荷を持つ電子がマイナス極からプラス極ということを忘れていたので、
なぜGNDだけ離れて接続されているのか、最初は分からなかったが調べることで改めて理解できた。
-最初は色がグラデーションで変化するとは思っていなかったので、実際に取り組むことの大切さが改めて分かった。

  
### ▼参考にしたサイト  
https://minoyalab.com/electronic-work/breadboard.html
https://global.canon/ja/technology/kids/mystery/m_04_02.html#:~:text=%E7%84%A1%E6%95%B0%E3%81%AB%E3%81%82%E3%82%8B%E5%85%89%E3%81%AE,%E3%81%A8%E5%91%BC%E3%82%93%E3%81%A7%E3%81%84%E3%81%BE%E3%81%99%E3%80%82
