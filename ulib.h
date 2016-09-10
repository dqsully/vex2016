// ----------------------Controller Input Ratio Mapping---------------------- //

#define kMappingRatio (pow(127, kMappingPower - 1))
#define kMapControllerInput(I) ((I > 0 ? 1 : -1) * fastpow(abs(I), kMappingPower)/kMappingRatio)
