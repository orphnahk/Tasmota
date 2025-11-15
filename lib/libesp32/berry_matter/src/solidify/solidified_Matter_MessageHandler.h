/* Solidification of Matter_MessageHandler.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_MessageHandler' ktab size: 80, total: 111 (saved 248 bytes)
static const bvalue be_ktab_class_Matter_MessageHandler[80] = {
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
  /* K25  */  be_nested_str_weak(Frame),
  /* K26  */  be_nested_str_weak(decode_header),
  /* K27  */  be_nested_str_weak(sec_p),
  /* K28  */  be_nested_str_weak(sessions),
  /* K29  */  be_nested_str_weak(find_session_source_id_unsecure),
  /* K30  */  be_nested_str_weak(source_node_id),
  /* K31  */  be_nested_str_weak(process_incoming_control_message),
  /* K32  */  be_const_int(0),
  /* K33  */  be_nested_str_weak(sec_sesstype),
  /* K34  */  be_nested_str_weak(_ip),
  /* K35  */  be_nested_str_weak(_port),
  /* K36  */  be_nested_str_weak(_message_handler),
  /* K37  */  be_nested_str_weak(_counter_insecure_rcv),
  /* K38  */  be_nested_str_weak(validate),
  /* K39  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20unencrypted_X20message_X20_X3D_X20_X25i_X20ref_X20_X3D_X20_X25i),
  /* K40  */  be_nested_str_weak(val),
  /* K41  */  be_nested_str_weak(send_simple_ack),
  /* K42  */  be_nested_str_weak(decode_payload),
  /* K43  */  be_nested_str_weak(received_ack),
  /* K44  */  be_nested_str_weak(opcode),
  /* K45  */  be_nested_str_weak(get_opcode_name),
  /* K46  */  be_nested_str_weak(0x_X2502X),
  /* K47  */  be_const_int(3),
  /* K48  */  be_nested_str_weak(MTR_X3A_X20_X3EReceived_X20_X20_X28_X256i_X29_X20_X25s_X20from_X20_X5B_X25s_X5D_X3A_X25i),
  /* K49  */  be_nested_str_weak(MTR_X3A_X20_X3Ercv_X20Ack_X20_X20_X20_X28_X256i_X29_X20rid_X3D_X25i_X20exch_X3D_X25i_X20ack_X3D_X25s_X20_X25sfrom_X20_X5B_X25s_X5D_X3A_X25i),
  /* K50  */  be_nested_str_weak(_X7Breliable_X7D_X20),
  /* K51  */  be_nested_str_weak(exchange_id),
  /* K52  */  be_nested_str_weak(process_incoming),
  /* K53  */  be_nested_str_weak(MTR_X3A_X20decode_X20header_X3A_X20local_session_id_X3D_X25i_X20message_counter_X3D_X25i),
  /* K54  */  be_nested_str_weak(get_session_by_local_session_id),
  /* K55  */  be_nested_str_weak(MTR_X3A_X20unknown_X20local_session_id_X3D),
  /* K56  */  be_nested_str_weak(counter_rcv_validate),
  /* K57  */  be_nested_str_weak(MTR_X3A_X20_X2E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Duplicate_X20encrypted_X20message_X20_X3D_X20),
  /* K58  */  be_nested_str_weak(_X20counter_X3D),
  /* K59  */  be_nested_str_weak(counter_rcv),
  /* K60  */  be_nested_str_weak(send_encrypted_ack),
  /* K61  */  be_nested_str_weak(decrypt),
  /* K62  */  be_nested_str_weak(MTR_X3A_X20_X3E_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Decrypted_X20message_X3A_X20protocol_id_X3A),
  /* K63  */  be_nested_str_weak(protocol_id),
  /* K64  */  be_nested_str_weak(_X20opcode_X3D),
  /* K65  */  be_nested_str_weak(_X20exchange_id_X3D),
  /* K66  */  be_nested_str_weak(process_incoming_ack),
  /* K67  */  be_nested_str_weak(send_enqueued),
  /* K68  */  be_const_int(1),
  /* K69  */  be_nested_str_weak(MTR_X3A_X20ignoring_X20unhandled_X20protocol_id_X3A),
  /* K70  */  be_nested_str_weak(MTR_X3A_X20MessageHandler_X3A_X3Amsg_received_X20exception_X3A_X20),
  /* K71  */  be_nested_str_weak(_X3B),
  /* K72  */  be_const_int(2),
  /* K73  */  be_nested_str_weak(_debug_present),
  /* K74  */  be_nested_str_weak(debug),
  /* K75  */  be_nested_str_weak(traceback),
  /* K76  */  be_nested_str_weak(msg_send),
  /* K77  */  be_nested_str_weak(MTR_X3A_X20_X3CAck_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20ack_X3D_X25i_X20id_X3D_X25i_X20_X25s),
  /* K78  */  be_nested_str_weak(every_50ms),
  /* K79  */  be_nested_str_weak(every_second),
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
    ( &(const binstruction[338]) {  /* code */
      0x50100000,  //  0000  LDBOOL	R4	0	0
      0xB8161A00,  //  0001  GETNGBL	R5	K13
      0x8C140B0F,  //  0002  GETMET	R5	R5	K15
      0x581C0018,  //  0003  LDCONST	R7	K24
      0x7C140400,  //  0004  CALL	R5	2
      0xA8020132,  //  0005  EXBLK	0	#0139
      0xB8160400,  //  0006  GETNGBL	R5	K2
      0x8C140B19,  //  0007  GETMET	R5	R5	K25
      0x5C1C0000,  //  0008  MOVE	R7	R0
      0x5C200200,  //  0009  MOVE	R8	R1
      0x5C240400,  //  000A  MOVE	R9	R2
      0x5C280600,  //  000B  MOVE	R10	R3
      0x7C140A00,  //  000C  CALL	R5	5
      0x8C180B1A,  //  000D  GETMET	R6	R5	K26
      0x7C180200,  //  000E  CALL	R6	1
      0x5C1C0C00,  //  000F  MOVE	R7	R6
      0x741E0002,  //  0010  JMPT	R7	#0014
      0x501C0000,  //  0011  LDBOOL	R7	0	0
      0xA8040001,  //  0012  EXBLK	1	1
      0x80040E00,  //  0013  RET	1	R7
      0x881C0B1B,  //  0014  GETMBR	R7	R5	K27
      0x781E000C,  //  0015  JMPF	R7	#0023
      0x881C0100,  //  0016  GETMBR	R7	R0	K0
      0x881C0F1C,  //  0017  GETMBR	R7	R7	K28
      0x8C1C0F1D,  //  0018  GETMET	R7	R7	K29
      0x88240B1E,  //  0019  GETMBR	R9	R5	K30
      0x542A0059,  //  001A  LDINT	R10	90
      0x7C1C0600,  //  001B  CALL	R7	3
      0x88200106,  //  001C  GETMBR	R8	R0	K6
      0x8C20111F,  //  001D  GETMET	R8	R8	K31
      0x5C280A00,  //  001E  MOVE	R10	R5
      0x7C200400,  //  001F  CALL	R8	2
      0xA8040001,  //  0020  EXBLK	1	1
      0x80041000,  //  0021  RET	1	R8
      0x70020111,  //  0022  JMP		#0135
      0x881C0B12,  //  0023  GETMBR	R7	R5	K18
      0x1C1C0F20,  //  0024  EQ	R7	R7	K32
      0x781E007A,  //  0025  JMPF	R7	#00A1
      0x881C0B21,  //  0026  GETMBR	R7	R5	K33
      0x1C1C0F20,  //  0027  EQ	R7	R7	K32
      0x781E0077,  //  0028  JMPF	R7	#00A1
      0x881C0100,  //  0029  GETMBR	R7	R0	K0
      0x881C0F1C,  //  002A  GETMBR	R7	R7	K28
      0x8C1C0F1D,  //  002B  GETMET	R7	R7	K29
      0x88240B1E,  //  002C  GETMBR	R9	R5	K30
      0x542A0059,  //  002D  LDINT	R10	90
      0x7C1C0600,  //  002E  CALL	R7	3
      0x780A0000,  //  002F  JMPF	R2	#0031
      0x901E4402,  //  0030  SETMBR	R7	K34	R2
      0x780E0000,  //  0031  JMPF	R3	#0033
      0x901E4603,  //  0032  SETMBR	R7	K35	R3
      0x901E4800,  //  0033  SETMBR	R7	K36	R0
      0x90162207,  //  0034  SETMBR	R5	K17	R7
      0x88200F25,  //  0035  GETMBR	R8	R7	K37
      0x8C201126,  //  0036  GETMET	R8	R8	K38
      0x88280B14,  //  0037  GETMBR	R10	R5	K20
      0x502C0000,  //  0038  LDBOOL	R11	0	0
      0x7C200600,  //  0039  CALL	R8	3
      0x74220015,  //  003A  JMPT	R8	#0051
      0xB8221A00,  //  003B  GETNGBL	R8	K13
      0x8C20110E,  //  003C  GETMET	R8	R8	K14
      0x542A0003,  //  003D  LDINT	R10	4
      0x7C200400,  //  003E  CALL	R8	2
      0x78220009,  //  003F  JMPF	R8	#004A
      0xB8221E00,  //  0040  GETNGBL	R8	K15
      0x60240018,  //  0041  GETGBL	R9	G24
      0x58280027,  //  0042  LDCONST	R10	K39
      0x882C0B14,  //  0043  GETMBR	R11	R5	K20
      0x88300F25,  //  0044  GETMBR	R12	R7	K37
      0x8C301928,  //  0045  GETMET	R12	R12	K40
      0x7C300200,  //  0046  CALL	R12	1
      0x7C240600,  //  0047  CALL	R9	3
      0x542A0003,  //  0048  LDINT	R10	4
      0x7C200400,  //  0049  CALL	R8	2
      0x8C200129,  //  004A  GETMET	R8	R0	K41
      0x5C280A00,  //  004B  MOVE	R10	R5
      0x502C0000,  //  004C  LDBOOL	R11	0	0
      0x7C200600,  //  004D  CALL	R8	3
      0x50200000,  //  004E  LDBOOL	R8	0	0
      0xA8040001,  //  004F  EXBLK	1	1
      0x80041000,  //  0050  RET	1	R8
      0x8C200B2A,  //  0051  GETMET	R8	R5	K42
      0x7C200200,  //  0052  CALL	R8	1
      0x74220002,  //  0053  JMPT	R8	#0057
      0x50200000,  //  0054  LDBOOL	R8	0	0
      0xA8040001,  //  0055  EXBLK	1	1
      0x80041000,  //  0056  RET	1	R8
      0x88200100,  //  0057  GETMBR	R8	R0	K0
      0x8C20112B,  //  0058  GETMET	R8	R8	K43
      0x5C280A00,  //  0059  MOVE	R10	R5
      0x7C200400,  //  005A  CALL	R8	2
      0x88200B2C,  //  005B  GETMBR	R8	R5	K44
      0x5426000F,  //  005C  LDINT	R9	16
      0x20201009,  //  005D  NE	R8	R8	R9
      0x7822001A,  //  005E  JMPF	R8	#007A
      0xB8220400,  //  005F  GETNGBL	R8	K2
      0x8C20112D,  //  0060  GETMET	R8	R8	K45
      0x88280B2C,  //  0061  GETMBR	R10	R5	K44
      0x7C200400,  //  0062  CALL	R8	2
      0x5C241000,  //  0063  MOVE	R9	R8
      0x74260004,  //  0064  JMPT	R9	#006A
      0x60240018,  //  0065  GETGBL	R9	G24
      0x5828002E,  //  0066  LDCONST	R10	K46
      0x882C0B2C,  //  0067  GETMBR	R11	R5	K44
      0x7C240400,  //  0068  CALL	R9	2
      0x5C201200,  //  0069  MOVE	R8	R9
      0xB8261A00,  //  006A  GETNGBL	R9	K13
      0x8C24130E,  //  006B  GETMET	R9	R9	K14
      0x582C002F,  //  006C  LDCONST	R11	K47
      0x7C240400,  //  006D  CALL	R9	2
      0x78260009,  //  006E  JMPF	R9	#0079
      0xB8261E00,  //  006F  GETNGBL	R9	K15
      0x60280018,  //  0070  GETGBL	R10	G24
      0x582C0030,  //  0071  LDCONST	R11	K48
      0x88300F12,  //  0072  GETMBR	R12	R7	K18
      0x5C341000,  //  0073  MOVE	R13	R8
      0x5C380400,  //  0074  MOVE	R14	R2
      0x5C3C0600,  //  0075  MOVE	R15	R3
      0x7C280A00,  //  0076  CALL	R10	5
      0x582C002F,  //  0077  LDCONST	R11	K47
      0x7C240400,  //  0078  CALL	R9	2
      0x70020017,  //  0079  JMP		#0092
      0xB8221A00,  //  007A  GETNGBL	R8	K13
      0x8C20110E,  //  007B  GETMET	R8	R8	K14
      0x542A0003,  //  007C  LDINT	R10	4
      0x7C200400,  //  007D  CALL	R8	2
      0x78220012,  //  007E  JMPF	R8	#0092
      0xB8221E00,  //  007F  GETNGBL	R8	K15
      0x60240018,  //  0080  GETGBL	R9	G24
      0x58280031,  //  0081  LDCONST	R10	K49
      0x882C0F12,  //  0082  GETMBR	R11	R7	K18
      0x88300B14,  //  0083  GETMBR	R12	R5	K20
      0x88340B09,  //  0084  GETMBR	R13	R5	K9
      0x78360001,  //  0085  JMPF	R13	#0088
      0x58340032,  //  0086  LDCONST	R13	K50
      0x70020000,  //  0087  JMP		#0089
      0x58340016,  //  0088  LDCONST	R13	K22
      0x88380B33,  //  0089  GETMBR	R14	R5	K51
      0x603C0008,  //  008A  GETGBL	R15	G8
      0x88400B13,  //  008B  GETMBR	R16	R5	K19
      0x7C3C0200,  //  008C  CALL	R15	1
      0x5C400400,  //  008D  MOVE	R16	R2
      0x5C440600,  //  008E  MOVE	R17	R3
      0x7C241000,  //  008F  CALL	R9	8
      0x542A0003,  //  0090  LDINT	R10	4
      0x7C200400,  //  0091  CALL	R8	2
      0x88200101,  //  0092  GETMBR	R8	R0	K1
      0x8C201134,  //  0093  GETMET	R8	R8	K52
      0x5C280A00,  //  0094  MOVE	R10	R5
      0x7C200400,  //  0095  CALL	R8	2
      0x5C101000,  //  0096  MOVE	R4	R8
      0x5C200800,  //  0097  MOVE	R8	R4
      0x74220003,  //  0098  JMPT	R8	#009D
      0x8C200129,  //  0099  GETMET	R8	R0	K41
      0x5C280A00,  //  009A  MOVE	R10	R5
      0x502C0000,  //  009B  LDBOOL	R11	0	0
      0x7C200600,  //  009C  CALL	R8	3
      0x50200200,  //  009D  LDBOOL	R8	1	0
      0xA8040001,  //  009E  EXBLK	1	1
      0x80041000,  //  009F  RET	1	R8
      0x70020093,  //  00A0  JMP		#0135
      0xB81E1A00,  //  00A1  GETNGBL	R7	K13
      0x8C1C0F0E,  //  00A2  GETMET	R7	R7	K14
      0x54260003,  //  00A3  LDINT	R9	4
      0x7C1C0400,  //  00A4  CALL	R7	2
      0x781E0007,  //  00A5  JMPF	R7	#00AE
      0xB81E1E00,  //  00A6  GETNGBL	R7	K15
      0x60200018,  //  00A7  GETGBL	R8	G24
      0x58240035,  //  00A8  LDCONST	R9	K53
      0x88280B12,  //  00A9  GETMBR	R10	R5	K18
      0x882C0B14,  //  00AA  GETMBR	R11	R5	K20
      0x7C200600,  //  00AB  CALL	R8	3
      0x54260003,  //  00AC  LDINT	R9	4
      0x7C1C0400,  //  00AD  CALL	R7	2
      0x881C0100,  //  00AE  GETMBR	R7	R0	K0
      0x881C0F1C,  //  00AF  GETMBR	R7	R7	K28
      0x8C1C0F36,  //  00B0  GETMET	R7	R7	K54
      0x88240B12,  //  00B1  GETMBR	R9	R5	K18
      0x7C1C0400,  //  00B2  CALL	R7	2
      0x4C200000,  //  00B3  LDNIL	R8
      0x1C200E08,  //  00B4  EQ	R8	R7	R8
      0x78220009,  //  00B5  JMPF	R8	#00C0
      0xB8221E00,  //  00B6  GETNGBL	R8	K15
      0x60240008,  //  00B7  GETGBL	R9	G8
      0x88280B12,  //  00B8  GETMBR	R10	R5	K18
      0x7C240200,  //  00B9  CALL	R9	1
      0x00266E09,  //  00BA  ADD	R9	K55	R9
      0x5828002F,  //  00BB  LDCONST	R10	K47
      0x7C200400,  //  00BC  CALL	R8	2
      0x50200000,  //  00BD  LDBOOL	R8	0	0
      0xA8040001,  //  00BE  EXBLK	1	1
      0x80041000,  //  00BF  RET	1	R8
      0x780A0000,  //  00C0  JMPF	R2	#00C2
      0x901E4402,  //  00C1  SETMBR	R7	K34	R2
      0x780E0000,  //  00C2  JMPF	R3	#00C4
      0x901E4603,  //  00C3  SETMBR	R7	K35	R3
      0x901E4800,  //  00C4  SETMBR	R7	K36	R0
      0x90162207,  //  00C5  SETMBR	R5	K17	R7
      0x8C200F38,  //  00C6  GETMET	R8	R7	K56
      0x88280B14,  //  00C7  GETMBR	R10	R5	K20
      0x502C0200,  //  00C8  LDBOOL	R11	1	0
      0x7C200600,  //  00C9  CALL	R8	3
      0x74220017,  //  00CA  JMPT	R8	#00E3
      0xB8221A00,  //  00CB  GETNGBL	R8	K13
      0x8C20110E,  //  00CC  GETMET	R8	R8	K14
      0x5828002F,  //  00CD  LDCONST	R10	K47
      0x7C200400,  //  00CE  CALL	R8	2
      0x7822000B,  //  00CF  JMPF	R8	#00DC
      0xB8221E00,  //  00D0  GETNGBL	R8	K15
      0x60240008,  //  00D1  GETGBL	R9	G8
      0x88280B14,  //  00D2  GETMBR	R10	R5	K20
      0x7C240200,  //  00D3  CALL	R9	1
      0x00267209,  //  00D4  ADD	R9	K57	R9
      0x0024133A,  //  00D5  ADD	R9	R9	K58
      0x60280008,  //  00D6  GETGBL	R10	G8
      0x882C0F3B,  //  00D7  GETMBR	R11	R7	K59
      0x7C280200,  //  00D8  CALL	R10	1
      0x0024120A,  //  00D9  ADD	R9	R9	R10
      0x5828002F,  //  00DA  LDCONST	R10	K47
      0x7C200400,  //  00DB  CALL	R8	2
      0x8C20013C,  //  00DC  GETMET	R8	R0	K60
      0x5C280A00,  //  00DD  MOVE	R10	R5
      0x502C0000,  //  00DE  LDBOOL	R11	0	0
      0x7C200600,  //  00DF  CALL	R8	3
      0x50200000,  //  00E0  LDBOOL	R8	0	0
      0xA8040001,  //  00E1  EXBLK	1	1
      0x80041000,  //  00E2  RET	1	R8
      0x8C200B3D,  //  00E3  GETMET	R8	R5	K61
      0x7C200200,  //  00E4  CALL	R8	1
      0x5C241000,  //  00E5  MOVE	R9	R8
      0x74260002,  //  00E6  JMPT	R9	#00EA
      0x50240000,  //  00E7  LDBOOL	R9	0	0
      0xA8040001,  //  00E8  EXBLK	1	1
      0x80041200,  //  00E9  RET	1	R9
      0x8C240B2A,  //  00EA  GETMET	R9	R5	K42
      0x7C240200,  //  00EB  CALL	R9	1
      0xB8261A00,  //  00EC  GETNGBL	R9	K13
      0x8C24130E,  //  00ED  GETMET	R9	R9	K14
      0x542E0003,  //  00EE  LDINT	R11	4
      0x7C240400,  //  00EF  CALL	R9	2
      0x78260012,  //  00F0  JMPF	R9	#0104
      0xB8261E00,  //  00F1  GETNGBL	R9	K15
      0x60280008,  //  00F2  GETGBL	R10	G8
      0x882C0B3F,  //  00F3  GETMBR	R11	R5	K63
      0x7C280200,  //  00F4  CALL	R10	1
      0x002A7C0A,  //  00F5  ADD	R10	K62	R10
      0x00281540,  //  00F6  ADD	R10	R10	K64
      0x602C0008,  //  00F7  GETGBL	R11	G8
      0x88300B2C,  //  00F8  GETMBR	R12	R5	K44
      0x7C2C0200,  //  00F9  CALL	R11	1
      0x0028140B,  //  00FA  ADD	R10	R10	R11
      0x00281541,  //  00FB  ADD	R10	R10	K65
      0x602C0008,  //  00FC  GETGBL	R11	G8
      0x88300B33,  //  00FD  GETMBR	R12	R5	K51
      0x5436FFFE,  //  00FE  LDINT	R13	65535
      0x2C30180D,  //  00FF  AND	R12	R12	R13
      0x7C2C0200,  //  0100  CALL	R11	1
      0x0028140B,  //  0101  ADD	R10	R10	R11
      0x542E0003,  //  0102  LDINT	R11	4
      0x7C240400,  //  0103  CALL	R9	2
      0x88240100,  //  0104  GETMBR	R9	R0	K0
      0x8C24132B,  //  0105  GETMET	R9	R9	K43
      0x5C2C0A00,  //  0106  MOVE	R11	R5
      0x7C240400,  //  0107  CALL	R9	2
      0x88240B3F,  //  0108  GETMBR	R9	R5	K63
      0x1C281320,  //  0109  EQ	R10	R9	K32
      0x782A000F,  //  010A  JMPF	R10	#011B
      0x88280B2C,  //  010B  GETMBR	R10	R5	K44
      0x542E000F,  //  010C  LDINT	R11	16
      0x1C28140B,  //  010D  EQ	R10	R10	R11
      0x782A0009,  //  010E  JMPF	R10	#0119
      0x88280104,  //  010F  GETMBR	R10	R0	K4
      0x8C281542,  //  0110  GETMET	R10	R10	K66
      0x5C300A00,  //  0111  MOVE	R12	R5
      0x7C280400,  //  0112  CALL	R10	2
      0x5C101400,  //  0113  MOVE	R4	R10
      0x78120003,  //  0114  JMPF	R4	#0119
      0x88280104,  //  0115  GETMBR	R10	R0	K4
      0x8C281543,  //  0116  GETMET	R10	R10	K67
      0x5C300000,  //  0117  MOVE	R12	R0
      0x7C280400,  //  0118  CALL	R10	2
      0x50100200,  //  0119  LDBOOL	R4	1	0
      0x70020019,  //  011A  JMP		#0135
      0x1C281344,  //  011B  EQ	R10	R9	K68
      0x782A0010,  //  011C  JMPF	R10	#012E
      0x88280104,  //  011D  GETMBR	R10	R0	K4
      0x8C281534,  //  011E  GETMET	R10	R10	K52
      0x5C300A00,  //  011F  MOVE	R12	R5
      0x7C280400,  //  0120  CALL	R10	2
      0x5C101400,  //  0121  MOVE	R4	R10
      0x78120004,  //  0122  JMPF	R4	#0128
      0x88280104,  //  0123  GETMBR	R10	R0	K4
      0x8C281543,  //  0124  GETMET	R10	R10	K67
      0x5C300000,  //  0125  MOVE	R12	R0
      0x7C280400,  //  0126  CALL	R10	2
      0x70020003,  //  0127  JMP		#012C
      0x8C28013C,  //  0128  GETMET	R10	R0	K60
      0x5C300A00,  //  0129  MOVE	R12	R5
      0x50340200,  //  012A  LDBOOL	R13	1	0
      0x7C280600,  //  012B  CALL	R10	3
      0x50100200,  //  012C  LDBOOL	R4	1	0
      0x70020006,  //  012D  JMP		#0135
      0xB82A1E00,  //  012E  GETNGBL	R10	K15
      0x602C0008,  //  012F  GETGBL	R11	G8
      0x5C301200,  //  0130  MOVE	R12	R9
      0x7C2C0200,  //  0131  CALL	R11	1
      0x002E8A0B,  //  0132  ADD	R11	K69	R11
      0x5830002F,  //  0133  LDCONST	R12	K47
      0x7C280400,  //  0134  CALL	R10	2
      0xA8040001,  //  0135  EXBLK	1	1
      0x80040800,  //  0136  RET	1	R4
      0xA8040001,  //  0137  EXBLK	1	1
      0x70020017,  //  0138  JMP		#0151
      0xAC140002,  //  0139  CATCH	R5	0	2
      0x70020014,  //  013A  JMP		#0150
      0xB81E1E00,  //  013B  GETNGBL	R7	K15
      0x60200008,  //  013C  GETGBL	R8	G8
      0x5C240A00,  //  013D  MOVE	R9	R5
      0x7C200200,  //  013E  CALL	R8	1
      0x00228C08,  //  013F  ADD	R8	K70	R8
      0x00201147,  //  0140  ADD	R8	R8	K71
      0x60240008,  //  0141  GETGBL	R9	G8
      0x5C280C00,  //  0142  MOVE	R10	R6
      0x7C240200,  //  0143  CALL	R9	1
      0x00201009,  //  0144  ADD	R8	R8	R9
      0x58240048,  //  0145  LDCONST	R9	K72
      0x7C1C0400,  //  0146  CALL	R7	2
      0xB81E1A00,  //  0147  GETNGBL	R7	K13
      0x881C0F49,  //  0148  GETMBR	R7	R7	K73
      0x781E0002,  //  0149  JMPF	R7	#014D
      0xA41E9400,  //  014A  IMPORT	R7	K74
      0x8C200F4B,  //  014B  GETMET	R8	R7	K75
      0x7C200200,  //  014C  CALL	R8	1
      0x501C0000,  //  014D  LDBOOL	R7	0	0
      0x80040E00,  //  014E  RET	1	R7
      0x70020000,  //  014F  JMP		#0151
      0xB0080000,  //  0150  RAISE	2	R0	R0
      0x80000000,  //  0151  RET	0
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
      0x8C08054C,  //  0001  GETMET	R2	R2	K76
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
      0x5818004D,  //  0010  LDCONST	R6	K77
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
      0x8C04034E,  //  0001  GETMET	R1	R1	K78
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
      0x8C04034F,  //  0001  GETMET	R1	R1	K79
      0x7C040200,  //  0002  CALL	R1	1
      0x88040104,  //  0003  GETMBR	R1	R0	K4
      0x8C04034F,  //  0004  GETMET	R1	R1	K79
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
