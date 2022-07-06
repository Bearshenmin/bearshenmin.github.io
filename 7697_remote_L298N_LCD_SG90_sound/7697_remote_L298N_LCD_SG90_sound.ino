/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Sun, 01 May 2022 05:46:02 GMT
 */
/*  部份程式由吉哥積木產生  */
/*  https://sites.google.com/jes.mlc.edu.tw/ljj/linkit7697  */
#include <IRremote.h>
#include <Ultrasonic.h>

IRrecv irrecv(11);
decode_results results;
String myCodeType;
String myIRcode;
String ir_type(int tip)
{
  if (tip == 1){
    return "RC5";
  } else if (tip == 2){
    return "RC6";
  } else if (tip == 3){
    return "NEC";
  } else if (tip == 4){
    return "SONY";
  } else if (tip == 5){
    return "PANASONIC";
  } else if (tip == 6){
    return "JVC";
  } else if (tip == 7){
    return "SAMSUNG";
  } else if (tip == 10){
    return "LG";
  } else if (tip == 14){
    return "SHARP";
  } else if (tip == 17){
    return "LEGO_PF";
  } else {
    return "UNKNOWN";
  }
}

Ultrasonic ultrasonic_17_16(17, 16);

Ultrasonic ultrasonic_13_14(13, 14);

void _E5_B7_A6_E8_BC_AA_E5_89_8D_E9_80_B2() {
  // 右輪
  analogWrite(5, 150);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void _E5_8F_B3_E8_BC_AA_E5_89_8D_E9_80_B2() {
  // 左輪
  analogWrite(0, 150);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
}

void _E5_B7_A6_E8_BC_AA_E5_BE_8C_E9_80_80() {
  // 右輪
  analogWrite(5, 150);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}

void _E5_8F_B3_E8_BC_AA_E5_BE_8C_E9_80_80() {
  // 左輪
  analogWrite(0, 150);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
}

void _E5_B7_A6_E8_BC_AA_E5_81_9C_E6_AD_A2() {
  // 右輪
  analogWrite(5, 0);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}

void _E5_8F_B3_E8_BC_AA_E5_81_9C_E6_AD_A2() {
  // 左輪
  analogWrite(0, 0);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
}

void setup()
{
  irrecv.enableIRIn();


  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}


void loop()
{
  if (irrecv.decode(&results)) {
    if (results.decode_type>0){
      myCodeType=ir_type(results.decode_type);
      myIRcode=String(results.value, HEX);
      if (myIRcode == "90") {
        _E5_B7_A6_E8_BC_AA_E5_89_8D_E9_80_B2();
        _E5_8F_B3_E8_BC_AA_E5_89_8D_E9_80_B2();
      }
      if (myIRcode == "890") {
        _E5_B7_A6_E8_BC_AA_E5_BE_8C_E9_80_80();
        _E5_8F_B3_E8_BC_AA_E5_BE_8C_E9_80_80();
      }
      if (myIRcode == "c90") {
        _E5_8F_B3_E8_BC_AA_E5_89_8D_E9_80_B2();
        _E5_B7_A6_E8_BC_AA_E5_BE_8C_E9_80_80();
      }
      if (myIRcode == "490") {
        _E5_B7_A6_E8_BC_AA_E5_89_8D_E9_80_B2();
        _E5_8F_B3_E8_BC_AA_E5_BE_8C_E9_80_80();
      }
      if (myIRcode == "70") {
        _E5_B7_A6_E8_BC_AA_E5_81_9C_E6_AD_A2();
        _E5_8F_B3_E8_BC_AA_E5_81_9C_E6_AD_A2();
      }
      if (20 > ultrasonic_17_16.convert(ultrasonic_17_16.timing(), Ultrasonic::CM)) {
        _E5_B7_A6_E8_BC_AA_E5_BE_8C_E9_80_80();
        _E5_8F_B3_E8_BC_AA_E5_BE_8C_E9_80_80();
        delay(1000);
        _E5_B7_A6_E8_BC_AA_E5_81_9C_E6_AD_A2();
        _E5_8F_B3_E8_BC_AA_E5_81_9C_E6_AD_A2();
      }
      if (20 > ultrasonic_13_14.convert(ultrasonic_13_14.timing(), Ultrasonic::CM)) {
        _E5_B7_A6_E8_BC_AA_E5_89_8D_E9_80_B2();
        _E5_8F_B3_E8_BC_AA_E5_89_8D_E9_80_B2();
        delay(1000);
        _E5_B7_A6_E8_BC_AA_E5_81_9C_E6_AD_A2();
        _E5_8F_B3_E8_BC_AA_E5_81_9C_E6_AD_A2();
      }
    }
    irrecv.resume();
  }
}