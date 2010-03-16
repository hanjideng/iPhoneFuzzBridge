// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class Control;
@class Control_Builder;
@class Response;
@class Response_Builder;
typedef enum {
  Control_OpCodeAudio = 1,
  Control_OpCodeGraphic = 2,
} Control_OpCode;

BOOL Control_OpCodeIsValidValue(Control_OpCode value);

typedef enum {
  Control_AudioTypesAudioFormatLinearPcm = 1,
  Control_AudioTypesAudioFormatAc3 = 2,
  Control_AudioTypesAudioFormat60958Ac3 = 3,
  Control_AudioTypesAudioFormatAppleIma4 = 4,
  Control_AudioTypesAudioFormatMpeg4Aac = 5,
  Control_AudioTypesAudioFormatMpeg4Celp = 6,
  Control_AudioTypesAudioFormatMpeg4Hvxc = 7,
  Control_AudioTypesAudioFormatMpeg4TwinVq = 8,
  Control_AudioTypesAudioFormatMace3 = 9,
  Control_AudioTypesAudioFormatMace6 = 10,
  Control_AudioTypesAudioFormatUlaw = 11,
  Control_AudioTypesAudioFormatAlaw = 12,
  Control_AudioTypesAudioFormatQdesign = 13,
  Control_AudioTypesAudioFormatQdesign2 = 14,
  Control_AudioTypesAudioFormatQualcomm = 15,
  Control_AudioTypesAudioFormatMpeglayer1 = 16,
  Control_AudioTypesAudioFormatMpeglayer2 = 17,
  Control_AudioTypesAudioFormatMpeglayer3 = 18,
  Control_AudioTypesAudioFormatTimeCode = 19,
  Control_AudioTypesAudioFormatMidistream = 20,
  Control_AudioTypesAudioFormatParameterValueStream = 21,
  Control_AudioTypesAudioFormatAppleLossless = 22,
  Control_AudioTypesAudioFormatMpeg4AacHe = 23,
  Control_AudioTypesAudioFormatMpeg4AacLd = 24,
  Control_AudioTypesAudioFormatMpeg4AacHeV2 = 25,
  Control_AudioTypesAudioFormatMpeg4AacSpatial = 26,
  Control_AudioTypesAudioFormatAmr = 27,
  Control_AudioTypesAudioFormatAudible = 28,
  Control_AudioTypesAudioFormatiLbc = 29,
  Control_AudioTypesAudioFormatDviintelIma = 30,
  Control_AudioTypesAudioFormatMicrosoftGsm = 31,
  Control_AudioTypesAudioFormatAes3 = 32,
} Control_AudioTypes;

BOOL Control_AudioTypesIsValidValue(Control_AudioTypes value);


@interface FuzzyAgentRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface Control : PBGeneratedMessage {
@private
  BOOL hasOpcode_:1;
  BOOL hasSequence_:1;
  BOOL hasType_:1;
  BOOL hasData_:1;
  int32_t opcode;
  int32_t sequence;
  int32_t type;
  NSData* data;
}
- (BOOL) hasOpcode;
- (BOOL) hasSequence;
- (BOOL) hasType;
- (BOOL) hasData;
@property (readonly) int32_t opcode;
@property (readonly) int32_t sequence;
@property (readonly) int32_t type;
@property (readonly, retain) NSData* data;

+ (Control*) defaultInstance;
- (Control*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Control_Builder*) builder;
+ (Control_Builder*) builder;
+ (Control_Builder*) builderWithPrototype:(Control*) prototype;

+ (Control*) parseFromData:(NSData*) data;
+ (Control*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Control*) parseFromInputStream:(NSInputStream*) input;
+ (Control*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Control*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Control*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Control_Builder : PBGeneratedMessage_Builder {
@private
  Control* result;
}

- (Control*) defaultInstance;

- (Control_Builder*) clear;
- (Control_Builder*) clone;

- (Control*) build;
- (Control*) buildPartial;

- (Control_Builder*) mergeFrom:(Control*) other;
- (Control_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Control_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasOpcode;
- (int32_t) opcode;
- (Control_Builder*) setOpcode:(int32_t) value;
- (Control_Builder*) clearOpcode;

- (BOOL) hasSequence;
- (int32_t) sequence;
- (Control_Builder*) setSequence:(int32_t) value;
- (Control_Builder*) clearSequence;

- (BOOL) hasType;
- (int32_t) type;
- (Control_Builder*) setType:(int32_t) value;
- (Control_Builder*) clearType;

- (BOOL) hasData;
- (NSData*) data;
- (Control_Builder*) setData:(NSData*) value;
- (Control_Builder*) clearData;
@end

@interface Response : PBGeneratedMessage {
@private
  BOOL hasReturnCode_:1;
  int32_t returnCode;
}
- (BOOL) hasReturnCode;
@property (readonly) int32_t returnCode;

+ (Response*) defaultInstance;
- (Response*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Response_Builder*) builder;
+ (Response_Builder*) builder;
+ (Response_Builder*) builderWithPrototype:(Response*) prototype;

+ (Response*) parseFromData:(NSData*) data;
+ (Response*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Response*) parseFromInputStream:(NSInputStream*) input;
+ (Response*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Response*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Response*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Response_Builder : PBGeneratedMessage_Builder {
@private
  Response* result;
}

- (Response*) defaultInstance;

- (Response_Builder*) clear;
- (Response_Builder*) clone;

- (Response*) build;
- (Response*) buildPartial;

- (Response_Builder*) mergeFrom:(Response*) other;
- (Response_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Response_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasReturnCode;
- (int32_t) returnCode;
- (Response_Builder*) setReturnCode:(int32_t) value;
- (Response_Builder*) clearReturnCode;
@end

