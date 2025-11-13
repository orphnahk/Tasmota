/* Solidification of Matter_Plugin_3_Light1.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_Plugin_Light1' ktab size: 61, total: 122 (saved 488 bytes)
static const bvalue be_ktab_class_Matter_Plugin_Light1[61] = {
  /* K0   */  be_nested_str_weak(tasmota),
  /* K1   */  be_nested_str_weak(log),
  /* K2   */  be_nested_str_weak(MTR_X3A_X20FUCK_X20YOU_X20set_bri),
  /* K3   */  be_const_int(0),
  /* K4   */  be_nested_str_weak(BRIDGE),
  /* K5   */  be_nested_str_weak(scale_uint),
  /* K6   */  be_nested_str_weak(call_remote_sync),
  /* K7   */  be_nested_str_weak(Dimmer),
  /* K8   */  be_nested_str_weak(parse_status),
  /* K9   */  be_nested_str_weak(VIRTUAL),
  /* K10  */  be_nested_str_weak(shadow_onoff),
  /* K11  */  be_nested_str_weak(attribute_updated),
  /* K12  */  be_nested_str_weak(shadow_bri),
  /* K13  */  be_nested_str_weak(light),
  /* K14  */  be_nested_str_weak(set),
  /* K15  */  be_nested_str_weak(bri),
  /* K16  */  be_nested_str_weak(light_index),
  /* K17  */  be_nested_str_weak(power),
  /* K18  */  be_nested_str_weak(update_shadow),
  /* K19  */  be_nested_str_weak(),
  /* K20  */  be_nested_str_weak(_X25i_X25_X25),
  /* K21  */  be_nested_str_weak(_X26_X23128261_X3B_X20),
  /* K22  */  be_nested_str_weak(matter),
  /* K23  */  be_nested_str_weak(TLV),
  /* K24  */  be_nested_str_weak(cluster),
  /* K25  */  be_nested_str_weak(command),
  /* K26  */  be_nested_str_weak(MTR_X3A_X20FUCK_X20YOU_X20invoke_request),
  /* K27  */  be_nested_str_weak(update_shadow_lazy),
  /* K28  */  be_nested_str_weak(findsubval),
  /* K29  */  be_nested_str_weak(set_bri),
  /* K30  */  be_nested_str_weak(bri_X3A),
  /* K31  */  be_nested_str_weak(publish_command),
  /* K32  */  be_nested_str_weak(Bri),
  /* K33  */  be_nested_str_weak(Power),
  /* K34  */  be_const_int(1),
  /* K35  */  be_const_int(2),
  /* K36  */  be_const_int(3),
  /* K37  */  be_nested_str_weak(invoke_request),
  /* K38  */  be_nested_str_weak(attribute),
  /* K39  */  be_nested_str_weak(MTR_X3A_X20FUCK_X20YOU_X20read_attribute),
  /* K40  */  be_nested_str_weak(U1),
  /* K41  */  be_nested_str_weak(read_attribute),
  /* K42  */  be_nested_str_weak(parse_configuration),
  /* K43  */  be_nested_str_weak(MTR_X3A_X20FUCK_X20YOU_X20parse_configuration),
  /* K44  */  be_nested_str_weak(tasmota_relay_index),
  /* K45  */  be_nested_str_weak(find),
  /* K46  */  be_nested_str_weak(ARG),
  /* K47  */  be_nested_str_weak(TYPE),
  /* K48  */  be_nested_str_weak(light1),
  /* K49  */  be_nested_str_weak(get_option),
  /* K50  */  be_nested_str_weak(get),
  /* K51  */  be_nested_str_weak(update_virtual),
  /* K52  */  be_nested_str_weak(MTR_X3A_X20FUCK_X20YOU_X20init),
  /* K53  */  be_nested_str_weak(init),
  /* K54  */  be_nested_str_weak(webserver),
  /* K55  */  be_nested_str_weak(web_values_prefix),
  /* K56  */  be_nested_str_weak(content_send),
  /* K57  */  be_nested_str_weak(_X25s_X20_X25s),
  /* K58  */  be_nested_str_weak(web_value_onoff),
  /* K59  */  be_nested_str_weak(web_value_dimmer),
  /* K60  */  be_nested_str_weak(MTR_X3A_X20FUCK_X20YOU_X20update_shadow),
};


extern const bclass be_class_Matter_Plugin_Light1;

/********************************************************************
** Solidified function: set_bri
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_set_bri,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(set_bri),
    &be_const_str_solidified,
    ( &(const binstruction[96]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x58140002,  //  0002  LDCONST	R5	K2
      0x541A0003,  //  0003  LDINT	R6	4
      0x7C0C0600,  //  0004  CALL	R3	3
      0x140C0303,  //  0005  LT	R3	R1	K3
      0x780E0000,  //  0006  JMPF	R3	#0008
      0x58040003,  //  0007  LDCONST	R1	K3
      0x540E00FD,  //  0008  LDINT	R3	254
      0x240C0203,  //  0009  GT	R3	R1	R3
      0x780E0000,  //  000A  JMPF	R3	#000C
      0x540600FD,  //  000B  LDINT	R1	254
      0x4C0C0000,  //  000C  LDNIL	R3
      0x200C0403,  //  000D  NE	R3	R2	R3
      0x780E0003,  //  000E  JMPF	R3	#0013
      0x600C0017,  //  000F  GETGBL	R3	G23
      0x5C100400,  //  0010  MOVE	R4	R2
      0x7C0C0200,  //  0011  CALL	R3	1
      0x70020000,  //  0012  JMP		#0014
      0x4C0C0000,  //  0013  LDNIL	R3
      0x5C080600,  //  0014  MOVE	R2	R3
      0x880C0104,  //  0015  GETMBR	R3	R0	K4
      0x780E0015,  //  0016  JMPF	R3	#002D
      0xB80E0000,  //  0017  GETNGBL	R3	K0
      0x8C0C0705,  //  0018  GETMET	R3	R3	K5
      0x5C140200,  //  0019  MOVE	R5	R1
      0x58180003,  //  001A  LDCONST	R6	K3
      0x541E00FD,  //  001B  LDINT	R7	254
      0x58200003,  //  001C  LDCONST	R8	K3
      0x54260063,  //  001D  LDINT	R9	100
      0x7C0C0C00,  //  001E  CALL	R3	6
      0x8C100106,  //  001F  GETMET	R4	R0	K6
      0x58180007,  //  0020  LDCONST	R6	K7
      0x601C0008,  //  0021  GETGBL	R7	G8
      0x5C200600,  //  0022  MOVE	R8	R3
      0x7C1C0200,  //  0023  CALL	R7	1
      0x7C100600,  //  0024  CALL	R4	3
      0x4C140000,  //  0025  LDNIL	R5
      0x20140805,  //  0026  NE	R5	R4	R5
      0x78160003,  //  0027  JMPF	R5	#002C
      0x8C140108,  //  0028  GETMET	R5	R0	K8
      0x5C1C0800,  //  0029  MOVE	R7	R4
      0x5422000A,  //  002A  LDINT	R8	11
      0x7C140600,  //  002B  CALL	R5	3
      0x70020031,  //  002C  JMP		#005F
      0x880C0109,  //  002D  GETMBR	R3	R0	K9
      0x780E0013,  //  002E  JMPF	R3	#0043
      0x4C0C0000,  //  002F  LDNIL	R3
      0x200C0403,  //  0030  NE	R3	R2	R3
      0x780E0007,  //  0031  JMPF	R3	#003A
      0x880C010A,  //  0032  GETMBR	R3	R0	K10
      0x200C0403,  //  0033  NE	R3	R2	R3
      0x780E0004,  //  0034  JMPF	R3	#003A
      0x8C0C010B,  //  0035  GETMET	R3	R0	K11
      0x54160005,  //  0036  LDINT	R5	6
      0x58180003,  //  0037  LDCONST	R6	K3
      0x7C0C0600,  //  0038  CALL	R3	3
      0x90021402,  //  0039  SETMBR	R0	K10	R2
      0x880C010C,  //  003A  GETMBR	R3	R0	K12
      0x200C0203,  //  003B  NE	R3	R1	R3
      0x780E0004,  //  003C  JMPF	R3	#0042
      0x8C0C010B,  //  003D  GETMET	R3	R0	K11
      0x54160007,  //  003E  LDINT	R5	8
      0x58180003,  //  003F  LDCONST	R6	K3
      0x7C0C0600,  //  0040  CALL	R3	3
      0x90021801,  //  0041  SETMBR	R0	K12	R1
      0x7002001B,  //  0042  JMP		#005F
      0xA40E1A00,  //  0043  IMPORT	R3	K13
      0xB8120000,  //  0044  GETNGBL	R4	K0
      0x8C100905,  //  0045  GETMET	R4	R4	K5
      0x5C180200,  //  0046  MOVE	R6	R1
      0x581C0003,  //  0047  LDCONST	R7	K3
      0x542200FD,  //  0048  LDINT	R8	254
      0x58240003,  //  0049  LDCONST	R9	K3
      0x542A00FE,  //  004A  LDINT	R10	255
      0x7C100C00,  //  004B  CALL	R4	6
      0x4C140000,  //  004C  LDNIL	R5
      0x1C140405,  //  004D  EQ	R5	R2	R5
      0x78160006,  //  004E  JMPF	R5	#0056
      0x8C14070E,  //  004F  GETMET	R5	R3	K14
      0x601C0013,  //  0050  GETGBL	R7	G19
      0x7C1C0000,  //  0051  CALL	R7	0
      0x981E1E04,  //  0052  SETIDX	R7	K15	R4
      0x88200110,  //  0053  GETMBR	R8	R0	K16
      0x7C140600,  //  0054  CALL	R5	3
      0x70020006,  //  0055  JMP		#005D
      0x8C14070E,  //  0056  GETMET	R5	R3	K14
      0x601C0013,  //  0057  GETGBL	R7	G19
      0x7C1C0000,  //  0058  CALL	R7	0
      0x981E1E04,  //  0059  SETIDX	R7	K15	R4
      0x981E2202,  //  005A  SETIDX	R7	K17	R2
      0x88200110,  //  005B  GETMBR	R8	R0	K16
      0x7C140600,  //  005C  CALL	R5	3
      0x8C140112,  //  005D  GETMET	R5	R0	K18
      0x7C140200,  //  005E  CALL	R5	1
      0x80000000,  //  005F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_value_dimmer
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_web_value_dimmer,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(web_value_dimmer),
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x58040013,  //  0000  LDCONST	R1	K19
      0x8808010C,  //  0001  GETMBR	R2	R0	K12
      0x4C0C0000,  //  0002  LDNIL	R3
      0x20080403,  //  0003  NE	R2	R2	R3
      0x780A000C,  //  0004  JMPF	R2	#0012
      0xB80A0000,  //  0005  GETNGBL	R2	K0
      0x8C080505,  //  0006  GETMET	R2	R2	K5
      0x8810010C,  //  0007  GETMBR	R4	R0	K12
      0x58140003,  //  0008  LDCONST	R5	K3
      0x541A00FD,  //  0009  LDINT	R6	254
      0x581C0003,  //  000A  LDCONST	R7	K3
      0x54220063,  //  000B  LDINT	R8	100
      0x7C080C00,  //  000C  CALL	R2	6
      0x600C0018,  //  000D  GETGBL	R3	G24
      0x58100014,  //  000E  LDCONST	R4	K20
      0x5C140400,  //  000F  MOVE	R5	R2
      0x7C0C0400,  //  0010  CALL	R3	2
      0x5C040600,  //  0011  MOVE	R1	R3
      0x000A2A01,  //  0012  ADD	R2	K21	R1
      0x80040400,  //  0013  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invoke_request
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_invoke_request,   /* name */
  be_nested_proto(
    24,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[126]) {  /* code */
      0xA4121A00,  //  0000  IMPORT	R4	K13
      0xB8162C00,  //  0001  GETNGBL	R5	K22
      0x88140B17,  //  0002  GETMBR	R5	R5	K23
      0x88180718,  //  0003  GETMBR	R6	R3	K24
      0x881C0719,  //  0004  GETMBR	R7	R3	K25
      0xB8220000,  //  0005  GETNGBL	R8	K0
      0x8C201101,  //  0006  GETMET	R8	R8	K1
      0x5828001A,  //  0007  LDCONST	R10	K26
      0x542E0003,  //  0008  LDINT	R11	4
      0x7C200600,  //  0009  CALL	R8	3
      0x54220007,  //  000A  LDINT	R8	8
      0x1C200C08,  //  000B  EQ	R8	R6	R8
      0x78220066,  //  000C  JMPF	R8	#0074
      0x8C20011B,  //  000D  GETMET	R8	R0	K27
      0x7C200200,  //  000E  CALL	R8	1
      0x1C200F03,  //  000F  EQ	R8	R7	K3
      0x7822001C,  //  0010  JMPF	R8	#002E
      0x8C20051C,  //  0011  GETMET	R8	R2	K28
      0x58280003,  //  0012  LDCONST	R10	K3
      0x7C200400,  //  0013  CALL	R8	2
      0x8C24011D,  //  0014  GETMET	R9	R0	K29
      0x5C2C1000,  //  0015  MOVE	R11	R8
      0x7C240400,  //  0016  CALL	R9	2
      0x60240008,  //  0017  GETGBL	R9	G8
      0x5C281000,  //  0018  MOVE	R10	R8
      0x7C240200,  //  0019  CALL	R9	1
      0x00263C09,  //  001A  ADD	R9	K30	R9
      0x900E0209,  //  001B  SETMBR	R3	K1	R9
      0x8C24011F,  //  001C  GETMET	R9	R0	K31
      0x582C0020,  //  001D  LDCONST	R11	K32
      0x5C301000,  //  001E  MOVE	R12	R8
      0x58340007,  //  001F  LDCONST	R13	K7
      0xB83A0000,  //  0020  GETNGBL	R14	K0
      0x8C381D05,  //  0021  GETMET	R14	R14	K5
      0x5C401000,  //  0022  MOVE	R16	R8
      0x58440003,  //  0023  LDCONST	R17	K3
      0x544A00FD,  //  0024  LDINT	R18	254
      0x584C0003,  //  0025  LDCONST	R19	K3
      0x54520063,  //  0026  LDINT	R20	100
      0x7C380C00,  //  0027  CALL	R14	6
      0x583C0021,  //  0028  LDCONST	R15	K33
      0x58400022,  //  0029  LDCONST	R16	K34
      0x7C240E00,  //  002A  CALL	R9	7
      0x50240200,  //  002B  LDBOOL	R9	1	0
      0x80041200,  //  002C  RET	1	R9
      0x70020044,  //  002D  JMP		#0073
      0x1C200F22,  //  002E  EQ	R8	R7	K34
      0x78220002,  //  002F  JMPF	R8	#0033
      0x50200200,  //  0030  LDBOOL	R8	1	0
      0x80041000,  //  0031  RET	1	R8
      0x7002003F,  //  0032  JMP		#0073
      0x1C200F23,  //  0033  EQ	R8	R7	K35
      0x78220002,  //  0034  JMPF	R8	#0038
      0x50200200,  //  0035  LDBOOL	R8	1	0
      0x80041000,  //  0036  RET	1	R8
      0x7002003A,  //  0037  JMP		#0073
      0x1C200F24,  //  0038  EQ	R8	R7	K36
      0x78220002,  //  0039  JMPF	R8	#003D
      0x50200200,  //  003A  LDBOOL	R8	1	0
      0x80041000,  //  003B  RET	1	R8
      0x70020035,  //  003C  JMP		#0073
      0x54220003,  //  003D  LDINT	R8	4
      0x1C200E08,  //  003E  EQ	R8	R7	R8
      0x78220021,  //  003F  JMPF	R8	#0062
      0x8C20051C,  //  0040  GETMET	R8	R2	K28
      0x58280003,  //  0041  LDCONST	R10	K3
      0x7C200400,  //  0042  CALL	R8	2
      0x24241103,  //  0043  GT	R9	R8	K3
      0x8C28011D,  //  0044  GETMET	R10	R0	K29
      0x5C301000,  //  0045  MOVE	R12	R8
      0x5C341200,  //  0046  MOVE	R13	R9
      0x7C280600,  //  0047  CALL	R10	3
      0x60280008,  //  0048  GETGBL	R10	G8
      0x5C2C1000,  //  0049  MOVE	R11	R8
      0x7C280200,  //  004A  CALL	R10	1
      0x002A3C0A,  //  004B  ADD	R10	K30	R10
      0x900E020A,  //  004C  SETMBR	R3	K1	R10
      0x8C28011F,  //  004D  GETMET	R10	R0	K31
      0x58300021,  //  004E  LDCONST	R12	K33
      0x78260001,  //  004F  JMPF	R9	#0052
      0x58340022,  //  0050  LDCONST	R13	K34
      0x70020000,  //  0051  JMP		#0053
      0x58340003,  //  0052  LDCONST	R13	K3
      0x58380020,  //  0053  LDCONST	R14	K32
      0x5C3C1000,  //  0054  MOVE	R15	R8
      0x58400007,  //  0055  LDCONST	R16	K7
      0xB8460000,  //  0056  GETNGBL	R17	K0
      0x8C442305,  //  0057  GETMET	R17	R17	K5
      0x5C4C1000,  //  0058  MOVE	R19	R8
      0x58500003,  //  0059  LDCONST	R20	K3
      0x545600FD,  //  005A  LDINT	R21	254
      0x58580003,  //  005B  LDCONST	R22	K3
      0x545E0063,  //  005C  LDINT	R23	100
      0x7C440C00,  //  005D  CALL	R17	6
      0x7C280E00,  //  005E  CALL	R10	7
      0x50280200,  //  005F  LDBOOL	R10	1	0
      0x80041400,  //  0060  RET	1	R10
      0x70020010,  //  0061  JMP		#0073
      0x54220004,  //  0062  LDINT	R8	5
      0x1C200E08,  //  0063  EQ	R8	R7	R8
      0x78220002,  //  0064  JMPF	R8	#0068
      0x50200200,  //  0065  LDBOOL	R8	1	0
      0x80041000,  //  0066  RET	1	R8
      0x7002000A,  //  0067  JMP		#0073
      0x54220005,  //  0068  LDINT	R8	6
      0x1C200E08,  //  0069  EQ	R8	R7	R8
      0x78220002,  //  006A  JMPF	R8	#006E
      0x50200200,  //  006B  LDBOOL	R8	1	0
      0x80041000,  //  006C  RET	1	R8
      0x70020004,  //  006D  JMP		#0073
      0x54220006,  //  006E  LDINT	R8	7
      0x1C200E08,  //  006F  EQ	R8	R7	R8
      0x78220001,  //  0070  JMPF	R8	#0073
      0x50200200,  //  0071  LDBOOL	R8	1	0
      0x80041000,  //  0072  RET	1	R8
      0x70020008,  //  0073  JMP		#007D
      0x60200003,  //  0074  GETGBL	R8	G3
      0x5C240000,  //  0075  MOVE	R9	R0
      0x7C200200,  //  0076  CALL	R8	1
      0x8C201125,  //  0077  GETMET	R8	R8	K37
      0x5C280200,  //  0078  MOVE	R10	R1
      0x5C2C0400,  //  0079  MOVE	R11	R2
      0x5C300600,  //  007A  MOVE	R12	R3
      0x7C200800,  //  007B  CALL	R8	4
      0x80041000,  //  007C  RET	1	R8
      0x80000000,  //  007D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[64]) {  /* code */
      0xB8122C00,  //  0000  GETNGBL	R4	K22
      0x88100917,  //  0001  GETMBR	R4	R4	K23
      0x88140518,  //  0002  GETMBR	R5	R2	K24
      0x88180526,  //  0003  GETMBR	R6	R2	K38
      0xB81E0000,  //  0004  GETNGBL	R7	K0
      0x8C1C0F01,  //  0005  GETMET	R7	R7	K1
      0x58240027,  //  0006  LDCONST	R9	K39
      0x542A0003,  //  0007  LDINT	R10	4
      0x7C1C0600,  //  0008  CALL	R7	3
      0x541E0007,  //  0009  LDINT	R7	8
      0x1C1C0A07,  //  000A  EQ	R7	R5	R7
      0x781E002A,  //  000B  JMPF	R7	#0037
      0x8C1C011B,  //  000C  GETMET	R7	R0	K27
      0x7C1C0200,  //  000D  CALL	R7	1
      0x1C1C0D03,  //  000E  EQ	R7	R6	K3
      0x781E0005,  //  000F  JMPF	R7	#0016
      0x8C1C070E,  //  0010  GETMET	R7	R3	K14
      0x88240928,  //  0011  GETMBR	R9	R4	K40
      0x8828010C,  //  0012  GETMBR	R10	R0	K12
      0x7C1C0600,  //  0013  CALL	R7	3
      0x80040E00,  //  0014  RET	1	R7
      0x70020020,  //  0015  JMP		#0037
      0x1C1C0D23,  //  0016  EQ	R7	R6	K35
      0x781E0005,  //  0017  JMPF	R7	#001E
      0x8C1C070E,  //  0018  GETMET	R7	R3	K14
      0x88240928,  //  0019  GETMBR	R9	R4	K40
      0x58280003,  //  001A  LDCONST	R10	K3
      0x7C1C0600,  //  001B  CALL	R7	3
      0x80040E00,  //  001C  RET	1	R7
      0x70020018,  //  001D  JMP		#0037
      0x1C1C0D24,  //  001E  EQ	R7	R6	K36
      0x781E0005,  //  001F  JMPF	R7	#0026
      0x8C1C070E,  //  0020  GETMET	R7	R3	K14
      0x88240928,  //  0021  GETMBR	R9	R4	K40
      0x542A00FD,  //  0022  LDINT	R10	254
      0x7C1C0600,  //  0023  CALL	R7	3
      0x80040E00,  //  0024  RET	1	R7
      0x70020010,  //  0025  JMP		#0037
      0x541E000E,  //  0026  LDINT	R7	15
      0x1C1C0C07,  //  0027  EQ	R7	R6	R7
      0x781E0005,  //  0028  JMPF	R7	#002F
      0x8C1C070E,  //  0029  GETMET	R7	R3	K14
      0x88240928,  //  002A  GETMBR	R9	R4	K40
      0x58280003,  //  002B  LDCONST	R10	K3
      0x7C1C0600,  //  002C  CALL	R7	3
      0x80040E00,  //  002D  RET	1	R7
      0x70020007,  //  002E  JMP		#0037
      0x541E0010,  //  002F  LDINT	R7	17
      0x1C1C0C07,  //  0030  EQ	R7	R6	R7
      0x781E0004,  //  0031  JMPF	R7	#0037
      0x8C1C070E,  //  0032  GETMET	R7	R3	K14
      0x88240928,  //  0033  GETMBR	R9	R4	K40
      0x8828010C,  //  0034  GETMBR	R10	R0	K12
      0x7C1C0600,  //  0035  CALL	R7	3
      0x80040E00,  //  0036  RET	1	R7
      0x601C0003,  //  0037  GETGBL	R7	G3
      0x5C200000,  //  0038  MOVE	R8	R0
      0x7C1C0200,  //  0039  CALL	R7	1
      0x8C1C0F29,  //  003A  GETMET	R7	R7	K41
      0x5C240200,  //  003B  MOVE	R9	R1
      0x5C280400,  //  003C  MOVE	R10	R2
      0x5C2C0600,  //  003D  MOVE	R11	R3
      0x7C1C0800,  //  003E  CALL	R7	4
      0x80040E00,  //  003F  RET	1	R7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_configuration
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_parse_configuration,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(parse_configuration),
    &be_const_str_solidified,
    ( &(const binstruction[63]) {  /* code */
      0x60080003,  //  0000  GETGBL	R2	G3
      0x5C0C0000,  //  0001  MOVE	R3	R0
      0x7C080200,  //  0002  CALL	R2	1
      0x8C08052A,  //  0003  GETMET	R2	R2	K42
      0x5C100200,  //  0004  MOVE	R4	R1
      0x7C080400,  //  0005  CALL	R2	2
      0xB80A0000,  //  0006  GETNGBL	R2	K0
      0x8C080501,  //  0007  GETMET	R2	R2	K1
      0x5810002B,  //  0008  LDCONST	R4	K43
      0x54160003,  //  0009  LDINT	R5	4
      0x7C080600,  //  000A  CALL	R2	3
      0x88080104,  //  000B  GETMBR	R2	R0	K4
      0x780A000F,  //  000C  JMPF	R2	#001D
      0x60080009,  //  000D  GETGBL	R2	G9
      0x8C0C032D,  //  000E  GETMET	R3	R1	K45
      0x8814012E,  //  000F  GETMBR	R5	R0	K46
      0x4C180000,  //  0010  LDNIL	R6
      0x7C0C0600,  //  0011  CALL	R3	3
      0x7C080200,  //  0012  CALL	R2	1
      0x90025802,  //  0013  SETMBR	R0	K44	R2
      0x8808012C,  //  0014  GETMBR	R2	R0	K44
      0x4C0C0000,  //  0015  LDNIL	R3
      0x20080403,  //  0016  NE	R2	R2	R3
      0x780A0003,  //  0017  JMPF	R2	#001C
      0x8808012C,  //  0018  GETMBR	R2	R0	K44
      0x18080503,  //  0019  LE	R2	R2	K3
      0x780A0000,  //  001A  JMPF	R2	#001C
      0x90025922,  //  001B  SETMBR	R0	K44	K34
      0x70020020,  //  001C  JMP		#003E
      0x8808012C,  //  001D  GETMBR	R2	R0	K44
      0x4C0C0000,  //  001E  LDNIL	R3
      0x1C080403,  //  001F  EQ	R2	R2	R3
      0x780A001C,  //  0020  JMPF	R2	#003E
      0x8808012F,  //  0021  GETMBR	R2	R0	K47
      0x1C080530,  //  0022  EQ	R2	R2	K48
      0x780A0019,  //  0023  JMPF	R2	#003E
      0x8C08032D,  //  0024  GETMET	R2	R1	K45
      0x8810012E,  //  0025  GETMBR	R4	R0	K46
      0x7C080400,  //  0026  CALL	R2	2
      0x4C0C0000,  //  0027  LDNIL	R3
      0x1C0C0403,  //  0028  EQ	R3	R2	R3
      0x780E000E,  //  0029  JMPF	R3	#0039
      0xB80E0000,  //  002A  GETNGBL	R3	K0
      0x8C0C0731,  //  002B  GETMET	R3	R3	K49
      0x54160043,  //  002C  LDINT	R5	68
      0x7C0C0400,  //  002D  CALL	R3	2
      0x1C0C0703,  //  002E  EQ	R3	R3	K3
      0x780E0007,  //  002F  JMPF	R3	#0038
      0xA40E1A00,  //  0030  IMPORT	R3	K13
      0x8C100732,  //  0031  GETMET	R4	R3	K50
      0x58180022,  //  0032  LDCONST	R6	K34
      0x7C100400,  //  0033  CALL	R4	2
      0x4C140000,  //  0034  LDNIL	R5
      0x20100805,  //  0035  NE	R4	R4	R5
      0x78120000,  //  0036  JMPF	R4	#0038
      0x90022122,  //  0037  SETMBR	R0	K16	K34
      0x70020004,  //  0038  JMP		#003E
      0x600C0009,  //  0039  GETGBL	R3	G9
      0x5C100400,  //  003A  MOVE	R4	R2
      0x7C0C0200,  //  003B  CALL	R3	1
      0x040C0722,  //  003C  SUB	R3	R3	K34
      0x90022003,  //  003D  SETMBR	R0	K16	R3
      0x80000000,  //  003E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_virtual
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_update_virtual,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(update_virtual),
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0x8C08032D,  //  0000  GETMET	R2	R1	K45
      0x58100021,  //  0001  LDCONST	R4	K33
      0x7C080400,  //  0002  CALL	R2	2
      0x8C0C032D,  //  0003  GETMET	R3	R1	K45
      0x58140020,  //  0004  LDCONST	R5	K32
      0x7C0C0400,  //  0005  CALL	R3	2
      0x4C100000,  //  0006  LDNIL	R4
      0x20100604,  //  0007  NE	R4	R3	R4
      0x78120006,  //  0008  JMPF	R4	#0010
      0x8C10011D,  //  0009  GETMET	R4	R0	K29
      0x60180009,  //  000A  GETGBL	R6	G9
      0x5C1C0600,  //  000B  MOVE	R7	R3
      0x7C180200,  //  000C  CALL	R6	1
      0x5C1C0400,  //  000D  MOVE	R7	R2
      0x7C100600,  //  000E  CALL	R4	3
      0x80000800,  //  000F  RET	0
      0x60100003,  //  0010  GETGBL	R4	G3
      0x5C140000,  //  0011  MOVE	R5	R0
      0x7C100200,  //  0012  CALL	R4	1
      0x8C100933,  //  0013  GETMET	R4	R4	K51
      0x5C180200,  //  0014  MOVE	R6	R1
      0x7C100400,  //  0015  CALL	R4	2
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[15]) {  /* code */
      0x90021903,  //  0000  SETMBR	R0	K12	K3
      0xB8120000,  //  0001  GETNGBL	R4	K0
      0x8C100901,  //  0002  GETMET	R4	R4	K1
      0x58180034,  //  0003  LDCONST	R6	K52
      0x541E0003,  //  0004  LDINT	R7	4
      0x7C100600,  //  0005  CALL	R4	3
      0x60100003,  //  0006  GETGBL	R4	G3
      0x5C140000,  //  0007  MOVE	R5	R0
      0x7C100200,  //  0008  CALL	R4	1
      0x8C100935,  //  0009  GETMET	R4	R4	K53
      0x5C180200,  //  000A  MOVE	R6	R1
      0x5C1C0400,  //  000B  MOVE	R7	R2
      0x5C200600,  //  000C  MOVE	R8	R3
      0x7C100800,  //  000D  CALL	R4	4
      0x80000000,  //  000E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: web_values
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_web_values,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(web_values),
    &be_const_str_solidified,
    ( &(const binstruction[14]) {  /* code */
      0xA4066C00,  //  0000  IMPORT	R1	K54
      0x8C080137,  //  0001  GETMET	R2	R0	K55
      0x7C080200,  //  0002  CALL	R2	1
      0x8C080338,  //  0003  GETMET	R2	R1	K56
      0x60100018,  //  0004  GETGBL	R4	G24
      0x58140039,  //  0005  LDCONST	R5	K57
      0x8C18013A,  //  0006  GETMET	R6	R0	K58
      0x8820010A,  //  0007  GETMBR	R8	R0	K10
      0x7C180400,  //  0008  CALL	R6	2
      0x8C1C013B,  //  0009  GETMET	R7	R0	K59
      0x7C1C0200,  //  000A  CALL	R7	1
      0x7C100600,  //  000B  CALL	R4	3
      0x7C080400,  //  000C  CALL	R2	2
      0x80000000,  //  000D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_status
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_parse_status,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(parse_status),
    &be_const_str_solidified,
    ( &(const binstruction[35]) {  /* code */
      0x600C0003,  //  0000  GETGBL	R3	G3
      0x5C100000,  //  0001  MOVE	R4	R0
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0708,  //  0003  GETMET	R3	R3	K8
      0x5C140200,  //  0004  MOVE	R5	R1
      0x5C180400,  //  0005  MOVE	R6	R2
      0x7C0C0600,  //  0006  CALL	R3	3
      0x540E000A,  //  0007  LDINT	R3	11
      0x1C0C0403,  //  0008  EQ	R3	R2	R3
      0x780E0017,  //  0009  JMPF	R3	#0022
      0x600C0009,  //  000A  GETGBL	R3	G9
      0x8C10032D,  //  000B  GETMET	R4	R1	K45
      0x58180007,  //  000C  LDCONST	R6	K7
      0x7C100400,  //  000D  CALL	R4	2
      0x7C0C0200,  //  000E  CALL	R3	1
      0x4C100000,  //  000F  LDNIL	R4
      0x20100604,  //  0010  NE	R4	R3	R4
      0x7812000F,  //  0011  JMPF	R4	#0022
      0xB8120000,  //  0012  GETNGBL	R4	K0
      0x8C100905,  //  0013  GETMET	R4	R4	K5
      0x5C180600,  //  0014  MOVE	R6	R3
      0x581C0003,  //  0015  LDCONST	R7	K3
      0x54220063,  //  0016  LDINT	R8	100
      0x58240003,  //  0017  LDCONST	R9	K3
      0x542A00FD,  //  0018  LDINT	R10	254
      0x7C100C00,  //  0019  CALL	R4	6
      0x8814010C,  //  001A  GETMBR	R5	R0	K12
      0x20140805,  //  001B  NE	R5	R4	R5
      0x78160004,  //  001C  JMPF	R5	#0022
      0x8C14010B,  //  001D  GETMET	R5	R0	K11
      0x541E0007,  //  001E  LDINT	R7	8
      0x58200003,  //  001F  LDCONST	R8	K3
      0x7C140600,  //  0020  CALL	R5	3
      0x90021804,  //  0021  SETMBR	R0	K12	R4
      0x80000000,  //  0022  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_shadow
********************************************************************/
be_local_closure(class_Matter_Plugin_Light1_update_shadow,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Plugin_Light1,     /* shared constants */
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[58]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C003C,  //  0002  LDCONST	R3	K60
      0x54120003,  //  0003  LDINT	R4	4
      0x7C040600,  //  0004  CALL	R1	3
      0x88040109,  //  0005  GETMBR	R1	R0	K9
      0x7406002C,  //  0006  JMPT	R1	#0034
      0x88040104,  //  0007  GETMBR	R1	R0	K4
      0x7406002A,  //  0008  JMPT	R1	#0034
      0xA4061A00,  //  0009  IMPORT	R1	K13
      0x8C080332,  //  000A  GETMET	R2	R1	K50
      0x88100110,  //  000B  GETMBR	R4	R0	K16
      0x7C080400,  //  000C  CALL	R2	2
      0x4C0C0000,  //  000D  LDNIL	R3
      0x200C0403,  //  000E  NE	R3	R2	R3
      0x780E0023,  //  000F  JMPF	R3	#0034
      0x8C0C052D,  //  0010  GETMET	R3	R2	K45
      0x58140011,  //  0011  LDCONST	R5	K17
      0x4C180000,  //  0012  LDNIL	R6
      0x7C0C0600,  //  0013  CALL	R3	3
      0x8810010A,  //  0014  GETMBR	R4	R0	K10
      0x20100604,  //  0015  NE	R4	R3	R4
      0x78120004,  //  0016  JMPF	R4	#001C
      0x8C10010B,  //  0017  GETMET	R4	R0	K11
      0x541A0005,  //  0018  LDINT	R6	6
      0x581C0003,  //  0019  LDCONST	R7	K3
      0x7C100600,  //  001A  CALL	R4	3
      0x90021403,  //  001B  SETMBR	R0	K10	R3
      0x8C10052D,  //  001C  GETMET	R4	R2	K45
      0x5818000F,  //  001D  LDCONST	R6	K15
      0x4C1C0000,  //  001E  LDNIL	R7
      0x7C100600,  //  001F  CALL	R4	3
      0x4C140000,  //  0020  LDNIL	R5
      0x20140805,  //  0021  NE	R5	R4	R5
      0x78160010,  //  0022  JMPF	R5	#0034
      0xB8160000,  //  0023  GETNGBL	R5	K0
      0x8C140B05,  //  0024  GETMET	R5	R5	K5
      0x5C1C0800,  //  0025  MOVE	R7	R4
      0x58200003,  //  0026  LDCONST	R8	K3
      0x542600FE,  //  0027  LDINT	R9	255
      0x58280003,  //  0028  LDCONST	R10	K3
      0x542E00FD,  //  0029  LDINT	R11	254
      0x7C140C00,  //  002A  CALL	R5	6
      0x5C100A00,  //  002B  MOVE	R4	R5
      0x8814010C,  //  002C  GETMBR	R5	R0	K12
      0x20140805,  //  002D  NE	R5	R4	R5
      0x78160004,  //  002E  JMPF	R5	#0034
      0x8C14010B,  //  002F  GETMET	R5	R0	K11
      0x541E0007,  //  0030  LDINT	R7	8
      0x58200003,  //  0031  LDCONST	R8	K3
      0x7C140600,  //  0032  CALL	R5	3
      0x90021804,  //  0033  SETMBR	R0	K12	R4
      0x60040003,  //  0034  GETGBL	R1	G3
      0x5C080000,  //  0035  MOVE	R2	R0
      0x7C040200,  //  0036  CALL	R1	1
      0x8C040312,  //  0037  GETMET	R1	R1	K18
      0x7C040200,  //  0038  CALL	R1	1
      0x80000000,  //  0039  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Light1
********************************************************************/
extern const bclass be_class_Matter_Plugin_Light0;
be_local_class(Matter_Plugin_Light1,
    1,
    &be_class_Matter_Plugin_Light0,
    be_nested_map(18,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG_HINT, 16), be_nested_str_weak(_X28opt_X29_X20Light_X20number) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(light1) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(257, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(UPDATE_COMMANDS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(2,
    ( (struct bvalue*) &(const bvalue[]) {
        be_nested_str_weak(Power),
        be_nested_str_weak(Bri),
    }))    ) } )) },
        { be_const_key_weak(web_value_dimmer, 13), be_const_closure(class_Matter_Plugin_Light1_web_value_dimmer_closure) },
        { be_const_key_weak(set_bri, 17), be_const_closure(class_Matter_Plugin_Light1_set_bri_closure) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(class_Matter_Plugin_Light1_read_attribute_closure) },
        { be_const_key_weak(parse_configuration, 10), be_const_closure(class_Matter_Plugin_Light1_parse_configuration_closure) },
        { be_const_key_weak(update_virtual, -1), be_const_closure(class_Matter_Plugin_Light1_update_virtual_closure) },
        { be_const_key_weak(DISPLAY_NAME, 0), be_nested_str_weak(Light_X201_X20Dimmer) },
        { be_const_key_weak(update_shadow, 12), be_const_closure(class_Matter_Plugin_Light1_update_shadow_closure) },
        { be_const_key_weak(parse_status, -1), be_const_closure(class_Matter_Plugin_Light1_parse_status_closure) },
        { be_const_key_weak(shadow_bri, -1), be_const_var(0) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(7,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(29, 2), be_const_bytes_instance(0000000100020003FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(8, 0), be_const_bytes_instance(000000020003000F0011FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(57, -1), be_const_bytes_instance(00030005000A000F00110012FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(3, -1), be_const_bytes_instance(00000001FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(4, -1), be_const_bytes_instance(0000FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(5, -1), be_const_bytes_instance(000000010002000300040005FFF8FFF9FFFAFFFBFFFCFFFD) },
        { be_const_key_int(6, -1), be_const_bytes_instance(0000FFF8FFF9FFFAFFFBFFFCFFFD) },
    }))    ) } )) },
        { be_const_key_weak(web_values, -1), be_const_closure(class_Matter_Plugin_Light1_web_values_closure) },
        { be_const_key_weak(init, 11), be_const_closure(class_Matter_Plugin_Light1_init_closure) },
        { be_const_key_weak(ARG, -1), be_nested_str_weak(light) },
        { be_const_key_weak(invoke_request, -1), be_const_closure(class_Matter_Plugin_Light1_invoke_request_closure) },
    })),
    be_str_weak(Matter_Plugin_Light1)
);
/********************************************************************/
/* End of solidification */
