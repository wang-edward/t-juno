#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     pwm_dc;          //xy=316.33331298828125,490
AudioSynthWaveform       lfo;            //xy=390.33331298828125,300
AudioAmplifier           osc_lfo_amp;      //xy=412.33331298828125,1040
AudioMixer4              pwm_mixer;       //xy=412.33331298828125,1136
AudioSynthWaveformModulated sub7;           //xy=613.3333129882812,1758
AudioSynthWaveformModulated sub4;           //xy=615.3333129882812,1260
AudioSynthWaveformModulated saw7;           //xy=614.3333129882812,1719
AudioSynthWaveformModulated saw4;           //xy=616.3333129882812,1221
AudioSynthWaveformModulated sub6;           //xy=615.3333129882812,1592
AudioSynthWaveformModulated saw6;           //xy=616.3333129882812,1553
AudioSynthWaveformModulated sub5;           //xy=619.3333129882812,1428
AudioSynthWaveformModulated sub3;           //xy=621.3333129882812,1095
AudioSynthWaveformModulated saw5;           //xy=620.3333129882812,1389
AudioSynthNoiseWhite     noise7;         //xy=619.3333129882812,1797
AudioSynthNoiseWhite     noise4;         //xy=621.3333129882812,1299
AudioSynthWaveformModulated saw3;           //xy=622.3333129882812,1056
AudioSynthNoiseWhite     noise6;         //xy=621.3333129882812,1631
AudioSynthWaveformModulated pulse_lfo7;      //xy=623.3333129882812,1678
AudioSynthWaveformModulated sub2;           //xy=626.3333129882812,929
AudioSynthWaveformModulated pulse_lfo4;      //xy=625.3333129882812,1180
AudioSynthWaveformModulated saw2;           //xy=627.3333129882812,890
AudioSynthNoiseWhite     noise5;         //xy=625.3333129882812,1467
AudioSynthWaveformModulated pulse_lfo6;      //xy=625.3333129882812,1512
AudioSynthWaveformModulated sub0;           //xy=629.3333129882812,585
AudioSynthNoiseWhite     noise3;         //xy=627.3333129882812,1134
AudioSynthWaveformModulated saw0;           //xy=630.3333129882812,546
AudioSynthWaveformModulated sub1;           //xy=630.3333129882812,758
AudioSynthWaveformModulated saw1;           //xy=631.3333129882812,719
AudioSynthWaveformModulated pulse_lfo5;      //xy=629.3333129882812,1348
AudioSynthWaveformModulated pulse_lfo3;      //xy=631.3333129882812,1015
AudioSynthNoiseWhite     noise2;         //xy=632.3333129882812,968
AudioSynthNoiseWhite     noise0;         //xy=636.3333129882812,625
AudioSynthNoiseWhite     noise1;         //xy=636.3333129882812,797
AudioSynthWaveformModulated pulse_lfo2;      //xy=636.3333129882812,849
AudioSynthWaveformModulated pulse_lfo0;      //xy=639.3333129882812,505
AudioEffectEnvelope      lfo_envelope0;        //xy=641.333251953125,353
AudioSynthWaveformModulated pulse_lfo1;      //xy=640.3333129882812,678
AudioSynthWaveformDc     lpf_envelope_dc;       //xy=735.3333129882812,295
AudioSynthWaveformDc     lpf_keyboard_dc;  //xy=774.3333129882812,448
AudioSynthWaveformDc     lpf_mod_wheel_dc;  //xy=783.3333129882812,497
AudioMixer4              osc_mixer7;      //xy=824.3333129882812,1748
AudioMixer4              osc_mixer4;      //xy=826.3333129882812,1250
AudioMixer4              osc_mixer6;      //xy=826.3333129882812,1582
AudioMixer4              osc_mixer5;      //xy=830.3333129882812,1418
AudioMixer4              osc_mixer3;      //xy=832.3333129882812,1085
AudioMixer4              osc_mixer2;      //xy=837.3333129882812,919
AudioMixer4              osc_mixer0;      //xy=841.3333129882812,576
AudioMixer4              osc_mixer1;      //xy=841.3333129882812,748
AudioEffectEnvelope      lpf_envelope1;        //xy=918.3333129882812,657
AudioEffectEnvelope      lpf_envelope2;        //xy=921.3333129882812,818
AudioEffectEnvelope      lpf_envelope5;        //xy=920.3333129882812,1325
AudioEffectEnvelope      lfo_envelope2;        //xy=923.3333129882812,853
AudioEffectEnvelope      lpf_envelope3;        //xy=923.3333129882812,998
AudioEffectEnvelope      lpf_envelope4;        //xy=924.3333129882812,1155
AudioEffectEnvelope      lfo_envelope4;        //xy=925.3333129882812,1189
AudioEffectEnvelope      lfo_envelope3;        //xy=927.3333129882812,1033
AudioEffectEnvelope      lfo_envelope5;        //xy=926.3333129882812,1363
AudioEffectEnvelope      lpf_envelope6;        //xy=927.3333129882812,1493
AudioEffectEnvelope      lfo_envelope1;        //xy=931.3333129882812,697
AudioEffectEnvelope      lfo_envelope7;        //xy=929.3333129882812,1698
AudioEffectEnvelope      lfo_envelope6;        //xy=930.3333129882812,1532
AudioEffectEnvelope      lpf_envelope7;        //xy=930.3333129882812,1662
AudioEffectEnvelope      lpf_envelope0;        //xy=964.3333129882812,364
AudioFilterStateVariable hpf7;           //xy=967.3333129882812,1759
AudioFilterStateVariable hpf4;           //xy=969.3333129882812,1261
AudioFilterStateVariable hpf6;           //xy=969.3333129882812,1593
AudioFilterStateVariable hpf5;           //xy=973.3333129882812,1429
AudioFilterStateVariable hpf3;           //xy=975.3333129882812,1096
AudioFilterStateVariable hpf2;           //xy=980.3333129882812,930
AudioFilterStateVariable hpf0;           //xy=984.3333129882812,587
AudioFilterStateVariable hpf1;           //xy=984.3333129882812,759
AudioMixer4              lpf_mod_mixer0;   //xy=1075.3333129882812,516
AudioMixer4              lpf_mod_mixer1;   //xy=1102.3333129882812,698
AudioFilterLadder lpf7;           //xy=1100.3333129882812,1779
AudioFilterLadder lpf4;           //xy=1102.3333129882812,1281
AudioMixer4              lpf_mod_mixer2;   //xy=1105.3333129882812,859
AudioFilterLadder lpf6;           //xy=1102.3333129882812,1613
AudioMixer4              lpf_mod_mixer5;   //xy=1104.3333129882812,1366
AudioMixer4              lpf_mod_mixer3;   //xy=1107.3333129882812,1039
AudioFilterLadder lpf5;           //xy=1106.3333129882812,1449
AudioFilterLadder lpf3;           //xy=1108.3333129882812,1116
AudioMixer4              lpf_mod_mixer4;   //xy=1108.3333129882812,1196
AudioFilterLadder lpf2;           //xy=1113.3333129882812,950
AudioMixer4              lpf_mod_mixer6;   //xy=1111.3333129882812,1534
AudioFilterLadder lpf0;           //xy=1117.3333129882812,607
AudioFilterLadder lpf1;           //xy=1117.3333129882812,779
AudioMixer4              lpf_mod_mixer7;   //xy=1114.3333129882812,1703
AudioEffectEnvelope      envelope7;           //xy=1238.3333129882812,1779
AudioEffectEnvelope      envelope4;           //xy=1240.3333129882812,1281
AudioEffectEnvelope      envelope6;           //xy=1240.3333129882812,1613
AudioEffectEnvelope      envelope5;           //xy=1244.3333129882812,1449
AudioAmplifier           lpf_polarity;    //xy=1248.3333129882812,454
AudioEffectEnvelope      envelope3;           //xy=1246.3333129882812,1116
AudioEffectEnvelope      envelope2;           //xy=1251.3333129882812,950
AudioEffectEnvelope      envelope0;           //xy=1255.3333129882812,607
AudioEffectEnvelope      envelope1;           //xy=1255.3333129882812,779
AudioMixer4              env_mixer0;      //xy=1496.3333129882812,881
AudioMixer4              env_mixer1;      //xy=1519.3333129882812,1559
AudioMixer4              mixer_left;         //xy=1749.3333129882812,1165
AudioMixer4              mixer_right;         //xy=1756.3333129882812,1401
AudioEffectFlange        flanger_left;       //xy=1929.3333129882812,1253
AudioEffectFlange        flanger_right;       //xy=1934.3333129882812,1378
AudioAnalyzePeak         peak;           //xy=1953.3333129882812,729
AudioOutputI2S           i2s1;           //xy=2125.3333129882812,1305
AudioConnection          patchCord1(pwm_dc, 0, pwm_mixer, 1);
AudioConnection          patchCord2(lfo, lfo_envelope0);
AudioConnection          patchCord3(lfo, lfo_envelope2);
AudioConnection          patchCord4(lfo, lfo_envelope1);
AudioConnection          patchCord5(lfo, lfo_envelope3);
AudioConnection          patchCord6(lfo, lfo_envelope4);
AudioConnection          patchCord7(lfo, lfo_envelope5);
AudioConnection          patchCord8(lfo, lfo_envelope6);
AudioConnection          patchCord9(lfo, lfo_envelope7);
AudioConnection          patchCord10(osc_lfo_amp, 0, pulse_lfo0, 0);
AudioConnection          patchCord11(osc_lfo_amp, 0, sub0, 0);
AudioConnection          patchCord12(osc_lfo_amp, 0, pulse_lfo1, 0);
AudioConnection          patchCord13(osc_lfo_amp, 0, sub1, 0);
AudioConnection          patchCord14(osc_lfo_amp, 0, pulse_lfo2, 0);
AudioConnection          patchCord15(osc_lfo_amp, 0, sub2, 0);
AudioConnection          patchCord16(osc_lfo_amp, 0, pulse_lfo3, 0);
AudioConnection          patchCord17(osc_lfo_amp, 0, sub3, 0);
AudioConnection          patchCord18(osc_lfo_amp, 0, pulse_lfo4, 0);
AudioConnection          patchCord19(osc_lfo_amp, 0, sub4, 0);
AudioConnection          patchCord20(osc_lfo_amp, 0, pulse_lfo5, 0);
AudioConnection          patchCord21(osc_lfo_amp, 0, sub5, 0);
AudioConnection          patchCord22(osc_lfo_amp, 0, pulse_lfo6, 0);
AudioConnection          patchCord23(osc_lfo_amp, 0, sub6, 0);
AudioConnection          patchCord24(osc_lfo_amp, 0, pulse_lfo7, 0);
AudioConnection          patchCord25(osc_lfo_amp, 0, sub7, 0);
AudioConnection          patchCord26(osc_lfo_amp, 0, saw0, 0);
AudioConnection          patchCord27(osc_lfo_amp, 0, saw1, 0);
AudioConnection          patchCord28(osc_lfo_amp, 0, saw2, 0);
AudioConnection          patchCord29(osc_lfo_amp, 0, saw3, 0);
AudioConnection          patchCord30(osc_lfo_amp, 0, saw4, 0);
AudioConnection          patchCord31(osc_lfo_amp, 0, saw5, 0);
AudioConnection          patchCord32(osc_lfo_amp, 0, saw6, 0);
AudioConnection          patchCord33(osc_lfo_amp, 0, saw7, 0);
AudioConnection          patchCord34(pwm_mixer, 0, pulse_lfo0, 1);
AudioConnection          patchCord35(pwm_mixer, 0, pulse_lfo1, 1);
AudioConnection          patchCord36(pwm_mixer, 0, pulse_lfo2, 1);
AudioConnection          patchCord37(pwm_mixer, 0, pulse_lfo3, 1);
AudioConnection          patchCord38(pwm_mixer, 0, pulse_lfo4, 1);
AudioConnection          patchCord39(pwm_mixer, 0, pulse_lfo5, 1);
AudioConnection          patchCord40(pwm_mixer, 0, pulse_lfo6, 1);
AudioConnection          patchCord41(pwm_mixer, 0, pulse_lfo7, 1);
AudioConnection          patchCord42(pwm_mixer, 0, sub0, 1);
AudioConnection          patchCord43(pwm_mixer, 0, sub1, 1);
AudioConnection          patchCord44(pwm_mixer, 0, sub2, 1);
AudioConnection          patchCord45(pwm_mixer, 0, sub3, 1);
AudioConnection          patchCord46(pwm_mixer, 0, sub4, 1);
AudioConnection          patchCord47(pwm_mixer, 0, sub5, 1);
AudioConnection          patchCord48(pwm_mixer, 0, sub6, 1);
AudioConnection          patchCord49(pwm_mixer, 0, sub7, 1);
AudioConnection          patchCord50(sub7, 0, osc_mixer7, 2);
AudioConnection          patchCord51(sub4, 0, osc_mixer4, 2);
AudioConnection          patchCord52(saw7, 0, osc_mixer7, 1);
AudioConnection          patchCord53(saw4, 0, osc_mixer4, 1);
AudioConnection          patchCord54(sub6, 0, osc_mixer6, 2);
AudioConnection          patchCord55(saw6, 0, osc_mixer6, 1);
AudioConnection          patchCord56(sub5, 0, osc_mixer5, 2);
AudioConnection          patchCord57(sub3, 0, osc_mixer3, 2);
AudioConnection          patchCord58(saw5, 0, osc_mixer5, 1);
AudioConnection          patchCord59(noise7, 0, osc_mixer7, 3);
AudioConnection          patchCord60(noise4, 0, osc_mixer4, 3);
AudioConnection          patchCord61(saw3, 0, osc_mixer3, 1);
AudioConnection          patchCord62(noise6, 0, osc_mixer6, 3);
AudioConnection          patchCord63(pulse_lfo7, 0, osc_mixer7, 0);
AudioConnection          patchCord64(sub2, 0, osc_mixer2, 2);
AudioConnection          patchCord65(pulse_lfo4, 0, osc_mixer4, 0);
AudioConnection          patchCord66(saw2, 0, osc_mixer2, 1);
AudioConnection          patchCord67(noise5, 0, osc_mixer5, 3);
AudioConnection          patchCord68(pulse_lfo6, 0, osc_mixer6, 0);
AudioConnection          patchCord69(sub0, 0, osc_mixer0, 2);
AudioConnection          patchCord70(noise3, 0, osc_mixer3, 3);
AudioConnection          patchCord71(saw0, 0, osc_mixer0, 1);
AudioConnection          patchCord72(sub1, 0, osc_mixer1, 2);
AudioConnection          patchCord73(saw1, 0, osc_mixer1, 1);
AudioConnection          patchCord74(pulse_lfo5, 0, osc_mixer5, 0);
AudioConnection          patchCord75(pulse_lfo3, 0, osc_mixer3, 0);
AudioConnection          patchCord76(noise2, 0, osc_mixer2, 3);
AudioConnection          patchCord77(noise0, 0, osc_mixer0, 3);
AudioConnection          patchCord78(noise1, 0, osc_mixer1, 3);
AudioConnection          patchCord79(pulse_lfo2, 0, osc_mixer2, 0);
AudioConnection          patchCord80(pulse_lfo0, 0, osc_mixer0, 0);
AudioConnection          patchCord81(lfo_envelope0, 0, lpf_mod_mixer0, 1);
AudioConnection          patchCord82(lfo_envelope0, osc_lfo_amp);
AudioConnection          patchCord83(lfo_envelope0, 0, pwm_mixer, 0);
AudioConnection          patchCord84(pulse_lfo1, 0, osc_mixer1, 0);
AudioConnection          patchCord85(lpf_envelope_dc, lpf_envelope0);
AudioConnection          patchCord86(lpf_envelope_dc, lpf_envelope1);
AudioConnection          patchCord87(lpf_envelope_dc, lpf_envelope2);
AudioConnection          patchCord88(lpf_envelope_dc, lpf_envelope3);
AudioConnection          patchCord89(lpf_envelope_dc, lpf_envelope4);
AudioConnection          patchCord90(lpf_envelope_dc, lpf_envelope5);
AudioConnection          patchCord91(lpf_envelope_dc, lpf_envelope6);
AudioConnection          patchCord92(lpf_envelope_dc, lpf_envelope7);
AudioConnection          patchCord93(lpf_keyboard_dc, 0, lpf_mod_mixer0, 2);
AudioConnection          patchCord94(lpf_keyboard_dc, 0, lpf_mod_mixer1, 2);
AudioConnection          patchCord95(lpf_keyboard_dc, 0, lpf_mod_mixer2, 2);
AudioConnection          patchCord96(lpf_keyboard_dc, 0, lpf_mod_mixer3, 2);
AudioConnection          patchCord97(lpf_keyboard_dc, 0, lpf_mod_mixer4, 2);
AudioConnection          patchCord98(lpf_keyboard_dc, 0, lpf_mod_mixer5, 2);
AudioConnection          patchCord99(lpf_keyboard_dc, 0, lpf_mod_mixer6, 2);
AudioConnection          patchCord100(lpf_keyboard_dc, 0, lpf_mod_mixer7, 2);
AudioConnection          patchCord101(lpf_mod_wheel_dc, 0, lpf_mod_mixer0, 3);
AudioConnection          patchCord102(lpf_mod_wheel_dc, 0, lpf_mod_mixer1, 3);
AudioConnection          patchCord103(lpf_mod_wheel_dc, 0, lpf_mod_mixer2, 3);
AudioConnection          patchCord104(lpf_mod_wheel_dc, 0, lpf_mod_mixer3, 3);
AudioConnection          patchCord105(lpf_mod_wheel_dc, 0, lpf_mod_mixer4, 3);
AudioConnection          patchCord106(lpf_mod_wheel_dc, 0, lpf_mod_mixer5, 3);
AudioConnection          patchCord107(lpf_mod_wheel_dc, 0, lpf_mod_mixer6, 3);
AudioConnection          patchCord108(lpf_mod_wheel_dc, 0, lpf_mod_mixer7, 3);
AudioConnection          patchCord109(osc_mixer7, 0, hpf7, 0);
AudioConnection          patchCord110(osc_mixer4, 0, hpf4, 0);
AudioConnection          patchCord111(osc_mixer6, 0, hpf6, 0);
AudioConnection          patchCord112(osc_mixer5, 0, hpf5, 0);
AudioConnection          patchCord113(osc_mixer3, 0, hpf3, 0);
AudioConnection          patchCord114(osc_mixer2, 0, hpf2, 0);
AudioConnection          patchCord115(osc_mixer0, 0, hpf0, 0);
AudioConnection          patchCord116(osc_mixer1, 0, hpf1, 0);
AudioConnection          patchCord117(lpf_envelope1, 0, lpf_mod_mixer1, 0);
AudioConnection          patchCord118(lpf_envelope2, 0, lpf_mod_mixer2, 0);
AudioConnection          patchCord119(lpf_envelope5, 0, lpf_mod_mixer5, 0);
AudioConnection          patchCord120(lfo_envelope2, 0, lpf_mod_mixer2, 1);
AudioConnection          patchCord121(lpf_envelope3, 0, lpf_mod_mixer3, 0);
AudioConnection          patchCord122(lpf_envelope4, 0, lpf_mod_mixer4, 0);
AudioConnection          patchCord123(lfo_envelope4, 0, lpf_mod_mixer4, 1);
AudioConnection          patchCord124(lfo_envelope3, 0, lpf_mod_mixer3, 1);
AudioConnection          patchCord125(lfo_envelope5, 0, lpf_mod_mixer5, 1);
AudioConnection          patchCord126(lpf_envelope6, 0, lpf_mod_mixer6, 0);
AudioConnection          patchCord127(lfo_envelope1, 0, lpf_mod_mixer1, 1);
AudioConnection          patchCord128(lfo_envelope7, 0, lpf_mod_mixer7, 1);
AudioConnection          patchCord129(lfo_envelope6, 0, lpf_mod_mixer6, 1);
AudioConnection          patchCord130(lpf_envelope7, 0, lpf_mod_mixer7, 0);
AudioConnection          patchCord131(lpf_envelope0, 0, lpf_mod_mixer0, 0);
AudioConnection          patchCord132(hpf7, 2, lpf7, 0);
AudioConnection          patchCord133(hpf4, 2, lpf4, 0);
AudioConnection          patchCord134(hpf6, 2, lpf6, 0);
AudioConnection          patchCord135(hpf5, 2, lpf5, 0);
AudioConnection          patchCord136(hpf3, 2, lpf3, 0);
AudioConnection          patchCord137(hpf2, 2, lpf2, 0);
AudioConnection          patchCord138(hpf0, 2, lpf0, 0);
AudioConnection          patchCord139(hpf1, 2, lpf1, 0);
AudioConnection          patchCord140(lpf_mod_mixer0, 0, lpf0, 1);
AudioConnection          patchCord141(lpf_mod_mixer1, 0, lpf1, 1);
AudioConnection          patchCord142(lpf7, 0, envelope7, 0);
AudioConnection          patchCord143(lpf4, 0, envelope4, 0);
AudioConnection          patchCord144(lpf_mod_mixer2, 0, lpf2, 1);
AudioConnection          patchCord145(lpf6, 0, envelope6, 0);
AudioConnection          patchCord146(lpf_mod_mixer5, 0, lpf5, 1);
AudioConnection          patchCord147(lpf_mod_mixer3, 0, lpf3, 1);
AudioConnection          patchCord148(lpf5, 0, envelope5, 0);
AudioConnection          patchCord149(lpf3, 0, envelope3, 0);
AudioConnection          patchCord150(lpf_mod_mixer4, 0, lpf4, 1);
AudioConnection          patchCord151(lpf2, 0, envelope2, 0);
AudioConnection          patchCord152(lpf_mod_mixer6, 0, lpf6, 1);
AudioConnection          patchCord153(lpf0, 0, envelope0, 0);
AudioConnection          patchCord154(lpf1, 0, envelope1, 0);
AudioConnection          patchCord155(lpf_mod_mixer7, 0, lpf7, 1);
AudioConnection          patchCord156(envelope7, 0, env_mixer1, 3);
AudioConnection          patchCord157(envelope4, 0, env_mixer1, 0);
AudioConnection          patchCord158(envelope6, 0, env_mixer1, 2);
AudioConnection          patchCord159(envelope5, 0, env_mixer1, 1);
AudioConnection          patchCord160(envelope3, 0, env_mixer0, 3);
AudioConnection          patchCord161(envelope2, 0, env_mixer0, 2);
AudioConnection          patchCord162(envelope0, 0, env_mixer0, 0);
AudioConnection          patchCord163(envelope1, 0, env_mixer0, 1);
AudioConnection          patchCord164(env_mixer0, peak);
AudioConnection          patchCord165(env_mixer0, 0, mixer_left, 0);
AudioConnection          patchCord166(env_mixer0, 0, mixer_right, 0);
AudioConnection          patchCord167(env_mixer1, 0, mixer_left, 1);
AudioConnection          patchCord168(env_mixer1, 0, mixer_right, 1);
AudioConnection          patchCord169(mixer_left, flanger_left);
AudioConnection          patchCord170(mixer_right, flanger_right);
AudioConnection          patchCord171(flanger_left, 0, i2s1, 0);
AudioConnection          patchCord172(flanger_right, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1906.3333129882812,1059
// GUItool: end automatically generated code
