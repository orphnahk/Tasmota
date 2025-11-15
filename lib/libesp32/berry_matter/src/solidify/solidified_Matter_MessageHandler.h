/* Solidification of Matter_MessageHandler.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_MessageHandler' ktab size: 86, total: 117 (saved 248 bytes)
static const bvalue be_ktab_class_Matter_MessageHandler[86] = {
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
  /* K29  */  be_nested_str_weak(FUCK_X20YOU_X20header_X20decoded_X20not_X20ok),
  /* K30  */  be_nested_str_weak(FUCK_X20YOU_X20header_X20decoded_X20ok),
  /* K31  */  be_nested_str_weak(sec_p),
  /* K32  */  be_nested_str_weak(sessions),
  /* K33  */  be_nested_str_weak(find_session_source_id_unsecure),
  /* K34  */  be_nested_str_weak(source_node_id),
  /* K35  */  be_nested_str_weak(process_incoming_control_message),
  /* K36  */  be_const_int(0),
  /* K37  */  be_nested_str_weak(sec_sesstype),
  /* K38  */  be_nested_str_weak(_ip),
  /* K39  */  be_nested_str_weak(_port),
  /* K40  */  be_nested_str_weak(_message_handler),
  /* K41  */  be_nested_str_weak(_counter_insecure_rcv),
  /* K42  */  be_nested_str_weak(validate),
  /* K43  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20unencrypted_X20message_X20_X3D_X20_X25i_X20ref_X20_X3D_X20_X25i),
  /* K44  */  be_nested_str_weak(val),
  /* K45  */  be_nested_str_weak(send_simple_ack),
  /* K46  */  be_nested_str_weak(decode_payload),
  /* K47  */  be_nested_str_weak(received_ack),
  /* K48  */  be_nested_str_weak(opcode),
  /* K49  */  be_nested_str_weak(get_opcode_name),
  /* K50  */  be_nested_str_weak(0x_X2502X),
  /* K51  */  be_const_int(3),
  /* K52  */  be_nested_str_weak(MTR_X3A_X20_X3EReceived_X20_X20_X28_X256i_X29_X20_X25s_X20from_X20_X5B_X25s_X5D_X3A_X25i),
  /* K53  */  be_nested_str_weak(MTR_X3A_X20_X3Ercv_X20Ack_X20_X20_X20_X28_X256i_X29_X20rid_X3D_X25i_X20exch_X3D_X25i_X20ack_X3D_X25s_X20_X25sfrom_X20_X5B_X25s_X5D_X3A_X25i),
  /* K54  */  be_nested_str_weak(_X7Breliable_X7D_X20),
  /* K55  */  be_nested_str_weak(exchange_id),
  /* K56  */  be_nested_str_weak(FUCK_X20You_X20commissioning_X2Eprocess_incoming),
  /* K57  */  be_nested_str_weak(process_incoming),
  /* K58  */  be_nested_str_weak(MTR_X3A_X20decode_X20header_X3A_X20local_session_id_X3D_X25i_X20message_counter_X3D_X25i),
  /* K59  */  be_nested_str_weak(get_session_by_local_session_id),
  /* K60  */  be_nested_str_weak(MTR_X3A_X20unknown_X20local_session_id_X3D),
  /* K61  */  be_nested_str_weak(counter_rcv_validate),
  /* K62  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20encrypted_X20message_X20_X3D_X20),
  /* K63  */  be_nested_str_weak(_X20counter_X3D),
  /* K64  */  be_nested_str_weak(counter_rcv),
  /* K65  */  be_nested_str_weak(send_encrypted_ack),
  /* K66  */  be_nested_str_weak(decrypt),
  /* K67  */  be_nested_str_weak(MTR_X3A_X20_X3E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Decrypted_X20message_X3A_X20protocol_id_X3A),
  /* K68  */  be_nested_str_weak(protocol_id),
  /* K69  */  be_nested_str_weak(_X20opcode_X3D),
  /* K70  */  be_nested_str_weak(_X20exchange_id_X3D),
  /* K71  */  be_nested_str_weak(process_incoming_ack),
  /* K72  */  be_nested_str_weak(send_enqueued),
  /* K73  */  be_const_int(1),
  /* K74  */  be_nested_str_weak(FUCK_X20You_X20self_X2Eim_X2Eprocess_incoming),
  /* K75  */  be_nested_str_weak(MTR_X3A_X20ignoring_X20unhandled_X20protocol_id_X3A),
  /* K76  */  be_nested_str_weak(MTR_X3A_X20MessageHandler_X3A_X3Amsg_received_X20exception_X3A_X20),
  /* K77  */  be_nested_str_weak(_X3B),
  /* K78  */  be_const_int(2),
  /* K79  */  be_nested_str_weak(_debug_present),
  /* K80  */  be_nested_str_weak(debug),
  /* K81  */  be_nested_str_weak(traceback),
  /* K82  */  be_nested_str_weak(msg_send),
  /* K83  */  be_nested_str_weak(MTR_X3A_X20_X3CAck_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20ack_X3D_X25i_X20id_X3D_X25i_X20_X25s),
  /* K84  */  be_nested_str_weak(every_50ms),
  /* K85  */  be_nested_str_weak(every_second),
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
    ( &(const binstruction[356]) {  /* code */
      0x50100000,  //  0000  LDBOOL	R4	0	0
      0xB8161A00,  //  0001  GETNGBL	R5	K13
      0x8C140B0F,  //  0002  GETMET	R5	R5	K15
      0x581C0018,  //  0003  LDCONST	R7	K24
      0x7C140400,  //  0004  CALL	R5	2
      0xA8020144,  //  0005  EXBLK	0	#014B
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
      0x741E0005,  //  0016  JMPT	R7	#001D
      0xB81E1E00,  //  0017  GETNGBL	R7	K15
      0x5820001D,  //  0018  LDCONST	R8	K29
      0x7C1C0200,  //  0019  CALL	R7	1
      0x501C0000,  //  001A  LDBOOL	R7	0	0
      0xA8040001,  //  001B  EXBLK	1	1
      0x80040E00,  //  001C  RET	1	R7
      0xB81E1E00,  //  001D  GETNGBL	R7	K15
      0x5820001E,  //  001E  LDCONST	R8	K30
      0x7C1C0200,  //  001F  CALL	R7	1
      0x881C0B1F,  //  0020  GETMBR	R7	R5	K31
      0x781E000C,  //  0021  JMPF	R7	#002F
      0x881C0100,  //  0022  GETMBR	R7	R0	K0
      0x881C0F20,  //  0023  GETMBR	R7	R7	K32
      0x8C1C0F21,  //  0024  GETMET	R7	R7	K33
      0x88240B22,  //  0025  GETMBR	R9	R5	K34
      0x542A0059,  //  0026  LDINT	R10	90
      0x7C1C0600,  //  0027  CALL	R7	3
      0x88200106,  //  0028  GETMBR	R8	R0	K6
      0x8C201123,  //  0029  GETMET	R8	R8	K35
      0x5C280A00,  //  002A  MOVE	R10	R5
      0x7C200400,  //  002B  CALL	R8	2
      0xA8040001,  //  002C  EXBLK	1	1
      0x80041000,  //  002D  RET	1	R8
      0x70020117,  //  002E  JMP		#0147
      0x881C0B12,  //  002F  GETMBR	R7	R5	K18
      0x1C1C0F24,  //  0030  EQ	R7	R7	K36
      0x781E007D,  //  0031  JMPF	R7	#00B0
      0x881C0B25,  //  0032  GETMBR	R7	R5	K37
      0x1C1C0F24,  //  0033  EQ	R7	R7	K36
      0x781E007A,  //  0034  JMPF	R7	#00B0
      0x881C0100,  //  0035  GETMBR	R7	R0	K0
      0x881C0F20,  //  0036  GETMBR	R7	R7	K32
      0x8C1C0F21,  //  0037  GETMET	R7	R7	K33
      0x88240B22,  //  0038  GETMBR	R9	R5	K34
      0x542A0059,  //  0039  LDINT	R10	90
      0x7C1C0600,  //  003A  CALL	R7	3
      0x780A0000,  //  003B  JMPF	R2	#003D
      0x901E4C02,  //  003C  SETMBR	R7	K38	R2
      0x780E0000,  //  003D  JMPF	R3	#003F
      0x901E4E03,  //  003E  SETMBR	R7	K39	R3
      0x901E5000,  //  003F  SETMBR	R7	K40	R0
      0x90162207,  //  0040  SETMBR	R5	K17	R7
      0x88200F29,  //  0041  GETMBR	R8	R7	K41
      0x8C20112A,  //  0042  GETMET	R8	R8	K42
      0x88280B14,  //  0043  GETMBR	R10	R5	K20
      0x502C0000,  //  0044  LDBOOL	R11	0	0
      0x7C200600,  //  0045  CALL	R8	3
      0x74220015,  //  0046  JMPT	R8	#005D
      0xB8221A00,  //  0047  GETNGBL	R8	K13
      0x8C20110E,  //  0048  GETMET	R8	R8	K14
      0x542A0003,  //  0049  LDINT	R10	4
      0x7C200400,  //  004A  CALL	R8	2
      0x78220009,  //  004B  JMPF	R8	#0056
      0xB8221E00,  //  004C  GETNGBL	R8	K15
      0x60240018,  //  004D  GETGBL	R9	G24
      0x5828002B,  //  004E  LDCONST	R10	K43
      0x882C0B14,  //  004F  GETMBR	R11	R5	K20
      0x88300F29,  //  0050  GETMBR	R12	R7	K41
      0x8C30192C,  //  0051  GETMET	R12	R12	K44
      0x7C300200,  //  0052  CALL	R12	1
      0x7C240600,  //  0053  CALL	R9	3
      0x542A0003,  //  0054  LDINT	R10	4
      0x7C200400,  //  0055  CALL	R8	2
      0x8C20012D,  //  0056  GETMET	R8	R0	K45
      0x5C280A00,  //  0057  MOVE	R10	R5
      0x502C0000,  //  0058  LDBOOL	R11	0	0
      0x7C200600,  //  0059  CALL	R8	3
      0x50200000,  //  005A  LDBOOL	R8	0	0
      0xA8040001,  //  005B  EXBLK	1	1
      0x80041000,  //  005C  RET	1	R8
      0x8C200B2E,  //  005D  GETMET	R8	R5	K46
      0x7C200200,  //  005E  CALL	R8	1
      0x74220002,  //  005F  JMPT	R8	#0063
      0x50200000,  //  0060  LDBOOL	R8	0	0
      0xA8040001,  //  0061  EXBLK	1	1
      0x80041000,  //  0062  RET	1	R8
      0x88200100,  //  0063  GETMBR	R8	R0	K0
      0x8C20112F,  //  0064  GETMET	R8	R8	K47
      0x5C280A00,  //  0065  MOVE	R10	R5
      0x7C200400,  //  0066  CALL	R8	2
      0x88200B30,  //  0067  GETMBR	R8	R5	K48
      0x5426000F,  //  0068  LDINT	R9	16
      0x20201009,  //  0069  NE	R8	R8	R9
      0x7822001A,  //  006A  JMPF	R8	#0086
      0xB8220400,  //  006B  GETNGBL	R8	K2
      0x8C201131,  //  006C  GETMET	R8	R8	K49
      0x88280B30,  //  006D  GETMBR	R10	R5	K48
      0x7C200400,  //  006E  CALL	R8	2
      0x5C241000,  //  006F  MOVE	R9	R8
      0x74260004,  //  0070  JMPT	R9	#0076
      0x60240018,  //  0071  GETGBL	R9	G24
      0x58280032,  //  0072  LDCONST	R10	K50
      0x882C0B30,  //  0073  GETMBR	R11	R5	K48
      0x7C240400,  //  0074  CALL	R9	2
      0x5C201200,  //  0075  MOVE	R8	R9
      0xB8261A00,  //  0076  GETNGBL	R9	K13
      0x8C24130E,  //  0077  GETMET	R9	R9	K14
      0x582C0033,  //  0078  LDCONST	R11	K51
      0x7C240400,  //  0079  CALL	R9	2
      0x78260009,  //  007A  JMPF	R9	#0085
      0xB8261E00,  //  007B  GETNGBL	R9	K15
      0x60280018,  //  007C  GETGBL	R10	G24
      0x582C0034,  //  007D  LDCONST	R11	K52
      0x88300F12,  //  007E  GETMBR	R12	R7	K18
      0x5C341000,  //  007F  MOVE	R13	R8
      0x5C380400,  //  0080  MOVE	R14	R2
      0x5C3C0600,  //  0081  MOVE	R15	R3
      0x7C280A00,  //  0082  CALL	R10	5
      0x582C0033,  //  0083  LDCONST	R11	K51
      0x7C240400,  //  0084  CALL	R9	2
      0x70020017,  //  0085  JMP		#009E
      0xB8221A00,  //  0086  GETNGBL	R8	K13
      0x8C20110E,  //  0087  GETMET	R8	R8	K14
      0x542A0003,  //  0088  LDINT	R10	4
      0x7C200400,  //  0089  CALL	R8	2
      0x78220012,  //  008A  JMPF	R8	#009E
      0xB8221E00,  //  008B  GETNGBL	R8	K15
      0x60240018,  //  008C  GETGBL	R9	G24
      0x58280035,  //  008D  LDCONST	R10	K53
      0x882C0F12,  //  008E  GETMBR	R11	R7	K18
      0x88300B14,  //  008F  GETMBR	R12	R5	K20
      0x88340B09,  //  0090  GETMBR	R13	R5	K9
      0x78360001,  //  0091  JMPF	R13	#0094
      0x58340036,  //  0092  LDCONST	R13	K54
      0x70020000,  //  0093  JMP		#0095
      0x58340016,  //  0094  LDCONST	R13	K22
      0x88380B37,  //  0095  GETMBR	R14	R5	K55
      0x603C0008,  //  0096  GETGBL	R15	G8
      0x88400B13,  //  0097  GETMBR	R16	R5	K19
      0x7C3C0200,  //  0098  CALL	R15	1
      0x5C400400,  //  0099  MOVE	R16	R2
      0x5C440600,  //  009A  MOVE	R17	R3
      0x7C241000,  //  009B  CALL	R9	8
      0x542A0003,  //  009C  LDINT	R10	4
      0x7C200400,  //  009D  CALL	R8	2
      0xB8221E00,  //  009E  GETNGBL	R8	K15
      0x58240038,  //  009F  LDCONST	R9	K56
      0x7C200200,  //  00A0  CALL	R8	1
      0x88200101,  //  00A1  GETMBR	R8	R0	K1
      0x8C201139,  //  00A2  GETMET	R8	R8	K57
      0x5C280A00,  //  00A3  MOVE	R10	R5
      0x7C200400,  //  00A4  CALL	R8	2
      0x5C101000,  //  00A5  MOVE	R4	R8
      0x5C200800,  //  00A6  MOVE	R8	R4
      0x74220003,  //  00A7  JMPT	R8	#00AC
      0x8C20012D,  //  00A8  GETMET	R8	R0	K45
      0x5C280A00,  //  00A9  MOVE	R10	R5
      0x502C0000,  //  00AA  LDBOOL	R11	0	0
      0x7C200600,  //  00AB  CALL	R8	3
      0x50200200,  //  00AC  LDBOOL	R8	1	0
      0xA8040001,  //  00AD  EXBLK	1	1
      0x80041000,  //  00AE  RET	1	R8
      0x70020096,  //  00AF  JMP		#0147
      0xB81E1A00,  //  00B0  GETNGBL	R7	K13
      0x8C1C0F0E,  //  00B1  GETMET	R7	R7	K14
      0x54260003,  //  00B2  LDINT	R9	4
      0x7C1C0400,  //  00B3  CALL	R7	2
      0x781E0007,  //  00B4  JMPF	R7	#00BD
      0xB81E1E00,  //  00B5  GETNGBL	R7	K15
      0x60200018,  //  00B6  GETGBL	R8	G24
      0x5824003A,  //  00B7  LDCONST	R9	K58
      0x88280B12,  //  00B8  GETMBR	R10	R5	K18
      0x882C0B14,  //  00B9  GETMBR	R11	R5	K20
      0x7C200600,  //  00BA  CALL	R8	3
      0x54260003,  //  00BB  LDINT	R9	4
      0x7C1C0400,  //  00BC  CALL	R7	2
      0x881C0100,  //  00BD  GETMBR	R7	R0	K0
      0x881C0F20,  //  00BE  GETMBR	R7	R7	K32
      0x8C1C0F3B,  //  00BF  GETMET	R7	R7	K59
      0x88240B12,  //  00C0  GETMBR	R9	R5	K18
      0x7C1C0400,  //  00C1  CALL	R7	2
      0x4C200000,  //  00C2  LDNIL	R8
      0x1C200E08,  //  00C3  EQ	R8	R7	R8
      0x78220009,  //  00C4  JMPF	R8	#00CF
      0xB8221E00,  //  00C5  GETNGBL	R8	K15
      0x60240008,  //  00C6  GETGBL	R9	G8
      0x88280B12,  //  00C7  GETMBR	R10	R5	K18
      0x7C240200,  //  00C8  CALL	R9	1
      0x00267809,  //  00C9  ADD	R9	K60	R9
      0x58280033,  //  00CA  LDCONST	R10	K51
      0x7C200400,  //  00CB  CALL	R8	2
      0x50200000,  //  00CC  LDBOOL	R8	0	0
      0xA8040001,  //  00CD  EXBLK	1	1
      0x80041000,  //  00CE  RET	1	R8
      0x780A0000,  //  00CF  JMPF	R2	#00D1
      0x901E4C02,  //  00D0  SETMBR	R7	K38	R2
      0x780E0000,  //  00D1  JMPF	R3	#00D3
      0x901E4E03,  //  00D2  SETMBR	R7	K39	R3
      0x901E5000,  //  00D3  SETMBR	R7	K40	R0
      0x90162207,  //  00D4  SETMBR	R5	K17	R7
      0x8C200F3D,  //  00D5  GETMET	R8	R7	K61
      0x88280B14,  //  00D6  GETMBR	R10	R5	K20
      0x502C0200,  //  00D7  LDBOOL	R11	1	0
      0x7C200600,  //  00D8  CALL	R8	3
      0x74220017,  //  00D9  JMPT	R8	#00F2
      0xB8221A00,  //  00DA  GETNGBL	R8	K13
      0x8C20110E,  //  00DB  GETMET	R8	R8	K14
      0x58280033,  //  00DC  LDCONST	R10	K51
      0x7C200400,  //  00DD  CALL	R8	2
      0x7822000B,  //  00DE  JMPF	R8	#00EB
      0xB8221E00,  //  00DF  GETNGBL	R8	K15
      0x60240008,  //  00E0  GETGBL	R9	G8
      0x88280B14,  //  00E1  GETMBR	R10	R5	K20
      0x7C240200,  //  00E2  CALL	R9	1
      0x00267C09,  //  00E3  ADD	R9	K62	R9
      0x0024133F,  //  00E4  ADD	R9	R9	K63
      0x60280008,  //  00E5  GETGBL	R10	G8
      0x882C0F40,  //  00E6  GETMBR	R11	R7	K64
      0x7C280200,  //  00E7  CALL	R10	1
      0x0024120A,  //  00E8  ADD	R9	R9	R10
      0x58280033,  //  00E9  LDCONST	R10	K51
      0x7C200400,  //  00EA  CALL	R8	2
      0x8C200141,  //  00EB  GETMET	R8	R0	K65
      0x5C280A00,  //  00EC  MOVE	R10	R5
      0x502C0000,  //  00ED  LDBOOL	R11	0	0
      0x7C200600,  //  00EE  CALL	R8	3
      0x50200000,  //  00EF  LDBOOL	R8	0	0
      0xA8040001,  //  00F0  EXBLK	1	1
      0x80041000,  //  00F1  RET	1	R8
      0x8C200B42,  //  00F2  GETMET	R8	R5	K66
      0x7C200200,  //  00F3  CALL	R8	1
      0x5C241000,  //  00F4  MOVE	R9	R8
      0x74260002,  //  00F5  JMPT	R9	#00F9
      0x50240000,  //  00F6  LDBOOL	R9	0	0
      0xA8040001,  //  00F7  EXBLK	1	1
      0x80041200,  //  00F8  RET	1	R9
      0x8C240B2E,  //  00F9  GETMET	R9	R5	K46
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
      0x88300B30,  //  0107  GETMBR	R12	R5	K48
      0x7C2C0200,  //  0108  CALL	R11	1
      0x0028140B,  //  0109  ADD	R10	R10	R11
      0x00281546,  //  010A  ADD	R10	R10	K70
      0x602C0008,  //  010B  GETGBL	R11	G8
      0x88300B37,  //  010C  GETMBR	R12	R5	K55
      0x5436FFFE,  //  010D  LDINT	R13	65535
      0x2C30180D,  //  010E  AND	R12	R12	R13
      0x7C2C0200,  //  010F  CALL	R11	1
      0x0028140B,  //  0110  ADD	R10	R10	R11
      0x542E0003,  //  0111  LDINT	R11	4
      0x7C240400,  //  0112  CALL	R9	2
      0x88240100,  //  0113  GETMBR	R9	R0	K0
      0x8C24132F,  //  0114  GETMET	R9	R9	K47
      0x5C2C0A00,  //  0115  MOVE	R11	R5
      0x7C240400,  //  0116  CALL	R9	2
      0x88240B44,  //  0117  GETMBR	R9	R5	K68
      0x1C281324,  //  0118  EQ	R10	R9	K36
      0x782A000F,  //  0119  JMPF	R10	#012A
      0x88280B30,  //  011A  GETMBR	R10	R5	K48
      0x542E000F,  //  011B  LDINT	R11	16
      0x1C28140B,  //  011C  EQ	R10	R10	R11
      0x782A0009,  //  011D  JMPF	R10	#0128
      0x88280104,  //  011E  GETMBR	R10	R0	K4
      0x8C281547,  //  011F  GETMET	R10	R10	K71
      0x5C300A00,  //  0120  MOVE	R12	R5
      0x7C280400,  //  0121  CALL	R10	2
      0x5C101400,  //  0122  MOVE	R4	R10
      0x78120003,  //  0123  JMPF	R4	#0128
      0x88280104,  //  0124  GETMBR	R10	R0	K4
      0x8C281548,  //  0125  GETMET	R10	R10	K72
      0x5C300000,  //  0126  MOVE	R12	R0
      0x7C280400,  //  0127  CALL	R10	2
      0x50100200,  //  0128  LDBOOL	R4	1	0
      0x7002001C,  //  0129  JMP		#0147
      0x1C281349,  //  012A  EQ	R10	R9	K73
      0x782A0013,  //  012B  JMPF	R10	#0140
      0xB82A1E00,  //  012C  GETNGBL	R10	K15
      0x582C004A,  //  012D  LDCONST	R11	K74
      0x7C280200,  //  012E  CALL	R10	1
      0x88280104,  //  012F  GETMBR	R10	R0	K4
      0x8C281539,  //  0130  GETMET	R10	R10	K57
      0x5C300A00,  //  0131  MOVE	R12	R5
      0x7C280400,  //  0132  CALL	R10	2
      0x5C101400,  //  0133  MOVE	R4	R10
      0x78120004,  //  0134  JMPF	R4	#013A
      0x88280104,  //  0135  GETMBR	R10	R0	K4
      0x8C281548,  //  0136  GETMET	R10	R10	K72
      0x5C300000,  //  0137  MOVE	R12	R0
      0x7C280400,  //  0138  CALL	R10	2
      0x70020003,  //  0139  JMP		#013E
      0x8C280141,  //  013A  GETMET	R10	R0	K65
      0x5C300A00,  //  013B  MOVE	R12	R5
      0x50340200,  //  013C  LDBOOL	R13	1	0
      0x7C280600,  //  013D  CALL	R10	3
      0x50100200,  //  013E  LDBOOL	R4	1	0
      0x70020006,  //  013F  JMP		#0147
      0xB82A1E00,  //  0140  GETNGBL	R10	K15
      0x602C0008,  //  0141  GETGBL	R11	G8
      0x5C301200,  //  0142  MOVE	R12	R9
      0x7C2C0200,  //  0143  CALL	R11	1
      0x002E960B,  //  0144  ADD	R11	K75	R11
      0x58300033,  //  0145  LDCONST	R12	K51
      0x7C280400,  //  0146  CALL	R10	2
      0xA8040001,  //  0147  EXBLK	1	1
      0x80040800,  //  0148  RET	1	R4
      0xA8040001,  //  0149  EXBLK	1	1
      0x70020017,  //  014A  JMP		#0163
      0xAC140002,  //  014B  CATCH	R5	0	2
      0x70020014,  //  014C  JMP		#0162
      0xB81E1E00,  //  014D  GETNGBL	R7	K15
      0x60200008,  //  014E  GETGBL	R8	G8
      0x5C240A00,  //  014F  MOVE	R9	R5
      0x7C200200,  //  0150  CALL	R8	1
      0x00229808,  //  0151  ADD	R8	K76	R8
      0x0020114D,  //  0152  ADD	R8	R8	K77
      0x60240008,  //  0153  GETGBL	R9	G8
      0x5C280C00,  //  0154  MOVE	R10	R6
      0x7C240200,  //  0155  CALL	R9	1
      0x00201009,  //  0156  ADD	R8	R8	R9
      0x5824004E,  //  0157  LDCONST	R9	K78
      0x7C1C0400,  //  0158  CALL	R7	2
      0xB81E1A00,  //  0159  GETNGBL	R7	K13
      0x881C0F4F,  //  015A  GETMBR	R7	R7	K79
      0x781E0002,  //  015B  JMPF	R7	#015F
      0xA41EA000,  //  015C  IMPORT	R7	K80
      0x8C200F51,  //  015D  GETMET	R8	R7	K81
      0x7C200200,  //  015E  CALL	R8	1
      0x501C0000,  //  015F  LDBOOL	R7	0	0
      0x80040E00,  //  0160  RET	1	R7
      0x70020000,  //  0161  JMP		#0163
      0xB0080000,  //  0162  RAISE	2	R0	R0
      0x80000000,  //  0163  RET	0
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
      0x8C080552,  //  0001  GETMET	R2	R2	K82
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
      0x58180053,  //  0010  LDCONST	R6	K83
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
      0x8C040354,  //  0001  GETMET	R1	R1	K84
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
      0x8C040355,  //  0001  GETMET	R1	R1	K85
      0x7C040200,  //  0002  CALL	R1	1
      0x88040104,  //  0003  GETMBR	R1	R0	K4
      0x8C040355,  //  0004  GETMET	R1	R1	K85
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
