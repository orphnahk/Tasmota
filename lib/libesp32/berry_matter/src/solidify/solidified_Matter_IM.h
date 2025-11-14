/* Solidification of Matter_IM.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
extern const bclass be_class_Matter_IM;
// compact class 'Matter_IM' ktab size: 219, total: 535 (saved 2528 bytes)
static const bvalue be_ktab_class_Matter_IM[219] = {
  /* K0   */  be_nested_str_weak(matter),
  /* K1   */  be_nested_str_weak(WriteRequestMessage),
  /* K2   */  be_nested_str_weak(from_TLV),
  /* K3   */  be_nested_str_weak(tasmota),
  /* K4   */  be_nested_str_weak(log),
  /* K5   */  be_nested_str_weak(MTR_X3A_X20received_X20WriteRequestMessage_X3D),
  /* K6   */  be_const_int(3),
  /* K7   */  be_nested_str_weak(Path),
  /* K8   */  be_nested_str_weak(suppress_response),
  /* K9   */  be_nested_str_weak(write_requests),
  /* K10  */  be_nested_str_weak(WriteResponseMessage),
  /* K11  */  be_nested_str_weak(write_responses),
  /* K12  */  be_nested_str_weak(PathGenerator),
  /* K13  */  be_nested_str_weak(device),
  /* K14  */  be_nested_str_weak(path),
  /* K15  */  be_nested_str_weak(data),
  /* K16  */  be_nested_str_weak(copy),
  /* K17  */  be_nested_str_weak(cluster),
  /* K18  */  be_nested_str_weak(attribute),
  /* K19  */  be_nested_str_weak(status),
  /* K20  */  be_nested_str_weak(INVALID_ACTION),
  /* K21  */  be_nested_str_weak(write_single_attribute_status_to_bytes),
  /* K22  */  be_nested_str_weak(endpoint),
  /* K23  */  be_nested_str_weak(loglevel),
  /* K24  */  be_nested_str_weak(get_attribute_name),
  /* K25  */  be_nested_str_weak(MTR_X3A_X20Write_Attr_X20),
  /* K26  */  be_nested_str_weak(_X20_X28),
  /* K27  */  be_nested_str_weak(_X29),
  /* K28  */  be_nested_str_weak(),
  /* K29  */  be_nested_str_weak(start),
  /* K30  */  be_nested_str_weak(is_direct),
  /* K31  */  be_nested_str_weak(next_attribute),
  /* K32  */  be_nested_str_weak(msg),
  /* K33  */  be_nested_str_weak(get_pi),
  /* K34  */  be_nested_str_weak(UNSUPPORTED_WRITE),
  /* K35  */  be_nested_str_weak(write_attribute),
  /* K36  */  be_nested_str_weak(session),
  /* K37  */  be_nested_str_weak(SUCCESS),
  /* K38  */  be_nested_str_weak(stop_iteration),
  /* K39  */  be_nested_str_weak(send_queue),
  /* K40  */  be_nested_str_weak(push),
  /* K41  */  be_nested_str_weak(IM_WriteResponse),
  /* K42  */  be_nested_str_weak(add),
  /* K43  */  be_const_int(1),
  /* K44  */  be_const_int(2),
  /* K45  */  be_const_int(355795236),
  /* K46  */  be_nested_str_weak(path2raw),
  /* K47  */  be_nested_str_weak(tag_sub),
  /* K48  */  be_nested_str_weak(tlv2raw),
  /* K49  */  be_nested_str_weak(ReadRequestMessage),
  /* K50  */  be_nested_str_weak(fabric_filtered),
  /* K51  */  be_nested_str_weak(attributes_requests),
  /* K52  */  be_nested_str_weak(updates),
  /* K53  */  be_nested_str_weak(AttributePathIB),
  /* K54  */  be_nested_str_weak(MTR_X3A_X20_X3CSub_Data_X20_X20_X28_X256i_X29_X20sub_X3D_X25i),
  /* K55  */  be_nested_str_weak(local_session_id),
  /* K56  */  be_nested_str_weak(subscription_id),
  /* K57  */  be_nested_str_weak(is_keep_alive),
  /* K58  */  be_nested_str_weak(process_read_or_subscribe_request_pull),
  /* K59  */  be_nested_str_weak(update_event_generator_array),
  /* K60  */  be_nested_str_weak(IM_ReportDataSubscribed_Pull),
  /* K61  */  be_nested_str_weak(_message_handler),
  /* K62  */  be_nested_str_weak(send_enqueued),
  /* K63  */  be_nested_str_weak(process_read_or_subscribe_request_event_pull),
  /* K64  */  be_nested_str_weak(IM_ReportData_Pull),
  /* K65  */  be_const_int(0),
  /* K66  */  be_nested_str_weak(TimedRequestMessage),
  /* K67  */  be_nested_str_weak(MTR_X3A_X20received_X20TimedRequestMessage_X3D),
  /* K68  */  be_nested_str_weak(MTR_X3A_X20_X3ECommand_X20_X20_X20_X28_X256i_X29_X20TimedRequest_X3D_X25i),
  /* K69  */  be_nested_str_weak(timeout),
  /* K70  */  be_nested_str_weak(send_status),
  /* K71  */  be_nested_str_weak(subs_shop),
  /* K72  */  be_nested_str_weak(every_50ms),
  /* K73  */  be_nested_str_weak(MTR_X3A_X20IM_X3Ainvoke_request_X20processing_X20start),
  /* K74  */  be_nested_str_weak(InvokeRequestMessage),
  /* K75  */  be_nested_str_weak(invoke_requests),
  /* K76  */  be_nested_str_weak(InvokeResponseMessage),
  /* K77  */  be_nested_str_weak(invoke_responses),
  /* K78  */  be_nested_str_weak(command_path),
  /* K79  */  be_nested_str_weak(command),
  /* K80  */  be_nested_str_weak(UNSUPPORTED_COMMAND),
  /* K81  */  be_nested_str_weak(get_command_name),
  /* K82  */  be_nested_str_weak(invoke_request),
  /* K83  */  be_nested_str_weak(command_fields),
  /* K84  */  be_nested_str_weak(_X28),
  /* K85  */  be_nested_str_weak(_X29_X20),
  /* K86  */  be_nested_str_weak(MTR_X3A_X20_X3ECommand_X20_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s_X20_X25s),
  /* K87  */  be_nested_str_weak(invokeresponse2raw),
  /* K88  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20OK_X20exch_X3D_X25i),
  /* K89  */  be_nested_str_weak(exchange_id),
  /* K90  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s),
  /* K91  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20Status_X3D0x_X2502X_X20exch_X3D_X25i),
  /* K92  */  be_nested_str_weak(MTR_X3A_X20_Ignore_X20_X20_X20_X20_X28_X256i_X29_X20exch_X3D_X25i),
  /* K93  */  be_nested_str_weak(IM_InvokeResponse),
  /* K94  */  be_nested_str_weak(event_requests),
  /* K95  */  be_nested_str_weak(get_node_id),
  /* K96  */  be_nested_str_weak(MTR_X3A_X20process_read_or_subscribe_request_pull_X20size_requests_X3D_X25s),
  /* K97  */  be_nested_str_weak(parse_event_filters_min_no),
  /* K98  */  be_nested_str_weak(event_filters),
  /* K99  */  be_nested_str_weak(EventGenerator),
  /* K100 */  be_nested_str_weak(event),
  /* K101 */  be_nested_str_weak(get_event_name),
  /* K102 */  be_nested_str_weak(_X2502X),
  /* K103 */  be_nested_str_weak(_X2A_X2A),
  /* K104 */  be_nested_str_weak(_X2504X),
  /* K105 */  be_nested_str_weak(_X2A_X2A_X2A_X2A),
  /* K106 */  be_nested_str_weak(_X20_X28event_X3E_X25s_X29),
  /* K107 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Event_X28_X256i_X29_X20_X5B_X25s_X5D_X25s_X2F_X25s_X20_X25s_X25s),
  /* K108 */  be_nested_str_weak(finished),
  /* K109 */  be_nested_str_weak(ready),
  /* K110 */  be_nested_str_weak(send_im),
  /* K111 */  be_nested_str_weak(remove_sendqueue_by_exchangeid),
  /* K112 */  be_nested_str_weak(resp),
  /* K113 */  be_nested_str_weak(SubscribeRequestMessage),
  /* K114 */  be_nested_str_weak(keep_subscriptions),
  /* K115 */  be_nested_str_weak(MTR_X3A_X20remove_X20all_X20subscriptions_X20for_X20session_X20_X25s),
  /* K116 */  be_nested_str_weak(remove_by_session),
  /* K117 */  be_nested_str_weak(new_subscription),
  /* K118 */  be_nested_str_weak(MTR_X3A_X20_X3ESubscribe_X20_X28_X256i_X29_X20_X25s_X20_X28min_X3D_X25i_X2C_X20max_X3D_X25i_X2C_X20keep_X3D_X25i_X29_X20sub_X3D_X25i_X20fabric_filtered_X3D_X25s),
  /* K119 */  be_nested_str_weak(concat),
  /* K120 */  be_nested_str_weak(_X20),
  /* K121 */  be_nested_str_weak(min_interval),
  /* K122 */  be_nested_str_weak(max_interval),
  /* K123 */  be_nested_str_weak(set_event_generator_or_arr),
  /* K124 */  be_nested_str_weak(IM_SubscribeResponse_Pull),
  /* K125 */  be_nested_str_weak(send_encrypted_ack),
  /* K126 */  be_nested_str_weak(time_reached),
  /* K127 */  be_nested_str_weak(expiration),
  /* K128 */  be_nested_str_weak(reached_timeout),
  /* K129 */  be_nested_str_weak(remove),
  /* K130 */  be_nested_str_weak(find_sendqueue_by_exchangeid),
  /* K131 */  be_nested_str_weak(MTR_X3A_X20process_incoming_ack_X20exch_X3D_X25i_X20message_X3D_X25i),
  /* K132 */  be_nested_str_weak(ack_received),
  /* K133 */  be_nested_str_weak(get_exchangeid),
  /* K134 */  be_nested_str_weak(MTR_X3A_X20remove_X20IM_X20message_X20exch_X3D_X25s),
  /* K135 */  be_nested_str_weak(TLV),
  /* K136 */  be_nested_str_weak(AttributeStatusIB),
  /* K137 */  be_nested_str_weak(StatusIB),
  /* K138 */  be_nested_str_weak(MTR_X3A_X20_X3EWrite_Attr_X25s_X25s_X20_X2D_X20_X25s_X20STATUS_X3A_X200x_X2502X_X20_X25s),
  /* K139 */  be_nested_str_weak(MTR_X3A_X20_X3EWrite_Attr_X25s_X25s_X20_X2D_X20IGNORED),
  /* K140 */  be_nested_str_weak(IM_Subscription_Shop),
  /* K141 */  be_nested_str_weak(read_request_solo),
  /* K142 */  be_nested_str_weak(ReadRequestMessage_solo),
  /* K143 */  be_nested_str_weak(invoke_request_solo),
  /* K144 */  be_nested_str_weak(InvokeRequestMessage_solo),
  /* K145 */  be_nested_str_weak(tlv_solo),
  /* K146 */  be_nested_str_weak(Matter_TLV_item),
  /* K147 */  be_nested_str_weak(expire_sendqueue),
  /* K148 */  be_nested_str_weak(MTR_X3A_X20_X3ECommand1_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s_X20_X25s),
  /* K149 */  be_const_int(354943030),
  /* K150 */  be_const_int(405077761),
  /* K151 */  be_nested_str_weak(MTR_X3A_X20raw_X3D_X25s),
  /* K152 */  be_nested_str_weak(tohex),
  /* K153 */  be_nested_str_weak(build_response),
  /* K154 */  be_nested_str_weak(message_handler),
  /* K155 */  be_nested_str_weak(raw),
  /* K156 */  be_nested_str_weak(clear),
  /* K157 */  be_nested_str_weak(encode_frame),
  /* K158 */  be_nested_str_weak(encrypt),
  /* K159 */  be_nested_str_weak(send_response_frame),
  /* K160 */  be_nested_str_weak(MTR_X3A_X20_X3CSub_Alive_X20_X28_X256i_X29_X20sub_X3D_X25s),
  /* K161 */  be_nested_str_weak(IM_SubscribedHeartbeat),
  /* K162 */  be_nested_str_weak(resolve_attribute_read_solo),
  /* K163 */  be_nested_str_weak(UNSUPPORTED_ATTRIBUTE),
  /* K164 */  be_nested_str_weak(read_attribute),
  /* K165 */  be_nested_str_weak(is_list),
  /* K166 */  be_nested_str_weak(is_array),
  /* K167 */  be_nested_str_weak(encode_len),
  /* K168 */  be_nested_str_weak(MAX_MESSAGE),
  /* K169 */  be_nested_str_weak(MTR_X3A_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Response_X20to_X20big_X2C_X20revert_X20to_X20non_X2Dsolo),
  /* K170 */  be_nested_str_weak(parse),
  /* K171 */  be_nested_str_weak(app_payload_idx),
  /* K172 */  be_nested_str_weak(process_read_request_pull),
  /* K173 */  be_nested_str_weak(attributedata2raw),
  /* K174 */  be_nested_str_weak(attributestatus2raw),
  /* K175 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X20_X2D_X20IGNORED),
  /* K176 */  be_nested_str_weak(MTR_X3A_X20_X3Csnd_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20id_X3D_X25i_X20exch_X3D_X25i_X20rack_X3D_X25s),
  /* K177 */  be_nested_str_weak(message_counter),
  /* K178 */  be_nested_str_weak(ack_message_counter),
  /* K179 */  be_nested_str_weak(to_str_val),
  /* K180 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20_X25s),
  /* K181 */  be_nested_str_weak(MTR_X3A_X20_X25s),
  /* K182 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20STATUS_X3A_X200x_X2502X_X20_X25s),
  /* K183 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20IGNORED),
  /* K184 */  be_const_class(be_class_Matter_IM),
  /* K185 */  be_nested_str_weak(int64),
  /* K186 */  be_nested_str_weak(toint64),
  /* K187 */  be_nested_str_weak(node),
  /* K188 */  be_nested_str_weak(tobytes),
  /* K189 */  be_nested_str_weak(MTR_X3A_X20node_id_X20filter_X20_X25s_X20doesn_X27t_X20match_X20_X25s),
  /* K190 */  be_nested_str_weak(event_min),
  /* K191 */  be_nested_str_weak(findsubval),
  /* K192 */  be_nested_str_weak(status_ok_received),
  /* K193 */  be_nested_str_weak(MTR_X3A_X20_X3EOK_X20_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20exch_X3D_X25i_X20not_X20found),
  /* K194 */  be_nested_str_weak(MTR_X3A_X20_X3EStatus_X20_X20_X20_X20ERROR_X20_X3D_X200x_X2502X),
  /* K195 */  be_nested_str_weak(status_error_received),
  /* K196 */  be_nested_str_weak(Matter_TLV_array),
  /* K197 */  be_nested_str_weak(val),
  /* K198 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20_X25s),
  /* K199 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20STATUS_X3A_X200x_X2502X_X20_X25s),
  /* K200 */  be_nested_str_weak(IM_Status),
  /* K201 */  be_nested_str_weak(opcode),
  /* K202 */  be_nested_str_weak(from_raw),
  /* K203 */  be_nested_str_weak(MTR_X3A_X20process_incoming_X20read_request_solo_X3D_X25s),
  /* K204 */  be_nested_str_weak(process_read_request_solo),
  /* K205 */  be_nested_str_weak(MTR_X3A_X20invoke_request_solo_X3D_X25s_X20_X25s_X20msg_X2Eapp_payload_idx_X3D_X25s_X20_X25s),
  /* K206 */  be_const_int(2147483647),
  /* K207 */  be_nested_str_weak(process_invoke_request_solo),
  /* K208 */  be_nested_str_weak(MTR_X3A_X20received_X20IM_X20message_X20),
  /* K209 */  be_nested_str_weak(inspect),
  /* K210 */  be_nested_str_weak(MTR_X3A_X20IM_X20TLV_X3A_X20),
  /* K211 */  be_nested_str_weak(MTR_X3A_X20InteractionModelRevision_X3D),
  /* K212 */  be_nested_str_weak(nil),
  /* K213 */  be_nested_str_weak(process_status_response),
  /* K214 */  be_nested_str_weak(send_ack_now),
  /* K215 */  be_nested_str_weak(subscribe_request),
  /* K216 */  be_nested_str_weak(process_write_request),
  /* K217 */  be_nested_str_weak(process_invoke_request),
  /* K218 */  be_nested_str_weak(process_timed_request),
};


extern const bclass be_class_Matter_IM;

/********************************************************************
** Solidified function: process_write_request
********************************************************************/
be_local_closure(class_Matter_IM_process_write_request,   /* name */
  be_nested_proto(
    21,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_write_request),
    &be_const_str_solidified,
    ( &(const binstruction[154]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0701,  //  0001  GETMET	R3	R3	K1
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0xB8120600,  //  0006  GETNGBL	R4	K3
      0x8C100904,  //  0007  GETMET	R4	R4	K4
      0x60180008,  //  0008  GETGBL	R6	G8
      0x5C1C0600,  //  0009  MOVE	R7	R3
      0x7C180200,  //  000A  CALL	R6	1
      0x001A0A06,  //  000B  ADD	R6	K5	R6
      0x581C0006,  //  000C  LDCONST	R7	K6
      0x7C100600,  //  000D  CALL	R4	3
      0xB8120000,  //  000E  GETNGBL	R4	K0
      0x8C100907,  //  000F  GETMET	R4	R4	K7
      0x7C100200,  //  0010  CALL	R4	1
      0x88140708,  //  0011  GETMBR	R5	R3	K8
      0x88180709,  //  0012  GETMBR	R6	R3	K9
      0x4C1C0000,  //  0013  LDNIL	R7
      0x20180C07,  //  0014  NE	R6	R6	R7
      0x781A0081,  //  0015  JMPF	R6	#0098
      0xB81A0000,  //  0016  GETNGBL	R6	K0
      0x8C180D0A,  //  0017  GETMET	R6	R6	K10
      0x7C180200,  //  0018  CALL	R6	1
      0x601C0012,  //  0019  GETGBL	R7	G18
      0x7C1C0000,  //  001A  CALL	R7	0
      0x901A1607,  //  001B  SETMBR	R6	K11	R7
      0xB81E0000,  //  001C  GETNGBL	R7	K0
      0x8C1C0F0C,  //  001D  GETMET	R7	R7	K12
      0x8824010D,  //  001E  GETMBR	R9	R0	K13
      0x7C1C0400,  //  001F  CALL	R7	2
      0x60200010,  //  0020  GETGBL	R8	G16
      0x88240709,  //  0021  GETMBR	R9	R3	K9
      0x7C200200,  //  0022  CALL	R8	1
      0xA8020066,  //  0023  EXBLK	0	#008B
      0x5C241000,  //  0024  MOVE	R9	R8
      0x7C240000,  //  0025  CALL	R9	0
      0x8828130E,  //  0026  GETMBR	R10	R9	K14
      0x882C130F,  //  0027  GETMBR	R11	R9	K15
      0x8C300910,  //  0028  GETMET	R12	R4	K16
      0x5C381400,  //  0029  MOVE	R14	R10
      0x7C300400,  //  002A  CALL	R12	2
      0x88301511,  //  002B  GETMBR	R12	R10	K17
      0x4C340000,  //  002C  LDNIL	R13
      0x1C30180D,  //  002D  EQ	R12	R12	R13
      0x74320003,  //  002E  JMPT	R12	#0033
      0x88301512,  //  002F  GETMBR	R12	R10	K18
      0x4C340000,  //  0030  LDNIL	R13
      0x1C30180D,  //  0031  EQ	R12	R12	R13
      0x78320008,  //  0032  JMPF	R12	#003C
      0xB8320000,  //  0033  GETNGBL	R12	K0
      0x88301914,  //  0034  GETMBR	R12	R12	K20
      0x9012260C,  //  0035  SETMBR	R4	K19	R12
      0x8C300115,  //  0036  GETMET	R12	R0	K21
      0x5C380C00,  //  0037  MOVE	R14	R6
      0x5C3C0800,  //  0038  MOVE	R15	R4
      0x4C400000,  //  0039  LDNIL	R16
      0x7C300800,  //  003A  CALL	R12	4
      0x7001FFE7,  //  003B  JMP		#0024
      0x88301516,  //  003C  GETMBR	R12	R10	K22
      0x4C340000,  //  003D  LDNIL	R13
      0x1C30180D,  //  003E  EQ	R12	R12	R13
      0x78320017,  //  003F  JMPF	R12	#0058
      0xB8320600,  //  0040  GETNGBL	R12	K3
      0x8C301917,  //  0041  GETMET	R12	R12	K23
      0x58380006,  //  0042  LDCONST	R14	K6
      0x7C300400,  //  0043  CALL	R12	2
      0x78320012,  //  0044  JMPF	R12	#0058
      0xB8320000,  //  0045  GETNGBL	R12	K0
      0x8C301918,  //  0046  GETMET	R12	R12	K24
      0x88381511,  //  0047  GETMBR	R14	R10	K17
      0x883C1512,  //  0048  GETMBR	R15	R10	K18
      0x7C300600,  //  0049  CALL	R12	3
      0xB8360600,  //  004A  GETNGBL	R13	K3
      0x8C341B04,  //  004B  GETMET	R13	R13	K4
      0x603C0008,  //  004C  GETGBL	R15	G8
      0x5C400800,  //  004D  MOVE	R16	R4
      0x7C3C0200,  //  004E  CALL	R15	1
      0x003E320F,  //  004F  ADD	R15	K25	R15
      0x78320002,  //  0050  JMPF	R12	#0054
      0x0042340C,  //  0051  ADD	R16	K26	R12
      0x0040211B,  //  0052  ADD	R16	R16	K27
      0x70020000,  //  0053  JMP		#0055
      0x5840001C,  //  0054  LDCONST	R16	K28
      0x003C1E10,  //  0055  ADD	R15	R15	R16
      0x58400006,  //  0056  LDCONST	R16	K6
      0x7C340600,  //  0057  CALL	R13	3
      0x8C300F1D,  //  0058  GETMET	R12	R7	K29
      0x88381516,  //  0059  GETMBR	R14	R10	K22
      0x883C1511,  //  005A  GETMBR	R15	R10	K17
      0x88401512,  //  005B  GETMBR	R16	R10	K18
      0x7C300800,  //  005C  CALL	R12	4
      0x8C300F1E,  //  005D  GETMET	R12	R7	K30
      0x7C300200,  //  005E  CALL	R12	1
      0x4C340000,  //  005F  LDNIL	R13
      0x8C380F1F,  //  0060  GETMET	R14	R7	K31
      0x7C380200,  //  0061  CALL	R14	1
      0x5C341C00,  //  0062  MOVE	R13	R14
      0x783A0025,  //  0063  JMPF	R14	#008A
      0x90364001,  //  0064  SETMBR	R13	K32	R1
      0x88381B13,  //  0065  GETMBR	R14	R13	K19
      0x4C3C0000,  //  0066  LDNIL	R15
      0x20381C0F,  //  0067  NE	R14	R14	R15
      0x783A0007,  //  0068  JMPF	R14	#0071
      0x4C380000,  //  0069  LDNIL	R14
      0x9036260E,  //  006A  SETMBR	R13	K19	R14
      0x8C380115,  //  006B  GETMET	R14	R0	K21
      0x5C400C00,  //  006C  MOVE	R16	R6
      0x5C441A00,  //  006D  MOVE	R17	R13
      0x5C481600,  //  006E  MOVE	R18	R11
      0x7C380800,  //  006F  CALL	R14	4
      0x70020017,  //  0070  JMP		#0089
      0x8C380F21,  //  0071  GETMET	R14	R7	K33
      0x7C380200,  //  0072  CALL	R14	1
      0xB83E0000,  //  0073  GETNGBL	R15	K0
      0x883C1F22,  //  0074  GETMBR	R15	R15	K34
      0x9036260F,  //  0075  SETMBR	R13	K19	R15
      0x4C3C0000,  //  0076  LDNIL	R15
      0x203C1C0F,  //  0077  NE	R15	R14	R15
      0x783E0005,  //  0078  JMPF	R15	#007F
      0x8C3C1D23,  //  0079  GETMET	R15	R14	K35
      0x88440324,  //  007A  GETMBR	R17	R1	K36
      0x5C481A00,  //  007B  MOVE	R18	R13
      0x5C4C1600,  //  007C  MOVE	R19	R11
      0x7C3C0800,  //  007D  CALL	R15	4
      0x70020000,  //  007E  JMP		#0080
      0x4C3C0000,  //  007F  LDNIL	R15
      0x783E0002,  //  0080  JMPF	R15	#0084
      0xB8420000,  //  0081  GETNGBL	R16	K0
      0x88402125,  //  0082  GETMBR	R16	R16	K37
      0x90362610,  //  0083  SETMBR	R13	K19	R16
      0x8C400115,  //  0084  GETMET	R16	R0	K21
      0x5C480C00,  //  0085  MOVE	R18	R6
      0x5C4C1A00,  //  0086  MOVE	R19	R13
      0x5C501600,  //  0087  MOVE	R20	R11
      0x7C400800,  //  0088  CALL	R16	4
      0x7001FFD5,  //  0089  JMP		#0060
      0x7001FF98,  //  008A  JMP		#0024
      0x58200026,  //  008B  LDCONST	R8	K38
      0xAC200200,  //  008C  CATCH	R8	1	0
      0xB0080000,  //  008D  RAISE	2	R0	R0
      0x5C200A00,  //  008E  MOVE	R8	R5
      0x74220007,  //  008F  JMPT	R8	#0098
      0x88200127,  //  0090  GETMBR	R8	R0	K39
      0x8C201128,  //  0091  GETMET	R8	R8	K40
      0xB82A0000,  //  0092  GETNGBL	R10	K0
      0x8C281529,  //  0093  GETMET	R10	R10	K41
      0x5C300200,  //  0094  MOVE	R12	R1
      0x5C340C00,  //  0095  MOVE	R13	R6
      0x7C280600,  //  0096  CALL	R10	3
      0x7C200400,  //  0097  CALL	R8	2
      0x50180200,  //  0098  LDBOOL	R6	1	0
      0x80040C00,  //  0099  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: path2raw
********************************************************************/
be_local_closure(class_Matter_IM_path2raw,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    5,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(path2raw),
    &be_const_str_solidified,
    ( &(const binstruction[107]) {  /* code */
      0x8C14032A,  //  0000  GETMET	R5	R1	K42
      0x541E0036,  //  0001  LDINT	R7	55
      0x5820002B,  //  0002  LDCONST	R8	K43
      0x7C140600,  //  0003  CALL	R5	3
      0x8C14032A,  //  0004  GETMET	R5	R1	K42
      0x5C1C0600,  //  0005  MOVE	R7	R3
      0x5820002B,  //  0006  LDCONST	R8	K43
      0x7C140600,  //  0007  CALL	R5	3
      0x88140516,  //  0008  GETMBR	R5	R2	K22
      0x541A00FE,  //  0009  LDINT	R6	255
      0x18140A06,  //  000A  LE	R5	R5	R6
      0x78160008,  //  000B  JMPF	R5	#0015
      0x8C14032A,  //  000C  GETMET	R5	R1	K42
      0x541E2401,  //  000D  LDINT	R7	9218
      0x5421FFFD,  //  000E  LDINT	R8	-2
      0x7C140600,  //  000F  CALL	R5	3
      0x8C14032A,  //  0010  GETMET	R5	R1	K42
      0x881C0516,  //  0011  GETMBR	R7	R2	K22
      0x5820002B,  //  0012  LDCONST	R8	K43
      0x7C140600,  //  0013  CALL	R5	3
      0x70020007,  //  0014  JMP		#001D
      0x8C14032A,  //  0015  GETMET	R5	R1	K42
      0x541E2501,  //  0016  LDINT	R7	9474
      0x5421FFFD,  //  0017  LDINT	R8	-2
      0x7C140600,  //  0018  CALL	R5	3
      0x8C14032A,  //  0019  GETMET	R5	R1	K42
      0x881C0516,  //  001A  GETMBR	R7	R2	K22
      0x5820002C,  //  001B  LDCONST	R8	K44
      0x7C140600,  //  001C  CALL	R5	3
      0x88140511,  //  001D  GETMBR	R5	R2	K17
      0x541A00FE,  //  001E  LDINT	R6	255
      0x18140A06,  //  001F  LE	R5	R5	R6
      0x78160008,  //  0020  JMPF	R5	#002A
      0x8C14032A,  //  0021  GETMET	R5	R1	K42
      0x541E2402,  //  0022  LDINT	R7	9219
      0x5421FFFD,  //  0023  LDINT	R8	-2
      0x7C140600,  //  0024  CALL	R5	3
      0x8C14032A,  //  0025  GETMET	R5	R1	K42
      0x881C0511,  //  0026  GETMBR	R7	R2	K17
      0x5820002B,  //  0027  LDCONST	R8	K43
      0x7C140600,  //  0028  CALL	R5	3
      0x70020014,  //  0029  JMP		#003F
      0x88140511,  //  002A  GETMBR	R5	R2	K17
      0x541AFFFE,  //  002B  LDINT	R6	65535
      0x18140A06,  //  002C  LE	R5	R5	R6
      0x78160008,  //  002D  JMPF	R5	#0037
      0x8C14032A,  //  002E  GETMET	R5	R1	K42
      0x541E2502,  //  002F  LDINT	R7	9475
      0x5421FFFD,  //  0030  LDINT	R8	-2
      0x7C140600,  //  0031  CALL	R5	3
      0x8C14032A,  //  0032  GETMET	R5	R1	K42
      0x881C0511,  //  0033  GETMBR	R7	R2	K17
      0x5820002C,  //  0034  LDCONST	R8	K44
      0x7C140600,  //  0035  CALL	R5	3
      0x70020007,  //  0036  JMP		#003F
      0x8C14032A,  //  0037  GETMET	R5	R1	K42
      0x541E2602,  //  0038  LDINT	R7	9731
      0x5421FFFD,  //  0039  LDINT	R8	-2
      0x7C140600,  //  003A  CALL	R5	3
      0x8C14032A,  //  003B  GETMET	R5	R1	K42
      0x881C0511,  //  003C  GETMBR	R7	R2	K17
      0x54220003,  //  003D  LDINT	R8	4
      0x7C140600,  //  003E  CALL	R5	3
      0x88140512,  //  003F  GETMBR	R5	R2	K18
      0x541A00FE,  //  0040  LDINT	R6	255
      0x18140A06,  //  0041  LE	R5	R5	R6
      0x78160008,  //  0042  JMPF	R5	#004C
      0x8C14032A,  //  0043  GETMET	R5	R1	K42
      0x541E2403,  //  0044  LDINT	R7	9220
      0x5421FFFD,  //  0045  LDINT	R8	-2
      0x7C140600,  //  0046  CALL	R5	3
      0x8C14032A,  //  0047  GETMET	R5	R1	K42
      0x881C0512,  //  0048  GETMBR	R7	R2	K18
      0x5820002B,  //  0049  LDCONST	R8	K43
      0x7C140600,  //  004A  CALL	R5	3
      0x70020014,  //  004B  JMP		#0061
      0x88140512,  //  004C  GETMBR	R5	R2	K18
      0x541AFFFE,  //  004D  LDINT	R6	65535
      0x18140A06,  //  004E  LE	R5	R5	R6
      0x78160008,  //  004F  JMPF	R5	#0059
      0x8C14032A,  //  0050  GETMET	R5	R1	K42
      0x541E2503,  //  0051  LDINT	R7	9476
      0x5421FFFD,  //  0052  LDINT	R8	-2
      0x7C140600,  //  0053  CALL	R5	3
      0x8C14032A,  //  0054  GETMET	R5	R1	K42
      0x881C0512,  //  0055  GETMBR	R7	R2	K18
      0x5820002C,  //  0056  LDCONST	R8	K44
      0x7C140600,  //  0057  CALL	R5	3
      0x70020007,  //  0058  JMP		#0061
      0x8C14032A,  //  0059  GETMET	R5	R1	K42
      0x541E2603,  //  005A  LDINT	R7	9732
      0x5421FFFD,  //  005B  LDINT	R8	-2
      0x7C140600,  //  005C  CALL	R5	3
      0x8C14032A,  //  005D  GETMET	R5	R1	K42
      0x881C0512,  //  005E  GETMBR	R7	R2	K18
      0x54220003,  //  005F  LDINT	R8	4
      0x7C140600,  //  0060  CALL	R5	3
      0x78120003,  //  0061  JMPF	R4	#0066
      0x8C14032A,  //  0062  GETMET	R5	R1	K42
      0x541E3404,  //  0063  LDINT	R7	13317
      0x5421FFFD,  //  0064  LDINT	R8	-2
      0x7C140600,  //  0065  CALL	R5	3
      0x8C14032A,  //  0066  GETMET	R5	R1	K42
      0x541E0017,  //  0067  LDINT	R7	24
      0x5820002B,  //  0068  LDCONST	R8	K43
      0x7C140600,  //  0069  CALL	R5	3
      0x80000000,  //  006A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: attributedata2raw
********************************************************************/
be_local_closure(class_Matter_IM_attributedata2raw,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    5,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(attributedata2raw),
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0x8C14032A,  //  0000  GETMET	R5	R1	K42
      0x581C002D,  //  0001  LDCONST	R7	K45
      0x5421FFFB,  //  0002  LDINT	R8	-4
      0x7C140600,  //  0003  CALL	R5	3
      0x8C14032A,  //  0004  GETMET	R5	R1	K42
      0x581C002B,  //  0005  LDCONST	R7	K43
      0x5421FFFD,  //  0006  LDINT	R8	-2
      0x7C140600,  //  0007  CALL	R5	3
      0x8C14012E,  //  0008  GETMET	R5	R0	K46
      0x5C1C0200,  //  0009  MOVE	R7	R1
      0x5C200400,  //  000A  MOVE	R8	R2
      0x5824002B,  //  000B  LDCONST	R9	K43
      0x5C280800,  //  000C  MOVE	R10	R4
      0x7C140A00,  //  000D  CALL	R5	5
      0x900E5F2C,  //  000E  SETMBR	R3	K47	K44
      0x8C140730,  //  000F  GETMET	R5	R3	K48
      0x5C1C0200,  //  0010  MOVE	R7	R1
      0x7C140400,  //  0011  CALL	R5	2
      0x8C14032A,  //  0012  GETMET	R5	R1	K42
      0x541E1817,  //  0013  LDINT	R7	6168
      0x5421FFFD,  //  0014  LDINT	R8	-2
      0x7C140600,  //  0015  CALL	R5	3
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_subscribe_update
********************************************************************/
be_local_closure(class_Matter_IM_send_subscribe_update,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(send_subscribe_update),
    &be_const_str_solidified,
    ( &(const binstruction[65]) {  /* code */
      0x88080324,  //  0000  GETMBR	R2	R1	K36
      0xB80E0000,  //  0001  GETNGBL	R3	K0
      0x8C0C0731,  //  0002  GETMET	R3	R3	K49
      0x7C0C0200,  //  0003  CALL	R3	1
      0x50100000,  //  0004  LDBOOL	R4	0	0
      0x900E6404,  //  0005  SETMBR	R3	K50	R4
      0x60100012,  //  0006  GETGBL	R4	G18
      0x7C100000,  //  0007  CALL	R4	0
      0x900E6604,  //  0008  SETMBR	R3	K51	R4
      0x60100010,  //  0009  GETGBL	R4	G16
      0x88140334,  //  000A  GETMBR	R5	R1	K52
      0x7C100200,  //  000B  CALL	R4	1
      0xA802000F,  //  000C  EXBLK	0	#001D
      0x5C140800,  //  000D  MOVE	R5	R4
      0x7C140000,  //  000E  CALL	R5	0
      0xB81A0000,  //  000F  GETNGBL	R6	K0
      0x8C180D35,  //  0010  GETMET	R6	R6	K53
      0x7C180200,  //  0011  CALL	R6	1
      0x881C0B16,  //  0012  GETMBR	R7	R5	K22
      0x901A2C07,  //  0013  SETMBR	R6	K22	R7
      0x881C0B11,  //  0014  GETMBR	R7	R5	K17
      0x901A2207,  //  0015  SETMBR	R6	K17	R7
      0x881C0B12,  //  0016  GETMBR	R7	R5	K18
      0x901A2407,  //  0017  SETMBR	R6	K18	R7
      0x881C0733,  //  0018  GETMBR	R7	R3	K51
      0x8C1C0F28,  //  0019  GETMET	R7	R7	K40
      0x5C240C00,  //  001A  MOVE	R9	R6
      0x7C1C0400,  //  001B  CALL	R7	2
      0x7001FFEF,  //  001C  JMP		#000D
      0x58100026,  //  001D  LDCONST	R4	K38
      0xAC100200,  //  001E  CATCH	R4	1	0
      0xB0080000,  //  001F  RAISE	2	R0	R0
      0xB8120600,  //  0020  GETNGBL	R4	K3
      0x8C100904,  //  0021  GETMET	R4	R4	K4
      0x60180018,  //  0022  GETGBL	R6	G24
      0x581C0036,  //  0023  LDCONST	R7	K54
      0x88200537,  //  0024  GETMBR	R8	R2	K55
      0x88240338,  //  0025  GETMBR	R9	R1	K56
      0x7C180600,  //  0026  CALL	R6	3
      0x581C0006,  //  0027  LDCONST	R7	K6
      0x7C100600,  //  0028  CALL	R4	3
      0x50100000,  //  0029  LDBOOL	R4	0	0
      0x90067204,  //  002A  SETMBR	R1	K57	R4
      0x8C10013A,  //  002B  GETMET	R4	R0	K58
      0x5C180600,  //  002C  MOVE	R6	R3
      0x4C1C0000,  //  002D  LDNIL	R7
      0x7C100600,  //  002E  CALL	R4	3
      0x8C14033B,  //  002F  GETMET	R5	R1	K59
      0x7C140200,  //  0030  CALL	R5	1
      0xB81A0000,  //  0031  GETNGBL	R6	K0
      0x8C180D3C,  //  0032  GETMET	R6	R6	K60
      0x8820053D,  //  0033  GETMBR	R8	R2	K61
      0x5C240400,  //  0034  MOVE	R9	R2
      0x5C280800,  //  0035  MOVE	R10	R4
      0x5C2C0A00,  //  0036  MOVE	R11	R5
      0x5C300200,  //  0037  MOVE	R12	R1
      0x7C180C00,  //  0038  CALL	R6	6
      0x881C0127,  //  0039  GETMBR	R7	R0	K39
      0x8C1C0F28,  //  003A  GETMET	R7	R7	K40
      0x5C240C00,  //  003B  MOVE	R9	R6
      0x7C1C0400,  //  003C  CALL	R7	2
      0x8C1C013E,  //  003D  GETMET	R7	R0	K62
      0x8824053D,  //  003E  GETMBR	R9	R2	K61
      0x7C1C0400,  //  003F  CALL	R7	2
      0x80000000,  //  0040  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_request_pull
********************************************************************/
be_local_closure(class_Matter_IM_process_read_request_pull,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_read_request_pull),
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0731,  //  0001  GETMET	R3	R3	K49
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x8C10013A,  //  0006  GETMET	R4	R0	K58
      0x5C180600,  //  0007  MOVE	R6	R3
      0x5C1C0200,  //  0008  MOVE	R7	R1
      0x7C100600,  //  0009  CALL	R4	3
      0x8C14013F,  //  000A  GETMET	R5	R0	K63
      0x5C1C0600,  //  000B  MOVE	R7	R3
      0x5C200200,  //  000C  MOVE	R8	R1
      0x7C140600,  //  000D  CALL	R5	3
      0x88180127,  //  000E  GETMBR	R6	R0	K39
      0x8C180D28,  //  000F  GETMET	R6	R6	K40
      0xB8220000,  //  0010  GETNGBL	R8	K0
      0x8C201140,  //  0011  GETMET	R8	R8	K64
      0x5C280200,  //  0012  MOVE	R10	R1
      0x5C2C0800,  //  0013  MOVE	R11	R4
      0x5C300A00,  //  0014  MOVE	R12	R5
      0x7C200800,  //  0015  CALL	R8	4
      0x7C180400,  //  0016  CALL	R6	2
      0x50180200,  //  0017  LDBOOL	R6	1	0
      0x80040C00,  //  0018  RET	1	R6
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_or_subscribe_request_pull
********************************************************************/
be_local_closure(class_Matter_IM_process_read_or_subscribe_request_pull,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_read_or_subscribe_request_pull),
    &be_const_str_solidified,
    ( &(const binstruction[91]) {  /* code */
      0x880C0333,  //  0000  GETMBR	R3	R1	K51
      0x4C100000,  //  0001  LDNIL	R4
      0x200C0604,  //  0002  NE	R3	R3	R4
      0x780E0054,  //  0003  JMPF	R3	#0059
      0x4C0C0000,  //  0004  LDNIL	R3
      0x88100333,  //  0005  GETMBR	R4	R1	K51
      0x78120003,  //  0006  JMPF	R4	#000B
      0x6010000C,  //  0007  GETGBL	R4	G12
      0x88140333,  //  0008  GETMBR	R5	R1	K51
      0x7C100200,  //  0009  CALL	R4	1
      0x70020000,  //  000A  JMP		#000C
      0x58100041,  //  000B  LDCONST	R4	K65
      0x2414092B,  //  000C  GT	R5	R4	K43
      0x78160002,  //  000D  JMPF	R5	#0011
      0x60140012,  //  000E  GETGBL	R5	G18
      0x7C140000,  //  000F  CALL	R5	0
      0x5C0C0A00,  //  0010  MOVE	R3	R5
      0x60140010,  //  0011  GETGBL	R5	G16
      0x88180333,  //  0012  GETMBR	R6	R1	K51
      0x7C140200,  //  0013  CALL	R5	1
      0xA802003F,  //  0014  EXBLK	0	#0055
      0x5C180A00,  //  0015  MOVE	R6	R5
      0x7C180000,  //  0016  CALL	R6	0
      0xB81E0000,  //  0017  GETNGBL	R7	K0
      0x8C1C0F0C,  //  0018  GETMET	R7	R7	K12
      0x8824010D,  //  0019  GETMBR	R9	R0	K13
      0x7C1C0400,  //  001A  CALL	R7	2
      0x8C200F1D,  //  001B  GETMET	R8	R7	K29
      0x88280D16,  //  001C  GETMBR	R10	R6	K22
      0x882C0D11,  //  001D  GETMBR	R11	R6	K17
      0x88300D12,  //  001E  GETMBR	R12	R6	K18
      0x88340332,  //  001F  GETMBR	R13	R1	K50
      0x7C200A00,  //  0020  CALL	R8	5
      0x2420092B,  //  0021  GT	R8	R4	K43
      0x78220003,  //  0022  JMPF	R8	#0027
      0x8C200728,  //  0023  GETMET	R8	R3	K40
      0x5C280E00,  //  0024  MOVE	R10	R7
      0x7C200400,  //  0025  CALL	R8	2
      0x70020000,  //  0026  JMP		#0028
      0x5C0C0E00,  //  0027  MOVE	R3	R7
      0xB8220600,  //  0028  GETNGBL	R8	K3
      0x8C201117,  //  0029  GETMET	R8	R8	K23
      0x58280006,  //  002A  LDCONST	R10	K6
      0x7C200400,  //  002B  CALL	R8	2
      0x78220026,  //  002C  JMPF	R8	#0054
      0x88200D16,  //  002D  GETMBR	R8	R6	K22
      0x4C240000,  //  002E  LDNIL	R9
      0x1C201009,  //  002F  EQ	R8	R8	R9
      0x74220007,  //  0030  JMPT	R8	#0039
      0x88200D11,  //  0031  GETMBR	R8	R6	K17
      0x4C240000,  //  0032  LDNIL	R9
      0x1C201009,  //  0033  EQ	R8	R8	R9
      0x74220003,  //  0034  JMPT	R8	#0039
      0x88200D12,  //  0035  GETMBR	R8	R6	K18
      0x4C240000,  //  0036  LDNIL	R9
      0x1C201009,  //  0037  EQ	R8	R8	R9
      0x7822001A,  //  0038  JMPF	R8	#0054
      0xB8220000,  //  0039  GETNGBL	R8	K0
      0x8C201107,  //  003A  GETMET	R8	R8	K7
      0x7C200200,  //  003B  CALL	R8	1
      0x88240D16,  //  003C  GETMBR	R9	R6	K22
      0x90222C09,  //  003D  SETMBR	R8	K22	R9
      0x88240D11,  //  003E  GETMBR	R9	R6	K17
      0x90222209,  //  003F  SETMBR	R8	K17	R9
      0x88240D12,  //  0040  GETMBR	R9	R6	K18
      0x90222409,  //  0041  SETMBR	R8	K18	R9
      0x88240332,  //  0042  GETMBR	R9	R1	K50
      0x90226409,  //  0043  SETMBR	R8	K50	R9
      0x60240008,  //  0044  GETGBL	R9	G8
      0x5C281000,  //  0045  MOVE	R10	R8
      0x7C240200,  //  0046  CALL	R9	1
      0x88280D11,  //  0047  GETMBR	R10	R6	K17
      0x4C2C0000,  //  0048  LDNIL	R11
      0x2028140B,  //  0049  NE	R10	R10	R11
      0x782A0008,  //  004A  JMPF	R10	#0054
      0x88280D12,  //  004B  GETMBR	R10	R6	K18
      0x4C2C0000,  //  004C  LDNIL	R11
      0x2028140B,  //  004D  NE	R10	R10	R11
      0x782A0004,  //  004E  JMPF	R10	#0054
      0xB82A0000,  //  004F  GETNGBL	R10	K0
      0x8C281518,  //  0050  GETMET	R10	R10	K24
      0x88300D11,  //  0051  GETMBR	R12	R6	K17
      0x88340D12,  //  0052  GETMBR	R13	R6	K18
      0x7C280600,  //  0053  CALL	R10	3
      0x7001FFBF,  //  0054  JMP		#0015
      0x58140026,  //  0055  LDCONST	R5	K38
      0xAC140200,  //  0056  CATCH	R5	1	0
      0xB0080000,  //  0057  RAISE	2	R0	R0
      0x80040600,  //  0058  RET	1	R3
      0x4C0C0000,  //  0059  LDNIL	R3
      0x80040600,  //  005A  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_timed_request
********************************************************************/
be_local_closure(class_Matter_IM_process_timed_request,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_timed_request),
    &be_const_str_solidified,
    ( &(const binstruction[31]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0742,  //  0001  GETMET	R3	R3	K66
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0xB8120600,  //  0006  GETNGBL	R4	K3
      0x8C100904,  //  0007  GETMET	R4	R4	K4
      0x60180008,  //  0008  GETGBL	R6	G8
      0x5C1C0600,  //  0009  MOVE	R7	R3
      0x7C180200,  //  000A  CALL	R6	1
      0x001A8606,  //  000B  ADD	R6	K67	R6
      0x581C0006,  //  000C  LDCONST	R7	K6
      0x7C100600,  //  000D  CALL	R4	3
      0xB8120600,  //  000E  GETNGBL	R4	K3
      0x8C100904,  //  000F  GETMET	R4	R4	K4
      0x60180018,  //  0010  GETGBL	R6	G24
      0x581C0044,  //  0011  LDCONST	R7	K68
      0x88200324,  //  0012  GETMBR	R8	R1	K36
      0x88201137,  //  0013  GETMBR	R8	R8	K55
      0x88240745,  //  0014  GETMBR	R9	R3	K69
      0x7C180600,  //  0015  CALL	R6	3
      0x581C0006,  //  0016  LDCONST	R7	K6
      0x7C100600,  //  0017  CALL	R4	3
      0x8C100146,  //  0018  GETMET	R4	R0	K70
      0x5C180200,  //  0019  MOVE	R6	R1
      0xB81E0000,  //  001A  GETNGBL	R7	K0
      0x881C0F25,  //  001B  GETMBR	R7	R7	K37
      0x7C100600,  //  001C  CALL	R4	3
      0x50100200,  //  001D  LDBOOL	R4	1	0
      0x80040800,  //  001E  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_50ms
********************************************************************/
be_local_closure(class_Matter_IM_every_50ms,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(every_50ms),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x88040147,  //  0000  GETMBR	R1	R0	K71
      0x8C040348,  //  0001  GETMET	R1	R1	K72
      0x7C040200,  //  0002  CALL	R1	1
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_invoke_request
********************************************************************/
be_local_closure(class_Matter_IM_process_invoke_request,   /* name */
  be_nested_proto(
    20,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[232]) {  /* code */
      0xB80E0600,  //  0000  GETNGBL	R3	K3
      0x8C0C0704,  //  0001  GETMET	R3	R3	K4
      0x58140049,  //  0002  LDCONST	R5	K73
      0x541A0003,  //  0003  LDINT	R6	4
      0x7C0C0600,  //  0004  CALL	R3	3
      0xB80E0000,  //  0005  GETNGBL	R3	K0
      0x8C0C0707,  //  0006  GETMET	R3	R3	K7
      0x7C0C0200,  //  0007  CALL	R3	1
      0x900E4001,  //  0008  SETMBR	R3	K32	R1
      0xB8120000,  //  0009  GETNGBL	R4	K0
      0x8C10094A,  //  000A  GETMET	R4	R4	K74
      0x7C100200,  //  000B  CALL	R4	1
      0x8C100902,  //  000C  GETMET	R4	R4	K2
      0x5C180400,  //  000D  MOVE	R6	R2
      0x7C100400,  //  000E  CALL	R4	2
      0x8814094B,  //  000F  GETMBR	R5	R4	K75
      0x4C180000,  //  0010  LDNIL	R6
      0x20140A06,  //  0011  NE	R5	R5	R6
      0x781600D3,  //  0012  JMPF	R5	#00E7
      0xB8160000,  //  0013  GETNGBL	R5	K0
      0x8C140B4C,  //  0014  GETMET	R5	R5	K76
      0x7C140200,  //  0015  CALL	R5	1
      0x50180000,  //  0016  LDBOOL	R6	0	0
      0x90161006,  //  0017  SETMBR	R5	K8	R6
      0x60180012,  //  0018  GETGBL	R6	G18
      0x7C180000,  //  0019  CALL	R6	0
      0x90169A06,  //  001A  SETMBR	R5	K77	R6
      0x60180010,  //  001B  GETGBL	R6	G16
      0x881C094B,  //  001C  GETMBR	R7	R4	K75
      0x7C180200,  //  001D  CALL	R6	1
      0xA80200B2,  //  001E  EXBLK	0	#00D2
      0x5C1C0C00,  //  001F  MOVE	R7	R6
      0x7C1C0000,  //  0020  CALL	R7	0
      0x88200F4E,  //  0021  GETMBR	R8	R7	K78
      0x88201116,  //  0022  GETMBR	R8	R8	K22
      0x900E2C08,  //  0023  SETMBR	R3	K22	R8
      0x88200F4E,  //  0024  GETMBR	R8	R7	K78
      0x88201111,  //  0025  GETMBR	R8	R8	K17
      0x900E2208,  //  0026  SETMBR	R3	K17	R8
      0x88200F4E,  //  0027  GETMBR	R8	R7	K78
      0x8820114F,  //  0028  GETMBR	R8	R8	K79
      0x900E9E08,  //  0029  SETMBR	R3	K79	R8
      0xB8220000,  //  002A  GETNGBL	R8	K0
      0x88201150,  //  002B  GETMBR	R8	R8	K80
      0x900E2608,  //  002C  SETMBR	R3	K19	R8
      0xB8220000,  //  002D  GETNGBL	R8	K0
      0x8C201151,  //  002E  GETMET	R8	R8	K81
      0x88280711,  //  002F  GETMBR	R10	R3	K17
      0x882C074F,  //  0030  GETMBR	R11	R3	K79
      0x7C200600,  //  0031  CALL	R8	3
      0x60240008,  //  0032  GETGBL	R9	G8
      0x5C280600,  //  0033  MOVE	R10	R3
      0x7C240200,  //  0034  CALL	R9	1
      0x8828010D,  //  0035  GETMBR	R10	R0	K13
      0x8C281552,  //  0036  GETMET	R10	R10	K82
      0x88300324,  //  0037  GETMBR	R12	R1	K36
      0x88340F53,  //  0038  GETMBR	R13	R7	K83
      0x5C380600,  //  0039  MOVE	R14	R3
      0x7C280800,  //  003A  CALL	R10	4
      0x882C0704,  //  003B  GETMBR	R11	R3	K4
      0x4C300000,  //  003C  LDNIL	R12
      0x202C160C,  //  003D  NE	R11	R11	R12
      0x782E0005,  //  003E  JMPF	R11	#0045
      0x602C0008,  //  003F  GETGBL	R11	G8
      0x88300704,  //  0040  GETMBR	R12	R3	K4
      0x7C2C0200,  //  0041  CALL	R11	1
      0x002EA80B,  //  0042  ADD	R11	K84	R11
      0x002C1755,  //  0043  ADD	R11	R11	K85
      0x70020000,  //  0044  JMP		#0046
      0x582C001C,  //  0045  LDCONST	R11	K28
      0xB8320600,  //  0046  GETNGBL	R12	K3
      0x8C301904,  //  0047  GETMET	R12	R12	K4
      0x60380018,  //  0048  GETGBL	R14	G24
      0x583C0056,  //  0049  LDCONST	R15	K86
      0x88400324,  //  004A  GETMBR	R16	R1	K36
      0x88402137,  //  004B  GETMBR	R16	R16	K55
      0x5C441200,  //  004C  MOVE	R17	R9
      0x78220001,  //  004D  JMPF	R8	#0050
      0x5C481000,  //  004E  MOVE	R18	R8
      0x70020000,  //  004F  JMP		#0051
      0x5848001C,  //  0050  LDCONST	R18	K28
      0x5C4C1600,  //  0051  MOVE	R19	R11
      0x7C380A00,  //  0052  CALL	R14	5
      0x583C0006,  //  0053  LDCONST	R15	K6
      0x7C300600,  //  0054  CALL	R12	3
      0x4C300000,  //  0055  LDNIL	R12
      0x900E080C,  //  0056  SETMBR	R3	K4	R12
      0x60300015,  //  0057  GETGBL	R12	G21
      0x5436001F,  //  0058  LDINT	R13	32
      0x7C300200,  //  0059  CALL	R12	1
      0x50340200,  //  005A  LDBOOL	R13	1	0
      0x1C34140D,  //  005B  EQ	R13	R10	R13
      0x74360004,  //  005C  JMPT	R13	#0062
      0x88340713,  //  005D  GETMBR	R13	R3	K19
      0xB83A0000,  //  005E  GETNGBL	R14	K0
      0x88381D25,  //  005F  GETMBR	R14	R14	K37
      0x1C341A0E,  //  0060  EQ	R13	R13	R14
      0x7836001B,  //  0061  JMPF	R13	#007E
      0xB8360000,  //  0062  GETNGBL	R13	K0
      0x88341B25,  //  0063  GETMBR	R13	R13	K37
      0x900E260D,  //  0064  SETMBR	R3	K19	R13
      0x8C340157,  //  0065  GETMET	R13	R0	K87
      0x5C3C1800,  //  0066  MOVE	R15	R12
      0x5C400600,  //  0067  MOVE	R16	R3
      0x4C440000,  //  0068  LDNIL	R17
      0x7C340800,  //  0069  CALL	R13	4
      0x88340B4D,  //  006A  GETMBR	R13	R5	K77
      0x8C341B28,  //  006B  GETMET	R13	R13	K40
      0x5C3C1800,  //  006C  MOVE	R15	R12
      0x7C340400,  //  006D  CALL	R13	2
      0xB8360600,  //  006E  GETNGBL	R13	K3
      0x8C341B17,  //  006F  GETMET	R13	R13	K23
      0x583C0006,  //  0070  LDCONST	R15	K6
      0x7C340400,  //  0071  CALL	R13	2
      0x78360009,  //  0072  JMPF	R13	#007D
      0xB8360600,  //  0073  GETNGBL	R13	K3
      0x8C341B04,  //  0074  GETMET	R13	R13	K4
      0x603C0018,  //  0075  GETGBL	R15	G24
      0x58400058,  //  0076  LDCONST	R16	K88
      0x88440324,  //  0077  GETMBR	R17	R1	K36
      0x88442337,  //  0078  GETMBR	R17	R17	K55
      0x88480359,  //  0079  GETMBR	R18	R1	K89
      0x7C3C0600,  //  007A  CALL	R15	3
      0x58400006,  //  007B  LDCONST	R16	K6
      0x7C340600,  //  007C  CALL	R13	3
      0x70020052,  //  007D  JMP		#00D1
      0x4C340000,  //  007E  LDNIL	R13
      0x2034140D,  //  007F  NE	R13	R10	R13
      0x78360022,  //  0080  JMPF	R13	#00A4
      0x8C340157,  //  0081  GETMET	R13	R0	K87
      0x5C3C1800,  //  0082  MOVE	R15	R12
      0x5C400600,  //  0083  MOVE	R16	R3
      0x5C441400,  //  0084  MOVE	R17	R10
      0x7C340800,  //  0085  CALL	R13	4
      0x88340B4D,  //  0086  GETMBR	R13	R5	K77
      0x8C341B28,  //  0087  GETMET	R13	R13	K40
      0x5C3C1800,  //  0088  MOVE	R15	R12
      0x7C340400,  //  0089  CALL	R13	2
      0xB8360000,  //  008A  GETNGBL	R13	K0
      0x8C341B51,  //  008B  GETMET	R13	R13	K81
      0x883C0711,  //  008C  GETMBR	R15	R3	K17
      0x8840074F,  //  008D  GETMBR	R16	R3	K79
      0x7C340600,  //  008E  CALL	R13	3
      0x5C201A00,  //  008F  MOVE	R8	R13
      0x5C341000,  //  0090  MOVE	R13	R8
      0x74360000,  //  0091  JMPT	R13	#0093
      0x5820001C,  //  0092  LDCONST	R8	K28
      0xB8360600,  //  0093  GETNGBL	R13	K3
      0x8C341B17,  //  0094  GETMET	R13	R13	K23
      0x583C0006,  //  0095  LDCONST	R15	K6
      0x7C340400,  //  0096  CALL	R13	2
      0x7836000A,  //  0097  JMPF	R13	#00A3
      0xB8360600,  //  0098  GETNGBL	R13	K3
      0x8C341B04,  //  0099  GETMET	R13	R13	K4
      0x603C0018,  //  009A  GETGBL	R15	G24
      0x5840005A,  //  009B  LDCONST	R16	K90
      0x88440324,  //  009C  GETMBR	R17	R1	K36
      0x88442337,  //  009D  GETMBR	R17	R17	K55
      0x5C480600,  //  009E  MOVE	R18	R3
      0x5C4C1000,  //  009F  MOVE	R19	R8
      0x7C3C0800,  //  00A0  CALL	R15	4
      0x58400006,  //  00A1  LDCONST	R16	K6
      0x7C340600,  //  00A2  CALL	R13	3
      0x7002002C,  //  00A3  JMP		#00D1
      0x88340713,  //  00A4  GETMBR	R13	R3	K19
      0x4C380000,  //  00A5  LDNIL	R14
      0x20341A0E,  //  00A6  NE	R13	R13	R14
      0x78360019,  //  00A7  JMPF	R13	#00C2
      0x8C340157,  //  00A8  GETMET	R13	R0	K87
      0x5C3C1800,  //  00A9  MOVE	R15	R12
      0x5C400600,  //  00AA  MOVE	R16	R3
      0x4C440000,  //  00AB  LDNIL	R17
      0x7C340800,  //  00AC  CALL	R13	4
      0x88340B4D,  //  00AD  GETMBR	R13	R5	K77
      0x8C341B28,  //  00AE  GETMET	R13	R13	K40
      0x5C3C1800,  //  00AF  MOVE	R15	R12
      0x7C340400,  //  00B0  CALL	R13	2
      0xB8360600,  //  00B1  GETNGBL	R13	K3
      0x8C341B17,  //  00B2  GETMET	R13	R13	K23
      0x583C0006,  //  00B3  LDCONST	R15	K6
      0x7C340400,  //  00B4  CALL	R13	2
      0x7836000A,  //  00B5  JMPF	R13	#00C1
      0xB8360600,  //  00B6  GETNGBL	R13	K3
      0x8C341B04,  //  00B7  GETMET	R13	R13	K4
      0x603C0018,  //  00B8  GETGBL	R15	G24
      0x5840005B,  //  00B9  LDCONST	R16	K91
      0x88440324,  //  00BA  GETMBR	R17	R1	K36
      0x88442337,  //  00BB  GETMBR	R17	R17	K55
      0x88480713,  //  00BC  GETMBR	R18	R3	K19
      0x884C0359,  //  00BD  GETMBR	R19	R1	K89
      0x7C3C0800,  //  00BE  CALL	R15	4
      0x58400006,  //  00BF  LDCONST	R16	K6
      0x7C340600,  //  00C0  CALL	R13	3
      0x7002000E,  //  00C1  JMP		#00D1
      0xB8360600,  //  00C2  GETNGBL	R13	K3
      0x8C341B17,  //  00C3  GETMET	R13	R13	K23
      0x583C0006,  //  00C4  LDCONST	R15	K6
      0x7C340400,  //  00C5  CALL	R13	2
      0x78360009,  //  00C6  JMPF	R13	#00D1
      0xB8360600,  //  00C7  GETNGBL	R13	K3
      0x8C341B04,  //  00C8  GETMET	R13	R13	K4
      0x603C0018,  //  00C9  GETGBL	R15	G24
      0x5840005C,  //  00CA  LDCONST	R16	K92
      0x88440324,  //  00CB  GETMBR	R17	R1	K36
      0x88442337,  //  00CC  GETMBR	R17	R17	K55
      0x88480359,  //  00CD  GETMBR	R18	R1	K89
      0x7C3C0600,  //  00CE  CALL	R15	3
      0x58400006,  //  00CF  LDCONST	R16	K6
      0x7C340600,  //  00D0  CALL	R13	3
      0x7001FF4C,  //  00D1  JMP		#001F
      0x58180026,  //  00D2  LDCONST	R6	K38
      0xAC180200,  //  00D3  CATCH	R6	1	0
      0xB0080000,  //  00D4  RAISE	2	R0	R0
      0x6018000C,  //  00D5  GETGBL	R6	G12
      0x881C0B4D,  //  00D6  GETMBR	R7	R5	K77
      0x7C180200,  //  00D7  CALL	R6	1
      0x24180D41,  //  00D8  GT	R6	R6	K65
      0x781A0008,  //  00D9  JMPF	R6	#00E3
      0x88180127,  //  00DA  GETMBR	R6	R0	K39
      0x8C180D28,  //  00DB  GETMET	R6	R6	K40
      0xB8220000,  //  00DC  GETNGBL	R8	K0
      0x8C20115D,  //  00DD  GETMET	R8	R8	K93
      0x5C280200,  //  00DE  MOVE	R10	R1
      0x5C2C0A00,  //  00DF  MOVE	R11	R5
      0x7C200600,  //  00E0  CALL	R8	3
      0x7C180400,  //  00E1  CALL	R6	2
      0x70020001,  //  00E2  JMP		#00E5
      0x50180000,  //  00E3  LDBOOL	R6	0	0
      0x80040C00,  //  00E4  RET	1	R6
      0x50180200,  //  00E5  LDBOOL	R6	1	0
      0x80040C00,  //  00E6  RET	1	R6
      0x80000000,  //  00E7  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_or_subscribe_request_event_pull
********************************************************************/
be_local_closure(class_Matter_IM_process_read_or_subscribe_request_event_pull,   /* name */
  be_nested_proto(
    25,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_read_or_subscribe_request_event_pull),
    &be_const_str_solidified,
    ( &(const binstruction[148]) {  /* code */
      0x880C035E,  //  0000  GETMBR	R3	R1	K94
      0x4C100000,  //  0001  LDNIL	R4
      0x200C0604,  //  0002  NE	R3	R3	R4
      0x780E008D,  //  0003  JMPF	R3	#0092
      0x4C0C0000,  //  0004  LDNIL	R3
      0x4C100000,  //  0005  LDNIL	R4
      0x20100404,  //  0006  NE	R4	R2	R4
      0x78120002,  //  0007  JMPF	R4	#000B
      0x8C10055F,  //  0008  GETMET	R4	R2	K95
      0x7C100200,  //  0009  CALL	R4	1
      0x70020000,  //  000A  JMP		#000C
      0x4C100000,  //  000B  LDNIL	R4
      0x8814035E,  //  000C  GETMBR	R5	R1	K94
      0x78160003,  //  000D  JMPF	R5	#0012
      0x6014000C,  //  000E  GETGBL	R5	G12
      0x8818035E,  //  000F  GETMBR	R6	R1	K94
      0x7C140200,  //  0010  CALL	R5	1
      0x70020000,  //  0011  JMP		#0013
      0x58140041,  //  0012  LDCONST	R5	K65
      0xB81A0600,  //  0013  GETNGBL	R6	K3
      0x8C180D04,  //  0014  GETMET	R6	R6	K4
      0x60200018,  //  0015  GETGBL	R8	G24
      0x58240060,  //  0016  LDCONST	R9	K96
      0x5C280A00,  //  0017  MOVE	R10	R5
      0x7C200400,  //  0018  CALL	R8	2
      0x7C180400,  //  0019  CALL	R6	2
      0x24180B2B,  //  001A  GT	R6	R5	K43
      0x781A0002,  //  001B  JMPF	R6	#001F
      0x60180012,  //  001C  GETGBL	R6	G18
      0x7C180000,  //  001D  CALL	R6	0
      0x5C0C0C00,  //  001E  MOVE	R3	R6
      0x8C180161,  //  001F  GETMET	R6	R0	K97
      0x88200362,  //  0020  GETMBR	R8	R1	K98
      0x5C240800,  //  0021  MOVE	R9	R4
      0x7C180600,  //  0022  CALL	R6	3
      0x881C035E,  //  0023  GETMBR	R7	R1	K94
      0x781E006B,  //  0024  JMPF	R7	#0091
      0x601C0010,  //  0025  GETGBL	R7	G16
      0x8820035E,  //  0026  GETMBR	R8	R1	K94
      0x7C1C0200,  //  0027  CALL	R7	1
      0xA8020064,  //  0028  EXBLK	0	#008E
      0x5C200E00,  //  0029  MOVE	R8	R7
      0x7C200000,  //  002A  CALL	R8	0
      0xB8260000,  //  002B  GETNGBL	R9	K0
      0x8C241363,  //  002C  GETMET	R9	R9	K99
      0x882C010D,  //  002D  GETMBR	R11	R0	K13
      0x7C240400,  //  002E  CALL	R9	2
      0x8C28131D,  //  002F  GETMET	R10	R9	K29
      0x88301116,  //  0030  GETMBR	R12	R8	K22
      0x88341111,  //  0031  GETMBR	R13	R8	K17
      0x88381164,  //  0032  GETMBR	R14	R8	K100
      0x5C3C0C00,  //  0033  MOVE	R15	R6
      0x7C280A00,  //  0034  CALL	R10	5
      0x24280B2B,  //  0035  GT	R10	R5	K43
      0x782A0003,  //  0036  JMPF	R10	#003B
      0x8C280728,  //  0037  GETMET	R10	R3	K40
      0x5C301200,  //  0038  MOVE	R12	R9
      0x7C280400,  //  0039  CALL	R10	2
      0x70020000,  //  003A  JMP		#003C
      0x5C0C1200,  //  003B  MOVE	R3	R9
      0xB82A0600,  //  003C  GETNGBL	R10	K3
      0x8C281517,  //  003D  GETMET	R10	R10	K23
      0x58300006,  //  003E  LDCONST	R12	K6
      0x7C280400,  //  003F  CALL	R10	2
      0x782A004B,  //  0040  JMPF	R10	#008D
      0x5828001C,  //  0041  LDCONST	R10	K28
      0x882C1111,  //  0042  GETMBR	R11	R8	K17
      0x4C300000,  //  0043  LDNIL	R12
      0x202C160C,  //  0044  NE	R11	R11	R12
      0x782E0011,  //  0045  JMPF	R11	#0058
      0x882C1164,  //  0046  GETMBR	R11	R8	K100
      0x4C300000,  //  0047  LDNIL	R12
      0x202C160C,  //  0048  NE	R11	R11	R12
      0x782E000D,  //  0049  JMPF	R11	#0058
      0xB82E0000,  //  004A  GETNGBL	R11	K0
      0x8C2C1765,  //  004B  GETMET	R11	R11	K101
      0x88341111,  //  004C  GETMBR	R13	R8	K17
      0x88381164,  //  004D  GETMBR	R14	R8	K100
      0x7C2C0600,  //  004E  CALL	R11	3
      0x5C281600,  //  004F  MOVE	R10	R11
      0x4C2C0000,  //  0050  LDNIL	R11
      0x202C140B,  //  0051  NE	R11	R10	R11
      0x782E0002,  //  0052  JMPF	R11	#0056
      0x002EA80A,  //  0053  ADD	R11	K84	R10
      0x002C1755,  //  0054  ADD	R11	R11	K85
      0x70020000,  //  0055  JMP		#0057
      0x582C001C,  //  0056  LDCONST	R11	K28
      0x5C281600,  //  0057  MOVE	R10	R11
      0x882C1116,  //  0058  GETMBR	R11	R8	K22
      0x4C300000,  //  0059  LDNIL	R12
      0x202C160C,  //  005A  NE	R11	R11	R12
      0x782E0004,  //  005B  JMPF	R11	#0061
      0x602C0018,  //  005C  GETGBL	R11	G24
      0x58300066,  //  005D  LDCONST	R12	K102
      0x88341116,  //  005E  GETMBR	R13	R8	K22
      0x7C2C0400,  //  005F  CALL	R11	2
      0x70020000,  //  0060  JMP		#0062
      0x582C0067,  //  0061  LDCONST	R11	K103
      0x88301111,  //  0062  GETMBR	R12	R8	K17
      0x4C340000,  //  0063  LDNIL	R13
      0x2030180D,  //  0064  NE	R12	R12	R13
      0x78320004,  //  0065  JMPF	R12	#006B
      0x60300018,  //  0066  GETGBL	R12	G24
      0x58340068,  //  0067  LDCONST	R13	K104
      0x88381111,  //  0068  GETMBR	R14	R8	K17
      0x7C300400,  //  0069  CALL	R12	2
      0x70020000,  //  006A  JMP		#006C
      0x58300069,  //  006B  LDCONST	R12	K105
      0x88341164,  //  006C  GETMBR	R13	R8	K100
      0x4C380000,  //  006D  LDNIL	R14
      0x20341A0E,  //  006E  NE	R13	R13	R14
      0x78360004,  //  006F  JMPF	R13	#0075
      0x60340018,  //  0070  GETGBL	R13	G24
      0x58380066,  //  0071  LDCONST	R14	K102
      0x883C1164,  //  0072  GETMBR	R15	R8	K100
      0x7C340400,  //  0073  CALL	R13	2
      0x70020000,  //  0074  JMP		#0076
      0x58340067,  //  0075  LDCONST	R13	K103
      0x4C380000,  //  0076  LDNIL	R14
      0x20380C0E,  //  0077  NE	R14	R6	R14
      0x783A0004,  //  0078  JMPF	R14	#007E
      0x60380018,  //  0079  GETGBL	R14	G24
      0x583C006A,  //  007A  LDCONST	R15	K106
      0x5C400C00,  //  007B  MOVE	R16	R6
      0x7C380400,  //  007C  CALL	R14	2
      0x70020000,  //  007D  JMP		#007F
      0x5838001C,  //  007E  LDCONST	R14	K28
      0xB83E0600,  //  007F  GETNGBL	R15	K3
      0x8C3C1F04,  //  0080  GETMET	R15	R15	K4
      0x60440018,  //  0081  GETGBL	R17	G24
      0x5848006B,  //  0082  LDCONST	R18	K107
      0x884C0524,  //  0083  GETMBR	R19	R2	K36
      0x884C2737,  //  0084  GETMBR	R19	R19	K55
      0x5C501600,  //  0085  MOVE	R20	R11
      0x5C541800,  //  0086  MOVE	R21	R12
      0x5C581A00,  //  0087  MOVE	R22	R13
      0x5C5C1400,  //  0088  MOVE	R23	R10
      0x5C601C00,  //  0089  MOVE	R24	R14
      0x7C440E00,  //  008A  CALL	R17	7
      0x58480006,  //  008B  LDCONST	R18	K6
      0x7C3C0600,  //  008C  CALL	R15	3
      0x7001FF9A,  //  008D  JMP		#0029
      0x581C0026,  //  008E  LDCONST	R7	K38
      0xAC1C0200,  //  008F  CATCH	R7	1	0
      0xB0080000,  //  0090  RAISE	2	R0	R0
      0x80040600,  //  0091  RET	1	R3
      0x4C0C0000,  //  0092  LDNIL	R3
      0x80040600,  //  0093  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_enqueued
********************************************************************/
be_local_closure(class_Matter_IM_send_enqueued,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(send_enqueued),
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0x58080041,  //  0000  LDCONST	R2	K65
      0x600C000C,  //  0001  GETGBL	R3	G12
      0x88100127,  //  0002  GETMBR	R4	R0	K39
      0x7C0C0200,  //  0003  CALL	R3	1
      0x140C0403,  //  0004  LT	R3	R2	R3
      0x780E0011,  //  0005  JMPF	R3	#0018
      0x880C0127,  //  0006  GETMBR	R3	R0	K39
      0x940C0602,  //  0007  GETIDX	R3	R3	R2
      0x8810076C,  //  0008  GETMBR	R4	R3	K108
      0x74120004,  //  0009  JMPT	R4	#000F
      0x8810076D,  //  000A  GETMBR	R4	R3	K109
      0x78120002,  //  000B  JMPF	R4	#000F
      0x8C10076E,  //  000C  GETMET	R4	R3	K110
      0x5C180200,  //  000D  MOVE	R6	R1
      0x7C100400,  //  000E  CALL	R4	2
      0x8810076C,  //  000F  GETMBR	R4	R3	K108
      0x78120004,  //  0010  JMPF	R4	#0016
      0x8C10016F,  //  0011  GETMET	R4	R0	K111
      0x88180770,  //  0012  GETMBR	R6	R3	K112
      0x88180D59,  //  0013  GETMBR	R6	R6	K89
      0x7C100400,  //  0014  CALL	R4	2
      0x70020000,  //  0015  JMP		#0017
      0x0008052B,  //  0016  ADD	R2	R2	K43
      0x7001FFE8,  //  0017  JMP		#0001
      0x80000000,  //  0018  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: subscribe_request
********************************************************************/
be_local_closure(class_Matter_IM_subscribe_request,   /* name */
  be_nested_proto(
    18,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(subscribe_request),
    &be_const_str_solidified,
    ( &(const binstruction[105]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0771,  //  0001  GETMET	R3	R3	K113
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x88100772,  //  0006  GETMBR	R4	R3	K114
      0x7412000B,  //  0007  JMPT	R4	#0014
      0xB8120600,  //  0008  GETNGBL	R4	K3
      0x8C100904,  //  0009  GETMET	R4	R4	K4
      0x60180018,  //  000A  GETGBL	R6	G24
      0x581C0073,  //  000B  LDCONST	R7	K115
      0x88200324,  //  000C  GETMBR	R8	R1	K36
      0x7C180400,  //  000D  CALL	R6	2
      0x581C0006,  //  000E  LDCONST	R7	K6
      0x7C100600,  //  000F  CALL	R4	3
      0x88100147,  //  0010  GETMBR	R4	R0	K71
      0x8C100974,  //  0011  GETMET	R4	R4	K116
      0x88180324,  //  0012  GETMBR	R6	R1	K36
      0x7C100400,  //  0013  CALL	R4	2
      0x88100147,  //  0014  GETMBR	R4	R0	K71
      0x8C100975,  //  0015  GETMET	R4	R4	K117
      0x88180324,  //  0016  GETMBR	R6	R1	K36
      0x5C1C0600,  //  0017  MOVE	R7	R3
      0x7C100600,  //  0018  CALL	R4	3
      0xB8160600,  //  0019  GETNGBL	R5	K3
      0x8C140B17,  //  001A  GETMET	R5	R5	K23
      0x581C0006,  //  001B  LDCONST	R7	K6
      0x7C140400,  //  001C  CALL	R5	2
      0x78160033,  //  001D  JMPF	R5	#0052
      0x88140733,  //  001E  GETMBR	R5	R3	K51
      0x4C180000,  //  001F  LDNIL	R6
      0x20140A06,  //  0020  NE	R5	R5	R6
      0x7816002F,  //  0021  JMPF	R5	#0052
      0x60140012,  //  0022  GETGBL	R5	G18
      0x7C140000,  //  0023  CALL	R5	0
      0xB81A0000,  //  0024  GETNGBL	R6	K0
      0x8C180D07,  //  0025  GETMET	R6	R6	K7
      0x7C180200,  //  0026  CALL	R6	1
      0x901A4001,  //  0027  SETMBR	R6	K32	R1
      0x601C0010,  //  0028  GETGBL	R7	G16
      0x88200733,  //  0029  GETMBR	R8	R3	K51
      0x7C1C0200,  //  002A  CALL	R7	1
      0xA802000D,  //  002B  EXBLK	0	#003A
      0x5C200E00,  //  002C  MOVE	R8	R7
      0x7C200000,  //  002D  CALL	R8	0
      0x88241116,  //  002E  GETMBR	R9	R8	K22
      0x901A2C09,  //  002F  SETMBR	R6	K22	R9
      0x88241111,  //  0030  GETMBR	R9	R8	K17
      0x901A2209,  //  0031  SETMBR	R6	K17	R9
      0x88241112,  //  0032  GETMBR	R9	R8	K18
      0x901A2409,  //  0033  SETMBR	R6	K18	R9
      0x8C240B28,  //  0034  GETMET	R9	R5	K40
      0x602C0008,  //  0035  GETGBL	R11	G8
      0x5C300C00,  //  0036  MOVE	R12	R6
      0x7C2C0200,  //  0037  CALL	R11	1
      0x7C240400,  //  0038  CALL	R9	2
      0x7001FFF1,  //  0039  JMP		#002C
      0x581C0026,  //  003A  LDCONST	R7	K38
      0xAC1C0200,  //  003B  CATCH	R7	1	0
      0xB0080000,  //  003C  RAISE	2	R0	R0
      0xB81E0600,  //  003D  GETNGBL	R7	K3
      0x8C1C0F04,  //  003E  GETMET	R7	R7	K4
      0x60240018,  //  003F  GETGBL	R9	G24
      0x58280076,  //  0040  LDCONST	R10	K118
      0x882C0324,  //  0041  GETMBR	R11	R1	K36
      0x882C1737,  //  0042  GETMBR	R11	R11	K55
      0x8C300B77,  //  0043  GETMET	R12	R5	K119
      0x58380078,  //  0044  LDCONST	R14	K120
      0x7C300400,  //  0045  CALL	R12	2
      0x88340979,  //  0046  GETMBR	R13	R4	K121
      0x8838097A,  //  0047  GETMBR	R14	R4	K122
      0x883C0772,  //  0048  GETMBR	R15	R3	K114
      0x783E0001,  //  0049  JMPF	R15	#004C
      0x583C002B,  //  004A  LDCONST	R15	K43
      0x70020000,  //  004B  JMP		#004D
      0x583C0041,  //  004C  LDCONST	R15	K65
      0x88400938,  //  004D  GETMBR	R16	R4	K56
      0x88440732,  //  004E  GETMBR	R17	R3	K50
      0x7C241000,  //  004F  CALL	R9	8
      0x58280006,  //  0050  LDCONST	R10	K6
      0x7C1C0600,  //  0051  CALL	R7	3
      0x8C14013A,  //  0052  GETMET	R5	R0	K58
      0x5C1C0600,  //  0053  MOVE	R7	R3
      0x5C200200,  //  0054  MOVE	R8	R1
      0x7C140600,  //  0055  CALL	R5	3
      0x8C18013F,  //  0056  GETMET	R6	R0	K63
      0x5C200600,  //  0057  MOVE	R8	R3
      0x5C240200,  //  0058  MOVE	R9	R1
      0x7C180600,  //  0059  CALL	R6	3
      0x8C1C097B,  //  005A  GETMET	R7	R4	K123
      0x5C240C00,  //  005B  MOVE	R9	R6
      0x7C1C0400,  //  005C  CALL	R7	2
      0x881C0127,  //  005D  GETMBR	R7	R0	K39
      0x8C1C0F28,  //  005E  GETMET	R7	R7	K40
      0xB8260000,  //  005F  GETNGBL	R9	K0
      0x8C24137C,  //  0060  GETMET	R9	R9	K124
      0x5C2C0200,  //  0061  MOVE	R11	R1
      0x5C300A00,  //  0062  MOVE	R12	R5
      0x5C340C00,  //  0063  MOVE	R13	R6
      0x5C380800,  //  0064  MOVE	R14	R4
      0x7C240A00,  //  0065  CALL	R9	5
      0x7C1C0400,  //  0066  CALL	R7	2
      0x501C0200,  //  0067  LDBOOL	R7	1	0
      0x80040E00,  //  0068  RET	1	R7
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_ack_now
********************************************************************/
be_local_closure(class_Matter_IM_send_ack_now,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(send_ack_now),
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0x80000400,  //  0003  RET	0
      0x88080324,  //  0004  GETMBR	R2	R1	K36
      0x8808053D,  //  0005  GETMBR	R2	R2	K61
      0x8C08057D,  //  0006  GETMET	R2	R2	K125
      0x5C100200,  //  0007  MOVE	R4	R1
      0x50140000,  //  0008  LDBOOL	R5	0	0
      0x7C080600,  //  0009  CALL	R2	3
      0x80000000,  //  000A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: expire_sendqueue
********************************************************************/
be_local_closure(class_Matter_IM_expire_sendqueue,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(expire_sendqueue),
    &be_const_str_solidified,
    ( &(const binstruction[24]) {  /* code */
      0x58040041,  //  0000  LDCONST	R1	K65
      0x6008000C,  //  0001  GETGBL	R2	G12
      0x880C0127,  //  0002  GETMBR	R3	R0	K39
      0x7C080200,  //  0003  CALL	R2	1
      0x14080202,  //  0004  LT	R2	R1	R2
      0x780A000F,  //  0005  JMPF	R2	#0016
      0x88080127,  //  0006  GETMBR	R2	R0	K39
      0x94080401,  //  0007  GETIDX	R2	R2	R1
      0xB80E0600,  //  0008  GETNGBL	R3	K3
      0x8C0C077E,  //  0009  GETMET	R3	R3	K126
      0x8814057F,  //  000A  GETMBR	R5	R2	K127
      0x7C0C0400,  //  000B  CALL	R3	2
      0x780E0006,  //  000C  JMPF	R3	#0014
      0x8C0C0580,  //  000D  GETMET	R3	R2	K128
      0x7C0C0200,  //  000E  CALL	R3	1
      0x880C0127,  //  000F  GETMBR	R3	R0	K39
      0x8C0C0781,  //  0010  GETMET	R3	R3	K129
      0x5C140200,  //  0011  MOVE	R5	R1
      0x7C0C0400,  //  0012  CALL	R3	2
      0x70020000,  //  0013  JMP		#0015
      0x0004032B,  //  0014  ADD	R1	R1	K43
      0x7001FFEA,  //  0015  JMP		#0001
      0x4C080000,  //  0016  LDNIL	R2
      0x80040400,  //  0017  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_incoming_ack
********************************************************************/
be_local_closure(class_Matter_IM_process_incoming_ack,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_incoming_ack),
    &be_const_str_solidified,
    ( &(const binstruction[29]) {  /* code */
      0x8C080182,  //  0000  GETMET	R2	R0	K130
      0x88100359,  //  0001  GETMBR	R4	R1	K89
      0x7C080400,  //  0002  CALL	R2	2
      0xB80E0600,  //  0003  GETNGBL	R3	K3
      0x8C0C0704,  //  0004  GETMET	R3	R3	K4
      0x60140018,  //  0005  GETGBL	R5	G24
      0x58180083,  //  0006  LDCONST	R6	K131
      0x881C0359,  //  0007  GETMBR	R7	R1	K89
      0x4C200000,  //  0008  LDNIL	R8
      0x20200408,  //  0009  NE	R8	R2	R8
      0x78220001,  //  000A  JMPF	R8	#000D
      0x5820002B,  //  000B  LDCONST	R8	K43
      0x70020000,  //  000C  JMP		#000E
      0x58200041,  //  000D  LDCONST	R8	K65
      0x7C140600,  //  000E  CALL	R5	3
      0x58180006,  //  000F  LDCONST	R6	K6
      0x7C0C0600,  //  0010  CALL	R3	3
      0x780A0008,  //  0011  JMPF	R2	#001B
      0x8C0C0584,  //  0012  GETMET	R3	R2	K132
      0x5C140200,  //  0013  MOVE	R5	R1
      0x7C0C0400,  //  0014  CALL	R3	2
      0x8810056C,  //  0015  GETMBR	R4	R2	K108
      0x78120002,  //  0016  JMPF	R4	#001A
      0x8C10016F,  //  0017  GETMET	R4	R0	K111
      0x88180359,  //  0018  GETMBR	R6	R1	K89
      0x7C100400,  //  0019  CALL	R4	2
      0x80040600,  //  001A  RET	1	R3
      0x500C0000,  //  001B  LDBOOL	R3	0	0
      0x80040600,  //  001C  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: remove_sendqueue_by_exchangeid
********************************************************************/
be_local_closure(class_Matter_IM_remove_sendqueue_by_exchangeid,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(remove_sendqueue_by_exchangeid),
    &be_const_str_solidified,
    ( &(const binstruction[32]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0x80000400,  //  0003  RET	0
      0x58080041,  //  0004  LDCONST	R2	K65
      0x600C000C,  //  0005  GETGBL	R3	G12
      0x88100127,  //  0006  GETMBR	R4	R0	K39
      0x7C0C0200,  //  0007  CALL	R3	1
      0x140C0403,  //  0008  LT	R3	R2	R3
      0x780E0014,  //  0009  JMPF	R3	#001F
      0x880C0127,  //  000A  GETMBR	R3	R0	K39
      0x940C0602,  //  000B  GETIDX	R3	R3	R2
      0x8C0C0785,  //  000C  GETMET	R3	R3	K133
      0x7C0C0200,  //  000D  CALL	R3	1
      0x1C0C0601,  //  000E  EQ	R3	R3	R1
      0x780E000C,  //  000F  JMPF	R3	#001D
      0xB80E0600,  //  0010  GETNGBL	R3	K3
      0x8C0C0704,  //  0011  GETMET	R3	R3	K4
      0x60140018,  //  0012  GETGBL	R5	G24
      0x58180086,  //  0013  LDCONST	R6	K134
      0x5C1C0200,  //  0014  MOVE	R7	R1
      0x7C140400,  //  0015  CALL	R5	2
      0x58180006,  //  0016  LDCONST	R6	K6
      0x7C0C0600,  //  0017  CALL	R3	3
      0x880C0127,  //  0018  GETMBR	R3	R0	K39
      0x8C0C0781,  //  0019  GETMET	R3	R3	K129
      0x5C140400,  //  001A  MOVE	R5	R2
      0x7C0C0400,  //  001B  CALL	R3	2
      0x70020000,  //  001C  JMP		#001E
      0x0008052B,  //  001D  ADD	R2	R2	K43
      0x7001FFE5,  //  001E  JMP		#0005
      0x80000000,  //  001F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_single_attribute_status_to_bytes
********************************************************************/
be_local_closure(class_Matter_IM_write_single_attribute_status_to_bytes,   /* name */
  be_nested_proto(
    17,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(write_single_attribute_status_to_bytes),
    &be_const_str_solidified,
    ( &(const binstruction[88]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100987,  //  0001  GETMBR	R4	R4	K135
      0xB8160000,  //  0002  GETNGBL	R5	K0
      0x8C140B18,  //  0003  GETMET	R5	R5	K24
      0x881C0511,  //  0004  GETMBR	R7	R2	K17
      0x88200512,  //  0005  GETMBR	R8	R2	K18
      0x7C140600,  //  0006  CALL	R5	3
      0x78160002,  //  0007  JMPF	R5	#000B
      0x001A3405,  //  0008  ADD	R6	K26	R5
      0x00180D1B,  //  0009  ADD	R6	R6	K27
      0x70020000,  //  000A  JMP		#000C
      0x5818001C,  //  000B  LDCONST	R6	K28
      0x5C140C00,  //  000C  MOVE	R5	R6
      0x88180513,  //  000D  GETMBR	R6	R2	K19
      0x4C1C0000,  //  000E  LDNIL	R7
      0x20180C07,  //  000F  NE	R6	R6	R7
      0x781A0035,  //  0010  JMPF	R6	#0047
      0xB81A0000,  //  0011  GETNGBL	R6	K0
      0x8C180D88,  //  0012  GETMET	R6	R6	K136
      0x7C180200,  //  0013  CALL	R6	1
      0xB81E0000,  //  0014  GETNGBL	R7	K0
      0x8C1C0F35,  //  0015  GETMET	R7	R7	K53
      0x7C1C0200,  //  0016  CALL	R7	1
      0x901A1C07,  //  0017  SETMBR	R6	K14	R7
      0xB81E0000,  //  0018  GETNGBL	R7	K0
      0x8C1C0F89,  //  0019  GETMET	R7	R7	K137
      0x7C1C0200,  //  001A  CALL	R7	1
      0x901A2607,  //  001B  SETMBR	R6	K19	R7
      0x881C0D0E,  //  001C  GETMBR	R7	R6	K14
      0x88200516,  //  001D  GETMBR	R8	R2	K22
      0x901E2C08,  //  001E  SETMBR	R7	K22	R8
      0x881C0D0E,  //  001F  GETMBR	R7	R6	K14
      0x88200511,  //  0020  GETMBR	R8	R2	K17
      0x901E2208,  //  0021  SETMBR	R7	K17	R8
      0x881C0D0E,  //  0022  GETMBR	R7	R6	K14
      0x88200512,  //  0023  GETMBR	R8	R2	K18
      0x901E2408,  //  0024  SETMBR	R7	K18	R8
      0x881C0D13,  //  0025  GETMBR	R7	R6	K19
      0x88200513,  //  0026  GETMBR	R8	R2	K19
      0x901E2608,  //  0027  SETMBR	R7	K19	R8
      0x881C030B,  //  0028  GETMBR	R7	R1	K11
      0x8C1C0F28,  //  0029  GETMET	R7	R7	K40
      0x5C240C00,  //  002A  MOVE	R9	R6
      0x7C1C0400,  //  002B  CALL	R7	2
      0xB81E0600,  //  002C  GETNGBL	R7	K3
      0x8C1C0F04,  //  002D  GETMET	R7	R7	K4
      0x60240018,  //  002E  GETGBL	R9	G24
      0x5828008A,  //  002F  LDCONST	R10	K138
      0x602C0008,  //  0030  GETGBL	R11	G8
      0x5C300400,  //  0031  MOVE	R12	R2
      0x7C2C0200,  //  0032  CALL	R11	1
      0x5C300A00,  //  0033  MOVE	R12	R5
      0x5C340600,  //  0034  MOVE	R13	R3
      0x88380513,  //  0035  GETMBR	R14	R2	K19
      0x883C0513,  //  0036  GETMBR	R15	R2	K19
      0xB8420000,  //  0037  GETNGBL	R16	K0
      0x88402125,  //  0038  GETMBR	R16	R16	K37
      0x1C3C1E10,  //  0039  EQ	R15	R15	R16
      0x783E0001,  //  003A  JMPF	R15	#003D
      0x583C0025,  //  003B  LDCONST	R15	K37
      0x70020000,  //  003C  JMP		#003E
      0x583C001C,  //  003D  LDCONST	R15	K28
      0x7C240C00,  //  003E  CALL	R9	6
      0x88280516,  //  003F  GETMBR	R10	R2	K22
      0x20281541,  //  0040  NE	R10	R10	K65
      0x782A0001,  //  0041  JMPF	R10	#0044
      0x5828002C,  //  0042  LDCONST	R10	K44
      0x70020000,  //  0043  JMP		#0045
      0x58280006,  //  0044  LDCONST	R10	K6
      0x7C1C0600,  //  0045  CALL	R7	3
      0x7002000F,  //  0046  JMP		#0057
      0xB81A0600,  //  0047  GETNGBL	R6	K3
      0x8C180D17,  //  0048  GETMET	R6	R6	K23
      0x58200006,  //  0049  LDCONST	R8	K6
      0x7C180400,  //  004A  CALL	R6	2
      0x781A000A,  //  004B  JMPF	R6	#0057
      0xB81A0600,  //  004C  GETNGBL	R6	K3
      0x8C180D04,  //  004D  GETMET	R6	R6	K4
      0x60200018,  //  004E  GETGBL	R8	G24
      0x5824008B,  //  004F  LDCONST	R9	K139
      0x60280008,  //  0050  GETGBL	R10	G8
      0x5C2C0400,  //  0051  MOVE	R11	R2
      0x7C280200,  //  0052  CALL	R10	1
      0x5C2C0A00,  //  0053  MOVE	R11	R5
      0x7C200600,  //  0054  CALL	R8	3
      0x58240006,  //  0055  LDCONST	R9	K6
      0x7C180600,  //  0056  CALL	R6	3
      0x80000000,  //  0057  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_IM_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[23]) {  /* code */
      0x90021A01,  //  0000  SETMBR	R0	K13	R1
      0x60080012,  //  0001  GETGBL	R2	G18
      0x7C080000,  //  0002  CALL	R2	0
      0x90024E02,  //  0003  SETMBR	R0	K39	R2
      0xB80A0000,  //  0004  GETNGBL	R2	K0
      0x8C08058C,  //  0005  GETMET	R2	R2	K140
      0x5C100000,  //  0006  MOVE	R4	R0
      0x7C080400,  //  0007  CALL	R2	2
      0x90028E02,  //  0008  SETMBR	R0	K71	R2
      0xB80A0000,  //  0009  GETNGBL	R2	K0
      0x8C08058E,  //  000A  GETMET	R2	R2	K142
      0x7C080200,  //  000B  CALL	R2	1
      0x90031A02,  //  000C  SETMBR	R0	K141	R2
      0xB80A0000,  //  000D  GETNGBL	R2	K0
      0x8C080590,  //  000E  GETMET	R2	R2	K144
      0x7C080200,  //  000F  CALL	R2	1
      0x90031E02,  //  0010  SETMBR	R0	K143	R2
      0xB80A0000,  //  0011  GETNGBL	R2	K0
      0x88080587,  //  0012  GETMBR	R2	R2	K135
      0x8C080592,  //  0013  GETMET	R2	R2	K146
      0x7C080200,  //  0014  CALL	R2	1
      0x90032202,  //  0015  SETMBR	R0	K145	R2
      0x80000000,  //  0016  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_second
********************************************************************/
be_local_closure(class_Matter_IM_every_second,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(every_second),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x8C040193,  //  0000  GETMET	R1	R0	K147
      0x7C040200,  //  0001  CALL	R1	1
      0x80000000,  //  0002  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_invoke_request_solo
********************************************************************/
be_local_closure(class_Matter_IM_process_invoke_request_solo,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_invoke_request_solo),
    &be_const_str_solidified,
    ( &(const binstruction[202]) {  /* code */
      0x900A4001,  //  0000  SETMBR	R2	K32	R1
      0xB80E0000,  //  0001  GETNGBL	R3	K0
      0x880C0750,  //  0002  GETMBR	R3	R3	K80
      0x900A2603,  //  0003  SETMBR	R2	K19	R3
      0xB80E0000,  //  0004  GETNGBL	R3	K0
      0x8C0C0751,  //  0005  GETMET	R3	R3	K81
      0x88140511,  //  0006  GETMBR	R5	R2	K17
      0x8818054F,  //  0007  GETMBR	R6	R2	K79
      0x7C0C0600,  //  0008  CALL	R3	3
      0x60100008,  //  0009  GETGBL	R4	G8
      0x5C140400,  //  000A  MOVE	R5	R2
      0x7C100200,  //  000B  CALL	R4	1
      0x8814010D,  //  000C  GETMBR	R5	R0	K13
      0x8C140B52,  //  000D  GETMET	R5	R5	K82
      0x881C0324,  //  000E  GETMBR	R7	R1	K36
      0x88200553,  //  000F  GETMBR	R8	R2	K83
      0x5C240400,  //  0010  MOVE	R9	R2
      0x7C140800,  //  0011  CALL	R5	4
      0x88180504,  //  0012  GETMBR	R6	R2	K4
      0x4C1C0000,  //  0013  LDNIL	R7
      0x20180C07,  //  0014  NE	R6	R6	R7
      0x781A0005,  //  0015  JMPF	R6	#001C
      0x60180008,  //  0016  GETGBL	R6	G8
      0x881C0504,  //  0017  GETMBR	R7	R2	K4
      0x7C180200,  //  0018  CALL	R6	1
      0x001AA806,  //  0019  ADD	R6	K84	R6
      0x00180D55,  //  001A  ADD	R6	R6	K85
      0x70020000,  //  001B  JMP		#001D
      0x5818001C,  //  001C  LDCONST	R6	K28
      0xB81E0600,  //  001D  GETNGBL	R7	K3
      0x8C1C0F17,  //  001E  GETMET	R7	R7	K23
      0x58240006,  //  001F  LDCONST	R9	K6
      0x7C1C0400,  //  0020  CALL	R7	2
      0x781E000E,  //  0021  JMPF	R7	#0031
      0xB81E0600,  //  0022  GETNGBL	R7	K3
      0x8C1C0F04,  //  0023  GETMET	R7	R7	K4
      0x60240018,  //  0024  GETGBL	R9	G24
      0x58280094,  //  0025  LDCONST	R10	K148
      0x882C0324,  //  0026  GETMBR	R11	R1	K36
      0x882C1737,  //  0027  GETMBR	R11	R11	K55
      0x5C300800,  //  0028  MOVE	R12	R4
      0x780E0001,  //  0029  JMPF	R3	#002C
      0x5C340600,  //  002A  MOVE	R13	R3
      0x70020000,  //  002B  JMP		#002D
      0x5834001C,  //  002C  LDCONST	R13	K28
      0x5C380C00,  //  002D  MOVE	R14	R6
      0x7C240A00,  //  002E  CALL	R9	5
      0x58280006,  //  002F  LDCONST	R10	K6
      0x7C1C0600,  //  0030  CALL	R7	3
      0x4C1C0000,  //  0031  LDNIL	R7
      0x900A0807,  //  0032  SETMBR	R2	K4	R7
      0x601C0015,  //  0033  GETGBL	R7	G21
      0x5422002F,  //  0034  LDINT	R8	48
      0x7C1C0200,  //  0035  CALL	R7	1
      0x8C200F2A,  //  0036  GETMET	R8	R7	K42
      0x58280095,  //  0037  LDCONST	R10	K149
      0x542DFFFB,  //  0038  LDINT	R11	-4
      0x7C200600,  //  0039  CALL	R8	3
      0x8C200F2A,  //  003A  GETMET	R8	R7	K42
      0x5828002B,  //  003B  LDCONST	R10	K43
      0x582C002B,  //  003C  LDCONST	R11	K43
      0x7C200600,  //  003D  CALL	R8	3
      0x50200200,  //  003E  LDBOOL	R8	1	0
      0x1C200A08,  //  003F  EQ	R8	R5	R8
      0x74220004,  //  0040  JMPT	R8	#0046
      0x88200513,  //  0041  GETMBR	R8	R2	K19
      0xB8260000,  //  0042  GETNGBL	R9	K0
      0x88241325,  //  0043  GETMBR	R9	R9	K37
      0x1C201009,  //  0044  EQ	R8	R8	R9
      0x78220017,  //  0045  JMPF	R8	#005E
      0xB8220000,  //  0046  GETNGBL	R8	K0
      0x88201125,  //  0047  GETMBR	R8	R8	K37
      0x900A2608,  //  0048  SETMBR	R2	K19	R8
      0x8C200157,  //  0049  GETMET	R8	R0	K87
      0x5C280E00,  //  004A  MOVE	R10	R7
      0x5C2C0400,  //  004B  MOVE	R11	R2
      0x4C300000,  //  004C  LDNIL	R12
      0x7C200800,  //  004D  CALL	R8	4
      0xB8220600,  //  004E  GETNGBL	R8	K3
      0x8C201117,  //  004F  GETMET	R8	R8	K23
      0x58280006,  //  0050  LDCONST	R10	K6
      0x7C200400,  //  0051  CALL	R8	2
      0x78220009,  //  0052  JMPF	R8	#005D
      0xB8220600,  //  0053  GETNGBL	R8	K3
      0x8C201104,  //  0054  GETMET	R8	R8	K4
      0x60280018,  //  0055  GETGBL	R10	G24
      0x582C0058,  //  0056  LDCONST	R11	K88
      0x88300324,  //  0057  GETMBR	R12	R1	K36
      0x88301937,  //  0058  GETMBR	R12	R12	K55
      0x88340359,  //  0059  GETMBR	R13	R1	K89
      0x7C280600,  //  005A  CALL	R10	3
      0x582C0006,  //  005B  LDCONST	R11	K6
      0x7C200600,  //  005C  CALL	R8	3
      0x70020046,  //  005D  JMP		#00A5
      0x4C200000,  //  005E  LDNIL	R8
      0x20200A08,  //  005F  NE	R8	R5	R8
      0x78220018,  //  0060  JMPF	R8	#007A
      0x8C200157,  //  0061  GETMET	R8	R0	K87
      0x5C280E00,  //  0062  MOVE	R10	R7
      0x5C2C0400,  //  0063  MOVE	R11	R2
      0x5C300A00,  //  0064  MOVE	R12	R5
      0x7C200800,  //  0065  CALL	R8	4
      0x5C200600,  //  0066  MOVE	R8	R3
      0x74220000,  //  0067  JMPT	R8	#0069
      0x580C001C,  //  0068  LDCONST	R3	K28
      0xB8220600,  //  0069  GETNGBL	R8	K3
      0x8C201117,  //  006A  GETMET	R8	R8	K23
      0x58280006,  //  006B  LDCONST	R10	K6
      0x7C200400,  //  006C  CALL	R8	2
      0x7822000A,  //  006D  JMPF	R8	#0079
      0xB8220600,  //  006E  GETNGBL	R8	K3
      0x8C201104,  //  006F  GETMET	R8	R8	K4
      0x60280018,  //  0070  GETGBL	R10	G24
      0x582C005A,  //  0071  LDCONST	R11	K90
      0x88300324,  //  0072  GETMBR	R12	R1	K36
      0x88301937,  //  0073  GETMBR	R12	R12	K55
      0x5C340400,  //  0074  MOVE	R13	R2
      0x5C380600,  //  0075  MOVE	R14	R3
      0x7C280800,  //  0076  CALL	R10	4
      0x582C0006,  //  0077  LDCONST	R11	K6
      0x7C200600,  //  0078  CALL	R8	3
      0x7002002A,  //  0079  JMP		#00A5
      0x88200513,  //  007A  GETMBR	R8	R2	K19
      0x4C240000,  //  007B  LDNIL	R9
      0x20201009,  //  007C  NE	R8	R8	R9
      0x78220015,  //  007D  JMPF	R8	#0094
      0x8C200157,  //  007E  GETMET	R8	R0	K87
      0x5C280E00,  //  007F  MOVE	R10	R7
      0x5C2C0400,  //  0080  MOVE	R11	R2
      0x4C300000,  //  0081  LDNIL	R12
      0x7C200800,  //  0082  CALL	R8	4
      0xB8220600,  //  0083  GETNGBL	R8	K3
      0x8C201117,  //  0084  GETMET	R8	R8	K23
      0x58280006,  //  0085  LDCONST	R10	K6
      0x7C200400,  //  0086  CALL	R8	2
      0x7822000A,  //  0087  JMPF	R8	#0093
      0xB8220600,  //  0088  GETNGBL	R8	K3
      0x8C201104,  //  0089  GETMET	R8	R8	K4
      0x60280018,  //  008A  GETGBL	R10	G24
      0x582C005B,  //  008B  LDCONST	R11	K91
      0x88300324,  //  008C  GETMBR	R12	R1	K36
      0x88301937,  //  008D  GETMBR	R12	R12	K55
      0x88340513,  //  008E  GETMBR	R13	R2	K19
      0x88380359,  //  008F  GETMBR	R14	R1	K89
      0x7C280800,  //  0090  CALL	R10	4
      0x582C0006,  //  0091  LDCONST	R11	K6
      0x7C200600,  //  0092  CALL	R8	3
      0x70020010,  //  0093  JMP		#00A5
      0xB8220600,  //  0094  GETNGBL	R8	K3
      0x8C201117,  //  0095  GETMET	R8	R8	K23
      0x58280006,  //  0096  LDCONST	R10	K6
      0x7C200400,  //  0097  CALL	R8	2
      0x78220009,  //  0098  JMPF	R8	#00A3
      0xB8220600,  //  0099  GETNGBL	R8	K3
      0x8C201104,  //  009A  GETMET	R8	R8	K4
      0x60280018,  //  009B  GETGBL	R10	G24
      0x582C005C,  //  009C  LDCONST	R11	K92
      0x88300324,  //  009D  GETMBR	R12	R1	K36
      0x88301937,  //  009E  GETMBR	R12	R12	K55
      0x88340359,  //  009F  GETMBR	R13	R1	K89
      0x7C280600,  //  00A0  CALL	R10	3
      0x582C0006,  //  00A1  LDCONST	R11	K6
      0x7C200600,  //  00A2  CALL	R8	3
      0x50200000,  //  00A3  LDBOOL	R8	0	0
      0x80041000,  //  00A4  RET	1	R8
      0x8C200F2A,  //  00A5  GETMET	R8	R7	K42
      0x58280096,  //  00A6  LDCONST	R10	K150
      0x542DFFFB,  //  00A7  LDINT	R11	-4
      0x7C200600,  //  00A8  CALL	R8	3
      0x8C200F2A,  //  00A9  GETMET	R8	R7	K42
      0x542A0017,  //  00AA  LDINT	R10	24
      0x582C002B,  //  00AB  LDCONST	R11	K43
      0x7C200600,  //  00AC  CALL	R8	3
      0xB8220600,  //  00AD  GETNGBL	R8	K3
      0x8C201104,  //  00AE  GETMET	R8	R8	K4
      0x60280018,  //  00AF  GETGBL	R10	G24
      0x582C0097,  //  00B0  LDCONST	R11	K151
      0x8C300F98,  //  00B1  GETMET	R12	R7	K152
      0x7C300200,  //  00B2  CALL	R12	1
      0x7C280400,  //  00B3  CALL	R10	2
      0x582C0006,  //  00B4  LDCONST	R11	K6
      0x7C200600,  //  00B5  CALL	R8	3
      0x8C200399,  //  00B6  GETMET	R8	R1	K153
      0x542A0008,  //  00B7  LDINT	R10	9
      0x502C0200,  //  00B8  LDBOOL	R11	1	0
      0x7C200600,  //  00B9  CALL	R8	3
      0x8824010D,  //  00BA  GETMBR	R9	R0	K13
      0x8824139A,  //  00BB  GETMBR	R9	R9	K154
      0x8828039B,  //  00BC  GETMBR	R10	R1	K155
      0x8C2C159C,  //  00BD  GETMET	R11	R10	K156
      0x7C2C0200,  //  00BE  CALL	R11	1
      0x8C2C119D,  //  00BF  GETMET	R11	R8	K157
      0x5C340E00,  //  00C0  MOVE	R13	R7
      0x5C381400,  //  00C1  MOVE	R14	R10
      0x7C2C0600,  //  00C2  CALL	R11	3
      0x8C2C119E,  //  00C3  GETMET	R11	R8	K158
      0x7C2C0200,  //  00C4  CALL	R11	1
      0x8C2C139F,  //  00C5  GETMET	R11	R9	K159
      0x5C341000,  //  00C6  MOVE	R13	R8
      0x7C2C0400,  //  00C7  CALL	R11	2
      0x502C0200,  //  00C8  LDBOOL	R11	1	0
      0x80041600,  //  00C9  RET	1	R11
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_subscribe_heartbeat
********************************************************************/
be_local_closure(class_Matter_IM_send_subscribe_heartbeat,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(send_subscribe_heartbeat),
    &be_const_str_solidified,
    ( &(const binstruction[30]) {  /* code */
      0x88080324,  //  0000  GETMBR	R2	R1	K36
      0xB80E0600,  //  0001  GETNGBL	R3	K3
      0x8C0C0717,  //  0002  GETMET	R3	R3	K23
      0x58140006,  //  0003  LDCONST	R5	K6
      0x7C0C0400,  //  0004  CALL	R3	2
      0x780E0008,  //  0005  JMPF	R3	#000F
      0xB80E0600,  //  0006  GETNGBL	R3	K3
      0x8C0C0704,  //  0007  GETMET	R3	R3	K4
      0x60140018,  //  0008  GETGBL	R5	G24
      0x581800A0,  //  0009  LDCONST	R6	K160
      0x881C0537,  //  000A  GETMBR	R7	R2	K55
      0x88200338,  //  000B  GETMBR	R8	R1	K56
      0x7C140600,  //  000C  CALL	R5	3
      0x58180006,  //  000D  LDCONST	R6	K6
      0x7C0C0600,  //  000E  CALL	R3	3
      0x500C0200,  //  000F  LDBOOL	R3	1	0
      0x90067203,  //  0010  SETMBR	R1	K57	R3
      0x880C0127,  //  0011  GETMBR	R3	R0	K39
      0x8C0C0728,  //  0012  GETMET	R3	R3	K40
      0xB8160000,  //  0013  GETNGBL	R5	K0
      0x8C140BA1,  //  0014  GETMET	R5	R5	K161
      0x881C053D,  //  0015  GETMBR	R7	R2	K61
      0x5C200400,  //  0016  MOVE	R8	R2
      0x5C240200,  //  0017  MOVE	R9	R1
      0x7C140800,  //  0018  CALL	R5	4
      0x7C0C0400,  //  0019  CALL	R3	2
      0x8C0C013E,  //  001A  GETMET	R3	R0	K62
      0x8814053D,  //  001B  GETMBR	R5	R2	K61
      0x7C0C0400,  //  001C  CALL	R3	2
      0x80000000,  //  001D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: find_sendqueue_by_exchangeid
********************************************************************/
be_local_closure(class_Matter_IM_find_sendqueue_by_exchangeid,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(find_sendqueue_by_exchangeid),
    &be_const_str_solidified,
    ( &(const binstruction[22]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0001,  //  0002  JMPF	R2	#0005
      0x4C080000,  //  0003  LDNIL	R2
      0x80040400,  //  0004  RET	1	R2
      0x58080041,  //  0005  LDCONST	R2	K65
      0x600C000C,  //  0006  GETGBL	R3	G12
      0x88100127,  //  0007  GETMBR	R4	R0	K39
      0x7C0C0200,  //  0008  CALL	R3	1
      0x140C0403,  //  0009  LT	R3	R2	R3
      0x780E0008,  //  000A  JMPF	R3	#0014
      0x880C0127,  //  000B  GETMBR	R3	R0	K39
      0x940C0602,  //  000C  GETIDX	R3	R3	R2
      0x8C100785,  //  000D  GETMET	R4	R3	K133
      0x7C100200,  //  000E  CALL	R4	1
      0x1C100801,  //  000F  EQ	R4	R4	R1
      0x78120000,  //  0010  JMPF	R4	#0012
      0x80040600,  //  0011  RET	1	R3
      0x0008052B,  //  0012  ADD	R2	R2	K43
      0x7001FFF1,  //  0013  JMP		#0006
      0x4C0C0000,  //  0014  LDNIL	R3
      0x80040600,  //  0015  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_read_request_solo
********************************************************************/
be_local_closure(class_Matter_IM_process_read_request_solo,   /* name */
  be_nested_proto(
    20,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_read_request_solo),
    &be_const_str_solidified,
    ( &(const binstruction[259]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x880C0714,  //  0001  GETMBR	R3	R3	K20
      0x900A2603,  //  0002  SETMBR	R2	K19	R3
      0x900A4001,  //  0003  SETMBR	R2	K32	R1
      0x880C010D,  //  0004  GETMBR	R3	R0	K13
      0x8C0C07A2,  //  0005  GETMET	R3	R3	K162
      0x5C140400,  //  0006  MOVE	R5	R2
      0x7C0C0400,  //  0007  CALL	R3	2
      0x4C100000,  //  0008  LDNIL	R4
      0x4C140000,  //  0009  LDNIL	R5
      0x4C180000,  //  000A  LDNIL	R6
      0x20180606,  //  000B  NE	R6	R3	R6
      0x781A0008,  //  000C  JMPF	R6	#0016
      0xB81A0000,  //  000D  GETNGBL	R6	K0
      0x88180DA3,  //  000E  GETMBR	R6	R6	K163
      0x900A2606,  //  000F  SETMBR	R2	K19	R6
      0x8C1807A4,  //  0010  GETMET	R6	R3	K164
      0x88200324,  //  0011  GETMBR	R8	R1	K36
      0x5C240400,  //  0012  MOVE	R9	R2
      0x88280191,  //  0013  GETMBR	R10	R0	K145
      0x7C180800,  //  0014  CALL	R6	4
      0x5C100C00,  //  0015  MOVE	R4	R6
      0x4C180000,  //  0016  LDNIL	R6
      0x20180806,  //  0017  NE	R6	R4	R6
      0x781A0037,  //  0018  JMPF	R6	#0051
      0x881809A5,  //  0019  GETMBR	R6	R4	K165
      0x741A0001,  //  001A  JMPT	R6	#001D
      0x881809A6,  //  001B  GETMBR	R6	R4	K166
      0x781A0019,  //  001C  JMPF	R6	#0037
      0x8C1809A7,  //  001D  GETMET	R6	R4	K167
      0x7C180200,  //  001E  CALL	R6	1
      0xB81E0000,  //  001F  GETNGBL	R7	K0
      0x881C0F40,  //  0020  GETMBR	R7	R7	K64
      0x881C0FA8,  //  0021  GETMBR	R7	R7	K168
      0x24180C07,  //  0022  GT	R6	R6	R7
      0x781A0012,  //  0023  JMPF	R6	#0037
      0x4C100000,  //  0024  LDNIL	R4
      0xB81A0600,  //  0025  GETNGBL	R6	K3
      0x8C180D04,  //  0026  GETMET	R6	R6	K4
      0x60200018,  //  0027  GETGBL	R8	G24
      0x582400A9,  //  0028  LDCONST	R9	K169
      0x7C200200,  //  0029  CALL	R8	1
      0x58240006,  //  002A  LDCONST	R9	K6
      0x7C180600,  //  002B  CALL	R6	3
      0xB81A0000,  //  002C  GETNGBL	R6	K0
      0x88180D87,  //  002D  GETMBR	R6	R6	K135
      0x8C180DAA,  //  002E  GETMET	R6	R6	K170
      0x8820039B,  //  002F  GETMBR	R8	R1	K155
      0x882403AB,  //  0030  GETMBR	R9	R1	K171
      0x7C180600,  //  0031  CALL	R6	3
      0x8C1C01AC,  //  0032  GETMET	R7	R0	K172
      0x5C240200,  //  0033  MOVE	R9	R1
      0x5C280C00,  //  0034  MOVE	R10	R6
      0x7C1C0600,  //  0035  CALL	R7	3
      0x80040E00,  //  0036  RET	1	R7
      0x60180015,  //  0037  GETGBL	R6	G21
      0x541E002F,  //  0038  LDINT	R7	48
      0x7C180200,  //  0039  CALL	R6	1
      0x5C140C00,  //  003A  MOVE	R5	R6
      0x8C180B2A,  //  003B  GETMET	R6	R5	K42
      0x54220014,  //  003C  LDINT	R8	21
      0x5824002B,  //  003D  LDCONST	R9	K43
      0x7C180600,  //  003E  CALL	R6	3
      0x8C180B2A,  //  003F  GETMET	R6	R5	K42
      0x54223600,  //  0040  LDINT	R8	13825
      0x5425FFFD,  //  0041  LDINT	R9	-2
      0x7C180600,  //  0042  CALL	R6	3
      0x8C1801AD,  //  0043  GETMET	R6	R0	K173
      0x5C200A00,  //  0044  MOVE	R8	R5
      0x5C240400,  //  0045  MOVE	R9	R2
      0x5C280800,  //  0046  MOVE	R10	R4
      0x7C180800,  //  0047  CALL	R6	4
      0x8C180B2A,  //  0048  GETMET	R6	R5	K42
      0x58200096,  //  0049  LDCONST	R8	K150
      0x5425FFFB,  //  004A  LDINT	R9	-4
      0x7C180600,  //  004B  CALL	R6	3
      0x8C180B2A,  //  004C  GETMET	R6	R5	K42
      0x54220017,  //  004D  LDINT	R8	24
      0x5824002B,  //  004E  LDCONST	R9	K43
      0x7C180600,  //  004F  CALL	R6	3
      0x70020029,  //  0050  JMP		#007B
      0x88180513,  //  0051  GETMBR	R6	R2	K19
      0x4C1C0000,  //  0052  LDNIL	R7
      0x20180C07,  //  0053  NE	R6	R6	R7
      0x781A0019,  //  0054  JMPF	R6	#006F
      0x60180015,  //  0055  GETGBL	R6	G21
      0x541E002F,  //  0056  LDINT	R7	48
      0x7C180200,  //  0057  CALL	R6	1
      0x5C140C00,  //  0058  MOVE	R5	R6
      0x8C180B2A,  //  0059  GETMET	R6	R5	K42
      0x54220014,  //  005A  LDINT	R8	21
      0x5824002B,  //  005B  LDCONST	R9	K43
      0x7C180600,  //  005C  CALL	R6	3
      0x8C180B2A,  //  005D  GETMET	R6	R5	K42
      0x54223600,  //  005E  LDINT	R8	13825
      0x5425FFFD,  //  005F  LDINT	R9	-2
      0x7C180600,  //  0060  CALL	R6	3
      0x8C1801AE,  //  0061  GETMET	R6	R0	K174
      0x5C200A00,  //  0062  MOVE	R8	R5
      0x5C240400,  //  0063  MOVE	R9	R2
      0x88280513,  //  0064  GETMBR	R10	R2	K19
      0x7C180800,  //  0065  CALL	R6	4
      0x8C180B2A,  //  0066  GETMET	R6	R5	K42
      0x58200096,  //  0067  LDCONST	R8	K150
      0x5425FFFB,  //  0068  LDINT	R9	-4
      0x7C180600,  //  0069  CALL	R6	3
      0x8C180B2A,  //  006A  GETMET	R6	R5	K42
      0x54220017,  //  006B  LDINT	R8	24
      0x5824002B,  //  006C  LDCONST	R9	K43
      0x7C180600,  //  006D  CALL	R6	3
      0x7002000B,  //  006E  JMP		#007B
      0xB81A0600,  //  006F  GETNGBL	R6	K3
      0x8C180D04,  //  0070  GETMET	R6	R6	K4
      0x60200018,  //  0071  GETGBL	R8	G24
      0x582400AF,  //  0072  LDCONST	R9	K175
      0x88280324,  //  0073  GETMBR	R10	R1	K36
      0x88281537,  //  0074  GETMBR	R10	R10	K55
      0x5C2C0400,  //  0075  MOVE	R11	R2
      0x7C200600,  //  0076  CALL	R8	3
      0x58240006,  //  0077  LDCONST	R9	K6
      0x7C180600,  //  0078  CALL	R6	3
      0x50180000,  //  0079  LDBOOL	R6	0	0
      0x80040C00,  //  007A  RET	1	R6
      0x8C180399,  //  007B  GETMET	R6	R1	K153
      0x54220004,  //  007C  LDINT	R8	5
      0x50240200,  //  007D  LDBOOL	R9	1	0
      0x7C180600,  //  007E  CALL	R6	3
      0x881C010D,  //  007F  GETMBR	R7	R0	K13
      0x881C0F9A,  //  0080  GETMBR	R7	R7	K154
      0x8820039B,  //  0081  GETMBR	R8	R1	K155
      0x8C24119C,  //  0082  GETMET	R9	R8	K156
      0x7C240200,  //  0083  CALL	R9	1
      0x8C240D9D,  //  0084  GETMET	R9	R6	K157
      0x5C2C0A00,  //  0085  MOVE	R11	R5
      0x5C301000,  //  0086  MOVE	R12	R8
      0x7C240600,  //  0087  CALL	R9	3
      0x8C240D9E,  //  0088  GETMET	R9	R6	K158
      0x7C240200,  //  0089  CALL	R9	1
      0xB8260600,  //  008A  GETNGBL	R9	K3
      0x8C241317,  //  008B  GETMET	R9	R9	K23
      0x542E0003,  //  008C  LDINT	R11	4
      0x7C240400,  //  008D  CALL	R9	2
      0x7826000B,  //  008E  JMPF	R9	#009B
      0xB8260600,  //  008F  GETNGBL	R9	K3
      0x8C241304,  //  0090  GETMET	R9	R9	K4
      0x602C0018,  //  0091  GETGBL	R11	G24
      0x583000B0,  //  0092  LDCONST	R12	K176
      0x88340D24,  //  0093  GETMBR	R13	R6	K36
      0x88341B37,  //  0094  GETMBR	R13	R13	K55
      0x88380DB1,  //  0095  GETMBR	R14	R6	K177
      0x883C0D59,  //  0096  GETMBR	R15	R6	K89
      0x88400DB2,  //  0097  GETMBR	R16	R6	K178
      0x7C2C0A00,  //  0098  CALL	R11	5
      0x54320003,  //  0099  LDINT	R12	4
      0x7C240600,  //  009A  CALL	R9	3
      0x8C240F9F,  //  009B  GETMET	R9	R7	K159
      0x5C2C0C00,  //  009C  MOVE	R11	R6
      0x7C240400,  //  009D  CALL	R9	2
      0x4C240000,  //  009E  LDNIL	R9
      0xB82A0600,  //  009F  GETNGBL	R10	K3
      0x8C281517,  //  00A0  GETMET	R10	R10	K23
      0x58300006,  //  00A1  LDCONST	R12	K6
      0x7C280400,  //  00A2  CALL	R10	2
      0x782A000B,  //  00A3  JMPF	R10	#00B0
      0xB82A0000,  //  00A4  GETNGBL	R10	K0
      0x8C281518,  //  00A5  GETMET	R10	R10	K24
      0x88300511,  //  00A6  GETMBR	R12	R2	K17
      0x88340512,  //  00A7  GETMBR	R13	R2	K18
      0x7C280600,  //  00A8  CALL	R10	3
      0x5C241400,  //  00A9  MOVE	R9	R10
      0x78260002,  //  00AA  JMPF	R9	#00AE
      0x002A3409,  //  00AB  ADD	R10	K26	R9
      0x0028151B,  //  00AC  ADD	R10	R10	K27
      0x70020000,  //  00AD  JMP		#00AF
      0x5828001C,  //  00AE  LDCONST	R10	K28
      0x5C241400,  //  00AF  MOVE	R9	R10
      0x4C280000,  //  00B0  LDNIL	R10
      0x2028080A,  //  00B1  NE	R10	R4	R10
      0x782A001E,  //  00B2  JMPF	R10	#00D2
      0xB82A0600,  //  00B3  GETNGBL	R10	K3
      0x8C281517,  //  00B4  GETMET	R10	R10	K23
      0x58300006,  //  00B5  LDCONST	R12	K6
      0x7C280400,  //  00B6  CALL	R10	2
      0x782A0018,  //  00B7  JMPF	R10	#00D1
      0x8C2809B3,  //  00B8  GETMET	R10	R4	K179
      0x7C280200,  //  00B9  CALL	R10	1
      0xB82E0600,  //  00BA  GETNGBL	R11	K3
      0x8C2C1704,  //  00BB  GETMET	R11	R11	K4
      0x60340018,  //  00BC  GETGBL	R13	G24
      0x583800B4,  //  00BD  LDCONST	R14	K180
      0x883C0324,  //  00BE  GETMBR	R15	R1	K36
      0x883C1F37,  //  00BF  GETMBR	R15	R15	K55
      0x5C400400,  //  00C0  MOVE	R16	R2
      0x5C441200,  //  00C1  MOVE	R17	R9
      0x5C481400,  //  00C2  MOVE	R18	R10
      0x7C340A00,  //  00C3  CALL	R13	5
      0x58380006,  //  00C4  LDCONST	R14	K6
      0x7C2C0600,  //  00C5  CALL	R11	3
      0xB82E0600,  //  00C6  GETNGBL	R11	K3
      0x8C2C1704,  //  00C7  GETMET	R11	R11	K4
      0x60340018,  //  00C8  GETGBL	R13	G24
      0x583800B5,  //  00C9  LDCONST	R14	K181
      0x8C3C0930,  //  00CA  GETMET	R15	R4	K48
      0x7C3C0200,  //  00CB  CALL	R15	1
      0x8C3C1F98,  //  00CC  GETMET	R15	R15	K152
      0x7C3C0200,  //  00CD  CALL	R15	1
      0x7C340400,  //  00CE  CALL	R13	2
      0x58380006,  //  00CF  LDCONST	R14	K6
      0x7C2C0600,  //  00D0  CALL	R11	3
      0x7002002E,  //  00D1  JMP		#0101
      0x88280513,  //  00D2  GETMBR	R10	R2	K19
      0x4C2C0000,  //  00D3  LDNIL	R11
      0x2028140B,  //  00D4  NE	R10	R10	R11
      0x782A001A,  //  00D5  JMPF	R10	#00F1
      0x88280513,  //  00D6  GETMBR	R10	R2	K19
      0xB82E0000,  //  00D7  GETNGBL	R11	K0
      0x882C17A3,  //  00D8  GETMBR	R11	R11	K163
      0x1C28140B,  //  00D9  EQ	R10	R10	R11
      0x782A0001,  //  00DA  JMPF	R10	#00DD
      0x582800A3,  //  00DB  LDCONST	R10	K163
      0x70020000,  //  00DC  JMP		#00DE
      0x5828001C,  //  00DD  LDCONST	R10	K28
      0xB82E0600,  //  00DE  GETNGBL	R11	K3
      0x8C2C1717,  //  00DF  GETMET	R11	R11	K23
      0x58340006,  //  00E0  LDCONST	R13	K6
      0x7C2C0400,  //  00E1  CALL	R11	2
      0x782E000C,  //  00E2  JMPF	R11	#00F0
      0xB82E0600,  //  00E3  GETNGBL	R11	K3
      0x8C2C1704,  //  00E4  GETMET	R11	R11	K4
      0x60340018,  //  00E5  GETGBL	R13	G24
      0x583800B6,  //  00E6  LDCONST	R14	K182
      0x883C0324,  //  00E7  GETMBR	R15	R1	K36
      0x883C1F37,  //  00E8  GETMBR	R15	R15	K55
      0x5C400400,  //  00E9  MOVE	R16	R2
      0x5C441200,  //  00EA  MOVE	R17	R9
      0x88480513,  //  00EB  GETMBR	R18	R2	K19
      0x5C4C1400,  //  00EC  MOVE	R19	R10
      0x7C340C00,  //  00ED  CALL	R13	6
      0x58380006,  //  00EE  LDCONST	R14	K6
      0x7C2C0600,  //  00EF  CALL	R11	3
      0x7002000F,  //  00F0  JMP		#0101
      0xB82A0600,  //  00F1  GETNGBL	R10	K3
      0x8C281517,  //  00F2  GETMET	R10	R10	K23
      0x58300006,  //  00F3  LDCONST	R12	K6
      0x7C280400,  //  00F4  CALL	R10	2
      0x782A000A,  //  00F5  JMPF	R10	#0101
      0xB82A0600,  //  00F6  GETNGBL	R10	K3
      0x8C281504,  //  00F7  GETMET	R10	R10	K4
      0x60300018,  //  00F8  GETGBL	R12	G24
      0x583400B7,  //  00F9  LDCONST	R13	K183
      0x88380324,  //  00FA  GETMBR	R14	R1	K36
      0x88381D37,  //  00FB  GETMBR	R14	R14	K55
      0x5C3C0400,  //  00FC  MOVE	R15	R2
      0x5C401200,  //  00FD  MOVE	R16	R9
      0x7C300800,  //  00FE  CALL	R12	4
      0x58340006,  //  00FF  LDCONST	R13	K6
      0x7C280600,  //  0100  CALL	R10	3
      0x50280200,  //  0101  LDBOOL	R10	1	0
      0x80041400,  //  0102  RET	1	R10
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_event_filters_min_no
********************************************************************/
be_local_closure(class_Matter_IM_parse_event_filters_min_no,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    2,                          /* argc */
    12,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(parse_event_filters_min_no),
    &be_const_str_solidified,
    ( &(const binstruction[50]) {  /* code */
      0x580800B8,  //  0000  LDCONST	R2	K184
      0x4C0C0000,  //  0001  LDNIL	R3
      0x4C100000,  //  0002  LDNIL	R4
      0x20100004,  //  0003  NE	R4	R0	R4
      0x7812002B,  //  0004  JMPF	R4	#0031
      0x60100010,  //  0005  GETGBL	R4	G16
      0x5C140000,  //  0006  MOVE	R5	R0
      0x7C100200,  //  0007  CALL	R4	1
      0xA8020024,  //  0008  EXBLK	0	#002E
      0x5C140800,  //  0009  MOVE	R5	R4
      0x7C140000,  //  000A  CALL	R5	0
      0xB81B7200,  //  000B  GETNGBL	R6	K185
      0x8C180DBA,  //  000C  GETMET	R6	R6	K186
      0x88200BBB,  //  000D  GETMBR	R8	R5	K187
      0x7C180400,  //  000E  CALL	R6	2
      0x781A0012,  //  000F  JMPF	R6	#0023
      0x78060011,  //  0010  JMPF	R1	#0023
      0x881C0BBB,  //  0011  GETMBR	R7	R5	K187
      0x8C1C0FBC,  //  0012  GETMET	R7	R7	K188
      0x7C1C0200,  //  0013  CALL	R7	1
      0x201C0E01,  //  0014  NE	R7	R7	R1
      0x781E000C,  //  0015  JMPF	R7	#0023
      0xB81E0600,  //  0016  GETNGBL	R7	K3
      0x8C1C0F04,  //  0017  GETMET	R7	R7	K4
      0x60240018,  //  0018  GETGBL	R9	G24
      0x582800BD,  //  0019  LDCONST	R10	K189
      0x8C2C0DBC,  //  001A  GETMET	R11	R6	K188
      0x7C2C0200,  //  001B  CALL	R11	1
      0x8C2C1798,  //  001C  GETMET	R11	R11	K152
      0x7C2C0200,  //  001D  CALL	R11	1
      0x8C300398,  //  001E  GETMET	R12	R1	K152
      0x7C300200,  //  001F  CALL	R12	1
      0x7C240600,  //  0020  CALL	R9	3
      0x7C1C0400,  //  0021  CALL	R7	2
      0x7001FFE5,  //  0022  JMP		#0009
      0xB81F7200,  //  0023  GETNGBL	R7	K185
      0x8C1C0FBA,  //  0024  GETMET	R7	R7	K186
      0x88240BBE,  //  0025  GETMBR	R9	R5	K190
      0x7C1C0400,  //  0026  CALL	R7	2
      0x4C200000,  //  0027  LDNIL	R8
      0x1C200608,  //  0028  EQ	R8	R3	R8
      0x74220001,  //  0029  JMPT	R8	#002C
      0x14200607,  //  002A  LT	R8	R3	R7
      0x78220000,  //  002B  JMPF	R8	#002D
      0x5C0C0E00,  //  002C  MOVE	R3	R7
      0x7001FFDA,  //  002D  JMP		#0009
      0x58100026,  //  002E  LDCONST	R4	K38
      0xAC100200,  //  002F  CATCH	R4	1	0
      0xB0080000,  //  0030  RAISE	2	R0	R0
      0x80040600,  //  0031  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invokeresponse2raw
********************************************************************/
be_local_closure(class_Matter_IM_invokeresponse2raw,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(invokeresponse2raw),
    &be_const_str_solidified,
    ( &(const binstruction[148]) {  /* code */
      0x8C10032A,  //  0000  GETMET	R4	R1	K42
      0x541A0014,  //  0001  LDINT	R6	21
      0x581C002B,  //  0002  LDCONST	R7	K43
      0x7C100600,  //  0003  CALL	R4	3
      0x4C100000,  //  0004  LDNIL	R4
      0x1C100604,  //  0005  EQ	R4	R3	R4
      0x78120004,  //  0006  JMPF	R4	#000C
      0x8C10032A,  //  0007  GETMET	R4	R1	K42
      0x541A3500,  //  0008  LDINT	R6	13569
      0x541DFFFD,  //  0009  LDINT	R7	-2
      0x7C100600,  //  000A  CALL	R4	3
      0x70020003,  //  000B  JMP		#0010
      0x8C10032A,  //  000C  GETMET	R4	R1	K42
      0x541A34FF,  //  000D  LDINT	R6	13568
      0x541DFFFD,  //  000E  LDINT	R7	-2
      0x7C100600,  //  000F  CALL	R4	3
      0x8C10032A,  //  0010  GETMET	R4	R1	K42
      0x541A36FF,  //  0011  LDINT	R6	14080
      0x541DFFFD,  //  0012  LDINT	R7	-2
      0x7C100600,  //  0013  CALL	R4	3
      0x88100516,  //  0014  GETMBR	R4	R2	K22
      0x541600FE,  //  0015  LDINT	R5	255
      0x18100805,  //  0016  LE	R4	R4	R5
      0x78120008,  //  0017  JMPF	R4	#0021
      0x8C10032A,  //  0018  GETMET	R4	R1	K42
      0x541A23FF,  //  0019  LDINT	R6	9216
      0x541DFFFD,  //  001A  LDINT	R7	-2
      0x7C100600,  //  001B  CALL	R4	3
      0x8C10032A,  //  001C  GETMET	R4	R1	K42
      0x88180516,  //  001D  GETMBR	R6	R2	K22
      0x581C002B,  //  001E  LDCONST	R7	K43
      0x7C100600,  //  001F  CALL	R4	3
      0x70020007,  //  0020  JMP		#0029
      0x8C10032A,  //  0021  GETMET	R4	R1	K42
      0x541A24FF,  //  0022  LDINT	R6	9472
      0x541DFFFD,  //  0023  LDINT	R7	-2
      0x7C100600,  //  0024  CALL	R4	3
      0x8C10032A,  //  0025  GETMET	R4	R1	K42
      0x88180516,  //  0026  GETMBR	R6	R2	K22
      0x581C002C,  //  0027  LDCONST	R7	K44
      0x7C100600,  //  0028  CALL	R4	3
      0x88100511,  //  0029  GETMBR	R4	R2	K17
      0x541600FE,  //  002A  LDINT	R5	255
      0x18100805,  //  002B  LE	R4	R4	R5
      0x78120008,  //  002C  JMPF	R4	#0036
      0x8C10032A,  //  002D  GETMET	R4	R1	K42
      0x541A2400,  //  002E  LDINT	R6	9217
      0x541DFFFD,  //  002F  LDINT	R7	-2
      0x7C100600,  //  0030  CALL	R4	3
      0x8C10032A,  //  0031  GETMET	R4	R1	K42
      0x88180511,  //  0032  GETMBR	R6	R2	K17
      0x581C002B,  //  0033  LDCONST	R7	K43
      0x7C100600,  //  0034  CALL	R4	3
      0x70020014,  //  0035  JMP		#004B
      0x88100511,  //  0036  GETMBR	R4	R2	K17
      0x5416FFFE,  //  0037  LDINT	R5	65535
      0x18100805,  //  0038  LE	R4	R4	R5
      0x78120008,  //  0039  JMPF	R4	#0043
      0x8C10032A,  //  003A  GETMET	R4	R1	K42
      0x541A2500,  //  003B  LDINT	R6	9473
      0x541DFFFD,  //  003C  LDINT	R7	-2
      0x7C100600,  //  003D  CALL	R4	3
      0x8C10032A,  //  003E  GETMET	R4	R1	K42
      0x88180511,  //  003F  GETMBR	R6	R2	K17
      0x581C002C,  //  0040  LDCONST	R7	K44
      0x7C100600,  //  0041  CALL	R4	3
      0x70020007,  //  0042  JMP		#004B
      0x8C10032A,  //  0043  GETMET	R4	R1	K42
      0x541A2600,  //  0044  LDINT	R6	9729
      0x541DFFFD,  //  0045  LDINT	R7	-2
      0x7C100600,  //  0046  CALL	R4	3
      0x8C10032A,  //  0047  GETMET	R4	R1	K42
      0x88180511,  //  0048  GETMBR	R6	R2	K17
      0x541E0003,  //  0049  LDINT	R7	4
      0x7C100600,  //  004A  CALL	R4	3
      0x8810054F,  //  004B  GETMBR	R4	R2	K79
      0x541600FE,  //  004C  LDINT	R5	255
      0x18100805,  //  004D  LE	R4	R4	R5
      0x78120008,  //  004E  JMPF	R4	#0058
      0x8C10032A,  //  004F  GETMET	R4	R1	K42
      0x541A2401,  //  0050  LDINT	R6	9218
      0x541DFFFD,  //  0051  LDINT	R7	-2
      0x7C100600,  //  0052  CALL	R4	3
      0x8C10032A,  //  0053  GETMET	R4	R1	K42
      0x8818054F,  //  0054  GETMBR	R6	R2	K79
      0x581C002B,  //  0055  LDCONST	R7	K43
      0x7C100600,  //  0056  CALL	R4	3
      0x70020014,  //  0057  JMP		#006D
      0x8810054F,  //  0058  GETMBR	R4	R2	K79
      0x5416FFFE,  //  0059  LDINT	R5	65535
      0x18100805,  //  005A  LE	R4	R4	R5
      0x78120008,  //  005B  JMPF	R4	#0065
      0x8C10032A,  //  005C  GETMET	R4	R1	K42
      0x541A2501,  //  005D  LDINT	R6	9474
      0x541DFFFD,  //  005E  LDINT	R7	-2
      0x7C100600,  //  005F  CALL	R4	3
      0x8C10032A,  //  0060  GETMET	R4	R1	K42
      0x8818054F,  //  0061  GETMBR	R6	R2	K79
      0x581C002C,  //  0062  LDCONST	R7	K44
      0x7C100600,  //  0063  CALL	R4	3
      0x70020007,  //  0064  JMP		#006D
      0x8C10032A,  //  0065  GETMET	R4	R1	K42
      0x541A2601,  //  0066  LDINT	R6	9730
      0x541DFFFD,  //  0067  LDINT	R7	-2
      0x7C100600,  //  0068  CALL	R4	3
      0x8C10032A,  //  0069  GETMET	R4	R1	K42
      0x8818054F,  //  006A  GETMBR	R6	R2	K79
      0x541E0003,  //  006B  LDINT	R7	4
      0x7C100600,  //  006C  CALL	R4	3
      0x8C10032A,  //  006D  GETMET	R4	R1	K42
      0x541A0017,  //  006E  LDINT	R6	24
      0x581C002B,  //  006F  LDCONST	R7	K43
      0x7C100600,  //  0070  CALL	R4	3
      0x4C100000,  //  0071  LDNIL	R4
      0x1C100604,  //  0072  EQ	R4	R3	R4
      0x78120016,  //  0073  JMPF	R4	#008B
      0x88100513,  //  0074  GETMBR	R4	R2	K19
      0x4C140000,  //  0075  LDNIL	R5
      0x1C140805,  //  0076  EQ	R5	R4	R5
      0x78160001,  //  0077  JMPF	R5	#007A
      0xB8160000,  //  0078  GETNGBL	R5	K0
      0x88100B25,  //  0079  GETMBR	R4	R5	K37
      0x8C14032A,  //  007A  GETMET	R5	R1	K42
      0x541E3500,  //  007B  LDINT	R7	13569
      0x5421FFFD,  //  007C  LDINT	R8	-2
      0x7C140600,  //  007D  CALL	R5	3
      0x8C14032A,  //  007E  GETMET	R5	R1	K42
      0x541E23FF,  //  007F  LDINT	R7	9216
      0x5421FFFD,  //  0080  LDINT	R8	-2
      0x7C140600,  //  0081  CALL	R5	3
      0x8C14032A,  //  0082  GETMET	R5	R1	K42
      0x881C0513,  //  0083  GETMBR	R7	R2	K19
      0x5820002B,  //  0084  LDCONST	R8	K43
      0x7C140600,  //  0085  CALL	R5	3
      0x8C14032A,  //  0086  GETMET	R5	R1	K42
      0x541E0017,  //  0087  LDINT	R7	24
      0x5820002B,  //  0088  LDCONST	R8	K43
      0x7C140600,  //  0089  CALL	R5	3
      0x70020003,  //  008A  JMP		#008F
      0x900E5F2B,  //  008B  SETMBR	R3	K47	K43
      0x8C100730,  //  008C  GETMET	R4	R3	K48
      0x5C180200,  //  008D  MOVE	R6	R1
      0x7C100400,  //  008E  CALL	R4	2
      0x8C10032A,  //  008F  GETMET	R4	R1	K42
      0x541A1817,  //  0090  LDINT	R6	6168
      0x541DFFFD,  //  0091  LDINT	R7	-2
      0x7C100600,  //  0092  CALL	R4	3
      0x80000000,  //  0093  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_status_response
********************************************************************/
be_local_closure(class_Matter_IM_process_status_response,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_status_response),
    &be_const_str_solidified,
    ( &(const binstruction[45]) {  /* code */
      0x8C0C05BF,  //  0000  GETMET	R3	R2	K191
      0x58140041,  //  0001  LDCONST	R5	K65
      0x541A00FE,  //  0002  LDINT	R6	255
      0x7C0C0600,  //  0003  CALL	R3	3
      0x8C100182,  //  0004  GETMET	R4	R0	K130
      0x88180359,  //  0005  GETMBR	R6	R1	K89
      0x7C100400,  //  0006  CALL	R4	2
      0xB8160000,  //  0007  GETNGBL	R5	K0
      0x88140B25,  //  0008  GETMBR	R5	R5	K37
      0x1C140605,  //  0009  EQ	R5	R3	R5
      0x78160010,  //  000A  JMPF	R5	#001C
      0x78120004,  //  000B  JMPF	R4	#0011
      0x8C1409C0,  //  000C  GETMET	R5	R4	K192
      0x5C1C0200,  //  000D  MOVE	R7	R1
      0x7C140400,  //  000E  CALL	R5	2
      0x80040A00,  //  000F  RET	1	R5
      0x70020009,  //  0010  JMP		#001B
      0xB8160600,  //  0011  GETNGBL	R5	K3
      0x8C140B04,  //  0012  GETMET	R5	R5	K4
      0x601C0018,  //  0013  GETGBL	R7	G24
      0x582000C1,  //  0014  LDCONST	R8	K193
      0x88240324,  //  0015  GETMBR	R9	R1	K36
      0x88241337,  //  0016  GETMBR	R9	R9	K55
      0x88280359,  //  0017  GETMBR	R10	R1	K89
      0x7C1C0600,  //  0018  CALL	R7	3
      0x54220003,  //  0019  LDINT	R8	4
      0x7C140600,  //  001A  CALL	R5	3
      0x7002000E,  //  001B  JMP		#002B
      0xB8160600,  //  001C  GETNGBL	R5	K3
      0x8C140B04,  //  001D  GETMET	R5	R5	K4
      0x601C0018,  //  001E  GETGBL	R7	G24
      0x582000C2,  //  001F  LDCONST	R8	K194
      0x5C240600,  //  0020  MOVE	R9	R3
      0x7C1C0400,  //  0021  CALL	R7	2
      0x58200006,  //  0022  LDCONST	R8	K6
      0x7C140600,  //  0023  CALL	R5	3
      0x78120005,  //  0024  JMPF	R4	#002B
      0x8C1409C3,  //  0025  GETMET	R5	R4	K195
      0x5C1C0200,  //  0026  MOVE	R7	R1
      0x7C140400,  //  0027  CALL	R5	2
      0x8C14016F,  //  0028  GETMET	R5	R0	K111
      0x881C0359,  //  0029  GETMBR	R7	R1	K89
      0x7C140400,  //  002A  CALL	R5	2
      0x50140000,  //  002B  LDBOOL	R5	0	0
      0x80040A00,  //  002C  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: attributestatus2raw
********************************************************************/
be_local_closure(class_Matter_IM_attributestatus2raw,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(attributestatus2raw),
    &be_const_str_solidified,
    ( &(const binstruction[47]) {  /* code */
      0x8C10032A,  //  0000  GETMET	R4	R1	K42
      0x541A0014,  //  0001  LDINT	R6	21
      0x581C002B,  //  0002  LDCONST	R7	K43
      0x7C100600,  //  0003  CALL	R4	3
      0x8C10032A,  //  0004  GETMET	R4	R1	K42
      0x541A34FF,  //  0005  LDINT	R6	13568
      0x541DFFFD,  //  0006  LDINT	R7	-2
      0x7C100600,  //  0007  CALL	R4	3
      0x8C10012E,  //  0008  GETMET	R4	R0	K46
      0x5C180200,  //  0009  MOVE	R6	R1
      0x5C1C0400,  //  000A  MOVE	R7	R2
      0x58200041,  //  000B  LDCONST	R8	K65
      0x7C100800,  //  000C  CALL	R4	4
      0x8C10032A,  //  000D  GETMET	R4	R1	K42
      0x541A3500,  //  000E  LDINT	R6	13569
      0x541DFFFD,  //  000F  LDINT	R7	-2
      0x7C100600,  //  0010  CALL	R4	3
      0x88100513,  //  0011  GETMBR	R4	R2	K19
      0x541600FE,  //  0012  LDINT	R5	255
      0x18100805,  //  0013  LE	R4	R4	R5
      0x78120008,  //  0014  JMPF	R4	#001E
      0x8C10032A,  //  0015  GETMET	R4	R1	K42
      0x541A23FF,  //  0016  LDINT	R6	9216
      0x541DFFFD,  //  0017  LDINT	R7	-2
      0x7C100600,  //  0018  CALL	R4	3
      0x8C10032A,  //  0019  GETMET	R4	R1	K42
      0x88180513,  //  001A  GETMBR	R6	R2	K19
      0x581C002B,  //  001B  LDCONST	R7	K43
      0x7C100600,  //  001C  CALL	R4	3
      0x70020007,  //  001D  JMP		#0026
      0x8C10032A,  //  001E  GETMET	R4	R1	K42
      0x541A24FF,  //  001F  LDINT	R6	9472
      0x541DFFFD,  //  0020  LDINT	R7	-2
      0x7C100600,  //  0021  CALL	R4	3
      0x8C10032A,  //  0022  GETMET	R4	R1	K42
      0x88180513,  //  0023  GETMBR	R6	R2	K19
      0x581C002C,  //  0024  LDCONST	R7	K44
      0x7C100600,  //  0025  CALL	R4	3
      0x8C10032A,  //  0026  GETMET	R4	R1	K42
      0x541A1817,  //  0027  LDINT	R6	6168
      0x541DFFFD,  //  0028  LDINT	R7	-2
      0x7C100600,  //  0029  CALL	R4	3
      0x8C10032A,  //  002A  GETMET	R4	R1	K42
      0x541A0017,  //  002B  LDINT	R6	24
      0x581C002B,  //  002C  LDCONST	R7	K43
      0x7C100600,  //  002D  CALL	R4	3
      0x80000000,  //  002E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_single_attribute_to_bytes
********************************************************************/
be_local_closure(class_Matter_IM_read_single_attribute_to_bytes,   /* name */
  be_nested_proto(
    21,                          /* nstack */
    5,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(read_single_attribute_to_bytes),
    &be_const_str_solidified,
    ( &(const binstruction[167]) {  /* code */
      0xB8160000,  //  0000  GETNGBL	R5	K0
      0x88140B87,  //  0001  GETMBR	R5	R5	K135
      0x4C180000,  //  0002  LDNIL	R6
      0xB81E0600,  //  0003  GETNGBL	R7	K3
      0x8C1C0F17,  //  0004  GETMET	R7	R7	K23
      0x58240006,  //  0005  LDCONST	R9	K6
      0x7C1C0400,  //  0006  CALL	R7	2
      0x781E000B,  //  0007  JMPF	R7	#0014
      0xB81E0000,  //  0008  GETNGBL	R7	K0
      0x8C1C0F18,  //  0009  GETMET	R7	R7	K24
      0x88240511,  //  000A  GETMBR	R9	R2	K17
      0x88280512,  //  000B  GETMBR	R10	R2	K18
      0x7C1C0600,  //  000C  CALL	R7	3
      0x5C180E00,  //  000D  MOVE	R6	R7
      0x781A0002,  //  000E  JMPF	R6	#0012
      0x001E3406,  //  000F  ADD	R7	K26	R6
      0x001C0F1B,  //  0010  ADD	R7	R7	K27
      0x70020000,  //  0011  JMP		#0013
      0x581C001C,  //  0012  LDCONST	R7	K28
      0x5C180E00,  //  0013  MOVE	R6	R7
      0x881C0513,  //  0014  GETMBR	R7	R2	K19
      0x4C200000,  //  0015  LDNIL	R8
      0x201C0E08,  //  0016  NE	R7	R7	R8
      0x4C200000,  //  0017  LDNIL	R8
      0x4C240000,  //  0018  LDNIL	R9
      0x4C280000,  //  0019  LDNIL	R10
      0x2028020A,  //  001A  NE	R10	R1	R10
      0x782A0005,  //  001B  JMPF	R10	#0022
      0x8C2803A4,  //  001C  GETMET	R10	R1	K164
      0x5C300600,  //  001D  MOVE	R12	R3
      0x5C340400,  //  001E  MOVE	R13	R2
      0x88380191,  //  001F  GETMBR	R14	R0	K145
      0x7C280800,  //  0020  CALL	R10	4
      0x5C201400,  //  0021  MOVE	R8	R10
      0x4C280000,  //  0022  LDNIL	R10
      0x2028100A,  //  0023  NE	R10	R8	R10
      0x782A0058,  //  0024  JMPF	R10	#007E
      0x5828001C,  //  0025  LDCONST	R10	K28
      0xB82E0600,  //  0026  GETNGBL	R11	K3
      0x8C2C1717,  //  0027  GETMET	R11	R11	K23
      0x58340006,  //  0028  LDCONST	R13	K6
      0x7C2C0400,  //  0029  CALL	R11	2
      0x782E0003,  //  002A  JMPF	R11	#002F
      0x78120002,  //  002B  JMPF	R4	#002F
      0x8C2C11B3,  //  002C  GETMET	R11	R8	K179
      0x7C2C0200,  //  002D  CALL	R11	1
      0x5C281600,  //  002E  MOVE	R10	R11
      0x882C11A5,  //  002F  GETMBR	R11	R8	K165
      0x742E0001,  //  0030  JMPT	R11	#0033
      0x882C11A6,  //  0031  GETMBR	R11	R8	K166
      0x782E002F,  //  0032  JMPF	R11	#0063
      0x8C2C11A7,  //  0033  GETMET	R11	R8	K167
      0x7C2C0200,  //  0034  CALL	R11	1
      0xB8320000,  //  0035  GETNGBL	R12	K0
      0x88301940,  //  0036  GETMBR	R12	R12	K64
      0x883019A8,  //  0037  GETMBR	R12	R12	K168
      0x242C160C,  //  0038  GT	R11	R11	R12
      0x782E0028,  //  0039  JMPF	R11	#0063
      0x602C0012,  //  003A  GETGBL	R11	G18
      0x7C2C0000,  //  003B  CALL	R11	0
      0x5C241600,  //  003C  MOVE	R9	R11
      0x602C0015,  //  003D  GETGBL	R11	G21
      0x5432002F,  //  003E  LDINT	R12	48
      0x7C2C0200,  //  003F  CALL	R11	1
      0x8C300BC4,  //  0040  GETMET	R12	R5	K196
      0x7C300200,  //  0041  CALL	R12	1
      0x8C3401AD,  //  0042  GETMET	R13	R0	K173
      0x5C3C1600,  //  0043  MOVE	R15	R11
      0x5C400400,  //  0044  MOVE	R16	R2
      0x5C441800,  //  0045  MOVE	R17	R12
      0x50480000,  //  0046  LDBOOL	R18	0	0
      0x7C340A00,  //  0047  CALL	R13	5
      0x8C341328,  //  0048  GETMET	R13	R9	K40
      0x5C3C1600,  //  0049  MOVE	R15	R11
      0x7C340400,  //  004A  CALL	R13	2
      0x60340010,  //  004B  GETGBL	R13	G16
      0x883811C5,  //  004C  GETMBR	R14	R8	K197
      0x7C340200,  //  004D  CALL	R13	1
      0xA802000F,  //  004E  EXBLK	0	#005F
      0x5C381A00,  //  004F  MOVE	R14	R13
      0x7C380000,  //  0050  CALL	R14	0
      0x603C0015,  //  0051  GETGBL	R15	G21
      0x5442002F,  //  0052  LDINT	R16	48
      0x7C3C0200,  //  0053  CALL	R15	1
      0x5C2C1E00,  //  0054  MOVE	R11	R15
      0x8C3C01AD,  //  0055  GETMET	R15	R0	K173
      0x5C441600,  //  0056  MOVE	R17	R11
      0x5C480400,  //  0057  MOVE	R18	R2
      0x5C4C1C00,  //  0058  MOVE	R19	R14
      0x50500200,  //  0059  LDBOOL	R20	1	0
      0x7C3C0A00,  //  005A  CALL	R15	5
      0x8C3C1328,  //  005B  GETMET	R15	R9	K40
      0x5C441600,  //  005C  MOVE	R17	R11
      0x7C3C0400,  //  005D  CALL	R15	2
      0x7001FFEF,  //  005E  JMP		#004F
      0x58340026,  //  005F  LDCONST	R13	K38
      0xAC340200,  //  0060  CATCH	R13	1	0
      0xB0080000,  //  0061  RAISE	2	R0	R0
      0x70020008,  //  0062  JMP		#006C
      0x602C0015,  //  0063  GETGBL	R11	G21
      0x5432002F,  //  0064  LDINT	R12	48
      0x7C2C0200,  //  0065  CALL	R11	1
      0x5C241600,  //  0066  MOVE	R9	R11
      0x8C2C01AD,  //  0067  GETMET	R11	R0	K173
      0x5C341200,  //  0068  MOVE	R13	R9
      0x5C380400,  //  0069  MOVE	R14	R2
      0x5C3C1000,  //  006A  MOVE	R15	R8
      0x7C2C0800,  //  006B  CALL	R11	4
      0xB82E0600,  //  006C  GETNGBL	R11	K3
      0x8C2C1717,  //  006D  GETMET	R11	R11	K23
      0x58340006,  //  006E  LDCONST	R13	K6
      0x7C2C0400,  //  006F  CALL	R11	2
      0x782E000B,  //  0070  JMPF	R11	#007D
      0x7812000A,  //  0071  JMPF	R4	#007D
      0xB82E0600,  //  0072  GETNGBL	R11	K3
      0x8C2C1704,  //  0073  GETMET	R11	R11	K4
      0x60340018,  //  0074  GETGBL	R13	G24
      0x583800C6,  //  0075  LDCONST	R14	K198
      0x883C0737,  //  0076  GETMBR	R15	R3	K55
      0x5C400400,  //  0077  MOVE	R16	R2
      0x5C440C00,  //  0078  MOVE	R17	R6
      0x5C481400,  //  0079  MOVE	R18	R10
      0x7C340A00,  //  007A  CALL	R13	5
      0x58380006,  //  007B  LDCONST	R14	K6
      0x7C2C0600,  //  007C  CALL	R11	3
      0x70020027,  //  007D  JMP		#00A6
      0x88280513,  //  007E  GETMBR	R10	R2	K19
      0x4C2C0000,  //  007F  LDNIL	R11
      0x2028140B,  //  0080  NE	R10	R10	R11
      0x782A0023,  //  0081  JMPF	R10	#00A6
      0x781E0022,  //  0082  JMPF	R7	#00A6
      0x60280015,  //  0083  GETGBL	R10	G21
      0x542E002F,  //  0084  LDINT	R11	48
      0x7C280200,  //  0085  CALL	R10	1
      0x5C241400,  //  0086  MOVE	R9	R10
      0x8C2801AE,  //  0087  GETMET	R10	R0	K174
      0x5C301200,  //  0088  MOVE	R12	R9
      0x5C340400,  //  0089  MOVE	R13	R2
      0x88380513,  //  008A  GETMBR	R14	R2	K19
      0x7C280800,  //  008B  CALL	R10	4
      0xB82A0600,  //  008C  GETNGBL	R10	K3
      0x8C281517,  //  008D  GETMET	R10	R10	K23
      0x58300006,  //  008E  LDCONST	R12	K6
      0x7C280400,  //  008F  CALL	R10	2
      0x782A0014,  //  0090  JMPF	R10	#00A6
      0xB82A0600,  //  0091  GETNGBL	R10	K3
      0x8C281504,  //  0092  GETMET	R10	R10	K4
      0x60300018,  //  0093  GETGBL	R12	G24
      0x583400C7,  //  0094  LDCONST	R13	K199
      0x88380737,  //  0095  GETMBR	R14	R3	K55
      0x603C0008,  //  0096  GETGBL	R15	G8
      0x5C400400,  //  0097  MOVE	R16	R2
      0x7C3C0200,  //  0098  CALL	R15	1
      0x5C400C00,  //  0099  MOVE	R16	R6
      0x88440513,  //  009A  GETMBR	R17	R2	K19
      0x88480513,  //  009B  GETMBR	R18	R2	K19
      0xB84E0000,  //  009C  GETNGBL	R19	K0
      0x884C27A3,  //  009D  GETMBR	R19	R19	K163
      0x1C482413,  //  009E  EQ	R18	R18	R19
      0x784A0001,  //  009F  JMPF	R18	#00A2
      0x584800A3,  //  00A0  LDCONST	R18	K163
      0x70020000,  //  00A1  JMP		#00A3
      0x5848001C,  //  00A2  LDCONST	R18	K28
      0x7C300C00,  //  00A3  CALL	R12	6
      0x58340006,  //  00A4  LDCONST	R13	K6
      0x7C280600,  //  00A5  CALL	R10	3
      0x80041200,  //  00A6  RET	1	R9
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_status
********************************************************************/
be_local_closure(class_Matter_IM_send_status,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(send_status),
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x880C0127,  //  0000  GETMBR	R3	R0	K39
      0x8C0C0728,  //  0001  GETMET	R3	R3	K40
      0xB8160000,  //  0002  GETNGBL	R5	K0
      0x8C140BC8,  //  0003  GETMET	R5	R5	K200
      0x5C1C0200,  //  0004  MOVE	R7	R1
      0x5C200400,  //  0005  MOVE	R8	R2
      0x7C140600,  //  0006  CALL	R5	3
      0x7C0C0400,  //  0007  CALL	R3	2
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: process_incoming
********************************************************************/
be_local_closure(class_Matter_IM_process_incoming,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_IM,     /* shared constants */
    be_str_weak(process_incoming),
    &be_const_str_solidified,
    ( &(const binstruction[183]) {  /* code */
      0x880803C9,  //  0000  GETMBR	R2	R1	K201
      0x1C0C052C,  //  0001  EQ	R3	R2	K44
      0x780E0015,  //  0002  JMPF	R3	#0019
      0x880C018D,  //  0003  GETMBR	R3	R0	K141
      0x8C0C07CA,  //  0004  GETMET	R3	R3	K202
      0x8814039B,  //  0005  GETMBR	R5	R1	K155
      0x881803AB,  //  0006  GETMBR	R6	R1	K171
      0x7C0C0600,  //  0007  CALL	R3	3
      0x4C100000,  //  0008  LDNIL	R4
      0x20100604,  //  0009  NE	R4	R3	R4
      0x7812000C,  //  000A  JMPF	R4	#0018
      0xB8120600,  //  000B  GETNGBL	R4	K3
      0x8C100904,  //  000C  GETMET	R4	R4	K4
      0x60180018,  //  000D  GETGBL	R6	G24
      0x581C00CB,  //  000E  LDCONST	R7	K203
      0x5C200600,  //  000F  MOVE	R8	R3
      0x7C180400,  //  0010  CALL	R6	2
      0x581C0006,  //  0011  LDCONST	R7	K6
      0x7C100600,  //  0012  CALL	R4	3
      0x8C1001CC,  //  0013  GETMET	R4	R0	K204
      0x5C180200,  //  0014  MOVE	R6	R1
      0x5C1C0600,  //  0015  MOVE	R7	R3
      0x7C100600,  //  0016  CALL	R4	3
      0x80040800,  //  0017  RET	1	R4
      0x70020021,  //  0018  JMP		#003B
      0x540E0007,  //  0019  LDINT	R3	8
      0x1C0C0403,  //  001A  EQ	R3	R2	R3
      0x780E001E,  //  001B  JMPF	R3	#003B
      0x880C018F,  //  001C  GETMBR	R3	R0	K143
      0x8C0C07CA,  //  001D  GETMET	R3	R3	K202
      0x8814039B,  //  001E  GETMBR	R5	R1	K155
      0x881803AB,  //  001F  GETMBR	R6	R1	K171
      0x7C0C0600,  //  0020  CALL	R3	3
      0xB8120600,  //  0021  GETNGBL	R4	K3
      0x8C100904,  //  0022  GETMET	R4	R4	K4
      0x60180018,  //  0023  GETGBL	R6	G24
      0x581C00CD,  //  0024  LDCONST	R7	K205
      0x5C200600,  //  0025  MOVE	R8	R3
      0x882403AB,  //  0026  GETMBR	R9	R1	K171
      0x402413CE,  //  0027  CONNECT	R9	R9	K206
      0x8828039B,  //  0028  GETMBR	R10	R1	K155
      0x94241409,  //  0029  GETIDX	R9	R10	R9
      0x8C241398,  //  002A  GETMET	R9	R9	K152
      0x7C240200,  //  002B  CALL	R9	1
      0x882803AB,  //  002C  GETMBR	R10	R1	K171
      0x882C039B,  //  002D  GETMBR	R11	R1	K155
      0x8C2C1798,  //  002E  GETMET	R11	R11	K152
      0x7C2C0200,  //  002F  CALL	R11	1
      0x7C180A00,  //  0030  CALL	R6	5
      0x581C0006,  //  0031  LDCONST	R7	K6
      0x7C100600,  //  0032  CALL	R4	3
      0x4C100000,  //  0033  LDNIL	R4
      0x20100604,  //  0034  NE	R4	R3	R4
      0x78120004,  //  0035  JMPF	R4	#003B
      0x8C1001CF,  //  0036  GETMET	R4	R0	K207
      0x5C180200,  //  0037  MOVE	R6	R1
      0x5C1C0600,  //  0038  MOVE	R7	R3
      0x7C100600,  //  0039  CALL	R4	3
      0x80040800,  //  003A  RET	1	R4
      0xB80E0600,  //  003B  GETNGBL	R3	K3
      0x8C0C0704,  //  003C  GETMET	R3	R3	K4
      0xB8160000,  //  003D  GETNGBL	R5	K0
      0x8C140BD1,  //  003E  GETMET	R5	R5	K209
      0x5C1C0200,  //  003F  MOVE	R7	R1
      0x7C140400,  //  0040  CALL	R5	2
      0x0017A005,  //  0041  ADD	R5	K208	R5
      0x58180006,  //  0042  LDCONST	R6	K6
      0x7C0C0600,  //  0043  CALL	R3	3
      0xB80E0000,  //  0044  GETNGBL	R3	K0
      0x880C0787,  //  0045  GETMBR	R3	R3	K135
      0x8C0C07AA,  //  0046  GETMET	R3	R3	K170
      0x8814039B,  //  0047  GETMBR	R5	R1	K155
      0x881803AB,  //  0048  GETMBR	R6	R1	K171
      0x7C0C0600,  //  0049  CALL	R3	3
      0xB8120600,  //  004A  GETNGBL	R4	K3
      0x8C100904,  //  004B  GETMET	R4	R4	K4
      0x60180008,  //  004C  GETGBL	R6	G8
      0x5C1C0600,  //  004D  MOVE	R7	R3
      0x7C180200,  //  004E  CALL	R6	1
      0x001BA406,  //  004F  ADD	R6	K210	R6
      0x581C0006,  //  0050  LDCONST	R7	K6
      0x7C100600,  //  0051  CALL	R4	3
      0x8C1007BF,  //  0052  GETMET	R4	R3	K191
      0x541A00FE,  //  0053  LDINT	R6	255
      0x7C100400,  //  0054  CALL	R4	2
      0xB8160600,  //  0055  GETNGBL	R5	K3
      0x8C140B04,  //  0056  GETMET	R5	R5	K4
      0x4C1C0000,  //  0057  LDNIL	R7
      0x201C0807,  //  0058  NE	R7	R4	R7
      0x781E0003,  //  0059  JMPF	R7	#005E
      0x601C0008,  //  005A  GETGBL	R7	G8
      0x5C200800,  //  005B  MOVE	R8	R4
      0x7C1C0200,  //  005C  CALL	R7	1
      0x70020000,  //  005D  JMP		#005F
      0x581C00D4,  //  005E  LDCONST	R7	K212
      0x001FA607,  //  005F  ADD	R7	K211	R7
      0x58200006,  //  0060  LDCONST	R8	K6
      0x7C140600,  //  0061  CALL	R5	3
      0x1C14052B,  //  0062  EQ	R5	R2	K43
      0x78160005,  //  0063  JMPF	R5	#006A
      0x8C1401D5,  //  0064  GETMET	R5	R0	K213
      0x5C1C0200,  //  0065  MOVE	R7	R1
      0x5C200600,  //  0066  MOVE	R8	R3
      0x7C140600,  //  0067  CALL	R5	3
      0x80040A00,  //  0068  RET	1	R5
      0x7002004A,  //  0069  JMP		#00B5
      0x1C14052C,  //  006A  EQ	R5	R2	K44
      0x78160008,  //  006B  JMPF	R5	#0075
      0x8C1401D6,  //  006C  GETMET	R5	R0	K214
      0x5C1C0200,  //  006D  MOVE	R7	R1
      0x7C140400,  //  006E  CALL	R5	2
      0x8C1401AC,  //  006F  GETMET	R5	R0	K172
      0x5C1C0200,  //  0070  MOVE	R7	R1
      0x5C200600,  //  0071  MOVE	R8	R3
      0x7C140600,  //  0072  CALL	R5	3
      0x80040A00,  //  0073  RET	1	R5
      0x7002003F,  //  0074  JMP		#00B5
      0x1C140506,  //  0075  EQ	R5	R2	K6
      0x78160008,  //  0076  JMPF	R5	#0080
      0x8C1401D6,  //  0077  GETMET	R5	R0	K214
      0x5C1C0200,  //  0078  MOVE	R7	R1
      0x7C140400,  //  0079  CALL	R5	2
      0x8C1401D7,  //  007A  GETMET	R5	R0	K215
      0x5C1C0200,  //  007B  MOVE	R7	R1
      0x5C200600,  //  007C  MOVE	R8	R3
      0x7C140600,  //  007D  CALL	R5	3
      0x80040A00,  //  007E  RET	1	R5
      0x70020034,  //  007F  JMP		#00B5
      0x54160003,  //  0080  LDINT	R5	4
      0x1C140405,  //  0081  EQ	R5	R2	R5
      0x78160002,  //  0082  JMPF	R5	#0086
      0x50140000,  //  0083  LDBOOL	R5	0	0
      0x80040A00,  //  0084  RET	1	R5
      0x7002002E,  //  0085  JMP		#00B5
      0x54160004,  //  0086  LDINT	R5	5
      0x1C140405,  //  0087  EQ	R5	R2	R5
      0x78160002,  //  0088  JMPF	R5	#008C
      0x50140000,  //  0089  LDBOOL	R5	0	0
      0x80040A00,  //  008A  RET	1	R5
      0x70020028,  //  008B  JMP		#00B5
      0x54160005,  //  008C  LDINT	R5	6
      0x1C140405,  //  008D  EQ	R5	R2	R5
      0x78160008,  //  008E  JMPF	R5	#0098
      0x8C1401D6,  //  008F  GETMET	R5	R0	K214
      0x5C1C0200,  //  0090  MOVE	R7	R1
      0x7C140400,  //  0091  CALL	R5	2
      0x8C1401D8,  //  0092  GETMET	R5	R0	K216
      0x5C1C0200,  //  0093  MOVE	R7	R1
      0x5C200600,  //  0094  MOVE	R8	R3
      0x7C140600,  //  0095  CALL	R5	3
      0x80040A00,  //  0096  RET	1	R5
      0x7002001C,  //  0097  JMP		#00B5
      0x54160006,  //  0098  LDINT	R5	7
      0x1C140405,  //  0099  EQ	R5	R2	R5
      0x78160002,  //  009A  JMPF	R5	#009E
      0x50140000,  //  009B  LDBOOL	R5	0	0
      0x80040A00,  //  009C  RET	1	R5
      0x70020016,  //  009D  JMP		#00B5
      0x54160007,  //  009E  LDINT	R5	8
      0x1C140405,  //  009F  EQ	R5	R2	R5
      0x78160005,  //  00A0  JMPF	R5	#00A7
      0x8C1401D9,  //  00A1  GETMET	R5	R0	K217
      0x5C1C0200,  //  00A2  MOVE	R7	R1
      0x5C200600,  //  00A3  MOVE	R8	R3
      0x7C140600,  //  00A4  CALL	R5	3
      0x80040A00,  //  00A5  RET	1	R5
      0x7002000D,  //  00A6  JMP		#00B5
      0x54160008,  //  00A7  LDINT	R5	9
      0x1C140405,  //  00A8  EQ	R5	R2	R5
      0x78160002,  //  00A9  JMPF	R5	#00AD
      0x50140000,  //  00AA  LDBOOL	R5	0	0
      0x80040A00,  //  00AB  RET	1	R5
      0x70020007,  //  00AC  JMP		#00B5
      0x54160009,  //  00AD  LDINT	R5	10
      0x1C140405,  //  00AE  EQ	R5	R2	R5
      0x78160004,  //  00AF  JMPF	R5	#00B5
      0x8C1401DA,  //  00B0  GETMET	R5	R0	K218
      0x5C1C0200,  //  00B1  MOVE	R7	R1
      0x5C200600,  //  00B2  MOVE	R8	R3
      0x7C140600,  //  00B3  CALL	R5	3
      0x80040A00,  //  00B4  RET	1	R5
      0x50140000,  //  00B5  LDBOOL	R5	0	0
      0x80040A00,  //  00B6  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_IM
********************************************************************/
be_local_class(Matter_IM,
    6,
    NULL,
    be_nested_map(36,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(process_write_request, 7), be_const_closure(class_Matter_IM_process_write_request_closure) },
        { be_const_key_weak(process_incoming, 33), be_const_closure(class_Matter_IM_process_incoming_closure) },
        { be_const_key_weak(path2raw, 26), be_const_closure(class_Matter_IM_path2raw_closure) },
        { be_const_key_weak(attributedata2raw, 12), be_const_closure(class_Matter_IM_attributedata2raw_closure) },
        { be_const_key_weak(send_subscribe_update, -1), be_const_closure(class_Matter_IM_send_subscribe_update_closure) },
        { be_const_key_weak(process_read_request_pull, -1), be_const_closure(class_Matter_IM_process_read_request_pull_closure) },
        { be_const_key_weak(process_read_or_subscribe_request_pull, -1), be_const_closure(class_Matter_IM_process_read_or_subscribe_request_pull_closure) },
        { be_const_key_weak(process_timed_request, -1), be_const_closure(class_Matter_IM_process_timed_request_closure) },
        { be_const_key_weak(every_50ms, -1), be_const_closure(class_Matter_IM_every_50ms_closure) },
        { be_const_key_weak(process_invoke_request, 24), be_const_closure(class_Matter_IM_process_invoke_request_closure) },
        { be_const_key_weak(read_single_attribute_to_bytes, -1), be_const_closure(class_Matter_IM_read_single_attribute_to_bytes_closure) },
        { be_const_key_weak(process_read_or_subscribe_request_event_pull, 10), be_const_closure(class_Matter_IM_process_read_or_subscribe_request_event_pull_closure) },
        { be_const_key_weak(invoke_request_solo, -1), be_const_var(4) },
        { be_const_key_weak(subscribe_request, -1), be_const_closure(class_Matter_IM_subscribe_request_closure) },
        { be_const_key_weak(send_enqueued, 27), be_const_closure(class_Matter_IM_send_enqueued_closure) },
        { be_const_key_weak(device, 28), be_const_var(0) },
        { be_const_key_weak(expire_sendqueue, -1), be_const_closure(class_Matter_IM_expire_sendqueue_closure) },
        { be_const_key_weak(process_incoming_ack, -1), be_const_closure(class_Matter_IM_process_incoming_ack_closure) },
        { be_const_key_weak(remove_sendqueue_by_exchangeid, -1), be_const_closure(class_Matter_IM_remove_sendqueue_by_exchangeid_closure) },
        { be_const_key_weak(write_single_attribute_status_to_bytes, -1), be_const_closure(class_Matter_IM_write_single_attribute_status_to_bytes_closure) },
        { be_const_key_weak(attributestatus2raw, 22), be_const_closure(class_Matter_IM_attributestatus2raw_closure) },
        { be_const_key_weak(every_second, 20), be_const_closure(class_Matter_IM_every_second_closure) },
        { be_const_key_weak(tlv_solo, 30), be_const_var(5) },
        { be_const_key_weak(send_subscribe_heartbeat, -1), be_const_closure(class_Matter_IM_send_subscribe_heartbeat_closure) },
        { be_const_key_weak(find_sendqueue_by_exchangeid, -1), be_const_closure(class_Matter_IM_find_sendqueue_by_exchangeid_closure) },
        { be_const_key_weak(process_read_request_solo, -1), be_const_closure(class_Matter_IM_process_read_request_solo_closure) },
        { be_const_key_weak(invokeresponse2raw, -1), be_const_closure(class_Matter_IM_invokeresponse2raw_closure) },
        { be_const_key_weak(parse_event_filters_min_no, 32), be_const_static_closure(class_Matter_IM_parse_event_filters_min_no_closure) },
        { be_const_key_weak(subs_shop, 31), be_const_var(1) },
        { be_const_key_weak(process_status_response, -1), be_const_closure(class_Matter_IM_process_status_response_closure) },
        { be_const_key_weak(process_invoke_request_solo, -1), be_const_closure(class_Matter_IM_process_invoke_request_solo_closure) },
        { be_const_key_weak(init, -1), be_const_closure(class_Matter_IM_init_closure) },
        { be_const_key_weak(send_ack_now, -1), be_const_closure(class_Matter_IM_send_ack_now_closure) },
        { be_const_key_weak(read_request_solo, -1), be_const_var(3) },
        { be_const_key_weak(send_status, -1), be_const_closure(class_Matter_IM_send_status_closure) },
        { be_const_key_weak(send_queue, 1), be_const_var(2) },
    })),
    be_str_weak(Matter_IM)
);
/********************************************************************/
/* End of solidification */
