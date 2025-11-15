/* Solidification of Matter_MessageHandler.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_MessageHandler' ktab size: 84, total: 115 (saved 248 bytes)
static const bvalue be_ktab_class_Matter_MessageHandler[84] = {
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
  /* K56  */  be_nested_str_weak(process_incoming),
  /* K57  */  be_nested_str_weak(MTR_X3A_X20decode_X20header_X3A_X20local_session_id_X3D_X25i_X20message_counter_X3D_X25i),
  /* K58  */  be_nested_str_weak(get_session_by_local_session_id),
  /* K59  */  be_nested_str_weak(MTR_X3A_X20unknown_X20local_session_id_X3D),
  /* K60  */  be_nested_str_weak(counter_rcv_validate),
  /* K61  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20encrypted_X20message_X20_X3D_X20),
  /* K62  */  be_nested_str_weak(_X20counter_X3D),
  /* K63  */  be_nested_str_weak(counter_rcv),
  /* K64  */  be_nested_str_weak(send_encrypted_ack),
  /* K65  */  be_nested_str_weak(decrypt),
  /* K66  */  be_nested_str_weak(MTR_X3A_X20_X3E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Decrypted_X20message_X3A_X20protocol_id_X3A),
  /* K67  */  be_nested_str_weak(protocol_id),
  /* K68  */  be_nested_str_weak(_X20opcode_X3D),
  /* K69  */  be_nested_str_weak(_X20exchange_id_X3D),
  /* K70  */  be_nested_str_weak(process_incoming_ack),
  /* K71  */  be_nested_str_weak(send_enqueued),
  /* K72  */  be_const_int(1),
  /* K73  */  be_nested_str_weak(MTR_X3A_X20ignoring_X20unhandled_X20protocol_id_X3A),
  /* K74  */  be_nested_str_weak(MTR_X3A_X20MessageHandler_X3A_X3Amsg_received_X20exception_X3A_X20),
  /* K75  */  be_nested_str_weak(_X3B),
  /* K76  */  be_const_int(2),
  /* K77  */  be_nested_str_weak(_debug_present),
  /* K78  */  be_nested_str_weak(debug),
  /* K79  */  be_nested_str_weak(traceback),
  /* K80  */  be_nested_str_weak(msg_send),
  /* K81  */  be_nested_str_weak(MTR_X3A_X20_X3CAck_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20ack_X3D_X25i_X20id_X3D_X25i_X20_X25s),
  /* K82  */  be_nested_str_weak(every_50ms),
  /* K83  */  be_nested_str_weak(every_second),
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
    ( &(const binstruction[350]) {  /* code */
      0x50100000,  //  0000  LDBOOL	R4	0	0
      0xB8161A00,  //  0001  GETNGBL	R5	K13
      0x8C140B0F,  //  0002  GETMET	R5	R5	K15
      0x581C0018,  //  0003  LDCONST	R7	K24
      0x7C140400,  //  0004  CALL	R5	2
      0xA802013E,  //  0005  EXBLK	0	#0145
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
      0x70020111,  //  002E  JMP		#0141
      0x881C0B12,  //  002F  GETMBR	R7	R5	K18
      0x1C1C0F24,  //  0030  EQ	R7	R7	K36
      0x781E007A,  //  0031  JMPF	R7	#00AD
      0x881C0B25,  //  0032  GETMBR	R7	R5	K37
      0x1C1C0F24,  //  0033  EQ	R7	R7	K36
      0x781E0077,  //  0034  JMPF	R7	#00AD
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
      0x88200101,  //  009E  GETMBR	R8	R0	K1
      0x8C201138,  //  009F  GETMET	R8	R8	K56
      0x5C280A00,  //  00A0  MOVE	R10	R5
      0x7C200400,  //  00A1  CALL	R8	2
      0x5C101000,  //  00A2  MOVE	R4	R8
      0x5C200800,  //  00A3  MOVE	R8	R4
      0x74220003,  //  00A4  JMPT	R8	#00A9
      0x8C20012D,  //  00A5  GETMET	R8	R0	K45
      0x5C280A00,  //  00A6  MOVE	R10	R5
      0x502C0000,  //  00A7  LDBOOL	R11	0	0
      0x7C200600,  //  00A8  CALL	R8	3
      0x50200200,  //  00A9  LDBOOL	R8	1	0
      0xA8040001,  //  00AA  EXBLK	1	1
      0x80041000,  //  00AB  RET	1	R8
      0x70020093,  //  00AC  JMP		#0141
      0xB81E1A00,  //  00AD  GETNGBL	R7	K13
      0x8C1C0F0E,  //  00AE  GETMET	R7	R7	K14
      0x54260003,  //  00AF  LDINT	R9	4
      0x7C1C0400,  //  00B0  CALL	R7	2
      0x781E0007,  //  00B1  JMPF	R7	#00BA
      0xB81E1E00,  //  00B2  GETNGBL	R7	K15
      0x60200018,  //  00B3  GETGBL	R8	G24
      0x58240039,  //  00B4  LDCONST	R9	K57
      0x88280B12,  //  00B5  GETMBR	R10	R5	K18
      0x882C0B14,  //  00B6  GETMBR	R11	R5	K20
      0x7C200600,  //  00B7  CALL	R8	3
      0x54260003,  //  00B8  LDINT	R9	4
      0x7C1C0400,  //  00B9  CALL	R7	2
      0x881C0100,  //  00BA  GETMBR	R7	R0	K0
      0x881C0F20,  //  00BB  GETMBR	R7	R7	K32
      0x8C1C0F3A,  //  00BC  GETMET	R7	R7	K58
      0x88240B12,  //  00BD  GETMBR	R9	R5	K18
      0x7C1C0400,  //  00BE  CALL	R7	2
      0x4C200000,  //  00BF  LDNIL	R8
      0x1C200E08,  //  00C0  EQ	R8	R7	R8
      0x78220009,  //  00C1  JMPF	R8	#00CC
      0xB8221E00,  //  00C2  GETNGBL	R8	K15
      0x60240008,  //  00C3  GETGBL	R9	G8
      0x88280B12,  //  00C4  GETMBR	R10	R5	K18
      0x7C240200,  //  00C5  CALL	R9	1
      0x00267609,  //  00C6  ADD	R9	K59	R9
      0x58280033,  //  00C7  LDCONST	R10	K51
      0x7C200400,  //  00C8  CALL	R8	2
      0x50200000,  //  00C9  LDBOOL	R8	0	0
      0xA8040001,  //  00CA  EXBLK	1	1
      0x80041000,  //  00CB  RET	1	R8
      0x780A0000,  //  00CC  JMPF	R2	#00CE
      0x901E4C02,  //  00CD  SETMBR	R7	K38	R2
      0x780E0000,  //  00CE  JMPF	R3	#00D0
      0x901E4E03,  //  00CF  SETMBR	R7	K39	R3
      0x901E5000,  //  00D0  SETMBR	R7	K40	R0
      0x90162207,  //  00D1  SETMBR	R5	K17	R7
      0x8C200F3C,  //  00D2  GETMET	R8	R7	K60
      0x88280B14,  //  00D3  GETMBR	R10	R5	K20
      0x502C0200,  //  00D4  LDBOOL	R11	1	0
      0x7C200600,  //  00D5  CALL	R8	3
      0x74220017,  //  00D6  JMPT	R8	#00EF
      0xB8221A00,  //  00D7  GETNGBL	R8	K13
      0x8C20110E,  //  00D8  GETMET	R8	R8	K14
      0x58280033,  //  00D9  LDCONST	R10	K51
      0x7C200400,  //  00DA  CALL	R8	2
      0x7822000B,  //  00DB  JMPF	R8	#00E8
      0xB8221E00,  //  00DC  GETNGBL	R8	K15
      0x60240008,  //  00DD  GETGBL	R9	G8
      0x88280B14,  //  00DE  GETMBR	R10	R5	K20
      0x7C240200,  //  00DF  CALL	R9	1
      0x00267A09,  //  00E0  ADD	R9	K61	R9
      0x0024133E,  //  00E1  ADD	R9	R9	K62
      0x60280008,  //  00E2  GETGBL	R10	G8
      0x882C0F3F,  //  00E3  GETMBR	R11	R7	K63
      0x7C280200,  //  00E4  CALL	R10	1
      0x0024120A,  //  00E5  ADD	R9	R9	R10
      0x58280033,  //  00E6  LDCONST	R10	K51
      0x7C200400,  //  00E7  CALL	R8	2
      0x8C200140,  //  00E8  GETMET	R8	R0	K64
      0x5C280A00,  //  00E9  MOVE	R10	R5
      0x502C0000,  //  00EA  LDBOOL	R11	0	0
      0x7C200600,  //  00EB  CALL	R8	3
      0x50200000,  //  00EC  LDBOOL	R8	0	0
      0xA8040001,  //  00ED  EXBLK	1	1
      0x80041000,  //  00EE  RET	1	R8
      0x8C200B41,  //  00EF  GETMET	R8	R5	K65
      0x7C200200,  //  00F0  CALL	R8	1
      0x5C241000,  //  00F1  MOVE	R9	R8
      0x74260002,  //  00F2  JMPT	R9	#00F6
      0x50240000,  //  00F3  LDBOOL	R9	0	0
      0xA8040001,  //  00F4  EXBLK	1	1
      0x80041200,  //  00F5  RET	1	R9
      0x8C240B2E,  //  00F6  GETMET	R9	R5	K46
      0x7C240200,  //  00F7  CALL	R9	1
      0xB8261A00,  //  00F8  GETNGBL	R9	K13
      0x8C24130E,  //  00F9  GETMET	R9	R9	K14
      0x542E0003,  //  00FA  LDINT	R11	4
      0x7C240400,  //  00FB  CALL	R9	2
      0x78260012,  //  00FC  JMPF	R9	#0110
      0xB8261E00,  //  00FD  GETNGBL	R9	K15
      0x60280008,  //  00FE  GETGBL	R10	G8
      0x882C0B43,  //  00FF  GETMBR	R11	R5	K67
      0x7C280200,  //  0100  CALL	R10	1
      0x002A840A,  //  0101  ADD	R10	K66	R10
      0x00281544,  //  0102  ADD	R10	R10	K68
      0x602C0008,  //  0103  GETGBL	R11	G8
      0x88300B30,  //  0104  GETMBR	R12	R5	K48
      0x7C2C0200,  //  0105  CALL	R11	1
      0x0028140B,  //  0106  ADD	R10	R10	R11
      0x00281545,  //  0107  ADD	R10	R10	K69
      0x602C0008,  //  0108  GETGBL	R11	G8
      0x88300B37,  //  0109  GETMBR	R12	R5	K55
      0x5436FFFE,  //  010A  LDINT	R13	65535
      0x2C30180D,  //  010B  AND	R12	R12	R13
      0x7C2C0200,  //  010C  CALL	R11	1
      0x0028140B,  //  010D  ADD	R10	R10	R11
      0x542E0003,  //  010E  LDINT	R11	4
      0x7C240400,  //  010F  CALL	R9	2
      0x88240100,  //  0110  GETMBR	R9	R0	K0
      0x8C24132F,  //  0111  GETMET	R9	R9	K47
      0x5C2C0A00,  //  0112  MOVE	R11	R5
      0x7C240400,  //  0113  CALL	R9	2
      0x88240B43,  //  0114  GETMBR	R9	R5	K67
      0x1C281324,  //  0115  EQ	R10	R9	K36
      0x782A000F,  //  0116  JMPF	R10	#0127
      0x88280B30,  //  0117  GETMBR	R10	R5	K48
      0x542E000F,  //  0118  LDINT	R11	16
      0x1C28140B,  //  0119  EQ	R10	R10	R11
      0x782A0009,  //  011A  JMPF	R10	#0125
      0x88280104,  //  011B  GETMBR	R10	R0	K4
      0x8C281546,  //  011C  GETMET	R10	R10	K70
      0x5C300A00,  //  011D  MOVE	R12	R5
      0x7C280400,  //  011E  CALL	R10	2
      0x5C101400,  //  011F  MOVE	R4	R10
      0x78120003,  //  0120  JMPF	R4	#0125
      0x88280104,  //  0121  GETMBR	R10	R0	K4
      0x8C281547,  //  0122  GETMET	R10	R10	K71
      0x5C300000,  //  0123  MOVE	R12	R0
      0x7C280400,  //  0124  CALL	R10	2
      0x50100200,  //  0125  LDBOOL	R4	1	0
      0x70020019,  //  0126  JMP		#0141
      0x1C281348,  //  0127  EQ	R10	R9	K72
      0x782A0010,  //  0128  JMPF	R10	#013A
      0x88280104,  //  0129  GETMBR	R10	R0	K4
      0x8C281538,  //  012A  GETMET	R10	R10	K56
      0x5C300A00,  //  012B  MOVE	R12	R5
      0x7C280400,  //  012C  CALL	R10	2
      0x5C101400,  //  012D  MOVE	R4	R10
      0x78120004,  //  012E  JMPF	R4	#0134
      0x88280104,  //  012F  GETMBR	R10	R0	K4
      0x8C281547,  //  0130  GETMET	R10	R10	K71
      0x5C300000,  //  0131  MOVE	R12	R0
      0x7C280400,  //  0132  CALL	R10	2
      0x70020003,  //  0133  JMP		#0138
      0x8C280140,  //  0134  GETMET	R10	R0	K64
      0x5C300A00,  //  0135  MOVE	R12	R5
      0x50340200,  //  0136  LDBOOL	R13	1	0
      0x7C280600,  //  0137  CALL	R10	3
      0x50100200,  //  0138  LDBOOL	R4	1	0
      0x70020006,  //  0139  JMP		#0141
      0xB82A1E00,  //  013A  GETNGBL	R10	K15
      0x602C0008,  //  013B  GETGBL	R11	G8
      0x5C301200,  //  013C  MOVE	R12	R9
      0x7C2C0200,  //  013D  CALL	R11	1
      0x002E920B,  //  013E  ADD	R11	K73	R11
      0x58300033,  //  013F  LDCONST	R12	K51
      0x7C280400,  //  0140  CALL	R10	2
      0xA8040001,  //  0141  EXBLK	1	1
      0x80040800,  //  0142  RET	1	R4
      0xA8040001,  //  0143  EXBLK	1	1
      0x70020017,  //  0144  JMP		#015D
      0xAC140002,  //  0145  CATCH	R5	0	2
      0x70020014,  //  0146  JMP		#015C
      0xB81E1E00,  //  0147  GETNGBL	R7	K15
      0x60200008,  //  0148  GETGBL	R8	G8
      0x5C240A00,  //  0149  MOVE	R9	R5
      0x7C200200,  //  014A  CALL	R8	1
      0x00229408,  //  014B  ADD	R8	K74	R8
      0x0020114B,  //  014C  ADD	R8	R8	K75
      0x60240008,  //  014D  GETGBL	R9	G8
      0x5C280C00,  //  014E  MOVE	R10	R6
      0x7C240200,  //  014F  CALL	R9	1
      0x00201009,  //  0150  ADD	R8	R8	R9
      0x5824004C,  //  0151  LDCONST	R9	K76
      0x7C1C0400,  //  0152  CALL	R7	2
      0xB81E1A00,  //  0153  GETNGBL	R7	K13
      0x881C0F4D,  //  0154  GETMBR	R7	R7	K77
      0x781E0002,  //  0155  JMPF	R7	#0159
      0xA41E9C00,  //  0156  IMPORT	R7	K78
      0x8C200F4F,  //  0157  GETMET	R8	R7	K79
      0x7C200200,  //  0158  CALL	R8	1
      0x501C0000,  //  0159  LDBOOL	R7	0	0
      0x80040E00,  //  015A  RET	1	R7
      0x70020000,  //  015B  JMP		#015D
      0xB0080000,  //  015C  RAISE	2	R0	R0
      0x80000000,  //  015D  RET	0
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
      0x8C080550,  //  0001  GETMET	R2	R2	K80
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
      0x58180051,  //  0010  LDCONST	R6	K81
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
      0x8C040352,  //  0001  GETMET	R1	R1	K82
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
      0x8C040353,  //  0001  GETMET	R1	R1	K83
      0x7C040200,  //  0002  CALL	R1	1
      0x88040104,  //  0003  GETMBR	R1	R0	K4
      0x8C040353,  //  0004  GETMET	R1	R1	K83
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
