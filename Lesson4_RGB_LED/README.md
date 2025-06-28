## ■ Lesson4_RGB_LED

### ▼ 概要  
RGB LED（光の三原色を表現できるLED）を使用して、パルス幅変調（PWM）で電力を制御します。  
つまり、各LEDの輝度を制御して、赤色 → 緑色 → 青色と色を循環させます。

### ▼ 必要な構成部品  
- (1) x Elegoo Uno R3  
- (1) x 830 Tie Points Breadboard  
- (4) x M-M wires（Male to Male jumper wires）  
- (1) x RGB LED  
- (3) x 220Ω resistors  

### ▼ 回路図  
- [回路図_Lesson4_RGB_LED](./Lesson4_RGB_LED_schematic.png)

### ▼ スケッチコード  
- [コード_Lesson4_RGB_LED](Lesson3_LED.ino)


### ▼ 注意事項  
- LEDにはアノードとカソードという極性があります。RGB LEDの場合、赤・緑・青の各ピンはアノードです。ピンの順番（位置）に注意してください。  
- PWM（パルス幅変調）を使用するため、Elegoo Uno R3 のジャンパーワイヤの取り付け位置にも注意が必要です。  
  ※ `~` チルダのマークが付いているピン番号の場所に取り付けてください。


## ■ 配線の様子  

下の写真は、ブレッドボードに回路を組んだ様子です。  
（※Lesson3の写真を流用している場合、適宜更新してください）

![配線の写真](./Lesson3_LED_picture/circuit_layout.jpg)

## ■ 実行結果  

LEDが光っている様子はこちらです。

- 220Ω  
  ![LED_220Ω](./Lesson3_LED_picture/result_220ohm2.jpg)

- 1kΩ  
  ![LED_1kΩ](./Lesson3_LED_picture/result_1kohm2.jpg)

- 10kΩ  
  ![LED_10kΩ](./Lesson3_LED_picture/result_10kohm2.jpg)

### ▼ 工作していて気づいたこと  
- RGB LEDの赤・緑・青の各ピンとジャンパーワイヤの色を合わせると分かりやすい。  
- 電流の流れは「電子がマイナス極からプラス極へ移動」することで発生するため、GND（マイナス）に接続されている線だけ、ブレッドボードのスリットの反対側に接続されている。  
- LEDのカソードは GND と同じ - の列に接続する。  
- LEDは「赤 → 緑 → 青」とブツ切りに切り替わるのではなく、**赤 → 黄 → 緑 → 水色 → 青 → 紫 → 赤**と、グラデーションで変化した（PWMとプログラムによる効果と思われる）。  
- Arduino IDE の 27 行目：`#define delayTime 10` を `#define delayTime 20` に変更したところ、色の変化が見やすくなった。


### ▼ 感想  
- 電流の流れに関する基本を忘れていたため、最初は「なぜGNDだけ離れているのか？」が分からなかったが、調べて理解が深まった。  
- 最初は単純な色の切り替えだと思っていたが、**実際に工作してグラデーションになる様子を見て感動した**。やはり「手を動かすこと」が理解の近道だと実感した。


### ▼ 参考にしたサイト  

- [ブレッドボードの使い方（みのラボ）](https://minoyalab.com/electronic-work/breadboard.html)  
- [光の三原色（キヤノン）](https://global.canon/ja/technology/kids/mystery/m_04_02.html#:~:text=%E7%84%A1%E6%95%B0%E3%81%AB%E3%81%82%E3%82%8B%E5%85%89%E3%81%AE,%E3%81%A8%E5%91%BC%E3%82%93%E3%81%A7%E3%81%84%E3%81%BE%E3%81%99%E3%80%82)

