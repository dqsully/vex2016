#ifndef ulib_h
#define ulib_h

// ----------------------Controller Input Ratio Mapping---------------------- //

#define kMappingBaseRatio (pow(127, kMappingBasePower - 1))
#define kMapControllerBaseInput(I) ((I > 0 ? 1 : -1) * fastpow(abs(I), kMappingBasePower)/kMappingBaseRatio)

#define kMappingArmRatio (pow(127, kMappingArmPower - 1))
#define kMapControllerArmInput(I) ((I > 0 ? 1 : -1) * fastpow(abs(I), kMappingArmPower)/kMappingArmRatio)
;

// --------------------------Time Measurement System------------------------- //

#define cyclesToSeconds(C) C/halGetCounterFrequency()
#define cyclesToMilliseconds(C) C/halGetCounterFrequency()*1000

typedef struct Timer {
  halrtcnt_t start;
  halrtcnt_t end;
  halrtcnt_t delta;
} Timer;

Timer newTimer(void);
void resetTimer(Timer *t);

#endif //ulib_h
