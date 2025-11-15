/* Solidification of Matter_MessageHandler.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_MessageHandler' ktab size: 89, total: 120 (saved 248 bytes)
static const bvalue be_ktab_class_Matter_MessageHandler[89] = {
  /* K0   */  be_nested_str_weak(device),
  /* K1   */  be_nested_str_weak(commissioning),
  /* K2   */  be_nested_str_weak(matter),
  /* K3   */  be_nested_str_weak(Commisioning_Context),
  /* K4   */  be_nested_str_weak(im),
  /* K5   */  be_nested_str_weak(IM),
  /* K6   */  be_nested_str_weak(control_message),
  /* K7   */  be_nested_str_weak(Control_Message),
  /* K8   */  be_nested_str_weak(_n_bytes),
  /* K9   */  be_nested_str_weak(x_flag_r),
  /* K10  */  be_nested_str_weak(build_standalone_ack),
  /* K11  */  be_nested_str_weak(encode_frame),
  /* K12  */  be_nested_str_weak(encrypt),
  /* K13  */  be_nested_str_weak(tasmota),
  /* K14  */  be_nested_str_weak(loglevel),
  /* K15  */  be_nested_str_weak(log),
  /* K16  */  be_nested_str_weak(MTR_X3A_X20_X3CAck_X2A_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20ack_X3D_X25i_X20id_X3D_X25i_X20_X25s),
  /* K17  */  be_nested_str_weak(session),
  /* K18  */  be_nested_str_weak(local_session_id),
  /* K19  */  be_nested_str_weak(ack_message_counter),
  /* K20  */  be_nested_str_weak(message_counter),
  /* K21  */  be_nested_str_weak(_X7Breliable_X7D),
  /* K22  */  be_nested_str_weak(),
  /* K23  */  be_nested_str_weak(send_response_frame),
  /* K24  */  be_nested_str_weak(FUCK_X20YOU_X20msg_received),
  /* K25  */  be_nested_str_weak(MTR_X3A_X20MessageHandler_X3A_X3Amsg_received_X20raw_X3D),
  /* K26  */  be_nested_str_weak(tohex),
  /* K27  */  be_nested_str_weak(Frame),
  /* K28  */  be_nested_str_weak(decode_header),
  /* K29  */  be_nested_str_weak(sec_p),
  /* K30  */  be_nested_str_weak(sessions),
  /* K31  */  be_nested_str_weak(find_session_source_id_unsecure),
  /* K32  */  be_nested_str_weak(source_node_id),
  /* K33  */  be_nested_str_weak(process_incoming_control_message),
  /* K34  */  be_const_int(0),
  /* K35  */  be_nested_str_weak(sec_sesstype),
  /* K36  */  be_nested_str_weak(_ip),
  /* K37  */  be_nested_str_weak(_port),
  /* K38  */  be_nested_str_weak(_message_handler),
  /* K39  */  be_nested_str_weak(_counter_insecure_rcv),
  /* K40  */  be_nested_str_weak(validate),
  /* K41  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20unencrypted_X20message_X20_X3D_X20_X25i_X20ref_X20_X3D_X20_X25i),
  /* K42  */  be_nested_str_weak(val),
  /* K43  */  be_nested_str_weak(send_simple_ack),
  /* K44  */  be_nested_str_weak(decode_payload),
  /* K45  */  be_nested_str_weak(received_ack),
  /* K46  */  be_nested_str_weak(opcode),
  /* K47  */  be_nested_str_weak(get_opcode_name),
  /* K48  */  be_nested_str_weak(0x_X2502X),
  /* K49  */  be_const_int(3),
  /* K50  */  be_nested_str_weak(MTR_X3A_X20_X3EReceived_X20_X20_X28_X256i_X29_X20_X25s_X20from_X20_X5B_X25s_X5D_X3A_X25i),
  /* K51  */  be_nested_str_weak(MTR_X3A_X20_X3Ercv_X20Ack_X20_X20_X20_X28_X256i_X29_X20rid_X3D_X25i_X20exch_X3D_X25i_X20ack_X3D_X25s_X20_X25sfrom_X20_X5B_X25s_X5D_X3A_X25i),
  /* K52  */  be_nested_str_weak(_X7Breliable_X7D_X20),
  /* K53  */  be_nested_str_weak(exchange_id),
  /* K54  */  be_nested_str_weak(FUCK_X20You_X20commissioning_X2Eprocess_incoming),
  /* K55  */  be_nested_str_weak(process_incoming),
  /* K56  */  be_nested_str_weak(MTR_X3A_X20decode_X20header_X3A_X20local_session_id_X3D_X25i_X20message_counter_X3D_X25i),
  /* K57  */  be_nested_str_weak(get_session_by_local_session_id),
  /* K58  */  be_nested_str_weak(MTR_X3A_X20unknown_X20local_session_id_X3D),
  /* K59  */  be_nested_str_weak(counter_rcv_validate),
  /* K60  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20encrypted_X20message_X20_X3D_X20),
  /* K61  */  be_nested_str_weak(_X20counter_X3D),
  /* K62  */  be_nested_str_weak(counter_rcv),
  /* K63  */  be_nested_str_weak(send_encrypted_ack),
  /* K64  */  be_nested_str_weak(decrypt),
  /* K65  */  be_nested_str_weak(FUCK_X20YOU_X20header_X20decoded_X20not_X20ok),
  /* K66  */  be_nested_str_weak(FUCK_X20YOU_X20header_X20decoded_X20ok),
  /* K67  */  be_nested_str_weak(MTR_X3A_X20_X3E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Decrypted_X20message_X3A_X20protocol_id_X3A),
  /* K68  */  be_nested_str_weak(protocol_id),
  /* K69  */  be_nested_str_weak(_X20opcode_X3D),
  /* K70  */  be_nested_str_weak(_X20exchange_id_X3D),
  /* K71  */  be_nested_str_weak(FUCK_X20YOU_X20message_X20from_X20_X25s),
  /* K72  */  be_nested_str_weak(MTR_X3A_X20PROTOCOL_ID_SECURE_CHANNEL_X20),
  /* K73  */  be_nested_str_weak(inspect),
  /* K74  */  be_nested_str_weak(process_incoming_ack),
  /* K75  */  be_nested_str_weak(send_enqueued),
  /* K76  */  be_const_int(1),
  /* K77  */  be_nested_str_weak(FUCK_X20You_X20self_X2Eim_X2Eprocess_incoming),
  /* K78  */  be_nested_str_weak(MTR_X3A_X20ignoring_X20unhandled_X20protocol_id_X3A),
  /* K79  */  be_nested_str_weak(MTR_X3A_X20MessageHandler_X3A_X3Amsg_received_X20exception_X3A_X20),
  /* K80  */  be_nested_str_weak(_X3B),
  /* K81  */  be_const_int(2),
  /* K82  */  be_nested_str_weak(_debug_present),
  /* K83  */  be_nested_str_weak(debug),
  /* K84  */  be_nested_str_weak(traceback),
  /* K85  */  be_nested_str_weak(msg_send),
  /* K86  */  be_nested_str_weak(MTR_X3A_X20_X3CAck_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20ack_X3D_X25i_X20id_X3D_X25i_X20_X25s),
  /* K87  */  be_nested_str_weak(every_50ms),
  /* K88  */  be_nested_str_weak(every_second),
};


extern const bclass be_class_Matter_MessageHandler;

/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_MessageHandler_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0xB80A0400,  //  0001  GETNGBL	R2	K2
      0x8C080503,  //  0002  GETMET	R2	R2	K3
      0x5C100000,  //  0003  MOVE	R4	R0
      0x7C080400,  //  0004  CALL	R2	2
      0x90020202,  //  0005  SETMBR	R0	K1	R2
      0xB80A0400,  //  0006  GETNGBL	R2	K2
      0x8C080505,  //  0007  GETMET	R2	R2	K5
      0x5C100200,  //  0008  MOVE	R4	R1
      0x7C080400,  //  0009  CALL	R2	2
      0x90020802,  //  000A  SETMBR	R0	K4	R2
      0xB80A0400,  //  000B  GETNGBL	R2	K2
      0x8C080507,  //  000C  GETMET	R2	R2	K7
      0x5C100000,  //  000D  MOVE	R4	R0
      0x7C080400,  //  000E  CALL	R2	2
      0x90020C02,  //  000F  SETMBR	R0	K6	R2
      0x60080015,  //  0010  GETGBL	R2	G21
      0x540E000F,  //  0011  LDINT	R3	16
      0x7C080200,  //  0012  CALL	R2	1
      0x90021002,  //  0013  SETMBR	R0	K8	R2
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_encrypted_ack
********************************************************************/
be_local_closure(class_Matter_MessageHandler_send_encrypted_ack,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(send_encrypted_ack),
    &be_const_str_solidified,
    ( &(const binstruction[32]) {  /* code */
      0x880C0309,  //  0000  GETMBR	R3	R1	K9
      0x780E001C,  //  0001  JMPF	R3	#001F
      0x8C0C030A,  //  0002  GETMET	R3	R1	K10
      0x5C140400,  //  0003  MOVE	R5	R2
      0x7C0C0400,  //  0004  CALL	R3	2
      0x8C10070B,  //  0005  GETMET	R4	R3	K11
      0x7C100200,  //  0006  CALL	R4	1
      0x8C10070C,  //  0007  GETMET	R4	R3	K12
      0x7C100200,  //  0008  CALL	R4	1
      0xB8121A00,  //  0009  GETNGBL	R4	K13
      0x8C10090E,  //  000A  GETMET	R4	R4	K14
      0x541A0003,  //  000B  LDINT	R6	4
      0x7C100400,  //  000C  CALL	R4	2
      0x7812000D,  //  000D  JMPF	R4	#001C
      0xB8121E00,  //  000E  GETNGBL	R4	K15
      0x60140018,  //  000F  GETGBL	R5	G24
      0x58180010,  //  0010  LDCONST	R6	K16
      0x881C0711,  //  0011  GETMBR	R7	R3	K17
      0x881C0F12,  //  0012  GETMBR	R7	R7	K18
      0x88200713,  //  0013  GETMBR	R8	R3	K19
      0x88240714,  //  0014  GETMBR	R9	R3	K20
      0x780A0001,  //  0015  JMPF	R2	#0018
      0x58280015,  //  0016  LDCONST	R10	K21
      0x70020000,  //  0017  JMP		#0019
      0x58280016,  //  0018  LDCONST	R10	K22
      0x7C140A00,  //  0019  CALL	R5	5
      0x541A0003,  //  001A  LDINT	R6	4
      0x7C100400,  //  001B  CALL	R4	2
      0x8C100117,  //  001C  GETMET	R4	R0	K23
      0x5C180600,  //  001D  MOVE	R6	R3
      0x7C100400,  //  001E  CALL	R4	2
      0x80000000,  //  001F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: msg_received
********************************************************************/
be_local_closure(class_Matter_MessageHandler_msg_received,   /* name */
  be_nested_proto(
    18,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(msg_received),
    &be_const_str_solidified,
    ( &(const binstruction[370]) {  /* code */
      0x50100000,  //  0000  LDBOOL	R4	0	0
      0xB8161A00,  //  0001  GETNGBL	R5	K13
      0x8C140B0F,  //  0002  GETMET	R5	R5	K15
      0x581C0018,  //  0003  LDCONST	R7	K24
      0x7C140400,  //  0004  CALL	R5	2
      0xA8020152,  //  0005  EXBLK	0	#0159
      0xB8161E00,  //  0006  GETNGBL	R5	K15
      0x8C18031A,  //  0007  GETMET	R6	R1	K26
      0x7C180200,  //  0008  CALL	R6	1
      0x001A3206,  //  0009  ADD	R6	K25	R6
      0x541E0003,  //  000A  LDINT	R7	4
      0x7C140400,  //  000B  CALL	R5	2
      0xB8160400,  //  000C  GETNGBL	R5	K2
      0x8C140B1B,  //  000D  GETMET	R5	R5	K27
      0x5C1C0000,  //  000E  MOVE	R7	R0
      0x5C200200,  //  000F  MOVE	R8	R1
      0x5C240400,  //  0010  MOVE	R9	R2
      0x5C280600,  //  0011  MOVE	R10	R3
      0x7C140A00,  //  0012  CALL	R5	5
      0x8C180B1C,  //  0013  GETMET	R6	R5	K28
      0x7C180200,  //  0014  CALL	R6	1
      0x5C1C0C00,  //  0015  MOVE	R7	R6
      0x741E0002,  //  0016  JMPT	R7	#001A
      0x501C0000,  //  0017  LDBOOL	R7	0	0
      0xA8040001,  //  0018  EXBLK	1	1
      0x80040E00,  //  0019  RET	1	R7
      0x881C0B1D,  //  001A  GETMBR	R7	R5	K29
      0x781E000C,  //  001B  JMPF	R7	#0029
      0x881C0100,  //  001C  GETMBR	R7	R0	K0
      0x881C0F1E,  //  001D  GETMBR	R7	R7	K30
      0x8C1C0F1F,  //  001E  GETMET	R7	R7	K31
      0x88240B20,  //  001F  GETMBR	R9	R5	K32
      0x542A0059,  //  0020  LDINT	R10	90
      0x7C1C0600,  //  0021  CALL	R7	3
      0x88200106,  //  0022  GETMBR	R8	R0	K6
      0x8C201121,  //  0023  GETMET	R8	R8	K33
      0x5C280A00,  //  0024  MOVE	R10	R5
      0x7C200400,  //  0025  CALL	R8	2
      0xA8040001,  //  0026  EXBLK	1	1
      0x80041000,  //  0027  RET	1	R8
      0x7002012B,  //  0028  JMP		#0155
      0x881C0B12,  //  0029  GETMBR	R7	R5	K18
      0x1C1C0F22,  //  002A  EQ	R7	R7	K34
      0x781E007D,  //  002B  JMPF	R7	#00AA
      0x881C0B23,  //  002C  GETMBR	R7	R5	K35
      0x1C1C0F22,  //  002D  EQ	R7	R7	K34
      0x781E007A,  //  002E  JMPF	R7	#00AA
      0x881C0100,  //  002F  GETMBR	R7	R0	K0
      0x881C0F1E,  //  0030  GETMBR	R7	R7	K30
      0x8C1C0F1F,  //  0031  GETMET	R7	R7	K31
      0x88240B20,  //  0032  GETMBR	R9	R5	K32
      0x542A0059,  //  0033  LDINT	R10	90
      0x7C1C0600,  //  0034  CALL	R7	3
      0x780A0000,  //  0035  JMPF	R2	#0037
      0x901E4802,  //  0036  SETMBR	R7	K36	R2
      0x780E0000,  //  0037  JMPF	R3	#0039
      0x901E4A03,  //  0038  SETMBR	R7	K37	R3
      0x901E4C00,  //  0039  SETMBR	R7	K38	R0
      0x90162207,  //  003A  SETMBR	R5	K17	R7
      0x88200F27,  //  003B  GETMBR	R8	R7	K39
      0x8C201128,  //  003C  GETMET	R8	R8	K40
      0x88280B14,  //  003D  GETMBR	R10	R5	K20
      0x502C0000,  //  003E  LDBOOL	R11	0	0
      0x7C200600,  //  003F  CALL	R8	3
      0x74220015,  //  0040  JMPT	R8	#0057
      0xB8221A00,  //  0041  GETNGBL	R8	K13
      0x8C20110E,  //  0042  GETMET	R8	R8	K14
      0x542A0003,  //  0043  LDINT	R10	4
      0x7C200400,  //  0044  CALL	R8	2
      0x78220009,  //  0045  JMPF	R8	#0050
      0xB8221E00,  //  0046  GETNGBL	R8	K15
      0x60240018,  //  0047  GETGBL	R9	G24
      0x58280029,  //  0048  LDCONST	R10	K41
      0x882C0B14,  //  0049  GETMBR	R11	R5	K20
      0x88300F27,  //  004A  GETMBR	R12	R7	K39
      0x8C30192A,  //  004B  GETMET	R12	R12	K42
      0x7C300200,  //  004C  CALL	R12	1
      0x7C240600,  //  004D  CALL	R9	3
      0x542A0003,  //  004E  LDINT	R10	4
      0x7C200400,  //  004F  CALL	R8	2
      0x8C20012B,  //  0050  GETMET	R8	R0	K43
      0x5C280A00,  //  0051  MOVE	R10	R5
      0x502C0000,  //  0052  LDBOOL	R11	0	0
      0x7C200600,  //  0053  CALL	R8	3
      0x50200000,  //  0054  LDBOOL	R8	0	0
      0xA8040001,  //  0055  EXBLK	1	1
      0x80041000,  //  0056  RET	1	R8
      0x8C200B2C,  //  0057  GETMET	R8	R5	K44
      0x7C200200,  //  0058  CALL	R8	1
      0x74220002,  //  0059  JMPT	R8	#005D
      0x50200000,  //  005A  LDBOOL	R8	0	0
      0xA8040001,  //  005B  EXBLK	1	1
      0x80041000,  //  005C  RET	1	R8
      0x88200100,  //  005D  GETMBR	R8	R0	K0
      0x8C20112D,  //  005E  GETMET	R8	R8	K45
      0x5C280A00,  //  005F  MOVE	R10	R5
      0x7C200400,  //  0060  CALL	R8	2
      0x88200B2E,  //  0061  GETMBR	R8	R5	K46
      0x5426000F,  //  0062  LDINT	R9	16
      0x20201009,  //  0063  NE	R8	R8	R9
      0x7822001A,  //  0064  JMPF	R8	#0080
      0xB8220400,  //  0065  GETNGBL	R8	K2
      0x8C20112F,  //  0066  GETMET	R8	R8	K47
      0x88280B2E,  //  0067  GETMBR	R10	R5	K46
      0x7C200400,  //  0068  CALL	R8	2
      0x5C241000,  //  0069  MOVE	R9	R8
      0x74260004,  //  006A  JMPT	R9	#0070
      0x60240018,  //  006B  GETGBL	R9	G24
      0x58280030,  //  006C  LDCONST	R10	K48
      0x882C0B2E,  //  006D  GETMBR	R11	R5	K46
      0x7C240400,  //  006E  CALL	R9	2
      0x5C201200,  //  006F  MOVE	R8	R9
      0xB8261A00,  //  0070  GETNGBL	R9	K13
      0x8C24130E,  //  0071  GETMET	R9	R9	K14
      0x582C0031,  //  0072  LDCONST	R11	K49
      0x7C240400,  //  0073  CALL	R9	2
      0x78260009,  //  0074  JMPF	R9	#007F
      0xB8261E00,  //  0075  GETNGBL	R9	K15
      0x60280018,  //  0076  GETGBL	R10	G24
      0x582C0032,  //  0077  LDCONST	R11	K50
      0x88300F12,  //  0078  GETMBR	R12	R7	K18
      0x5C341000,  //  0079  MOVE	R13	R8
      0x5C380400,  //  007A  MOVE	R14	R2
      0x5C3C0600,  //  007B  MOVE	R15	R3
      0x7C280A00,  //  007C  CALL	R10	5
      0x582C0031,  //  007D  LDCONST	R11	K49
      0x7C240400,  //  007E  CALL	R9	2
      0x70020017,  //  007F  JMP		#0098
      0xB8221A00,  //  0080  GETNGBL	R8	K13
      0x8C20110E,  //  0081  GETMET	R8	R8	K14
      0x542A0003,  //  0082  LDINT	R10	4
      0x7C200400,  //  0083  CALL	R8	2
      0x78220012,  //  0084  JMPF	R8	#0098
      0xB8221E00,  //  0085  GETNGBL	R8	K15
      0x60240018,  //  0086  GETGBL	R9	G24
      0x58280033,  //  0087  LDCONST	R10	K51
      0x882C0F12,  //  0088  GETMBR	R11	R7	K18
      0x88300B14,  //  0089  GETMBR	R12	R5	K20
      0x88340B09,  //  008A  GETMBR	R13	R5	K9
      0x78360001,  //  008B  JMPF	R13	#008E
      0x58340034,  //  008C  LDCONST	R13	K52
      0x70020000,  //  008D  JMP		#008F
      0x58340016,  //  008E  LDCONST	R13	K22
      0x88380B35,  //  008F  GETMBR	R14	R5	K53
      0x603C0008,  //  0090  GETGBL	R15	G8
      0x88400B13,  //  0091  GETMBR	R16	R5	K19
      0x7C3C0200,  //  0092  CALL	R15	1
      0x5C400400,  //  0093  MOVE	R16	R2
      0x5C440600,  //  0094  MOVE	R17	R3
      0x7C241000,  //  0095  CALL	R9	8
      0x542A0003,  //  0096  LDINT	R10	4
      0x7C200400,  //  0097  CALL	R8	2
      0xB8221E00,  //  0098  GETNGBL	R8	K15
      0x58240036,  //  0099  LDCONST	R9	K54
      0x7C200200,  //  009A  CALL	R8	1
      0x88200101,  //  009B  GETMBR	R8	R0	K1
      0x8C201137,  //  009C  GETMET	R8	R8	K55
      0x5C280A00,  //  009D  MOVE	R10	R5
      0x7C200400,  //  009E  CALL	R8	2
      0x5C101000,  //  009F  MOVE	R4	R8
      0x5C200800,  //  00A0  MOVE	R8	R4
      0x74220003,  //  00A1  JMPT	R8	#00A6
      0x8C20012B,  //  00A2  GETMET	R8	R0	K43
      0x5C280A00,  //  00A3  MOVE	R10	R5
      0x502C0000,  //  00A4  LDBOOL	R11	0	0
      0x7C200600,  //  00A5  CALL	R8	3
      0x50200200,  //  00A6  LDBOOL	R8	1	0
      0xA8040001,  //  00A7  EXBLK	1	1
      0x80041000,  //  00A8  RET	1	R8
      0x700200AA,  //  00A9  JMP		#0155
      0xB81E1A00,  //  00AA  GETNGBL	R7	K13
      0x8C1C0F0E,  //  00AB  GETMET	R7	R7	K14
      0x54260003,  //  00AC  LDINT	R9	4
      0x7C1C0400,  //  00AD  CALL	R7	2
      0x781E0007,  //  00AE  JMPF	R7	#00B7
      0xB81E1E00,  //  00AF  GETNGBL	R7	K15
      0x60200018,  //  00B0  GETGBL	R8	G24
      0x58240038,  //  00B1  LDCONST	R9	K56
      0x88280B12,  //  00B2  GETMBR	R10	R5	K18
      0x882C0B14,  //  00B3  GETMBR	R11	R5	K20
      0x7C200600,  //  00B4  CALL	R8	3
      0x54260003,  //  00B5  LDINT	R9	4
      0x7C1C0400,  //  00B6  CALL	R7	2
      0x881C0100,  //  00B7  GETMBR	R7	R0	K0
      0x881C0F1E,  //  00B8  GETMBR	R7	R7	K30
      0x8C1C0F39,  //  00B9  GETMET	R7	R7	K57
      0x88240B12,  //  00BA  GETMBR	R9	R5	K18
      0x7C1C0400,  //  00BB  CALL	R7	2
      0x4C200000,  //  00BC  LDNIL	R8
      0x1C200E08,  //  00BD  EQ	R8	R7	R8
      0x78220009,  //  00BE  JMPF	R8	#00C9
      0xB8221E00,  //  00BF  GETNGBL	R8	K15
      0x60240008,  //  00C0  GETGBL	R9	G8
      0x88280B12,  //  00C1  GETMBR	R10	R5	K18
      0x7C240200,  //  00C2  CALL	R9	1
      0x00267409,  //  00C3  ADD	R9	K58	R9
      0x58280031,  //  00C4  LDCONST	R10	K49
      0x7C200400,  //  00C5  CALL	R8	2
      0x50200000,  //  00C6  LDBOOL	R8	0	0
      0xA8040001,  //  00C7  EXBLK	1	1
      0x80041000,  //  00C8  RET	1	R8
      0x780A0000,  //  00C9  JMPF	R2	#00CB
      0x901E4802,  //  00CA  SETMBR	R7	K36	R2
      0x780E0000,  //  00CB  JMPF	R3	#00CD
      0x901E4A03,  //  00CC  SETMBR	R7	K37	R3
      0x901E4C00,  //  00CD  SETMBR	R7	K38	R0
      0x90162207,  //  00CE  SETMBR	R5	K17	R7
      0x8C200F3B,  //  00CF  GETMET	R8	R7	K59
      0x88280B14,  //  00D0  GETMBR	R10	R5	K20
      0x502C0200,  //  00D1  LDBOOL	R11	1	0
      0x7C200600,  //  00D2  CALL	R8	3
      0x74220017,  //  00D3  JMPT	R8	#00EC
      0xB8221A00,  //  00D4  GETNGBL	R8	K13
      0x8C20110E,  //  00D5  GETMET	R8	R8	K14
      0x58280031,  //  00D6  LDCONST	R10	K49
      0x7C200400,  //  00D7  CALL	R8	2
      0x7822000B,  //  00D8  JMPF	R8	#00E5
      0xB8221E00,  //  00D9  GETNGBL	R8	K15
      0x60240008,  //  00DA  GETGBL	R9	G8
      0x88280B14,  //  00DB  GETMBR	R10	R5	K20
      0x7C240200,  //  00DC  CALL	R9	1
      0x00267809,  //  00DD  ADD	R9	K60	R9
      0x0024133D,  //  00DE  ADD	R9	R9	K61
      0x60280008,  //  00DF  GETGBL	R10	G8
      0x882C0F3E,  //  00E0  GETMBR	R11	R7	K62
      0x7C280200,  //  00E1  CALL	R10	1
      0x0024120A,  //  00E2  ADD	R9	R9	R10
      0x58280031,  //  00E3  LDCONST	R10	K49
      0x7C200400,  //  00E4  CALL	R8	2
      0x8C20013F,  //  00E5  GETMET	R8	R0	K63
      0x5C280A00,  //  00E6  MOVE	R10	R5
      0x502C0000,  //  00E7  LDBOOL	R11	0	0
      0x7C200600,  //  00E8  CALL	R8	3
      0x50200000,  //  00E9  LDBOOL	R8	0	0
      0xA8040001,  //  00EA  EXBLK	1	1
      0x80041000,  //  00EB  RET	1	R8
      0x8C200B40,  //  00EC  GETMET	R8	R5	K64
      0x7C200200,  //  00ED  CALL	R8	1
      0x5C241000,  //  00EE  MOVE	R9	R8
      0x74260005,  //  00EF  JMPT	R9	#00F6
      0xB8261E00,  //  00F0  GETNGBL	R9	K15
      0x58280041,  //  00F1  LDCONST	R10	K65
      0x7C240200,  //  00F2  CALL	R9	1
      0x50240000,  //  00F3  LDBOOL	R9	0	0
      0xA8040001,  //  00F4  EXBLK	1	1
      0x80041200,  //  00F5  RET	1	R9
      0xB8261E00,  //  00F6  GETNGBL	R9	K15
      0x58280042,  //  00F7  LDCONST	R10	K66
      0x7C240200,  //  00F8  CALL	R9	1
      0x8C240B2C,  //  00F9  GETMET	R9	R5	K44
      0x7C240200,  //  00FA  CALL	R9	1
      0xB8261A00,  //  00FB  GETNGBL	R9	K13
      0x8C24130E,  //  00FC  GETMET	R9	R9	K14
      0x542E0003,  //  00FD  LDINT	R11	4
      0x7C240400,  //  00FE  CALL	R9	2
      0x78260012,  //  00FF  JMPF	R9	#0113
      0xB8261E00,  //  0100  GETNGBL	R9	K15
      0x60280008,  //  0101  GETGBL	R10	G8
      0x882C0B44,  //  0102  GETMBR	R11	R5	K68
      0x7C280200,  //  0103  CALL	R10	1
      0x002A860A,  //  0104  ADD	R10	K67	R10
      0x00281545,  //  0105  ADD	R10	R10	K69
      0x602C0008,  //  0106  GETGBL	R11	G8
      0x88300B2E,  //  0107  GETMBR	R12	R5	K46
      0x7C2C0200,  //  0108  CALL	R11	1
      0x0028140B,  //  0109  ADD	R10	R10	R11
      0x00281546,  //  010A  ADD	R10	R10	K70
      0x602C0008,  //  010B  GETGBL	R11	G8
      0x88300B35,  //  010C  GETMBR	R12	R5	K53
      0x5436FFFE,  //  010D  LDINT	R13	65535
      0x2C30180D,  //  010E  AND	R12	R12	R13
      0x7C2C0200,  //  010F  CALL	R11	1
      0x0028140B,  //  0110  ADD	R10	R10	R11
      0x542E0003,  //  0111  LDINT	R11	4
      0x7C240400,  //  0112  CALL	R9	2
      0xB8261E00,  //  0113  GETNGBL	R9	K15
      0x60280018,  //  0114  GETGBL	R10	G24
      0x582C0047,  //  0115  LDCONST	R11	K71
      0x5C300400,  //  0116  MOVE	R12	R2
      0x7C280400,  //  0117  CALL	R10	2
      0x7C240200,  //  0118  CALL	R9	1
      0x88240100,  //  0119  GETMBR	R9	R0	K0
      0x8C24132D,  //  011A  GETMET	R9	R9	K45
      0x5C2C0A00,  //  011B  MOVE	R11	R5
      0x7C240400,  //  011C  CALL	R9	2
      0x88240B44,  //  011D  GETMBR	R9	R5	K68
      0x1C281322,  //  011E  EQ	R10	R9	K34
      0x782A0017,  //  011F  JMPF	R10	#0138
      0xB82A1E00,  //  0120  GETNGBL	R10	K15
      0xB82E0400,  //  0121  GETNGBL	R11	K2
      0x8C2C1749,  //  0122  GETMET	R11	R11	K73
      0x5C340A00,  //  0123  MOVE	R13	R5
      0x7C2C0400,  //  0124  CALL	R11	2
      0x002E900B,  //  0125  ADD	R11	K72	R11
      0x58300031,  //  0126  LDCONST	R12	K49
      0x7C280400,  //  0127  CALL	R10	2
      0x88280B2E,  //  0128  GETMBR	R10	R5	K46
      0x542E000F,  //  0129  LDINT	R11	16
      0x1C28140B,  //  012A  EQ	R10	R10	R11
      0x782A0009,  //  012B  JMPF	R10	#0136
      0x88280104,  //  012C  GETMBR	R10	R0	K4
      0x8C28154A,  //  012D  GETMET	R10	R10	K74
      0x5C300A00,  //  012E  MOVE	R12	R5
      0x7C280400,  //  012F  CALL	R10	2
      0x5C101400,  //  0130  MOVE	R4	R10
      0x78120003,  //  0131  JMPF	R4	#0136
      0x88280104,  //  0132  GETMBR	R10	R0	K4
      0x8C28154B,  //  0133  GETMET	R10	R10	K75
      0x5C300000,  //  0134  MOVE	R12	R0
      0x7C280400,  //  0135  CALL	R10	2
      0x50100200,  //  0136  LDBOOL	R4	1	0
      0x7002001C,  //  0137  JMP		#0155
      0x1C28134C,  //  0138  EQ	R10	R9	K76
      0x782A0013,  //  0139  JMPF	R10	#014E
      0xB82A1E00,  //  013A  GETNGBL	R10	K15
      0x582C004D,  //  013B  LDCONST	R11	K77
      0x7C280200,  //  013C  CALL	R10	1
      0x88280104,  //  013D  GETMBR	R10	R0	K4
      0x8C281537,  //  013E  GETMET	R10	R10	K55
      0x5C300A00,  //  013F  MOVE	R12	R5
      0x7C280400,  //  0140  CALL	R10	2
      0x5C101400,  //  0141  MOVE	R4	R10
      0x78120004,  //  0142  JMPF	R4	#0148
      0x88280104,  //  0143  GETMBR	R10	R0	K4
      0x8C28154B,  //  0144  GETMET	R10	R10	K75
      0x5C300000,  //  0145  MOVE	R12	R0
      0x7C280400,  //  0146  CALL	R10	2
      0x70020003,  //  0147  JMP		#014C
      0x8C28013F,  //  0148  GETMET	R10	R0	K63
      0x5C300A00,  //  0149  MOVE	R12	R5
      0x50340200,  //  014A  LDBOOL	R13	1	0
      0x7C280600,  //  014B  CALL	R10	3
      0x50100200,  //  014C  LDBOOL	R4	1	0
      0x70020006,  //  014D  JMP		#0155
      0xB82A1E00,  //  014E  GETNGBL	R10	K15
      0x602C0008,  //  014F  GETGBL	R11	G8
      0x5C301200,  //  0150  MOVE	R12	R9
      0x7C2C0200,  //  0151  CALL	R11	1
      0x002E9C0B,  //  0152  ADD	R11	K78	R11
      0x58300031,  //  0153  LDCONST	R12	K49
      0x7C280400,  //  0154  CALL	R10	2
      0xA8040001,  //  0155  EXBLK	1	1
      0x80040800,  //  0156  RET	1	R4
      0xA8040001,  //  0157  EXBLK	1	1
      0x70020017,  //  0158  JMP		#0171
      0xAC140002,  //  0159  CATCH	R5	0	2
      0x70020014,  //  015A  JMP		#0170
      0xB81E1E00,  //  015B  GETNGBL	R7	K15
      0x60200008,  //  015C  GETGBL	R8	G8
      0x5C240A00,  //  015D  MOVE	R9	R5
      0x7C200200,  //  015E  CALL	R8	1
      0x00229E08,  //  015F  ADD	R8	K79	R8
      0x00201150,  //  0160  ADD	R8	R8	K80
      0x60240008,  //  0161  GETGBL	R9	G8
      0x5C280C00,  //  0162  MOVE	R10	R6
      0x7C240200,  //  0163  CALL	R9	1
      0x00201009,  //  0164  ADD	R8	R8	R9
      0x58240051,  //  0165  LDCONST	R9	K81
      0x7C1C0400,  //  0166  CALL	R7	2
      0xB81E1A00,  //  0167  GETNGBL	R7	K13
      0x881C0F52,  //  0168  GETMBR	R7	R7	K82
      0x781E0002,  //  0169  JMPF	R7	#016D
      0xA41EA600,  //  016A  IMPORT	R7	K83
      0x8C200F54,  //  016B  GETMET	R8	R7	K84
      0x7C200200,  //  016C  CALL	R8	1
      0x501C0000,  //  016D  LDBOOL	R7	0	0
      0x80040E00,  //  016E  RET	1	R7
      0x70020000,  //  016F  JMP		#0171
      0xB0080000,  //  0170  RAISE	2	R0	R0
      0x80000000,  //  0171  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_response_frame
********************************************************************/
be_local_closure(class_Matter_MessageHandler_send_response_frame,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(send_response_frame),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080555,  //  0001  GETMET	R2	R2	K85
      0x5C100200,  //  0002  MOVE	R4	R1
      0x7C080400,  //  0003  CALL	R2	2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_simple_ack
********************************************************************/
be_local_closure(class_Matter_MessageHandler_send_simple_ack,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(send_simple_ack),
    &be_const_str_solidified,
    ( &(const binstruction[32]) {  /* code */
      0x880C0309,  //  0000  GETMBR	R3	R1	K9
      0x780E001C,  //  0001  JMPF	R3	#001F
      0x8C0C030A,  //  0002  GETMET	R3	R1	K10
      0x5C140400,  //  0003  MOVE	R5	R2
      0x7C0C0400,  //  0004  CALL	R3	2
      0x88100312,  //  0005  GETMBR	R4	R1	K18
      0x900E2404,  //  0006  SETMBR	R3	K18	R4
      0x8C10070B,  //  0007  GETMET	R4	R3	K11
      0x7C100200,  //  0008  CALL	R4	1
      0xB8121A00,  //  0009  GETNGBL	R4	K13
      0x8C10090E,  //  000A  GETMET	R4	R4	K14
      0x541A0003,  //  000B  LDINT	R6	4
      0x7C100400,  //  000C  CALL	R4	2
      0x7812000D,  //  000D  JMPF	R4	#001C
      0xB8121E00,  //  000E  GETNGBL	R4	K15
      0x60140018,  //  000F  GETGBL	R5	G24
      0x58180056,  //  0010  LDCONST	R6	K86
      0x881C0711,  //  0011  GETMBR	R7	R3	K17
      0x881C0F12,  //  0012  GETMBR	R7	R7	K18
      0x88200713,  //  0013  GETMBR	R8	R3	K19
      0x88240714,  //  0014  GETMBR	R9	R3	K20
      0x780A0001,  //  0015  JMPF	R2	#0018
      0x58280015,  //  0016  LDCONST	R10	K21
      0x70020000,  //  0017  JMP		#0019
      0x58280016,  //  0018  LDCONST	R10	K22
      0x7C140A00,  //  0019  CALL	R5	5
      0x541A0003,  //  001A  LDINT	R6	4
      0x7C100400,  //  001B  CALL	R4	2
      0x8C100117,  //  001C  GETMET	R4	R0	K23
      0x5C180600,  //  001D  MOVE	R6	R3
      0x7C100400,  //  001E  CALL	R4	2
      0x80000000,  //  001F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_50ms
********************************************************************/
be_local_closure(class_Matter_MessageHandler_every_50ms,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(every_50ms),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040104,  //  0000  GETMBR	R1	R0	K4
      0x8C040357,  //  0001  GETMET	R1	R1	K87
      0x7C040200,  //  0002  CALL	R1	1
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_second
********************************************************************/
be_local_closure(class_Matter_MessageHandler_every_second,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_MessageHandler,     /* shared constants */
    be_str_weak(every_second),
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x88040101,  //  0000  GETMBR	R1	R0	K1
      0x8C040358,  //  0001  GETMET	R1	R1	K88
      0x7C040200,  //  0002  CALL	R1	1
      0x88040104,  //  0003  GETMBR	R1	R0	K4
      0x8C040358,  //  0004  GETMET	R1	R1	K88
      0x7C040200,  //  0005  CALL	R1	1
      0x80000000,  //  0006  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_MessageHandler
********************************************************************/
be_local_class(Matter_MessageHandler,
    5,
    NULL,
    be_nested_map(12,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(commissioning, -1), be_const_var(1) },
        { be_const_key_weak(_n_bytes, 7), be_const_var(4) },
        { be_const_key_weak(send_encrypted_ack, -1), be_const_closure(class_Matter_MessageHandler_send_encrypted_ack_closure) },
        { be_const_key_weak(init, 5), be_const_closure(class_Matter_MessageHandler_init_closure) },
        { be_const_key_weak(msg_received, -1), be_const_closure(class_Matter_MessageHandler_msg_received_closure) },
        { be_const_key_weak(im, 11), be_const_var(2) },
        { be_const_key_weak(every_second, -1), be_const_closure(class_Matter_MessageHandler_every_second_closure) },
        { be_const_key_weak(every_50ms, -1), be_const_closure(class_Matter_MessageHandler_every_50ms_closure) },
        { be_const_key_weak(send_simple_ack, 1), be_const_closure(class_Matter_MessageHandler_send_simple_ack_closure) },
        { be_const_key_weak(send_response_frame, 6), be_const_closure(class_Matter_MessageHandler_send_response_frame_closure) },
        { be_const_key_weak(control_message, -1), be_const_var(3) },
        { be_const_key_weak(device, -1), be_const_var(0) },
    })),
    be_str_weak(Matter_MessageHandler)
);
/********************************************************************/
/* End of solidification */
