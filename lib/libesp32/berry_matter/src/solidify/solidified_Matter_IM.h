/* Solidification of Matter_IM.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
extern const bclass be_class_Matter_IM;
// compact class 'Matter_IM' ktab size: 221, total: 523 (saved 2416 bytes)
static const bvalue be_ktab_class_Matter_IM[221] = {
  /* K0   */  be_nested_str_weak(matter),
  /* K1   */  be_nested_str_weak(WriteRequestMessage),
  /* K2   */  be_nested_str_weak(from_TLV),
  /* K3   */  be_nested_str_weak(tasmota),
  /* K4   */  be_nested_str_weak(log),
  /* K5   */  be_nested_str_weak(MTR_X3A_X20received_X20WriteRequestMessage_X3D),
  /* K6   */  be_nested_str_weak(Path),
  /* K7   */  be_nested_str_weak(suppress_response),
  /* K8   */  be_nested_str_weak(write_requests),
  /* K9   */  be_nested_str_weak(WriteResponseMessage),
  /* K10  */  be_nested_str_weak(write_responses),
  /* K11  */  be_nested_str_weak(PathGenerator),
  /* K12  */  be_nested_str_weak(device),
  /* K13  */  be_nested_str_weak(path),
  /* K14  */  be_nested_str_weak(data),
  /* K15  */  be_nested_str_weak(copy),
  /* K16  */  be_nested_str_weak(cluster),
  /* K17  */  be_nested_str_weak(attribute),
  /* K18  */  be_nested_str_weak(status),
  /* K19  */  be_nested_str_weak(INVALID_ACTION),
  /* K20  */  be_nested_str_weak(write_single_attribute_status_to_bytes),
  /* K21  */  be_nested_str_weak(endpoint),
  /* K22  */  be_nested_str_weak(loglevel),
  /* K23  */  be_nested_str_weak(get_attribute_name),
  /* K24  */  be_nested_str_weak(MTR_X3A_X20Write_Attr_X20),
  /* K25  */  be_nested_str_weak(_X20_X28),
  /* K26  */  be_nested_str_weak(_X29),
  /* K27  */  be_nested_str_weak(),
  /* K28  */  be_nested_str_weak(start),
  /* K29  */  be_nested_str_weak(is_direct),
  /* K30  */  be_nested_str_weak(next_attribute),
  /* K31  */  be_nested_str_weak(msg),
  /* K32  */  be_nested_str_weak(get_pi),
  /* K33  */  be_nested_str_weak(UNSUPPORTED_WRITE),
  /* K34  */  be_nested_str_weak(write_attribute),
  /* K35  */  be_nested_str_weak(session),
  /* K36  */  be_nested_str_weak(SUCCESS),
  /* K37  */  be_nested_str_weak(stop_iteration),
  /* K38  */  be_nested_str_weak(send_queue),
  /* K39  */  be_nested_str_weak(push),
  /* K40  */  be_nested_str_weak(IM_WriteResponse),
  /* K41  */  be_nested_str_weak(add),
  /* K42  */  be_const_int(1),
  /* K43  */  be_const_int(2),
  /* K44  */  be_const_int(355795236),
  /* K45  */  be_nested_str_weak(path2raw),
  /* K46  */  be_nested_str_weak(tag_sub),
  /* K47  */  be_nested_str_weak(tlv2raw),
  /* K48  */  be_nested_str_weak(ReadRequestMessage),
  /* K49  */  be_nested_str_weak(fabric_filtered),
  /* K50  */  be_nested_str_weak(attributes_requests),
  /* K51  */  be_nested_str_weak(updates),
  /* K52  */  be_nested_str_weak(AttributePathIB),
  /* K53  */  be_nested_str_weak(MTR_X3A_X20_X3CSub_Data_X20_X20_X28_X256i_X29_X20sub_X3D_X25i),
  /* K54  */  be_nested_str_weak(local_session_id),
  /* K55  */  be_nested_str_weak(subscription_id),
  /* K56  */  be_nested_str_weak(is_keep_alive),
  /* K57  */  be_nested_str_weak(process_read_or_subscribe_request_pull),
  /* K58  */  be_nested_str_weak(update_event_generator_array),
  /* K59  */  be_nested_str_weak(IM_ReportDataSubscribed_Pull),
  /* K60  */  be_nested_str_weak(_message_handler),
  /* K61  */  be_nested_str_weak(send_enqueued),
  /* K62  */  be_nested_str_weak(process_read_or_subscribe_request_event_pull),
  /* K63  */  be_nested_str_weak(IM_ReportData_Pull),
  /* K64  */  be_const_int(0),
  /* K65  */  be_nested_str_weak(TimedRequestMessage),
  /* K66  */  be_nested_str_weak(MTR_X3A_X20received_X20TimedRequestMessage_X3D),
  /* K67  */  be_nested_str_weak(MTR_X3A_X20_X3ECommand_X20_X20_X20_X28_X256i_X29_X20TimedRequest_X3D_X25i),
  /* K68  */  be_nested_str_weak(timeout),
  /* K69  */  be_nested_str_weak(send_status),
  /* K70  */  be_nested_str_weak(subs_shop),
  /* K71  */  be_nested_str_weak(every_50ms),
  /* K72  */  be_nested_str_weak(FUCK_X20YOU_X20process_invoke_request),
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
  /* K139 */  be_const_int(3),
  /* K140 */  be_nested_str_weak(MTR_X3A_X20_X3EWrite_Attr_X25s_X25s_X20_X2D_X20IGNORED),
  /* K141 */  be_nested_str_weak(IM_Subscription_Shop),
  /* K142 */  be_nested_str_weak(read_request_solo),
  /* K143 */  be_nested_str_weak(ReadRequestMessage_solo),
  /* K144 */  be_nested_str_weak(invoke_request_solo),
  /* K145 */  be_nested_str_weak(InvokeRequestMessage_solo),
  /* K146 */  be_nested_str_weak(tlv_solo),
  /* K147 */  be_nested_str_weak(Matter_TLV_item),
  /* K148 */  be_nested_str_weak(expire_sendqueue),
  /* K149 */  be_nested_str_weak(FUCK_X20YOU_X20process_invoke_request_solo),
  /* K150 */  be_nested_str_weak(MTR_X3A_X20_X3ECommand1_X20_X20_X28_X256i_X29_X20_X25s_X20_X25s_X20_X25s),
  /* K151 */  be_const_int(354943030),
  /* K152 */  be_const_int(405077761),
  /* K153 */  be_nested_str_weak(MTR_X3A_X20raw_X3D_X25s),
  /* K154 */  be_nested_str_weak(tohex),
  /* K155 */  be_nested_str_weak(build_response),
  /* K156 */  be_nested_str_weak(message_handler),
  /* K157 */  be_nested_str_weak(raw),
  /* K158 */  be_nested_str_weak(clear),
  /* K159 */  be_nested_str_weak(encode_frame),
  /* K160 */  be_nested_str_weak(encrypt),
  /* K161 */  be_nested_str_weak(send_response_frame),
  /* K162 */  be_nested_str_weak(MTR_X3A_X20_X3CSub_Alive_X20_X28_X256i_X29_X20sub_X3D_X25s),
  /* K163 */  be_nested_str_weak(IM_SubscribedHeartbeat),
  /* K164 */  be_nested_str_weak(resolve_attribute_read_solo),
  /* K165 */  be_nested_str_weak(UNSUPPORTED_ATTRIBUTE),
  /* K166 */  be_nested_str_weak(read_attribute),
  /* K167 */  be_nested_str_weak(is_list),
  /* K168 */  be_nested_str_weak(is_array),
  /* K169 */  be_nested_str_weak(encode_len),
  /* K170 */  be_nested_str_weak(MAX_MESSAGE),
  /* K171 */  be_nested_str_weak(MTR_X3A_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20Response_X20to_X20big_X2C_X20revert_X20to_X20non_X2Dsolo),
  /* K172 */  be_nested_str_weak(parse),
  /* K173 */  be_nested_str_weak(app_payload_idx),
  /* K174 */  be_nested_str_weak(process_read_request_pull),
  /* K175 */  be_nested_str_weak(attributedata2raw),
  /* K176 */  be_nested_str_weak(attributestatus2raw),
  /* K177 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X20_X2D_X20IGNORED),
  /* K178 */  be_nested_str_weak(MTR_X3A_X20_X3Csnd_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20id_X3D_X25i_X20exch_X3D_X25i_X20rack_X3D_X25s),
  /* K179 */  be_nested_str_weak(message_counter),
  /* K180 */  be_nested_str_weak(ack_message_counter),
  /* K181 */  be_nested_str_weak(to_str_val),
  /* K182 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20_X25s),
  /* K183 */  be_nested_str_weak(MTR_X3A_X20_X25s),
  /* K184 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20STATUS_X3A_X200x_X2502X_X20_X25s),
  /* K185 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr1_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20IGNORED),
  /* K186 */  be_const_class(be_class_Matter_IM),
  /* K187 */  be_nested_str_weak(int64),
  /* K188 */  be_nested_str_weak(toint64),
  /* K189 */  be_nested_str_weak(node),
  /* K190 */  be_nested_str_weak(tobytes),
  /* K191 */  be_nested_str_weak(MTR_X3A_X20node_id_X20filter_X20_X25s_X20doesn_X27t_X20match_X20_X25s),
  /* K192 */  be_nested_str_weak(event_min),
  /* K193 */  be_nested_str_weak(findsubval),
  /* K194 */  be_nested_str_weak(status_ok_received),
  /* K195 */  be_nested_str_weak(MTR_X3A_X20_X3EOK_X20_X20_X20_X20_X20_X20_X20_X20_X28_X256i_X29_X20exch_X3D_X25i_X20not_X20found),
  /* K196 */  be_nested_str_weak(MTR_X3A_X20_X3EStatus_X20_X20_X20_X20ERROR_X20_X3D_X200x_X2502X),
  /* K197 */  be_nested_str_weak(status_error_received),
  /* K198 */  be_nested_str_weak(Matter_TLV_array),
  /* K199 */  be_nested_str_weak(val),
  /* K200 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20_X25s),
  /* K201 */  be_nested_str_weak(MTR_X3A_X20_X3ERead_Attr_X20_X28_X256i_X29_X20_X25s_X25s_X20_X2D_X20STATUS_X3A_X200x_X2502X_X20_X25s),
  /* K202 */  be_nested_str_weak(IM_Status),
  /* K203 */  be_nested_str_weak(opcode),
  /* K204 */  be_nested_str_weak(from_raw),
  /* K205 */  be_nested_str_weak(MTR_X3A_X20process_incoming_X20read_request_solo_X3D_X25s),
  /* K206 */  be_nested_str_weak(process_read_request_solo),
  /* K207 */  be_nested_str_weak(MTR_X3A_X20invoke_request_solo_X3D_X25s_X20_X25s_X20msg_X2Eapp_payload_idx_X3D_X25s_X20_X25s),
  /* K208 */  be_const_int(2147483647),
  /* K209 */  be_nested_str_weak(process_invoke_request_solo),
  /* K210 */  be_nested_str_weak(MTR_X3A_X20received_X20IM_X20message_X20),
  /* K211 */  be_nested_str_weak(inspect),
  /* K212 */  be_nested_str_weak(MTR_X3A_X20IM_X20TLV_X3A_X20),
  /* K213 */  be_nested_str_weak(MTR_X3A_X20InteractionModelRevision_X3D),
  /* K214 */  be_nested_str_weak(nil),
  /* K215 */  be_nested_str_weak(process_status_response),
  /* K216 */  be_nested_str_weak(send_ack_now),
  /* K217 */  be_nested_str_weak(subscribe_request),
  /* K218 */  be_nested_str_weak(process_write_request),
  /* K219 */  be_nested_str_weak(process_invoke_request),
  /* K220 */  be_nested_str_weak(process_timed_request),
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
    ( &(const binstruction[152]) {  /* code */
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
      0x7C100400,  //  000C  CALL	R4	2
      0xB8120000,  //  000D  GETNGBL	R4	K0
      0x8C100906,  //  000E  GETMET	R4	R4	K6
      0x7C100200,  //  000F  CALL	R4	1
      0x88140707,  //  0010  GETMBR	R5	R3	K7
      0x88180708,  //  0011  GETMBR	R6	R3	K8
      0x4C1C0000,  //  0012  LDNIL	R7
      0x20180C07,  //  0013  NE	R6	R6	R7
      0x781A0080,  //  0014  JMPF	R6	#0096
      0xB81A0000,  //  0015  GETNGBL	R6	K0
      0x8C180D09,  //  0016  GETMET	R6	R6	K9
      0x7C180200,  //  0017  CALL	R6	1
      0x601C0012,  //  0018  GETGBL	R7	G18
      0x7C1C0000,  //  0019  CALL	R7	0
      0x901A1407,  //  001A  SETMBR	R6	K10	R7
      0xB81E0000,  //  001B  GETNGBL	R7	K0
      0x8C1C0F0B,  //  001C  GETMET	R7	R7	K11
      0x8824010C,  //  001D  GETMBR	R9	R0	K12
      0x7C1C0400,  //  001E  CALL	R7	2
      0x60200010,  //  001F  GETGBL	R8	G16
      0x88240708,  //  0020  GETMBR	R9	R3	K8
      0x7C200200,  //  0021  CALL	R8	1
      0xA8020065,  //  0022  EXBLK	0	#0089
      0x5C241000,  //  0023  MOVE	R9	R8
      0x7C240000,  //  0024  CALL	R9	0
      0x8828130D,  //  0025  GETMBR	R10	R9	K13
      0x882C130E,  //  0026  GETMBR	R11	R9	K14
      0x8C30090F,  //  0027  GETMET	R12	R4	K15
      0x5C381400,  //  0028  MOVE	R14	R10
      0x7C300400,  //  0029  CALL	R12	2
      0x88301510,  //  002A  GETMBR	R12	R10	K16
      0x4C340000,  //  002B  LDNIL	R13
      0x1C30180D,  //  002C  EQ	R12	R12	R13
      0x74320003,  //  002D  JMPT	R12	#0032
      0x88301511,  //  002E  GETMBR	R12	R10	K17
      0x4C340000,  //  002F  LDNIL	R13
      0x1C30180D,  //  0030  EQ	R12	R12	R13
      0x78320008,  //  0031  JMPF	R12	#003B
      0xB8320000,  //  0032  GETNGBL	R12	K0
      0x88301913,  //  0033  GETMBR	R12	R12	K19
      0x9012240C,  //  0034  SETMBR	R4	K18	R12
      0x8C300114,  //  0035  GETMET	R12	R0	K20
      0x5C380C00,  //  0036  MOVE	R14	R6
      0x5C3C0800,  //  0037  MOVE	R15	R4
      0x4C400000,  //  0038  LDNIL	R16
      0x7C300800,  //  0039  CALL	R12	4
      0x7001FFE7,  //  003A  JMP		#0023
      0x88301515,  //  003B  GETMBR	R12	R10	K21
      0x4C340000,  //  003C  LDNIL	R13
      0x1C30180D,  //  003D  EQ	R12	R12	R13
      0x78320016,  //  003E  JMPF	R12	#0056
      0xB8320600,  //  003F  GETNGBL	R12	K3
      0x8C301916,  //  0040  GETMET	R12	R12	K22
      0x543A0003,  //  0041  LDINT	R14	4
      0x7C300400,  //  0042  CALL	R12	2
      0x78320011,  //  0043  JMPF	R12	#0056
      0xB8320000,  //  0044  GETNGBL	R12	K0
      0x8C301917,  //  0045  GETMET	R12	R12	K23
      0x88381510,  //  0046  GETMBR	R14	R10	K16
      0x883C1511,  //  0047  GETMBR	R15	R10	K17
      0x7C300600,  //  0048  CALL	R12	3
      0xB8360600,  //  0049  GETNGBL	R13	K3
      0x8C341B04,  //  004A  GETMET	R13	R13	K4
      0x603C0008,  //  004B  GETGBL	R15	G8
      0x5C400800,  //  004C  MOVE	R16	R4
      0x7C3C0200,  //  004D  CALL	R15	1
      0x003E300F,  //  004E  ADD	R15	K24	R15
      0x78320002,  //  004F  JMPF	R12	#0053
      0x0042320C,  //  0050  ADD	R16	K25	R12
      0x0040211A,  //  0051  ADD	R16	R16	K26
      0x70020000,  //  0052  JMP		#0054
      0x5840001B,  //  0053  LDCONST	R16	K27
      0x003C1E10,  //  0054  ADD	R15	R15	R16
      0x7C340400,  //  0055  CALL	R13	2
      0x8C300F1C,  //  0056  GETMET	R12	R7	K28
      0x88381515,  //  0057  GETMBR	R14	R10	K21
      0x883C1510,  //  0058  GETMBR	R15	R10	K16
      0x88401511,  //  0059  GETMBR	R16	R10	K17
      0x7C300800,  //  005A  CALL	R12	4
      0x8C300F1D,  //  005B  GETMET	R12	R7	K29
      0x7C300200,  //  005C  CALL	R12	1
      0x4C340000,  //  005D  LDNIL	R13
      0x8C380F1E,  //  005E  GETMET	R14	R7	K30
      0x7C380200,  //  005F  CALL	R14	1
      0x5C341C00,  //  0060  MOVE	R13	R14
      0x783A0025,  //  0061  JMPF	R14	#0088
      0x90363E01,  //  0062  SETMBR	R13	K31	R1
      0x88381B12,  //  0063  GETMBR	R14	R13	K18
      0x4C3C0000,  //  0064  LDNIL	R15
      0x20381C0F,  //  0065  NE	R14	R14	R15
      0x783A0007,  //  0066  JMPF	R14	#006F
      0x4C380000,  //  0067  LDNIL	R14
      0x9036240E,  //  0068  SETMBR	R13	K18	R14
      0x8C380114,  //  0069  GETMET	R14	R0	K20
      0x5C400C00,  //  006A  MOVE	R16	R6
      0x5C441A00,  //  006B  MOVE	R17	R13
      0x5C481600,  //  006C  MOVE	R18	R11
      0x7C380800,  //  006D  CALL	R14	4
      0x70020017,  //  006E  JMP		#0087
      0x8C380F20,  //  006F  GETMET	R14	R7	K32
      0x7C380200,  //  0070  CALL	R14	1
      0xB83E0000,  //  0071  GETNGBL	R15	K0
      0x883C1F21,  //  0072  GETMBR	R15	R15	K33
      0x9036240F,  //  0073  SETMBR	R13	K18	R15
      0x4C3C0000,  //  0074  LDNIL	R15
      0x203C1C0F,  //  0075  NE	R15	R14	R15
      0x783E0005,  //  0076  JMPF	R15	#007D
      0x8C3C1D22,  //  0077  GETMET	R15	R14	K34
      0x88440323,  //  0078  GETMBR	R17	R1	K35
      0x5C481A00,  //  0079  MOVE	R18	R13
      0x5C4C1600,  //  007A  MOVE	R19	R11
      0x7C3C0800,  //  007B  CALL	R15	4
      0x70020000,  //  007C  JMP		#007E
      0x4C3C0000,  //  007D  LDNIL	R15
      0x783E0002,  //  007E  JMPF	R15	#0082
      0xB8420000,  //  007F  GETNGBL	R16	K0
      0x88402124,  //  0080  GETMBR	R16	R16	K36
      0x90362410,  //  0081  SETMBR	R13	K18	R16
      0x8C400114,  //  0082  GETMET	R16	R0	K20
      0x5C480C00,  //  0083  MOVE	R18	R6
      0x5C4C1A00,  //  0084  MOVE	R19	R13
      0x5C501600,  //  0085  MOVE	R20	R11
      0x7C400800,  //  0086  CALL	R16	4
      0x7001FFD5,  //  0087  JMP		#005E
      0x7001FF99,  //  0088  JMP		#0023
      0x58200025,  //  0089  LDCONST	R8	K37
      0xAC200200,  //  008A  CATCH	R8	1	0
      0xB0080000,  //  008B  RAISE	2	R0	R0
      0x5C200A00,  //  008C  MOVE	R8	R5
      0x74220007,  //  008D  JMPT	R8	#0096
      0x88200126,  //  008E  GETMBR	R8	R0	K38
      0x8C201127,  //  008F  GETMET	R8	R8	K39
      0xB82A0000,  //  0090  GETNGBL	R10	K0
      0x8C281528,  //  0091  GETMET	R10	R10	K40
      0x5C300200,  //  0092  MOVE	R12	R1
      0x5C340C00,  //  0093  MOVE	R13	R6
      0x7C280600,  //  0094  CALL	R10	3
      0x7C200400,  //  0095  CALL	R8	2
      0x50180200,  //  0096  LDBOOL	R6	1	0
      0x80040C00,  //  0097  RET	1	R6
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
      0x8C140329,  //  0000  GETMET	R5	R1	K41
      0x541E0036,  //  0001  LDINT	R7	55
      0x5820002A,  //  0002  LDCONST	R8	K42
      0x7C140600,  //  0003  CALL	R5	3
      0x8C140329,  //  0004  GETMET	R5	R1	K41
      0x5C1C0600,  //  0005  MOVE	R7	R3
      0x5820002A,  //  0006  LDCONST	R8	K42
      0x7C140600,  //  0007  CALL	R5	3
      0x88140515,  //  0008  GETMBR	R5	R2	K21
      0x541A00FE,  //  0009  LDINT	R6	255
      0x18140A06,  //  000A  LE	R5	R5	R6
      0x78160008,  //  000B  JMPF	R5	#0015
      0x8C140329,  //  000C  GETMET	R5	R1	K41
      0x541E2401,  //  000D  LDINT	R7	9218
      0x5421FFFD,  //  000E  LDINT	R8	-2
      0x7C140600,  //  000F  CALL	R5	3
      0x8C140329,  //  0010  GETMET	R5	R1	K41
      0x881C0515,  //  0011  GETMBR	R7	R2	K21
      0x5820002A,  //  0012  LDCONST	R8	K42
      0x7C140600,  //  0013  CALL	R5	3
      0x70020007,  //  0014  JMP		#001D
      0x8C140329,  //  0015  GETMET	R5	R1	K41
      0x541E2501,  //  0016  LDINT	R7	9474
      0x5421FFFD,  //  0017  LDINT	R8	-2
      0x7C140600,  //  0018  CALL	R5	3
      0x8C140329,  //  0019  GETMET	R5	R1	K41
      0x881C0515,  //  001A  GETMBR	R7	R2	K21
      0x5820002B,  //  001B  LDCONST	R8	K43
      0x7C140600,  //  001C  CALL	R5	3
      0x88140510,  //  001D  GETMBR	R5	R2	K16
      0x541A00FE,  //  001E  LDINT	R6	255
      0x18140A06,  //  001F  LE	R5	R5	R6
      0x78160008,  //  0020  JMPF	R5	#002A
      0x8C140329,  //  0021  GETMET	R5	R1	K41
      0x541E2402,  //  0022  LDINT	R7	9219
      0x5421FFFD,  //  0023  LDINT	R8	-2
      0x7C140600,  //  0024  CALL	R5	3
      0x8C140329,  //  0025  GETMET	R5	R1	K41
      0x881C0510,  //  0026  GETMBR	R7	R2	K16
      0x5820002A,  //  0027  LDCONST	R8	K42
      0x7C140600,  //  0028  CALL	R5	3
      0x70020014,  //  0029  JMP		#003F
      0x88140510,  //  002A  GETMBR	R5	R2	K16
      0x541AFFFE,  //  002B  LDINT	R6	65535
      0x18140A06,  //  002C  LE	R5	R5	R6
      0x78160008,  //  002D  JMPF	R5	#0037
      0x8C140329,  //  002E  GETMET	R5	R1	K41
      0x541E2502,  //  002F  LDINT	R7	9475
      0x5421FFFD,  //  0030  LDINT	R8	-2
      0x7C140600,  //  0031  CALL	R5	3
      0x8C140329,  //  0032  GETMET	R5	R1	K41
      0x881C0510,  //  0033  GETMBR	R7	R2	K16
      0x5820002B,  //  0034  LDCONST	R8	K43
      0x7C140600,  //  0035  CALL	R5	3
      0x70020007,  //  0036  JMP		#003F
      0x8C140329,  //  0037  GETMET	R5	R1	K41
      0x541E2602,  //  0038  LDINT	R7	9731
      0x5421FFFD,  //  0039  LDINT	R8	-2
      0x7C140600,  //  003A  CALL	R5	3
      0x8C140329,  //  003B  GETMET	R5	R1	K41
      0x881C0510,  //  003C  GETMBR	R7	R2	K16
      0x54220003,  //  003D  LDINT	R8	4
      0x7C140600,  //  003E  CALL	R5	3
      0x88140511,  //  003F  GETMBR	R5	R2	K17
      0x541A00FE,  //  0040  LDINT	R6	255
      0x18140A06,  //  0041  LE	R5	R5	R6
      0x78160008,  //  0042  JMPF	R5	#004C
      0x8C140329,  //  0043  GETMET	R5	R1	K41
      0x541E2403,  //  0044  LDINT	R7	9220
      0x5421FFFD,  //  0045  LDINT	R8	-2
      0x7C140600,  //  0046  CALL	R5	3
      0x8C140329,  //  0047  GETMET	R5	R1	K41
      0x881C0511,  //  0048  GETMBR	R7	R2	K17
      0x5820002A,  //  0049  LDCONST	R8	K42
      0x7C140600,  //  004A  CALL	R5	3
      0x70020014,  //  004B  JMP		#0061
      0x88140511,  //  004C  GETMBR	R5	R2	K17
      0x541AFFFE,  //  004D  LDINT	R6	65535
      0x18140A06,  //  004E  LE	R5	R5	R6
      0x78160008,  //  004F  JMPF	R5	#0059
      0x8C140329,  //  0050  GETMET	R5	R1	K41
      0x541E2503,  //  0051  LDINT	R7	9476
      0x5421FFFD,  //  0052  LDINT	R8	-2
      0x7C140600,  //  0053  CALL	R5	3
      0x8C140329,  //  0054  GETMET	R5	R1	K41
      0x881C0511,  //  0055  GETMBR	R7	R2	K17
      0x5820002B,  //  0056  LDCONST	R8	K43
      0x7C140600,  //  0057  CALL	R5	3
      0x70020007,  //  0058  JMP		#0061
      0x8C140329,  //  0059  GETMET	R5	R1	K41
      0x541E2603,  //  005A  LDINT	R7	9732
      0x5421FFFD,  //  005B  LDINT	R8	-2
      0x7C140600,  //  005C  CALL	R5	3
      0x8C140329,  //  005D  GETMET	R5	R1	K41
      0x881C0511,  //  005E  GETMBR	R7	R2	K17
      0x54220003,  //  005F  LDINT	R8	4
      0x7C140600,  //  0060  CALL	R5	3
      0x78120003,  //  0061  JMPF	R4	#0066
      0x8C140329,  //  0062  GETMET	R5	R1	K41
      0x541E3404,  //  0063  LDINT	R7	13317
      0x5421FFFD,  //  0064  LDINT	R8	-2
      0x7C140600,  //  0065  CALL	R5	3
      0x8C140329,  //  0066  GETMET	R5	R1	K41
      0x541E0017,  //  0067  LDINT	R7	24
      0x5820002A,  //  0068  LDCONST	R8	K42
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
      0x8C140329,  //  0000  GETMET	R5	R1	K41
      0x581C002C,  //  0001  LDCONST	R7	K44
      0x5421FFFB,  //  0002  LDINT	R8	-4
      0x7C140600,  //  0003  CALL	R5	3
      0x8C140329,  //  0004  GETMET	R5	R1	K41
      0x581C002A,  //  0005  LDCONST	R7	K42
      0x5421FFFD,  //  0006  LDINT	R8	-2
      0x7C140600,  //  0007  CALL	R5	3
      0x8C14012D,  //  0008  GETMET	R5	R0	K45
      0x5C1C0200,  //  0009  MOVE	R7	R1
      0x5C200400,  //  000A  MOVE	R8	R2
      0x5824002A,  //  000B  LDCONST	R9	K42
      0x5C280800,  //  000C  MOVE	R10	R4
      0x7C140A00,  //  000D  CALL	R5	5
      0x900E5D2B,  //  000E  SETMBR	R3	K46	K43
      0x8C14072F,  //  000F  GETMET	R5	R3	K47
      0x5C1C0200,  //  0010  MOVE	R7	R1
      0x7C140400,  //  0011  CALL	R5	2
      0x8C140329,  //  0012  GETMET	R5	R1	K41
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
    ( &(const binstruction[64]) {  /* code */
      0x88080323,  //  0000  GETMBR	R2	R1	K35
      0xB80E0000,  //  0001  GETNGBL	R3	K0
      0x8C0C0730,  //  0002  GETMET	R3	R3	K48
      0x7C0C0200,  //  0003  CALL	R3	1
      0x50100000,  //  0004  LDBOOL	R4	0	0
      0x900E6204,  //  0005  SETMBR	R3	K49	R4
      0x60100012,  //  0006  GETGBL	R4	G18
      0x7C100000,  //  0007  CALL	R4	0
      0x900E6404,  //  0008  SETMBR	R3	K50	R4
      0x60100010,  //  0009  GETGBL	R4	G16
      0x88140333,  //  000A  GETMBR	R5	R1	K51
      0x7C100200,  //  000B  CALL	R4	1
      0xA802000F,  //  000C  EXBLK	0	#001D
      0x5C140800,  //  000D  MOVE	R5	R4
      0x7C140000,  //  000E  CALL	R5	0
      0xB81A0000,  //  000F  GETNGBL	R6	K0
      0x8C180D34,  //  0010  GETMET	R6	R6	K52
      0x7C180200,  //  0011  CALL	R6	1
      0x881C0B15,  //  0012  GETMBR	R7	R5	K21
      0x901A2A07,  //  0013  SETMBR	R6	K21	R7
      0x881C0B10,  //  0014  GETMBR	R7	R5	K16
      0x901A2007,  //  0015  SETMBR	R6	K16	R7
      0x881C0B11,  //  0016  GETMBR	R7	R5	K17
      0x901A2207,  //  0017  SETMBR	R6	K17	R7
      0x881C0732,  //  0018  GETMBR	R7	R3	K50
      0x8C1C0F27,  //  0019  GETMET	R7	R7	K39
      0x5C240C00,  //  001A  MOVE	R9	R6
      0x7C1C0400,  //  001B  CALL	R7	2
      0x7001FFEF,  //  001C  JMP		#000D
      0x58100025,  //  001D  LDCONST	R4	K37
      0xAC100200,  //  001E  CATCH	R4	1	0
      0xB0080000,  //  001F  RAISE	2	R0	R0
      0xB8120600,  //  0020  GETNGBL	R4	K3
      0x8C100904,  //  0021  GETMET	R4	R4	K4
      0x60180018,  //  0022  GETGBL	R6	G24
      0x581C0035,  //  0023  LDCONST	R7	K53
      0x88200536,  //  0024  GETMBR	R8	R2	K54
      0x88240337,  //  0025  GETMBR	R9	R1	K55
      0x7C180600,  //  0026  CALL	R6	3
      0x7C100400,  //  0027  CALL	R4	2
      0x50100000,  //  0028  LDBOOL	R4	0	0
      0x90067004,  //  0029  SETMBR	R1	K56	R4
      0x8C100139,  //  002A  GETMET	R4	R0	K57
      0x5C180600,  //  002B  MOVE	R6	R3
      0x4C1C0000,  //  002C  LDNIL	R7
      0x7C100600,  //  002D  CALL	R4	3
      0x8C14033A,  //  002E  GETMET	R5	R1	K58
      0x7C140200,  //  002F  CALL	R5	1
      0xB81A0000,  //  0030  GETNGBL	R6	K0
      0x8C180D3B,  //  0031  GETMET	R6	R6	K59
      0x8820053C,  //  0032  GETMBR	R8	R2	K60
      0x5C240400,  //  0033  MOVE	R9	R2
      0x5C280800,  //  0034  MOVE	R10	R4
      0x5C2C0A00,  //  0035  MOVE	R11	R5
      0x5C300200,  //  0036  MOVE	R12	R1
      0x7C180C00,  //  0037  CALL	R6	6
      0x881C0126,  //  0038  GETMBR	R7	R0	K38
      0x8C1C0F27,  //  0039  GETMET	R7	R7	K39
      0x5C240C00,  //  003A  MOVE	R9	R6
      0x7C1C0400,  //  003B  CALL	R7	2
      0x8C1C013D,  //  003C  GETMET	R7	R0	K61
      0x8824053C,  //  003D  GETMBR	R9	R2	K60
      0x7C1C0400,  //  003E  CALL	R7	2
      0x80000000,  //  003F  RET	0
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
      0x8C0C0730,  //  0001  GETMET	R3	R3	K48
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x8C100139,  //  0006  GETMET	R4	R0	K57
      0x5C180600,  //  0007  MOVE	R6	R3
      0x5C1C0200,  //  0008  MOVE	R7	R1
      0x7C100600,  //  0009  CALL	R4	3
      0x8C14013E,  //  000A  GETMET	R5	R0	K62
      0x5C1C0600,  //  000B  MOVE	R7	R3
      0x5C200200,  //  000C  MOVE	R8	R1
      0x7C140600,  //  000D  CALL	R5	3
      0x88180126,  //  000E  GETMBR	R6	R0	K38
      0x8C180D27,  //  000F  GETMET	R6	R6	K39
      0xB8220000,  //  0010  GETNGBL	R8	K0
      0x8C20113F,  //  0011  GETMET	R8	R8	K63
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
      0x880C0332,  //  0000  GETMBR	R3	R1	K50
      0x4C100000,  //  0001  LDNIL	R4
      0x200C0604,  //  0002  NE	R3	R3	R4
      0x780E0054,  //  0003  JMPF	R3	#0059
      0x4C0C0000,  //  0004  LDNIL	R3
      0x88100332,  //  0005  GETMBR	R4	R1	K50
      0x78120003,  //  0006  JMPF	R4	#000B
      0x6010000C,  //  0007  GETGBL	R4	G12
      0x88140332,  //  0008  GETMBR	R5	R1	K50
      0x7C100200,  //  0009  CALL	R4	1
      0x70020000,  //  000A  JMP		#000C
      0x58100040,  //  000B  LDCONST	R4	K64
      0x2414092A,  //  000C  GT	R5	R4	K42
      0x78160002,  //  000D  JMPF	R5	#0011
      0x60140012,  //  000E  GETGBL	R5	G18
      0x7C140000,  //  000F  CALL	R5	0
      0x5C0C0A00,  //  0010  MOVE	R3	R5
      0x60140010,  //  0011  GETGBL	R5	G16
      0x88180332,  //  0012  GETMBR	R6	R1	K50
      0x7C140200,  //  0013  CALL	R5	1
      0xA802003F,  //  0014  EXBLK	0	#0055
      0x5C180A00,  //  0015  MOVE	R6	R5
      0x7C180000,  //  0016  CALL	R6	0
      0xB81E0000,  //  0017  GETNGBL	R7	K0
      0x8C1C0F0B,  //  0018  GETMET	R7	R7	K11
      0x8824010C,  //  0019  GETMBR	R9	R0	K12
      0x7C1C0400,  //  001A  CALL	R7	2
      0x8C200F1C,  //  001B  GETMET	R8	R7	K28
      0x88280D15,  //  001C  GETMBR	R10	R6	K21
      0x882C0D10,  //  001D  GETMBR	R11	R6	K16
      0x88300D11,  //  001E  GETMBR	R12	R6	K17
      0x88340331,  //  001F  GETMBR	R13	R1	K49
      0x7C200A00,  //  0020  CALL	R8	5
      0x2420092A,  //  0021  GT	R8	R4	K42
      0x78220003,  //  0022  JMPF	R8	#0027
      0x8C200727,  //  0023  GETMET	R8	R3	K39
      0x5C280E00,  //  0024  MOVE	R10	R7
      0x7C200400,  //  0025  CALL	R8	2
      0x70020000,  //  0026  JMP		#0028
      0x5C0C0E00,  //  0027  MOVE	R3	R7
      0xB8220600,  //  0028  GETNGBL	R8	K3
      0x8C201116,  //  0029  GETMET	R8	R8	K22
      0x542A0003,  //  002A  LDINT	R10	4
      0x7C200400,  //  002B  CALL	R8	2
      0x78220026,  //  002C  JMPF	R8	#0054
      0x88200D15,  //  002D  GETMBR	R8	R6	K21
      0x4C240000,  //  002E  LDNIL	R9
      0x1C201009,  //  002F  EQ	R8	R8	R9
      0x74220007,  //  0030  JMPT	R8	#0039
      0x88200D10,  //  0031  GETMBR	R8	R6	K16
      0x4C240000,  //  0032  LDNIL	R9
      0x1C201009,  //  0033  EQ	R8	R8	R9
      0x74220003,  //  0034  JMPT	R8	#0039
      0x88200D11,  //  0035  GETMBR	R8	R6	K17
      0x4C240000,  //  0036  LDNIL	R9
      0x1C201009,  //  0037  EQ	R8	R8	R9
      0x7822001A,  //  0038  JMPF	R8	#0054
      0xB8220000,  //  0039  GETNGBL	R8	K0
      0x8C201106,  //  003A  GETMET	R8	R8	K6
      0x7C200200,  //  003B  CALL	R8	1
      0x88240D15,  //  003C  GETMBR	R9	R6	K21
      0x90222A09,  //  003D  SETMBR	R8	K21	R9
      0x88240D10,  //  003E  GETMBR	R9	R6	K16
      0x90222009,  //  003F  SETMBR	R8	K16	R9
      0x88240D11,  //  0040  GETMBR	R9	R6	K17
      0x90222209,  //  0041  SETMBR	R8	K17	R9
      0x88240331,  //  0042  GETMBR	R9	R1	K49
      0x90226209,  //  0043  SETMBR	R8	K49	R9
      0x60240008,  //  0044  GETGBL	R9	G8
      0x5C281000,  //  0045  MOVE	R10	R8
      0x7C240200,  //  0046  CALL	R9	1
      0x88280D10,  //  0047  GETMBR	R10	R6	K16
      0x4C2C0000,  //  0048  LDNIL	R11
      0x2028140B,  //  0049  NE	R10	R10	R11
      0x782A0008,  //  004A  JMPF	R10	#0054
      0x88280D11,  //  004B  GETMBR	R10	R6	K17
      0x4C2C0000,  //  004C  LDNIL	R11
      0x2028140B,  //  004D  NE	R10	R10	R11
      0x782A0004,  //  004E  JMPF	R10	#0054
      0xB82A0000,  //  004F  GETNGBL	R10	K0
      0x8C281517,  //  0050  GETMET	R10	R10	K23
      0x88300D10,  //  0051  GETMBR	R12	R6	K16
      0x88340D11,  //  0052  GETMBR	R13	R6	K17
      0x7C280600,  //  0053  CALL	R10	3
      0x7001FFBF,  //  0054  JMP		#0015
      0x58140025,  //  0055  LDCONST	R5	K37
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
    ( &(const binstruction[29]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0741,  //  0001  GETMET	R3	R3	K65
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0xB8120600,  //  0006  GETNGBL	R4	K3
      0x8C100904,  //  0007  GETMET	R4	R4	K4
      0x60180008,  //  0008  GETGBL	R6	G8
      0x5C1C0600,  //  0009  MOVE	R7	R3
      0x7C180200,  //  000A  CALL	R6	1
      0x001A8406,  //  000B  ADD	R6	K66	R6
      0x7C100400,  //  000C  CALL	R4	2
      0xB8120600,  //  000D  GETNGBL	R4	K3
      0x8C100904,  //  000E  GETMET	R4	R4	K4
      0x60180018,  //  000F  GETGBL	R6	G24
      0x581C0043,  //  0010  LDCONST	R7	K67
      0x88200323,  //  0011  GETMBR	R8	R1	K35
      0x88201136,  //  0012  GETMBR	R8	R8	K54
      0x88240744,  //  0013  GETMBR	R9	R3	K68
      0x7C180600,  //  0014  CALL	R6	3
      0x7C100400,  //  0015  CALL	R4	2
      0x8C100145,  //  0016  GETMET	R4	R0	K69
      0x5C180200,  //  0017  MOVE	R6	R1
      0xB81E0000,  //  0018  GETNGBL	R7	K0
      0x881C0F24,  //  0019  GETMBR	R7	R7	K36
      0x7C100600,  //  001A  CALL	R4	3
      0x50100200,  //  001B  LDBOOL	R4	1	0
      0x80040800,  //  001C  RET	1	R4
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
      0x88040146,  //  0000  GETMBR	R1	R0	K70
      0x8C040347,  //  0001  GETMET	R1	R1	K71
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
    ( &(const binstruction[231]) {  /* code */
      0xB80E0600,  //  0000  GETNGBL	R3	K3
      0x8C0C0704,  //  0001  GETMET	R3	R3	K4
      0x58140048,  //  0002  LDCONST	R5	K72
      0x7C0C0400,  //  0003  CALL	R3	2
      0xB80E0600,  //  0004  GETNGBL	R3	K3
      0x8C0C0704,  //  0005  GETMET	R3	R3	K4
      0x58140049,  //  0006  LDCONST	R5	K73
      0x541A0003,  //  0007  LDINT	R6	4
      0x7C0C0600,  //  0008  CALL	R3	3
      0xB80E0000,  //  0009  GETNGBL	R3	K0
      0x8C0C0706,  //  000A  GETMET	R3	R3	K6
      0x7C0C0200,  //  000B  CALL	R3	1
      0x900E3E01,  //  000C  SETMBR	R3	K31	R1
      0xB8120000,  //  000D  GETNGBL	R4	K0
      0x8C10094A,  //  000E  GETMET	R4	R4	K74
      0x7C100200,  //  000F  CALL	R4	1
      0x8C100902,  //  0010  GETMET	R4	R4	K2
      0x5C180400,  //  0011  MOVE	R6	R2
      0x7C100400,  //  0012  CALL	R4	2
      0x8814094B,  //  0013  GETMBR	R5	R4	K75
      0x4C180000,  //  0014  LDNIL	R6
      0x20140A06,  //  0015  NE	R5	R5	R6
      0x781600CE,  //  0016  JMPF	R5	#00E6
      0xB8160000,  //  0017  GETNGBL	R5	K0
      0x8C140B4C,  //  0018  GETMET	R5	R5	K76
      0x7C140200,  //  0019  CALL	R5	1
      0x50180000,  //  001A  LDBOOL	R6	0	0
      0x90160E06,  //  001B  SETMBR	R5	K7	R6
      0x60180012,  //  001C  GETGBL	R6	G18
      0x7C180000,  //  001D  CALL	R6	0
      0x90169A06,  //  001E  SETMBR	R5	K77	R6
      0x60180010,  //  001F  GETGBL	R6	G16
      0x881C094B,  //  0020  GETMBR	R7	R4	K75
      0x7C180200,  //  0021  CALL	R6	1
      0xA80200AD,  //  0022  EXBLK	0	#00D1
      0x5C1C0C00,  //  0023  MOVE	R7	R6
      0x7C1C0000,  //  0024  CALL	R7	0
      0x88200F4E,  //  0025  GETMBR	R8	R7	K78
      0x88201115,  //  0026  GETMBR	R8	R8	K21
      0x900E2A08,  //  0027  SETMBR	R3	K21	R8
      0x88200F4E,  //  0028  GETMBR	R8	R7	K78
      0x88201110,  //  0029  GETMBR	R8	R8	K16
      0x900E2008,  //  002A  SETMBR	R3	K16	R8
      0x88200F4E,  //  002B  GETMBR	R8	R7	K78
      0x8820114F,  //  002C  GETMBR	R8	R8	K79
      0x900E9E08,  //  002D  SETMBR	R3	K79	R8
      0xB8220000,  //  002E  GETNGBL	R8	K0
      0x88201150,  //  002F  GETMBR	R8	R8	K80
      0x900E2408,  //  0030  SETMBR	R3	K18	R8
      0xB8220000,  //  0031  GETNGBL	R8	K0
      0x8C201151,  //  0032  GETMET	R8	R8	K81
      0x88280710,  //  0033  GETMBR	R10	R3	K16
      0x882C074F,  //  0034  GETMBR	R11	R3	K79
      0x7C200600,  //  0035  CALL	R8	3
      0x60240008,  //  0036  GETGBL	R9	G8
      0x5C280600,  //  0037  MOVE	R10	R3
      0x7C240200,  //  0038  CALL	R9	1
      0x8828010C,  //  0039  GETMBR	R10	R0	K12
      0x8C281552,  //  003A  GETMET	R10	R10	K82
      0x88300323,  //  003B  GETMBR	R12	R1	K35
      0x88340F53,  //  003C  GETMBR	R13	R7	K83
      0x5C380600,  //  003D  MOVE	R14	R3
      0x7C280800,  //  003E  CALL	R10	4
      0x882C0704,  //  003F  GETMBR	R11	R3	K4
      0x4C300000,  //  0040  LDNIL	R12
      0x202C160C,  //  0041  NE	R11	R11	R12
      0x782E0005,  //  0042  JMPF	R11	#0049
      0x602C0008,  //  0043  GETGBL	R11	G8
      0x88300704,  //  0044  GETMBR	R12	R3	K4
      0x7C2C0200,  //  0045  CALL	R11	1
      0x002EA80B,  //  0046  ADD	R11	K84	R11
      0x002C1755,  //  0047  ADD	R11	R11	K85
      0x70020000,  //  0048  JMP		#004A
      0x582C001B,  //  0049  LDCONST	R11	K27
      0xB8320600,  //  004A  GETNGBL	R12	K3
      0x8C301904,  //  004B  GETMET	R12	R12	K4
      0x60380018,  //  004C  GETGBL	R14	G24
      0x583C0056,  //  004D  LDCONST	R15	K86
      0x88400323,  //  004E  GETMBR	R16	R1	K35
      0x88402136,  //  004F  GETMBR	R16	R16	K54
      0x5C441200,  //  0050  MOVE	R17	R9
      0x78220001,  //  0051  JMPF	R8	#0054
      0x5C481000,  //  0052  MOVE	R18	R8
      0x70020000,  //  0053  JMP		#0055
      0x5848001B,  //  0054  LDCONST	R18	K27
      0x5C4C1600,  //  0055  MOVE	R19	R11
      0x7C380A00,  //  0056  CALL	R14	5
      0x7C300400,  //  0057  CALL	R12	2
      0x4C300000,  //  0058  LDNIL	R12
      0x900E080C,  //  0059  SETMBR	R3	K4	R12
      0x60300015,  //  005A  GETGBL	R12	G21
      0x5436001F,  //  005B  LDINT	R13	32
      0x7C300200,  //  005C  CALL	R12	1
      0x50340200,  //  005D  LDBOOL	R13	1	0
      0x1C34140D,  //  005E  EQ	R13	R10	R13
      0x74360004,  //  005F  JMPT	R13	#0065
      0x88340712,  //  0060  GETMBR	R13	R3	K18
      0xB83A0000,  //  0061  GETNGBL	R14	K0
      0x88381D24,  //  0062  GETMBR	R14	R14	K36
      0x1C341A0E,  //  0063  EQ	R13	R13	R14
      0x7836001A,  //  0064  JMPF	R13	#0080
      0xB8360000,  //  0065  GETNGBL	R13	K0
      0x88341B24,  //  0066  GETMBR	R13	R13	K36
      0x900E240D,  //  0067  SETMBR	R3	K18	R13
      0x8C340157,  //  0068  GETMET	R13	R0	K87
      0x5C3C1800,  //  0069  MOVE	R15	R12
      0x5C400600,  //  006A  MOVE	R16	R3
      0x4C440000,  //  006B  LDNIL	R17
      0x7C340800,  //  006C  CALL	R13	4
      0x88340B4D,  //  006D  GETMBR	R13	R5	K77
      0x8C341B27,  //  006E  GETMET	R13	R13	K39
      0x5C3C1800,  //  006F  MOVE	R15	R12
      0x7C340400,  //  0070  CALL	R13	2
      0xB8360600,  //  0071  GETNGBL	R13	K3
      0x8C341B16,  //  0072  GETMET	R13	R13	K22
      0x543E0003,  //  0073  LDINT	R15	4
      0x7C340400,  //  0074  CALL	R13	2
      0x78360008,  //  0075  JMPF	R13	#007F
      0xB8360600,  //  0076  GETNGBL	R13	K3
      0x8C341B04,  //  0077  GETMET	R13	R13	K4
      0x603C0018,  //  0078  GETGBL	R15	G24
      0x58400058,  //  0079  LDCONST	R16	K88
      0x88440323,  //  007A  GETMBR	R17	R1	K35
      0x88442336,  //  007B  GETMBR	R17	R17	K54
      0x88480359,  //  007C  GETMBR	R18	R1	K89
      0x7C3C0600,  //  007D  CALL	R15	3
      0x7C340400,  //  007E  CALL	R13	2
      0x7002004F,  //  007F  JMP		#00D0
      0x4C340000,  //  0080  LDNIL	R13
      0x2034140D,  //  0081  NE	R13	R10	R13
      0x78360021,  //  0082  JMPF	R13	#00A5
      0x8C340157,  //  0083  GETMET	R13	R0	K87
      0x5C3C1800,  //  0084  MOVE	R15	R12
      0x5C400600,  //  0085  MOVE	R16	R3
      0x5C441400,  //  0086  MOVE	R17	R10
      0x7C340800,  //  0087  CALL	R13	4
      0x88340B4D,  //  0088  GETMBR	R13	R5	K77
      0x8C341B27,  //  0089  GETMET	R13	R13	K39
      0x5C3C1800,  //  008A  MOVE	R15	R12
      0x7C340400,  //  008B  CALL	R13	2
      0xB8360000,  //  008C  GETNGBL	R13	K0
      0x8C341B51,  //  008D  GETMET	R13	R13	K81
      0x883C0710,  //  008E  GETMBR	R15	R3	K16
      0x8840074F,  //  008F  GETMBR	R16	R3	K79
      0x7C340600,  //  0090  CALL	R13	3
      0x5C201A00,  //  0091  MOVE	R8	R13
      0x5C341000,  //  0092  MOVE	R13	R8
      0x74360000,  //  0093  JMPT	R13	#0095
      0x5820001B,  //  0094  LDCONST	R8	K27
      0xB8360600,  //  0095  GETNGBL	R13	K3
      0x8C341B16,  //  0096  GETMET	R13	R13	K22
      0x543E0003,  //  0097  LDINT	R15	4
      0x7C340400,  //  0098  CALL	R13	2
      0x78360009,  //  0099  JMPF	R13	#00A4
      0xB8360600,  //  009A  GETNGBL	R13	K3
      0x8C341B04,  //  009B  GETMET	R13	R13	K4
      0x603C0018,  //  009C  GETGBL	R15	G24
      0x5840005A,  //  009D  LDCONST	R16	K90
      0x88440323,  //  009E  GETMBR	R17	R1	K35
      0x88442336,  //  009F  GETMBR	R17	R17	K54
      0x5C480600,  //  00A0  MOVE	R18	R3
      0x5C4C1000,  //  00A1  MOVE	R19	R8
      0x7C3C0800,  //  00A2  CALL	R15	4
      0x7C340400,  //  00A3  CALL	R13	2
      0x7002002A,  //  00A4  JMP		#00D0
      0x88340712,  //  00A5  GETMBR	R13	R3	K18
      0x4C380000,  //  00A6  LDNIL	R14
      0x20341A0E,  //  00A7  NE	R13	R13	R14
      0x78360018,  //  00A8  JMPF	R13	#00C2
      0x8C340157,  //  00A9  GETMET	R13	R0	K87
      0x5C3C1800,  //  00AA  MOVE	R15	R12
      0x5C400600,  //  00AB  MOVE	R16	R3
      0x4C440000,  //  00AC  LDNIL	R17
      0x7C340800,  //  00AD  CALL	R13	4
      0x88340B4D,  //  00AE  GETMBR	R13	R5	K77
      0x8C341B27,  //  00AF  GETMET	R13	R13	K39
      0x5C3C1800,  //  00B0  MOVE	R15	R12
      0x7C340400,  //  00B1  CALL	R13	2
      0xB8360600,  //  00B2  GETNGBL	R13	K3
      0x8C341B16,  //  00B3  GETMET	R13	R13	K22
      0x543E0003,  //  00B4  LDINT	R15	4
      0x7C340400,  //  00B5  CALL	R13	2
      0x78360009,  //  00B6  JMPF	R13	#00C1
      0xB8360600,  //  00B7  GETNGBL	R13	K3
      0x8C341B04,  //  00B8  GETMET	R13	R13	K4
      0x603C0018,  //  00B9  GETGBL	R15	G24
      0x5840005B,  //  00BA  LDCONST	R16	K91
      0x88440323,  //  00BB  GETMBR	R17	R1	K35
      0x88442336,  //  00BC  GETMBR	R17	R17	K54
      0x88480712,  //  00BD  GETMBR	R18	R3	K18
      0x884C0359,  //  00BE  GETMBR	R19	R1	K89
      0x7C3C0800,  //  00BF  CALL	R15	4
      0x7C340400,  //  00C0  CALL	R13	2
      0x7002000D,  //  00C1  JMP		#00D0
      0xB8360600,  //  00C2  GETNGBL	R13	K3
      0x8C341B16,  //  00C3  GETMET	R13	R13	K22
      0x543E0003,  //  00C4  LDINT	R15	4
      0x7C340400,  //  00C5  CALL	R13	2
      0x78360008,  //  00C6  JMPF	R13	#00D0
      0xB8360600,  //  00C7  GETNGBL	R13	K3
      0x8C341B04,  //  00C8  GETMET	R13	R13	K4
      0x603C0018,  //  00C9  GETGBL	R15	G24
      0x5840005C,  //  00CA  LDCONST	R16	K92
      0x88440323,  //  00CB  GETMBR	R17	R1	K35
      0x88442336,  //  00CC  GETMBR	R17	R17	K54
      0x88480359,  //  00CD  GETMBR	R18	R1	K89
      0x7C3C0600,  //  00CE  CALL	R15	3
      0x7C340400,  //  00CF  CALL	R13	2
      0x7001FF51,  //  00D0  JMP		#0023
      0x58180025,  //  00D1  LDCONST	R6	K37
      0xAC180200,  //  00D2  CATCH	R6	1	0
      0xB0080000,  //  00D3  RAISE	2	R0	R0
      0x6018000C,  //  00D4  GETGBL	R6	G12
      0x881C0B4D,  //  00D5  GETMBR	R7	R5	K77
      0x7C180200,  //  00D6  CALL	R6	1
      0x24180D40,  //  00D7  GT	R6	R6	K64
      0x781A0008,  //  00D8  JMPF	R6	#00E2
      0x88180126,  //  00D9  GETMBR	R6	R0	K38
      0x8C180D27,  //  00DA  GETMET	R6	R6	K39
      0xB8220000,  //  00DB  GETNGBL	R8	K0
      0x8C20115D,  //  00DC  GETMET	R8	R8	K93
      0x5C280200,  //  00DD  MOVE	R10	R1
      0x5C2C0A00,  //  00DE  MOVE	R11	R5
      0x7C200600,  //  00DF  CALL	R8	3
      0x7C180400,  //  00E0  CALL	R6	2
      0x70020001,  //  00E1  JMP		#00E4
      0x50180000,  //  00E2  LDBOOL	R6	0	0
      0x80040C00,  //  00E3  RET	1	R6
      0x50180200,  //  00E4  LDBOOL	R6	1	0
      0x80040C00,  //  00E5  RET	1	R6
      0x80000000,  //  00E6  RET	0
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
    ( &(const binstruction[147]) {  /* code */
      0x880C035E,  //  0000  GETMBR	R3	R1	K94
      0x4C100000,  //  0001  LDNIL	R4
      0x200C0604,  //  0002  NE	R3	R3	R4
      0x780E008C,  //  0003  JMPF	R3	#0091
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
      0x58140040,  //  0012  LDCONST	R5	K64
      0xB81A0600,  //  0013  GETNGBL	R6	K3
      0x8C180D04,  //  0014  GETMET	R6	R6	K4
      0x60200018,  //  0015  GETGBL	R8	G24
      0x58240060,  //  0016  LDCONST	R9	K96
      0x5C280A00,  //  0017  MOVE	R10	R5
      0x7C200400,  //  0018  CALL	R8	2
      0x7C180400,  //  0019  CALL	R6	2
      0x24180B2A,  //  001A  GT	R6	R5	K42
      0x781A0002,  //  001B  JMPF	R6	#001F
      0x60180012,  //  001C  GETGBL	R6	G18
      0x7C180000,  //  001D  CALL	R6	0
      0x5C0C0C00,  //  001E  MOVE	R3	R6
      0x8C180161,  //  001F  GETMET	R6	R0	K97
      0x88200362,  //  0020  GETMBR	R8	R1	K98
      0x5C240800,  //  0021  MOVE	R9	R4
      0x7C180600,  //  0022  CALL	R6	3
      0x881C035E,  //  0023  GETMBR	R7	R1	K94
      0x781E006A,  //  0024  JMPF	R7	#0090
      0x601C0010,  //  0025  GETGBL	R7	G16
      0x8820035E,  //  0026  GETMBR	R8	R1	K94
      0x7C1C0200,  //  0027  CALL	R7	1
      0xA8020063,  //  0028  EXBLK	0	#008D
      0x5C200E00,  //  0029  MOVE	R8	R7
      0x7C200000,  //  002A  CALL	R8	0
      0xB8260000,  //  002B  GETNGBL	R9	K0
      0x8C241363,  //  002C  GETMET	R9	R9	K99
      0x882C010C,  //  002D  GETMBR	R11	R0	K12
      0x7C240400,  //  002E  CALL	R9	2
      0x8C28131C,  //  002F  GETMET	R10	R9	K28
      0x88301115,  //  0030  GETMBR	R12	R8	K21
      0x88341110,  //  0031  GETMBR	R13	R8	K16
      0x88381164,  //  0032  GETMBR	R14	R8	K100
      0x5C3C0C00,  //  0033  MOVE	R15	R6
      0x7C280A00,  //  0034  CALL	R10	5
      0x24280B2A,  //  0035  GT	R10	R5	K42
      0x782A0003,  //  0036  JMPF	R10	#003B
      0x8C280727,  //  0037  GETMET	R10	R3	K39
      0x5C301200,  //  0038  MOVE	R12	R9
      0x7C280400,  //  0039  CALL	R10	2
      0x70020000,  //  003A  JMP		#003C
      0x5C0C1200,  //  003B  MOVE	R3	R9
      0xB82A0600,  //  003C  GETNGBL	R10	K3
      0x8C281516,  //  003D  GETMET	R10	R10	K22
      0x54320003,  //  003E  LDINT	R12	4
      0x7C280400,  //  003F  CALL	R10	2
      0x782A004A,  //  0040  JMPF	R10	#008C
      0x5828001B,  //  0041  LDCONST	R10	K27
      0x882C1110,  //  0042  GETMBR	R11	R8	K16
      0x4C300000,  //  0043  LDNIL	R12
      0x202C160C,  //  0044  NE	R11	R11	R12
      0x782E0011,  //  0045  JMPF	R11	#0058
      0x882C1164,  //  0046  GETMBR	R11	R8	K100
      0x4C300000,  //  0047  LDNIL	R12
      0x202C160C,  //  0048  NE	R11	R11	R12
      0x782E000D,  //  0049  JMPF	R11	#0058
      0xB82E0000,  //  004A  GETNGBL	R11	K0
      0x8C2C1765,  //  004B  GETMET	R11	R11	K101
      0x88341110,  //  004C  GETMBR	R13	R8	K16
      0x88381164,  //  004D  GETMBR	R14	R8	K100
      0x7C2C0600,  //  004E  CALL	R11	3
      0x5C281600,  //  004F  MOVE	R10	R11
      0x4C2C0000,  //  0050  LDNIL	R11
      0x202C140B,  //  0051  NE	R11	R10	R11
      0x782E0002,  //  0052  JMPF	R11	#0056
      0x002EA80A,  //  0053  ADD	R11	K84	R10
      0x002C1755,  //  0054  ADD	R11	R11	K85
      0x70020000,  //  0055  JMP		#0057
      0x582C001B,  //  0056  LDCONST	R11	K27
      0x5C281600,  //  0057  MOVE	R10	R11
      0x882C1115,  //  0058  GETMBR	R11	R8	K21
      0x4C300000,  //  0059  LDNIL	R12
      0x202C160C,  //  005A  NE	R11	R11	R12
      0x782E0004,  //  005B  JMPF	R11	#0061
      0x602C0018,  //  005C  GETGBL	R11	G24
      0x58300066,  //  005D  LDCONST	R12	K102
      0x88341115,  //  005E  GETMBR	R13	R8	K21
      0x7C2C0400,  //  005F  CALL	R11	2
      0x70020000,  //  0060  JMP		#0062
      0x582C0067,  //  0061  LDCONST	R11	K103
      0x88301110,  //  0062  GETMBR	R12	R8	K16
      0x4C340000,  //  0063  LDNIL	R13
      0x2030180D,  //  0064  NE	R12	R12	R13
      0x78320004,  //  0065  JMPF	R12	#006B
      0x60300018,  //  0066  GETGBL	R12	G24
      0x58340068,  //  0067  LDCONST	R13	K104
      0x88381110,  //  0068  GETMBR	R14	R8	K16
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
      0x5838001B,  //  007E  LDCONST	R14	K27
      0xB83E0600,  //  007F  GETNGBL	R15	K3
      0x8C3C1F04,  //  0080  GETMET	R15	R15	K4
      0x60440018,  //  0081  GETGBL	R17	G24
      0x5848006B,  //  0082  LDCONST	R18	K107
      0x884C0523,  //  0083  GETMBR	R19	R2	K35
      0x884C2736,  //  0084  GETMBR	R19	R19	K54
      0x5C501600,  //  0085  MOVE	R20	R11
      0x5C541800,  //  0086  MOVE	R21	R12
      0x5C581A00,  //  0087  MOVE	R22	R13
      0x5C5C1400,  //  0088  MOVE	R23	R10
      0x5C601C00,  //  0089  MOVE	R24	R14
      0x7C440E00,  //  008A  CALL	R17	7
      0x7C3C0400,  //  008B  CALL	R15	2
      0x7001FF9B,  //  008C  JMP		#0029
      0x581C0025,  //  008D  LDCONST	R7	K37
      0xAC1C0200,  //  008E  CATCH	R7	1	0
      0xB0080000,  //  008F  RAISE	2	R0	R0
      0x80040600,  //  0090  RET	1	R3
      0x4C0C0000,  //  0091  LDNIL	R3
      0x80040600,  //  0092  RET	1	R3
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
      0x58080040,  //  0000  LDCONST	R2	K64
      0x600C000C,  //  0001  GETGBL	R3	G12
      0x88100126,  //  0002  GETMBR	R4	R0	K38
      0x7C0C0200,  //  0003  CALL	R3	1
      0x140C0403,  //  0004  LT	R3	R2	R3
      0x780E0011,  //  0005  JMPF	R3	#0018
      0x880C0126,  //  0006  GETMBR	R3	R0	K38
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
      0x0008052A,  //  0016  ADD	R2	R2	K42
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
    ( &(const binstruction[103]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x8C0C0771,  //  0001  GETMET	R3	R3	K113
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0702,  //  0003  GETMET	R3	R3	K2
      0x5C140400,  //  0004  MOVE	R5	R2
      0x7C0C0400,  //  0005  CALL	R3	2
      0x88100772,  //  0006  GETMBR	R4	R3	K114
      0x7412000A,  //  0007  JMPT	R4	#0013
      0xB8120600,  //  0008  GETNGBL	R4	K3
      0x8C100904,  //  0009  GETMET	R4	R4	K4
      0x60180018,  //  000A  GETGBL	R6	G24
      0x581C0073,  //  000B  LDCONST	R7	K115
      0x88200323,  //  000C  GETMBR	R8	R1	K35
      0x7C180400,  //  000D  CALL	R6	2
      0x7C100400,  //  000E  CALL	R4	2
      0x88100146,  //  000F  GETMBR	R4	R0	K70
      0x8C100974,  //  0010  GETMET	R4	R4	K116
      0x88180323,  //  0011  GETMBR	R6	R1	K35
      0x7C100400,  //  0012  CALL	R4	2
      0x88100146,  //  0013  GETMBR	R4	R0	K70
      0x8C100975,  //  0014  GETMET	R4	R4	K117
      0x88180323,  //  0015  GETMBR	R6	R1	K35
      0x5C1C0600,  //  0016  MOVE	R7	R3
      0x7C100600,  //  0017  CALL	R4	3
      0xB8160600,  //  0018  GETNGBL	R5	K3
      0x8C140B16,  //  0019  GETMET	R5	R5	K22
      0x541E0003,  //  001A  LDINT	R7	4
      0x7C140400,  //  001B  CALL	R5	2
      0x78160032,  //  001C  JMPF	R5	#0050
      0x88140732,  //  001D  GETMBR	R5	R3	K50
      0x4C180000,  //  001E  LDNIL	R6
      0x20140A06,  //  001F  NE	R5	R5	R6
      0x7816002E,  //  0020  JMPF	R5	#0050
      0x60140012,  //  0021  GETGBL	R5	G18
      0x7C140000,  //  0022  CALL	R5	0
      0xB81A0000,  //  0023  GETNGBL	R6	K0
      0x8C180D06,  //  0024  GETMET	R6	R6	K6
      0x7C180200,  //  0025  CALL	R6	1
      0x901A3E01,  //  0026  SETMBR	R6	K31	R1
      0x601C0010,  //  0027  GETGBL	R7	G16
      0x88200732,  //  0028  GETMBR	R8	R3	K50
      0x7C1C0200,  //  0029  CALL	R7	1
      0xA802000D,  //  002A  EXBLK	0	#0039
      0x5C200E00,  //  002B  MOVE	R8	R7
      0x7C200000,  //  002C  CALL	R8	0
      0x88241115,  //  002D  GETMBR	R9	R8	K21
      0x901A2A09,  //  002E  SETMBR	R6	K21	R9
      0x88241110,  //  002F  GETMBR	R9	R8	K16
      0x901A2009,  //  0030  SETMBR	R6	K16	R9
      0x88241111,  //  0031  GETMBR	R9	R8	K17
      0x901A2209,  //  0032  SETMBR	R6	K17	R9
      0x8C240B27,  //  0033  GETMET	R9	R5	K39
      0x602C0008,  //  0034  GETGBL	R11	G8
      0x5C300C00,  //  0035  MOVE	R12	R6
      0x7C2C0200,  //  0036  CALL	R11	1
      0x7C240400,  //  0037  CALL	R9	2
      0x7001FFF1,  //  0038  JMP		#002B
      0x581C0025,  //  0039  LDCONST	R7	K37
      0xAC1C0200,  //  003A  CATCH	R7	1	0
      0xB0080000,  //  003B  RAISE	2	R0	R0
      0xB81E0600,  //  003C  GETNGBL	R7	K3
      0x8C1C0F04,  //  003D  GETMET	R7	R7	K4
      0x60240018,  //  003E  GETGBL	R9	G24
      0x58280076,  //  003F  LDCONST	R10	K118
      0x882C0323,  //  0040  GETMBR	R11	R1	K35
      0x882C1736,  //  0041  GETMBR	R11	R11	K54
      0x8C300B77,  //  0042  GETMET	R12	R5	K119
      0x58380078,  //  0043  LDCONST	R14	K120
      0x7C300400,  //  0044  CALL	R12	2
      0x88340979,  //  0045  GETMBR	R13	R4	K121
      0x8838097A,  //  0046  GETMBR	R14	R4	K122
      0x883C0772,  //  0047  GETMBR	R15	R3	K114
      0x783E0001,  //  0048  JMPF	R15	#004B
      0x583C002A,  //  0049  LDCONST	R15	K42
      0x70020000,  //  004A  JMP		#004C
      0x583C0040,  //  004B  LDCONST	R15	K64
      0x88400937,  //  004C  GETMBR	R16	R4	K55
      0x88440731,  //  004D  GETMBR	R17	R3	K49
      0x7C241000,  //  004E  CALL	R9	8
      0x7C1C0400,  //  004F  CALL	R7	2
      0x8C140139,  //  0050  GETMET	R5	R0	K57
      0x5C1C0600,  //  0051  MOVE	R7	R3
      0x5C200200,  //  0052  MOVE	R8	R1
      0x7C140600,  //  0053  CALL	R5	3
      0x8C18013E,  //  0054  GETMET	R6	R0	K62
      0x5C200600,  //  0055  MOVE	R8	R3
      0x5C240200,  //  0056  MOVE	R9	R1
      0x7C180600,  //  0057  CALL	R6	3
      0x8C1C097B,  //  0058  GETMET	R7	R4	K123
      0x5C240C00,  //  0059  MOVE	R9	R6
      0x7C1C0400,  //  005A  CALL	R7	2
      0x881C0126,  //  005B  GETMBR	R7	R0	K38
      0x8C1C0F27,  //  005C  GETMET	R7	R7	K39
      0xB8260000,  //  005D  GETNGBL	R9	K0
      0x8C24137C,  //  005E  GETMET	R9	R9	K124
      0x5C2C0200,  //  005F  MOVE	R11	R1
      0x5C300A00,  //  0060  MOVE	R12	R5
      0x5C340C00,  //  0061  MOVE	R13	R6
      0x5C380800,  //  0062  MOVE	R14	R4
      0x7C240A00,  //  0063  CALL	R9	5
      0x7C1C0400,  //  0064  CALL	R7	2
      0x501C0200,  //  0065  LDBOOL	R7	1	0
      0x80040E00,  //  0066  RET	1	R7
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
      0x88080323,  //  0004  GETMBR	R2	R1	K35
      0x8808053C,  //  0005  GETMBR	R2	R2	K60
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
      0x58040040,  //  0000  LDCONST	R1	K64
      0x6008000C,  //  0001  GETGBL	R2	G12
      0x880C0126,  //  0002  GETMBR	R3	R0	K38
      0x7C080200,  //  0003  CALL	R2	1
      0x14080202,  //  0004  LT	R2	R1	R2
      0x780A000F,  //  0005  JMPF	R2	#0016
      0x88080126,  //  0006  GETMBR	R2	R0	K38
      0x94080401,  //  0007  GETIDX	R2	R2	R1
      0xB80E0600,  //  0008  GETNGBL	R3	K3
      0x8C0C077E,  //  0009  GETMET	R3	R3	K126
      0x8814057F,  //  000A  GETMBR	R5	R2	K127
      0x7C0C0400,  //  000B  CALL	R3	2
      0x780E0006,  //  000C  JMPF	R3	#0014
      0x8C0C0580,  //  000D  GETMET	R3	R2	K128
      0x7C0C0200,  //  000E  CALL	R3	1
      0x880C0126,  //  000F  GETMBR	R3	R0	K38
      0x8C0C0781,  //  0010  GETMET	R3	R3	K129
      0x5C140200,  //  0011  MOVE	R5	R1
      0x7C0C0400,  //  0012  CALL	R3	2
      0x70020000,  //  0013  JMP		#0015
      0x0004032A,  //  0014  ADD	R1	R1	K42
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
    ( &(const binstruction[28]) {  /* code */
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
      0x5820002A,  //  000B  LDCONST	R8	K42
      0x70020000,  //  000C  JMP		#000E
      0x58200040,  //  000D  LDCONST	R8	K64
      0x7C140600,  //  000E  CALL	R5	3
      0x7C0C0400,  //  000F  CALL	R3	2
      0x780A0008,  //  0010  JMPF	R2	#001A
      0x8C0C0584,  //  0011  GETMET	R3	R2	K132
      0x5C140200,  //  0012  MOVE	R5	R1
      0x7C0C0400,  //  0013  CALL	R3	2
      0x8810056C,  //  0014  GETMBR	R4	R2	K108
      0x78120002,  //  0015  JMPF	R4	#0019
      0x8C10016F,  //  0016  GETMET	R4	R0	K111
      0x88180359,  //  0017  GETMBR	R6	R1	K89
      0x7C100400,  //  0018  CALL	R4	2
      0x80040600,  //  0019  RET	1	R3
      0x500C0000,  //  001A  LDBOOL	R3	0	0
      0x80040600,  //  001B  RET	1	R3
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
    ( &(const binstruction[31]) {  /* code */
      0x4C080000,  //  0000  LDNIL	R2
      0x1C080202,  //  0001  EQ	R2	R1	R2
      0x780A0000,  //  0002  JMPF	R2	#0004
      0x80000400,  //  0003  RET	0
      0x58080040,  //  0004  LDCONST	R2	K64
      0x600C000C,  //  0005  GETGBL	R3	G12
      0x88100126,  //  0006  GETMBR	R4	R0	K38
      0x7C0C0200,  //  0007  CALL	R3	1
      0x140C0403,  //  0008  LT	R3	R2	R3
      0x780E0013,  //  0009  JMPF	R3	#001E
      0x880C0126,  //  000A  GETMBR	R3	R0	K38
      0x940C0602,  //  000B  GETIDX	R3	R3	R2
      0x8C0C0785,  //  000C  GETMET	R3	R3	K133
      0x7C0C0200,  //  000D  CALL	R3	1
      0x1C0C0601,  //  000E  EQ	R3	R3	R1
      0x780E000B,  //  000F  JMPF	R3	#001C
      0xB80E0600,  //  0010  GETNGBL	R3	K3
      0x8C0C0704,  //  0011  GETMET	R3	R3	K4
      0x60140018,  //  0012  GETGBL	R5	G24
      0x58180086,  //  0013  LDCONST	R6	K134
      0x5C1C0200,  //  0014  MOVE	R7	R1
      0x7C140400,  //  0015  CALL	R5	2
      0x7C0C0400,  //  0016  CALL	R3	2
      0x880C0126,  //  0017  GETMBR	R3	R0	K38
      0x8C0C0781,  //  0018  GETMET	R3	R3	K129
      0x5C140400,  //  0019  MOVE	R5	R2
      0x7C0C0400,  //  001A  CALL	R3	2
      0x70020000,  //  001B  JMP		#001D
      0x0008052A,  //  001C  ADD	R2	R2	K42
      0x7001FFE6,  //  001D  JMP		#0005
      0x80000000,  //  001E  RET	0
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
    ( &(const binstruction[87]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100987,  //  0001  GETMBR	R4	R4	K135
      0xB8160000,  //  0002  GETNGBL	R5	K0
      0x8C140B17,  //  0003  GETMET	R5	R5	K23
      0x881C0510,  //  0004  GETMBR	R7	R2	K16
      0x88200511,  //  0005  GETMBR	R8	R2	K17
      0x7C140600,  //  0006  CALL	R5	3
      0x78160002,  //  0007  JMPF	R5	#000B
      0x001A3205,  //  0008  ADD	R6	K25	R5
      0x00180D1A,  //  0009  ADD	R6	R6	K26
      0x70020000,  //  000A  JMP		#000C
      0x5818001B,  //  000B  LDCONST	R6	K27
      0x5C140C00,  //  000C  MOVE	R5	R6
      0x88180512,  //  000D  GETMBR	R6	R2	K18
      0x4C1C0000,  //  000E  LDNIL	R7
      0x20180C07,  //  000F  NE	R6	R6	R7
      0x781A0035,  //  0010  JMPF	R6	#0047
      0xB81A0000,  //  0011  GETNGBL	R6	K0
      0x8C180D88,  //  0012  GETMET	R6	R6	K136
      0x7C180200,  //  0013  CALL	R6	1
      0xB81E0000,  //  0014  GETNGBL	R7	K0
      0x8C1C0F34,  //  0015  GETMET	R7	R7	K52
      0x7C1C0200,  //  0016  CALL	R7	1
      0x901A1A07,  //  0017  SETMBR	R6	K13	R7
      0xB81E0000,  //  0018  GETNGBL	R7	K0
      0x8C1C0F89,  //  0019  GETMET	R7	R7	K137
      0x7C1C0200,  //  001A  CALL	R7	1
      0x901A2407,  //  001B  SETMBR	R6	K18	R7
      0x881C0D0D,  //  001C  GETMBR	R7	R6	K13
      0x88200515,  //  001D  GETMBR	R8	R2	K21
      0x901E2A08,  //  001E  SETMBR	R7	K21	R8
      0x881C0D0D,  //  001F  GETMBR	R7	R6	K13
      0x88200510,  //  0020  GETMBR	R8	R2	K16
      0x901E2008,  //  0021  SETMBR	R7	K16	R8
      0x881C0D0D,  //  0022  GETMBR	R7	R6	K13
      0x88200511,  //  0023  GETMBR	R8	R2	K17
      0x901E2208,  //  0024  SETMBR	R7	K17	R8
      0x881C0D12,  //  0025  GETMBR	R7	R6	K18
      0x88200512,  //  0026  GETMBR	R8	R2	K18
      0x901E2408,  //  0027  SETMBR	R7	K18	R8
      0x881C030A,  //  0028  GETMBR	R7	R1	K10
      0x8C1C0F27,  //  0029  GETMET	R7	R7	K39
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
      0x88380512,  //  0035  GETMBR	R14	R2	K18
      0x883C0512,  //  0036  GETMBR	R15	R2	K18
      0xB8420000,  //  0037  GETNGBL	R16	K0
      0x88402124,  //  0038  GETMBR	R16	R16	K36
      0x1C3C1E10,  //  0039  EQ	R15	R15	R16
      0x783E0001,  //  003A  JMPF	R15	#003D
      0x583C0024,  //  003B  LDCONST	R15	K36
      0x70020000,  //  003C  JMP		#003E
      0x583C001B,  //  003D  LDCONST	R15	K27
      0x7C240C00,  //  003E  CALL	R9	6
      0x88280515,  //  003F  GETMBR	R10	R2	K21
      0x20281540,  //  0040  NE	R10	R10	K64
      0x782A0001,  //  0041  JMPF	R10	#0044
      0x5828002B,  //  0042  LDCONST	R10	K43
      0x70020000,  //  0043  JMP		#0045
      0x5828008B,  //  0044  LDCONST	R10	K139
      0x7C1C0600,  //  0045  CALL	R7	3
      0x7002000E,  //  0046  JMP		#0056
      0xB81A0600,  //  0047  GETNGBL	R6	K3
      0x8C180D16,  //  0048  GETMET	R6	R6	K22
      0x54220003,  //  0049  LDINT	R8	4
      0x7C180400,  //  004A  CALL	R6	2
      0x781A0009,  //  004B  JMPF	R6	#0056
      0xB81A0600,  //  004C  GETNGBL	R6	K3
      0x8C180D04,  //  004D  GETMET	R6	R6	K4
      0x60200018,  //  004E  GETGBL	R8	G24
      0x5824008C,  //  004F  LDCONST	R9	K140
      0x60280008,  //  0050  GETGBL	R10	G8
      0x5C2C0400,  //  0051  MOVE	R11	R2
      0x7C280200,  //  0052  CALL	R10	1
      0x5C2C0A00,  //  0053  MOVE	R11	R5
      0x7C200600,  //  0054  CALL	R8	3
      0x7C180400,  //  0055  CALL	R6	2
      0x80000000,  //  0056  RET	0
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
      0x90021801,  //  0000  SETMBR	R0	K12	R1
      0x60080012,  //  0001  GETGBL	R2	G18
      0x7C080000,  //  0002  CALL	R2	0
      0x90024C02,  //  0003  SETMBR	R0	K38	R2
      0xB80A0000,  //  0004  GETNGBL	R2	K0
      0x8C08058D,  //  0005  GETMET	R2	R2	K141
      0x5C100000,  //  0006  MOVE	R4	R0
      0x7C080400,  //  0007  CALL	R2	2
      0x90028C02,  //  0008  SETMBR	R0	K70	R2
      0xB80A0000,  //  0009  GETNGBL	R2	K0
      0x8C08058F,  //  000A  GETMET	R2	R2	K143
      0x7C080200,  //  000B  CALL	R2	1
      0x90031C02,  //  000C  SETMBR	R0	K142	R2
      0xB80A0000,  //  000D  GETNGBL	R2	K0
      0x8C080591,  //  000E  GETMET	R2	R2	K145
      0x7C080200,  //  000F  CALL	R2	1
      0x90032002,  //  0010  SETMBR	R0	K144	R2
      0xB80A0000,  //  0011  GETNGBL	R2	K0
      0x88080587,  //  0012  GETMBR	R2	R2	K135
      0x8C080593,  //  0013  GETMET	R2	R2	K147
      0x7C080200,  //  0014  CALL	R2	1
      0x90032402,  //  0015  SETMBR	R0	K146	R2
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
      0x8C040194,  //  0000  GETMET	R1	R0	K148
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
    ( &(const binstruction[200]) {  /* code */
      0xB80E0600,  //  0000  GETNGBL	R3	K3
      0x8C0C0704,  //  0001  GETMET	R3	R3	K4
      0x58140095,  //  0002  LDCONST	R5	K149
      0x7C0C0400,  //  0003  CALL	R3	2
      0x900A3E01,  //  0004  SETMBR	R2	K31	R1
      0xB80E0000,  //  0005  GETNGBL	R3	K0
      0x880C0750,  //  0006  GETMBR	R3	R3	K80
      0x900A2403,  //  0007  SETMBR	R2	K18	R3
      0xB80E0000,  //  0008  GETNGBL	R3	K0
      0x8C0C0751,  //  0009  GETMET	R3	R3	K81
      0x88140510,  //  000A  GETMBR	R5	R2	K16
      0x8818054F,  //  000B  GETMBR	R6	R2	K79
      0x7C0C0600,  //  000C  CALL	R3	3
      0x60100008,  //  000D  GETGBL	R4	G8
      0x5C140400,  //  000E  MOVE	R5	R2
      0x7C100200,  //  000F  CALL	R4	1
      0x8814010C,  //  0010  GETMBR	R5	R0	K12
      0x8C140B52,  //  0011  GETMET	R5	R5	K82
      0x881C0323,  //  0012  GETMBR	R7	R1	K35
      0x88200553,  //  0013  GETMBR	R8	R2	K83
      0x5C240400,  //  0014  MOVE	R9	R2
      0x7C140800,  //  0015  CALL	R5	4
      0x88180504,  //  0016  GETMBR	R6	R2	K4
      0x4C1C0000,  //  0017  LDNIL	R7
      0x20180C07,  //  0018  NE	R6	R6	R7
      0x781A0005,  //  0019  JMPF	R6	#0020
      0x60180008,  //  001A  GETGBL	R6	G8
      0x881C0504,  //  001B  GETMBR	R7	R2	K4
      0x7C180200,  //  001C  CALL	R6	1
      0x001AA806,  //  001D  ADD	R6	K84	R6
      0x00180D55,  //  001E  ADD	R6	R6	K85
      0x70020000,  //  001F  JMP		#0021
      0x5818001B,  //  0020  LDCONST	R6	K27
      0xB81E0600,  //  0021  GETNGBL	R7	K3
      0x8C1C0F16,  //  0022  GETMET	R7	R7	K22
      0x54260003,  //  0023  LDINT	R9	4
      0x7C1C0400,  //  0024  CALL	R7	2
      0x781E000D,  //  0025  JMPF	R7	#0034
      0xB81E0600,  //  0026  GETNGBL	R7	K3
      0x8C1C0F04,  //  0027  GETMET	R7	R7	K4
      0x60240018,  //  0028  GETGBL	R9	G24
      0x58280096,  //  0029  LDCONST	R10	K150
      0x882C0323,  //  002A  GETMBR	R11	R1	K35
      0x882C1736,  //  002B  GETMBR	R11	R11	K54
      0x5C300800,  //  002C  MOVE	R12	R4
      0x780E0001,  //  002D  JMPF	R3	#0030
      0x5C340600,  //  002E  MOVE	R13	R3
      0x70020000,  //  002F  JMP		#0031
      0x5834001B,  //  0030  LDCONST	R13	K27
      0x5C380C00,  //  0031  MOVE	R14	R6
      0x7C240A00,  //  0032  CALL	R9	5
      0x7C1C0400,  //  0033  CALL	R7	2
      0x4C1C0000,  //  0034  LDNIL	R7
      0x900A0807,  //  0035  SETMBR	R2	K4	R7
      0x601C0015,  //  0036  GETGBL	R7	G21
      0x5422002F,  //  0037  LDINT	R8	48
      0x7C1C0200,  //  0038  CALL	R7	1
      0x8C200F29,  //  0039  GETMET	R8	R7	K41
      0x58280097,  //  003A  LDCONST	R10	K151
      0x542DFFFB,  //  003B  LDINT	R11	-4
      0x7C200600,  //  003C  CALL	R8	3
      0x8C200F29,  //  003D  GETMET	R8	R7	K41
      0x5828002A,  //  003E  LDCONST	R10	K42
      0x582C002A,  //  003F  LDCONST	R11	K42
      0x7C200600,  //  0040  CALL	R8	3
      0x50200200,  //  0041  LDBOOL	R8	1	0
      0x1C200A08,  //  0042  EQ	R8	R5	R8
      0x74220004,  //  0043  JMPT	R8	#0049
      0x88200512,  //  0044  GETMBR	R8	R2	K18
      0xB8260000,  //  0045  GETNGBL	R9	K0
      0x88241324,  //  0046  GETMBR	R9	R9	K36
      0x1C201009,  //  0047  EQ	R8	R8	R9
      0x78220016,  //  0048  JMPF	R8	#0060
      0xB8220000,  //  0049  GETNGBL	R8	K0
      0x88201124,  //  004A  GETMBR	R8	R8	K36
      0x900A2408,  //  004B  SETMBR	R2	K18	R8
      0x8C200157,  //  004C  GETMET	R8	R0	K87
      0x5C280E00,  //  004D  MOVE	R10	R7
      0x5C2C0400,  //  004E  MOVE	R11	R2
      0x4C300000,  //  004F  LDNIL	R12
      0x7C200800,  //  0050  CALL	R8	4
      0xB8220600,  //  0051  GETNGBL	R8	K3
      0x8C201116,  //  0052  GETMET	R8	R8	K22
      0x542A0003,  //  0053  LDINT	R10	4
      0x7C200400,  //  0054  CALL	R8	2
      0x78220008,  //  0055  JMPF	R8	#005F
      0xB8220600,  //  0056  GETNGBL	R8	K3
      0x8C201104,  //  0057  GETMET	R8	R8	K4
      0x60280018,  //  0058  GETGBL	R10	G24
      0x582C0058,  //  0059  LDCONST	R11	K88
      0x88300323,  //  005A  GETMBR	R12	R1	K35
      0x88301936,  //  005B  GETMBR	R12	R12	K54
      0x88340359,  //  005C  GETMBR	R13	R1	K89
      0x7C280600,  //  005D  CALL	R10	3
      0x7C200400,  //  005E  CALL	R8	2
      0x70020043,  //  005F  JMP		#00A4
      0x4C200000,  //  0060  LDNIL	R8
      0x20200A08,  //  0061  NE	R8	R5	R8
      0x78220017,  //  0062  JMPF	R8	#007B
      0x8C200157,  //  0063  GETMET	R8	R0	K87
      0x5C280E00,  //  0064  MOVE	R10	R7
      0x5C2C0400,  //  0065  MOVE	R11	R2
      0x5C300A00,  //  0066  MOVE	R12	R5
      0x7C200800,  //  0067  CALL	R8	4
      0x5C200600,  //  0068  MOVE	R8	R3
      0x74220000,  //  0069  JMPT	R8	#006B
      0x580C001B,  //  006A  LDCONST	R3	K27
      0xB8220600,  //  006B  GETNGBL	R8	K3
      0x8C201116,  //  006C  GETMET	R8	R8	K22
      0x542A0003,  //  006D  LDINT	R10	4
      0x7C200400,  //  006E  CALL	R8	2
      0x78220009,  //  006F  JMPF	R8	#007A
      0xB8220600,  //  0070  GETNGBL	R8	K3
      0x8C201104,  //  0071  GETMET	R8	R8	K4
      0x60280018,  //  0072  GETGBL	R10	G24
      0x582C005A,  //  0073  LDCONST	R11	K90
      0x88300323,  //  0074  GETMBR	R12	R1	K35
      0x88301936,  //  0075  GETMBR	R12	R12	K54
      0x5C340400,  //  0076  MOVE	R13	R2
      0x5C380600,  //  0077  MOVE	R14	R3
      0x7C280800,  //  0078  CALL	R10	4
      0x7C200400,  //  0079  CALL	R8	2
      0x70020028,  //  007A  JMP		#00A4
      0x88200512,  //  007B  GETMBR	R8	R2	K18
      0x4C240000,  //  007C  LDNIL	R9
      0x20201009,  //  007D  NE	R8	R8	R9
      0x78220014,  //  007E  JMPF	R8	#0094
      0x8C200157,  //  007F  GETMET	R8	R0	K87
      0x5C280E00,  //  0080  MOVE	R10	R7
      0x5C2C0400,  //  0081  MOVE	R11	R2
      0x4C300000,  //  0082  LDNIL	R12
      0x7C200800,  //  0083  CALL	R8	4
      0xB8220600,  //  0084  GETNGBL	R8	K3
      0x8C201116,  //  0085  GETMET	R8	R8	K22
      0x542A0003,  //  0086  LDINT	R10	4
      0x7C200400,  //  0087  CALL	R8	2
      0x78220009,  //  0088  JMPF	R8	#0093
      0xB8220600,  //  0089  GETNGBL	R8	K3
      0x8C201104,  //  008A  GETMET	R8	R8	K4
      0x60280018,  //  008B  GETGBL	R10	G24
      0x582C005B,  //  008C  LDCONST	R11	K91
      0x88300323,  //  008D  GETMBR	R12	R1	K35
      0x88301936,  //  008E  GETMBR	R12	R12	K54
      0x88340512,  //  008F  GETMBR	R13	R2	K18
      0x88380359,  //  0090  GETMBR	R14	R1	K89
      0x7C280800,  //  0091  CALL	R10	4
      0x7C200400,  //  0092  CALL	R8	2
      0x7002000F,  //  0093  JMP		#00A4
      0xB8220600,  //  0094  GETNGBL	R8	K3
      0x8C201116,  //  0095  GETMET	R8	R8	K22
      0x542A0003,  //  0096  LDINT	R10	4
      0x7C200400,  //  0097  CALL	R8	2
      0x78220008,  //  0098  JMPF	R8	#00A2
      0xB8220600,  //  0099  GETNGBL	R8	K3
      0x8C201104,  //  009A  GETMET	R8	R8	K4
      0x60280018,  //  009B  GETGBL	R10	G24
      0x582C005C,  //  009C  LDCONST	R11	K92
      0x88300323,  //  009D  GETMBR	R12	R1	K35
      0x88301936,  //  009E  GETMBR	R12	R12	K54
      0x88340359,  //  009F  GETMBR	R13	R1	K89
      0x7C280600,  //  00A0  CALL	R10	3
      0x7C200400,  //  00A1  CALL	R8	2
      0x50200000,  //  00A2  LDBOOL	R8	0	0
      0x80041000,  //  00A3  RET	1	R8
      0x8C200F29,  //  00A4  GETMET	R8	R7	K41
      0x58280098,  //  00A5  LDCONST	R10	K152
      0x542DFFFB,  //  00A6  LDINT	R11	-4
      0x7C200600,  //  00A7  CALL	R8	3
      0x8C200F29,  //  00A8  GETMET	R8	R7	K41
      0x542A0017,  //  00A9  LDINT	R10	24
      0x582C002A,  //  00AA  LDCONST	R11	K42
      0x7C200600,  //  00AB  CALL	R8	3
      0xB8220600,  //  00AC  GETNGBL	R8	K3
      0x8C201104,  //  00AD  GETMET	R8	R8	K4
      0x60280018,  //  00AE  GETGBL	R10	G24
      0x582C0099,  //  00AF  LDCONST	R11	K153
      0x8C300F9A,  //  00B0  GETMET	R12	R7	K154
      0x7C300200,  //  00B1  CALL	R12	1
      0x7C280400,  //  00B2  CALL	R10	2
      0x7C200400,  //  00B3  CALL	R8	2
      0x8C20039B,  //  00B4  GETMET	R8	R1	K155
      0x542A0008,  //  00B5  LDINT	R10	9
      0x502C0200,  //  00B6  LDBOOL	R11	1	0
      0x7C200600,  //  00B7  CALL	R8	3
      0x8824010C,  //  00B8  GETMBR	R9	R0	K12
      0x8824139C,  //  00B9  GETMBR	R9	R9	K156
      0x8828039D,  //  00BA  GETMBR	R10	R1	K157
      0x8C2C159E,  //  00BB  GETMET	R11	R10	K158
      0x7C2C0200,  //  00BC  CALL	R11	1
      0x8C2C119F,  //  00BD  GETMET	R11	R8	K159
      0x5C340E00,  //  00BE  MOVE	R13	R7
      0x5C381400,  //  00BF  MOVE	R14	R10
      0x7C2C0600,  //  00C0  CALL	R11	3
      0x8C2C11A0,  //  00C1  GETMET	R11	R8	K160
      0x7C2C0200,  //  00C2  CALL	R11	1
      0x8C2C13A1,  //  00C3  GETMET	R11	R9	K161
      0x5C341000,  //  00C4  MOVE	R13	R8
      0x7C2C0400,  //  00C5  CALL	R11	2
      0x502C0200,  //  00C6  LDBOOL	R11	1	0
      0x80041600,  //  00C7  RET	1	R11
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
    ( &(const binstruction[29]) {  /* code */
      0x88080323,  //  0000  GETMBR	R2	R1	K35
      0xB80E0600,  //  0001  GETNGBL	R3	K3
      0x8C0C0716,  //  0002  GETMET	R3	R3	K22
      0x54160003,  //  0003  LDINT	R5	4
      0x7C0C0400,  //  0004  CALL	R3	2
      0x780E0007,  //  0005  JMPF	R3	#000E
      0xB80E0600,  //  0006  GETNGBL	R3	K3
      0x8C0C0704,  //  0007  GETMET	R3	R3	K4
      0x60140018,  //  0008  GETGBL	R5	G24
      0x581800A2,  //  0009  LDCONST	R6	K162
      0x881C0536,  //  000A  GETMBR	R7	R2	K54
      0x88200337,  //  000B  GETMBR	R8	R1	K55
      0x7C140600,  //  000C  CALL	R5	3
      0x7C0C0400,  //  000D  CALL	R3	2
      0x500C0200,  //  000E  LDBOOL	R3	1	0
      0x90067003,  //  000F  SETMBR	R1	K56	R3
      0x880C0126,  //  0010  GETMBR	R3	R0	K38
      0x8C0C0727,  //  0011  GETMET	R3	R3	K39
      0xB8160000,  //  0012  GETNGBL	R5	K0
      0x8C140BA3,  //  0013  GETMET	R5	R5	K163
      0x881C053C,  //  0014  GETMBR	R7	R2	K60
      0x5C200400,  //  0015  MOVE	R8	R2
      0x5C240200,  //  0016  MOVE	R9	R1
      0x7C140800,  //  0017  CALL	R5	4
      0x7C0C0400,  //  0018  CALL	R3	2
      0x8C0C013D,  //  0019  GETMET	R3	R0	K61
      0x8814053C,  //  001A  GETMBR	R5	R2	K60
      0x7C0C0400,  //  001B  CALL	R3	2
      0x80000000,  //  001C  RET	0
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
      0x58080040,  //  0005  LDCONST	R2	K64
      0x600C000C,  //  0006  GETGBL	R3	G12
      0x88100126,  //  0007  GETMBR	R4	R0	K38
      0x7C0C0200,  //  0008  CALL	R3	1
      0x140C0403,  //  0009  LT	R3	R2	R3
      0x780E0008,  //  000A  JMPF	R3	#0014
      0x880C0126,  //  000B  GETMBR	R3	R0	K38
      0x940C0602,  //  000C  GETIDX	R3	R3	R2
      0x8C100785,  //  000D  GETMET	R4	R3	K133
      0x7C100200,  //  000E  CALL	R4	1
      0x1C100801,  //  000F  EQ	R4	R4	R1
      0x78120000,  //  0010  JMPF	R4	#0012
      0x80040600,  //  0011  RET	1	R3
      0x0008052A,  //  0012  ADD	R2	R2	K42
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
    ( &(const binstruction[253]) {  /* code */
      0xB80E0000,  //  0000  GETNGBL	R3	K0
      0x880C0713,  //  0001  GETMBR	R3	R3	K19
      0x900A2403,  //  0002  SETMBR	R2	K18	R3
      0x900A3E01,  //  0003  SETMBR	R2	K31	R1
      0x880C010C,  //  0004  GETMBR	R3	R0	K12
      0x8C0C07A4,  //  0005  GETMET	R3	R3	K164
      0x5C140400,  //  0006  MOVE	R5	R2
      0x7C0C0400,  //  0007  CALL	R3	2
      0x4C100000,  //  0008  LDNIL	R4
      0x4C140000,  //  0009  LDNIL	R5
      0x4C180000,  //  000A  LDNIL	R6
      0x20180606,  //  000B  NE	R6	R3	R6
      0x781A0008,  //  000C  JMPF	R6	#0016
      0xB81A0000,  //  000D  GETNGBL	R6	K0
      0x88180DA5,  //  000E  GETMBR	R6	R6	K165
      0x900A2406,  //  000F  SETMBR	R2	K18	R6
      0x8C1807A6,  //  0010  GETMET	R6	R3	K166
      0x88200323,  //  0011  GETMBR	R8	R1	K35
      0x5C240400,  //  0012  MOVE	R9	R2
      0x88280192,  //  0013  GETMBR	R10	R0	K146
      0x7C180800,  //  0014  CALL	R6	4
      0x5C100C00,  //  0015  MOVE	R4	R6
      0x4C180000,  //  0016  LDNIL	R6
      0x20180806,  //  0017  NE	R6	R4	R6
      0x781A0036,  //  0018  JMPF	R6	#0050
      0x881809A7,  //  0019  GETMBR	R6	R4	K167
      0x741A0001,  //  001A  JMPT	R6	#001D
      0x881809A8,  //  001B  GETMBR	R6	R4	K168
      0x781A0018,  //  001C  JMPF	R6	#0036
      0x8C1809A9,  //  001D  GETMET	R6	R4	K169
      0x7C180200,  //  001E  CALL	R6	1
      0xB81E0000,  //  001F  GETNGBL	R7	K0
      0x881C0F3F,  //  0020  GETMBR	R7	R7	K63
      0x881C0FAA,  //  0021  GETMBR	R7	R7	K170
      0x24180C07,  //  0022  GT	R6	R6	R7
      0x781A0011,  //  0023  JMPF	R6	#0036
      0x4C100000,  //  0024  LDNIL	R4
      0xB81A0600,  //  0025  GETNGBL	R6	K3
      0x8C180D04,  //  0026  GETMET	R6	R6	K4
      0x60200018,  //  0027  GETGBL	R8	G24
      0x582400AB,  //  0028  LDCONST	R9	K171
      0x7C200200,  //  0029  CALL	R8	1
      0x7C180400,  //  002A  CALL	R6	2
      0xB81A0000,  //  002B  GETNGBL	R6	K0
      0x88180D87,  //  002C  GETMBR	R6	R6	K135
      0x8C180DAC,  //  002D  GETMET	R6	R6	K172
      0x8820039D,  //  002E  GETMBR	R8	R1	K157
      0x882403AD,  //  002F  GETMBR	R9	R1	K173
      0x7C180600,  //  0030  CALL	R6	3
      0x8C1C01AE,  //  0031  GETMET	R7	R0	K174
      0x5C240200,  //  0032  MOVE	R9	R1
      0x5C280C00,  //  0033  MOVE	R10	R6
      0x7C1C0600,  //  0034  CALL	R7	3
      0x80040E00,  //  0035  RET	1	R7
      0x60180015,  //  0036  GETGBL	R6	G21
      0x541E002F,  //  0037  LDINT	R7	48
      0x7C180200,  //  0038  CALL	R6	1
      0x5C140C00,  //  0039  MOVE	R5	R6
      0x8C180B29,  //  003A  GETMET	R6	R5	K41
      0x54220014,  //  003B  LDINT	R8	21
      0x5824002A,  //  003C  LDCONST	R9	K42
      0x7C180600,  //  003D  CALL	R6	3
      0x8C180B29,  //  003E  GETMET	R6	R5	K41
      0x54223600,  //  003F  LDINT	R8	13825
      0x5425FFFD,  //  0040  LDINT	R9	-2
      0x7C180600,  //  0041  CALL	R6	3
      0x8C1801AF,  //  0042  GETMET	R6	R0	K175
      0x5C200A00,  //  0043  MOVE	R8	R5
      0x5C240400,  //  0044  MOVE	R9	R2
      0x5C280800,  //  0045  MOVE	R10	R4
      0x7C180800,  //  0046  CALL	R6	4
      0x8C180B29,  //  0047  GETMET	R6	R5	K41
      0x58200098,  //  0048  LDCONST	R8	K152
      0x5425FFFB,  //  0049  LDINT	R9	-4
      0x7C180600,  //  004A  CALL	R6	3
      0x8C180B29,  //  004B  GETMET	R6	R5	K41
      0x54220017,  //  004C  LDINT	R8	24
      0x5824002A,  //  004D  LDCONST	R9	K42
      0x7C180600,  //  004E  CALL	R6	3
      0x70020028,  //  004F  JMP		#0079
      0x88180512,  //  0050  GETMBR	R6	R2	K18
      0x4C1C0000,  //  0051  LDNIL	R7
      0x20180C07,  //  0052  NE	R6	R6	R7
      0x781A0019,  //  0053  JMPF	R6	#006E
      0x60180015,  //  0054  GETGBL	R6	G21
      0x541E002F,  //  0055  LDINT	R7	48
      0x7C180200,  //  0056  CALL	R6	1
      0x5C140C00,  //  0057  MOVE	R5	R6
      0x8C180B29,  //  0058  GETMET	R6	R5	K41
      0x54220014,  //  0059  LDINT	R8	21
      0x5824002A,  //  005A  LDCONST	R9	K42
      0x7C180600,  //  005B  CALL	R6	3
      0x8C180B29,  //  005C  GETMET	R6	R5	K41
      0x54223600,  //  005D  LDINT	R8	13825
      0x5425FFFD,  //  005E  LDINT	R9	-2
      0x7C180600,  //  005F  CALL	R6	3
      0x8C1801B0,  //  0060  GETMET	R6	R0	K176
      0x5C200A00,  //  0061  MOVE	R8	R5
      0x5C240400,  //  0062  MOVE	R9	R2
      0x88280512,  //  0063  GETMBR	R10	R2	K18
      0x7C180800,  //  0064  CALL	R6	4
      0x8C180B29,  //  0065  GETMET	R6	R5	K41
      0x58200098,  //  0066  LDCONST	R8	K152
      0x5425FFFB,  //  0067  LDINT	R9	-4
      0x7C180600,  //  0068  CALL	R6	3
      0x8C180B29,  //  0069  GETMET	R6	R5	K41
      0x54220017,  //  006A  LDINT	R8	24
      0x5824002A,  //  006B  LDCONST	R9	K42
      0x7C180600,  //  006C  CALL	R6	3
      0x7002000A,  //  006D  JMP		#0079
      0xB81A0600,  //  006E  GETNGBL	R6	K3
      0x8C180D04,  //  006F  GETMET	R6	R6	K4
      0x60200018,  //  0070  GETGBL	R8	G24
      0x582400B1,  //  0071  LDCONST	R9	K177
      0x88280323,  //  0072  GETMBR	R10	R1	K35
      0x88281536,  //  0073  GETMBR	R10	R10	K54
      0x5C2C0400,  //  0074  MOVE	R11	R2
      0x7C200600,  //  0075  CALL	R8	3
      0x7C180400,  //  0076  CALL	R6	2
      0x50180000,  //  0077  LDBOOL	R6	0	0
      0x80040C00,  //  0078  RET	1	R6
      0x8C18039B,  //  0079  GETMET	R6	R1	K155
      0x54220004,  //  007A  LDINT	R8	5
      0x50240200,  //  007B  LDBOOL	R9	1	0
      0x7C180600,  //  007C  CALL	R6	3
      0x881C010C,  //  007D  GETMBR	R7	R0	K12
      0x881C0F9C,  //  007E  GETMBR	R7	R7	K156
      0x8820039D,  //  007F  GETMBR	R8	R1	K157
      0x8C24119E,  //  0080  GETMET	R9	R8	K158
      0x7C240200,  //  0081  CALL	R9	1
      0x8C240D9F,  //  0082  GETMET	R9	R6	K159
      0x5C2C0A00,  //  0083  MOVE	R11	R5
      0x5C301000,  //  0084  MOVE	R12	R8
      0x7C240600,  //  0085  CALL	R9	3
      0x8C240DA0,  //  0086  GETMET	R9	R6	K160
      0x7C240200,  //  0087  CALL	R9	1
      0xB8260600,  //  0088  GETNGBL	R9	K3
      0x8C241316,  //  0089  GETMET	R9	R9	K22
      0x542E0003,  //  008A  LDINT	R11	4
      0x7C240400,  //  008B  CALL	R9	2
      0x7826000B,  //  008C  JMPF	R9	#0099
      0xB8260600,  //  008D  GETNGBL	R9	K3
      0x8C241304,  //  008E  GETMET	R9	R9	K4
      0x602C0018,  //  008F  GETGBL	R11	G24
      0x583000B2,  //  0090  LDCONST	R12	K178
      0x88340D23,  //  0091  GETMBR	R13	R6	K35
      0x88341B36,  //  0092  GETMBR	R13	R13	K54
      0x88380DB3,  //  0093  GETMBR	R14	R6	K179
      0x883C0D59,  //  0094  GETMBR	R15	R6	K89
      0x88400DB4,  //  0095  GETMBR	R16	R6	K180
      0x7C2C0A00,  //  0096  CALL	R11	5
      0x54320003,  //  0097  LDINT	R12	4
      0x7C240600,  //  0098  CALL	R9	3
      0x8C240FA1,  //  0099  GETMET	R9	R7	K161
      0x5C2C0C00,  //  009A  MOVE	R11	R6
      0x7C240400,  //  009B  CALL	R9	2
      0x4C240000,  //  009C  LDNIL	R9
      0xB82A0600,  //  009D  GETNGBL	R10	K3
      0x8C281516,  //  009E  GETMET	R10	R10	K22
      0x54320003,  //  009F  LDINT	R12	4
      0x7C280400,  //  00A0  CALL	R10	2
      0x782A000B,  //  00A1  JMPF	R10	#00AE
      0xB82A0000,  //  00A2  GETNGBL	R10	K0
      0x8C281517,  //  00A3  GETMET	R10	R10	K23
      0x88300510,  //  00A4  GETMBR	R12	R2	K16
      0x88340511,  //  00A5  GETMBR	R13	R2	K17
      0x7C280600,  //  00A6  CALL	R10	3
      0x5C241400,  //  00A7  MOVE	R9	R10
      0x78260002,  //  00A8  JMPF	R9	#00AC
      0x002A3209,  //  00A9  ADD	R10	K25	R9
      0x0028151A,  //  00AA  ADD	R10	R10	K26
      0x70020000,  //  00AB  JMP		#00AD
      0x5828001B,  //  00AC  LDCONST	R10	K27
      0x5C241400,  //  00AD  MOVE	R9	R10
      0x4C280000,  //  00AE  LDNIL	R10
      0x2028080A,  //  00AF  NE	R10	R4	R10
      0x782A001C,  //  00B0  JMPF	R10	#00CE
      0xB82A0600,  //  00B1  GETNGBL	R10	K3
      0x8C281516,  //  00B2  GETMET	R10	R10	K22
      0x54320003,  //  00B3  LDINT	R12	4
      0x7C280400,  //  00B4  CALL	R10	2
      0x782A0016,  //  00B5  JMPF	R10	#00CD
      0x8C2809B5,  //  00B6  GETMET	R10	R4	K181
      0x7C280200,  //  00B7  CALL	R10	1
      0xB82E0600,  //  00B8  GETNGBL	R11	K3
      0x8C2C1704,  //  00B9  GETMET	R11	R11	K4
      0x60340018,  //  00BA  GETGBL	R13	G24
      0x583800B6,  //  00BB  LDCONST	R14	K182
      0x883C0323,  //  00BC  GETMBR	R15	R1	K35
      0x883C1F36,  //  00BD  GETMBR	R15	R15	K54
      0x5C400400,  //  00BE  MOVE	R16	R2
      0x5C441200,  //  00BF  MOVE	R17	R9
      0x5C481400,  //  00C0  MOVE	R18	R10
      0x7C340A00,  //  00C1  CALL	R13	5
      0x7C2C0400,  //  00C2  CALL	R11	2
      0xB82E0600,  //  00C3  GETNGBL	R11	K3
      0x8C2C1704,  //  00C4  GETMET	R11	R11	K4
      0x60340018,  //  00C5  GETGBL	R13	G24
      0x583800B7,  //  00C6  LDCONST	R14	K183
      0x8C3C092F,  //  00C7  GETMET	R15	R4	K47
      0x7C3C0200,  //  00C8  CALL	R15	1
      0x8C3C1F9A,  //  00C9  GETMET	R15	R15	K154
      0x7C3C0200,  //  00CA  CALL	R15	1
      0x7C340400,  //  00CB  CALL	R13	2
      0x7C2C0400,  //  00CC  CALL	R11	2
      0x7002002C,  //  00CD  JMP		#00FB
      0x88280512,  //  00CE  GETMBR	R10	R2	K18
      0x4C2C0000,  //  00CF  LDNIL	R11
      0x2028140B,  //  00D0  NE	R10	R10	R11
      0x782A0019,  //  00D1  JMPF	R10	#00EC
      0x88280512,  //  00D2  GETMBR	R10	R2	K18
      0xB82E0000,  //  00D3  GETNGBL	R11	K0
      0x882C17A5,  //  00D4  GETMBR	R11	R11	K165
      0x1C28140B,  //  00D5  EQ	R10	R10	R11
      0x782A0001,  //  00D6  JMPF	R10	#00D9
      0x582800A5,  //  00D7  LDCONST	R10	K165
      0x70020000,  //  00D8  JMP		#00DA
      0x5828001B,  //  00D9  LDCONST	R10	K27
      0xB82E0600,  //  00DA  GETNGBL	R11	K3
      0x8C2C1716,  //  00DB  GETMET	R11	R11	K22
      0x54360003,  //  00DC  LDINT	R13	4
      0x7C2C0400,  //  00DD  CALL	R11	2
      0x782E000B,  //  00DE  JMPF	R11	#00EB
      0xB82E0600,  //  00DF  GETNGBL	R11	K3
      0x8C2C1704,  //  00E0  GETMET	R11	R11	K4
      0x60340018,  //  00E1  GETGBL	R13	G24
      0x583800B8,  //  00E2  LDCONST	R14	K184
      0x883C0323,  //  00E3  GETMBR	R15	R1	K35
      0x883C1F36,  //  00E4  GETMBR	R15	R15	K54
      0x5C400400,  //  00E5  MOVE	R16	R2
      0x5C441200,  //  00E6  MOVE	R17	R9
      0x88480512,  //  00E7  GETMBR	R18	R2	K18
      0x5C4C1400,  //  00E8  MOVE	R19	R10
      0x7C340C00,  //  00E9  CALL	R13	6
      0x7C2C0400,  //  00EA  CALL	R11	2
      0x7002000E,  //  00EB  JMP		#00FB
      0xB82A0600,  //  00EC  GETNGBL	R10	K3
      0x8C281516,  //  00ED  GETMET	R10	R10	K22
      0x54320003,  //  00EE  LDINT	R12	4
      0x7C280400,  //  00EF  CALL	R10	2
      0x782A0009,  //  00F0  JMPF	R10	#00FB
      0xB82A0600,  //  00F1  GETNGBL	R10	K3
      0x8C281504,  //  00F2  GETMET	R10	R10	K4
      0x60300018,  //  00F3  GETGBL	R12	G24
      0x583400B9,  //  00F4  LDCONST	R13	K185
      0x88380323,  //  00F5  GETMBR	R14	R1	K35
      0x88381D36,  //  00F6  GETMBR	R14	R14	K54
      0x5C3C0400,  //  00F7  MOVE	R15	R2
      0x5C401200,  //  00F8  MOVE	R16	R9
      0x7C300800,  //  00F9  CALL	R12	4
      0x7C280400,  //  00FA  CALL	R10	2
      0x50280200,  //  00FB  LDBOOL	R10	1	0
      0x80041400,  //  00FC  RET	1	R10
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
      0x580800BA,  //  0000  LDCONST	R2	K186
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
      0xB81B7600,  //  000B  GETNGBL	R6	K187
      0x8C180DBC,  //  000C  GETMET	R6	R6	K188
      0x88200BBD,  //  000D  GETMBR	R8	R5	K189
      0x7C180400,  //  000E  CALL	R6	2
      0x781A0012,  //  000F  JMPF	R6	#0023
      0x78060011,  //  0010  JMPF	R1	#0023
      0x881C0BBD,  //  0011  GETMBR	R7	R5	K189
      0x8C1C0FBE,  //  0012  GETMET	R7	R7	K190
      0x7C1C0200,  //  0013  CALL	R7	1
      0x201C0E01,  //  0014  NE	R7	R7	R1
      0x781E000C,  //  0015  JMPF	R7	#0023
      0xB81E0600,  //  0016  GETNGBL	R7	K3
      0x8C1C0F04,  //  0017  GETMET	R7	R7	K4
      0x60240018,  //  0018  GETGBL	R9	G24
      0x582800BF,  //  0019  LDCONST	R10	K191
      0x8C2C0DBE,  //  001A  GETMET	R11	R6	K190
      0x7C2C0200,  //  001B  CALL	R11	1
      0x8C2C179A,  //  001C  GETMET	R11	R11	K154
      0x7C2C0200,  //  001D  CALL	R11	1
      0x8C30039A,  //  001E  GETMET	R12	R1	K154
      0x7C300200,  //  001F  CALL	R12	1
      0x7C240600,  //  0020  CALL	R9	3
      0x7C1C0400,  //  0021  CALL	R7	2
      0x7001FFE5,  //  0022  JMP		#0009
      0xB81F7600,  //  0023  GETNGBL	R7	K187
      0x8C1C0FBC,  //  0024  GETMET	R7	R7	K188
      0x88240BC0,  //  0025  GETMBR	R9	R5	K192
      0x7C1C0400,  //  0026  CALL	R7	2
      0x4C200000,  //  0027  LDNIL	R8
      0x1C200608,  //  0028  EQ	R8	R3	R8
      0x74220001,  //  0029  JMPT	R8	#002C
      0x14200607,  //  002A  LT	R8	R3	R7
      0x78220000,  //  002B  JMPF	R8	#002D
      0x5C0C0E00,  //  002C  MOVE	R3	R7
      0x7001FFDA,  //  002D  JMP		#0009
      0x58100025,  //  002E  LDCONST	R4	K37
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
      0x8C100329,  //  0000  GETMET	R4	R1	K41
      0x541A0014,  //  0001  LDINT	R6	21
      0x581C002A,  //  0002  LDCONST	R7	K42
      0x7C100600,  //  0003  CALL	R4	3
      0x4C100000,  //  0004  LDNIL	R4
      0x1C100604,  //  0005  EQ	R4	R3	R4
      0x78120004,  //  0006  JMPF	R4	#000C
      0x8C100329,  //  0007  GETMET	R4	R1	K41
      0x541A3500,  //  0008  LDINT	R6	13569
      0x541DFFFD,  //  0009  LDINT	R7	-2
      0x7C100600,  //  000A  CALL	R4	3
      0x70020003,  //  000B  JMP		#0010
      0x8C100329,  //  000C  GETMET	R4	R1	K41
      0x541A34FF,  //  000D  LDINT	R6	13568
      0x541DFFFD,  //  000E  LDINT	R7	-2
      0x7C100600,  //  000F  CALL	R4	3
      0x8C100329,  //  0010  GETMET	R4	R1	K41
      0x541A36FF,  //  0011  LDINT	R6	14080
      0x541DFFFD,  //  0012  LDINT	R7	-2
      0x7C100600,  //  0013  CALL	R4	3
      0x88100515,  //  0014  GETMBR	R4	R2	K21
      0x541600FE,  //  0015  LDINT	R5	255
      0x18100805,  //  0016  LE	R4	R4	R5
      0x78120008,  //  0017  JMPF	R4	#0021
      0x8C100329,  //  0018  GETMET	R4	R1	K41
      0x541A23FF,  //  0019  LDINT	R6	9216
      0x541DFFFD,  //  001A  LDINT	R7	-2
      0x7C100600,  //  001B  CALL	R4	3
      0x8C100329,  //  001C  GETMET	R4	R1	K41
      0x88180515,  //  001D  GETMBR	R6	R2	K21
      0x581C002A,  //  001E  LDCONST	R7	K42
      0x7C100600,  //  001F  CALL	R4	3
      0x70020007,  //  0020  JMP		#0029
      0x8C100329,  //  0021  GETMET	R4	R1	K41
      0x541A24FF,  //  0022  LDINT	R6	9472
      0x541DFFFD,  //  0023  LDINT	R7	-2
      0x7C100600,  //  0024  CALL	R4	3
      0x8C100329,  //  0025  GETMET	R4	R1	K41
      0x88180515,  //  0026  GETMBR	R6	R2	K21
      0x581C002B,  //  0027  LDCONST	R7	K43
      0x7C100600,  //  0028  CALL	R4	3
      0x88100510,  //  0029  GETMBR	R4	R2	K16
      0x541600FE,  //  002A  LDINT	R5	255
      0x18100805,  //  002B  LE	R4	R4	R5
      0x78120008,  //  002C  JMPF	R4	#0036
      0x8C100329,  //  002D  GETMET	R4	R1	K41
      0x541A2400,  //  002E  LDINT	R6	9217
      0x541DFFFD,  //  002F  LDINT	R7	-2
      0x7C100600,  //  0030  CALL	R4	3
      0x8C100329,  //  0031  GETMET	R4	R1	K41
      0x88180510,  //  0032  GETMBR	R6	R2	K16
      0x581C002A,  //  0033  LDCONST	R7	K42
      0x7C100600,  //  0034  CALL	R4	3
      0x70020014,  //  0035  JMP		#004B
      0x88100510,  //  0036  GETMBR	R4	R2	K16
      0x5416FFFE,  //  0037  LDINT	R5	65535
      0x18100805,  //  0038  LE	R4	R4	R5
      0x78120008,  //  0039  JMPF	R4	#0043
      0x8C100329,  //  003A  GETMET	R4	R1	K41
      0x541A2500,  //  003B  LDINT	R6	9473
      0x541DFFFD,  //  003C  LDINT	R7	-2
      0x7C100600,  //  003D  CALL	R4	3
      0x8C100329,  //  003E  GETMET	R4	R1	K41
      0x88180510,  //  003F  GETMBR	R6	R2	K16
      0x581C002B,  //  0040  LDCONST	R7	K43
      0x7C100600,  //  0041  CALL	R4	3
      0x70020007,  //  0042  JMP		#004B
      0x8C100329,  //  0043  GETMET	R4	R1	K41
      0x541A2600,  //  0044  LDINT	R6	9729
      0x541DFFFD,  //  0045  LDINT	R7	-2
      0x7C100600,  //  0046  CALL	R4	3
      0x8C100329,  //  0047  GETMET	R4	R1	K41
      0x88180510,  //  0048  GETMBR	R6	R2	K16
      0x541E0003,  //  0049  LDINT	R7	4
      0x7C100600,  //  004A  CALL	R4	3
      0x8810054F,  //  004B  GETMBR	R4	R2	K79
      0x541600FE,  //  004C  LDINT	R5	255
      0x18100805,  //  004D  LE	R4	R4	R5
      0x78120008,  //  004E  JMPF	R4	#0058
      0x8C100329,  //  004F  GETMET	R4	R1	K41
      0x541A2401,  //  0050  LDINT	R6	9218
      0x541DFFFD,  //  0051  LDINT	R7	-2
      0x7C100600,  //  0052  CALL	R4	3
      0x8C100329,  //  0053  GETMET	R4	R1	K41
      0x8818054F,  //  0054  GETMBR	R6	R2	K79
      0x581C002A,  //  0055  LDCONST	R7	K42
      0x7C100600,  //  0056  CALL	R4	3
      0x70020014,  //  0057  JMP		#006D
      0x8810054F,  //  0058  GETMBR	R4	R2	K79
      0x5416FFFE,  //  0059  LDINT	R5	65535
      0x18100805,  //  005A  LE	R4	R4	R5
      0x78120008,  //  005B  JMPF	R4	#0065
      0x8C100329,  //  005C  GETMET	R4	R1	K41
      0x541A2501,  //  005D  LDINT	R6	9474
      0x541DFFFD,  //  005E  LDINT	R7	-2
      0x7C100600,  //  005F  CALL	R4	3
      0x8C100329,  //  0060  GETMET	R4	R1	K41
      0x8818054F,  //  0061  GETMBR	R6	R2	K79
      0x581C002B,  //  0062  LDCONST	R7	K43
      0x7C100600,  //  0063  CALL	R4	3
      0x70020007,  //  0064  JMP		#006D
      0x8C100329,  //  0065  GETMET	R4	R1	K41
      0x541A2601,  //  0066  LDINT	R6	9730
      0x541DFFFD,  //  0067  LDINT	R7	-2
      0x7C100600,  //  0068  CALL	R4	3
      0x8C100329,  //  0069  GETMET	R4	R1	K41
      0x8818054F,  //  006A  GETMBR	R6	R2	K79
      0x541E0003,  //  006B  LDINT	R7	4
      0x7C100600,  //  006C  CALL	R4	3
      0x8C100329,  //  006D  GETMET	R4	R1	K41
      0x541A0017,  //  006E  LDINT	R6	24
      0x581C002A,  //  006F  LDCONST	R7	K42
      0x7C100600,  //  0070  CALL	R4	3
      0x4C100000,  //  0071  LDNIL	R4
      0x1C100604,  //  0072  EQ	R4	R3	R4
      0x78120016,  //  0073  JMPF	R4	#008B
      0x88100512,  //  0074  GETMBR	R4	R2	K18
      0x4C140000,  //  0075  LDNIL	R5
      0x1C140805,  //  0076  EQ	R5	R4	R5
      0x78160001,  //  0077  JMPF	R5	#007A
      0xB8160000,  //  0078  GETNGBL	R5	K0
      0x88100B24,  //  0079  GETMBR	R4	R5	K36
      0x8C140329,  //  007A  GETMET	R5	R1	K41
      0x541E3500,  //  007B  LDINT	R7	13569
      0x5421FFFD,  //  007C  LDINT	R8	-2
      0x7C140600,  //  007D  CALL	R5	3
      0x8C140329,  //  007E  GETMET	R5	R1	K41
      0x541E23FF,  //  007F  LDINT	R7	9216
      0x5421FFFD,  //  0080  LDINT	R8	-2
      0x7C140600,  //  0081  CALL	R5	3
      0x8C140329,  //  0082  GETMET	R5	R1	K41
      0x881C0512,  //  0083  GETMBR	R7	R2	K18
      0x5820002A,  //  0084  LDCONST	R8	K42
      0x7C140600,  //  0085  CALL	R5	3
      0x8C140329,  //  0086  GETMET	R5	R1	K41
      0x541E0017,  //  0087  LDINT	R7	24
      0x5820002A,  //  0088  LDCONST	R8	K42
      0x7C140600,  //  0089  CALL	R5	3
      0x70020003,  //  008A  JMP		#008F
      0x900E5D2A,  //  008B  SETMBR	R3	K46	K42
      0x8C10072F,  //  008C  GETMET	R4	R3	K47
      0x5C180200,  //  008D  MOVE	R6	R1
      0x7C100400,  //  008E  CALL	R4	2
      0x8C100329,  //  008F  GETMET	R4	R1	K41
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
    ( &(const binstruction[44]) {  /* code */
      0x8C0C05C1,  //  0000  GETMET	R3	R2	K193
      0x58140040,  //  0001  LDCONST	R5	K64
      0x541A00FE,  //  0002  LDINT	R6	255
      0x7C0C0600,  //  0003  CALL	R3	3
      0x8C100182,  //  0004  GETMET	R4	R0	K130
      0x88180359,  //  0005  GETMBR	R6	R1	K89
      0x7C100400,  //  0006  CALL	R4	2
      0xB8160000,  //  0007  GETNGBL	R5	K0
      0x88140B24,  //  0008  GETMBR	R5	R5	K36
      0x1C140605,  //  0009  EQ	R5	R3	R5
      0x78160010,  //  000A  JMPF	R5	#001C
      0x78120004,  //  000B  JMPF	R4	#0011
      0x8C1409C2,  //  000C  GETMET	R5	R4	K194
      0x5C1C0200,  //  000D  MOVE	R7	R1
      0x7C140400,  //  000E  CALL	R5	2
      0x80040A00,  //  000F  RET	1	R5
      0x70020009,  //  0010  JMP		#001B
      0xB8160600,  //  0011  GETNGBL	R5	K3
      0x8C140B04,  //  0012  GETMET	R5	R5	K4
      0x601C0018,  //  0013  GETGBL	R7	G24
      0x582000C3,  //  0014  LDCONST	R8	K195
      0x88240323,  //  0015  GETMBR	R9	R1	K35
      0x88241336,  //  0016  GETMBR	R9	R9	K54
      0x88280359,  //  0017  GETMBR	R10	R1	K89
      0x7C1C0600,  //  0018  CALL	R7	3
      0x54220003,  //  0019  LDINT	R8	4
      0x7C140600,  //  001A  CALL	R5	3
      0x7002000D,  //  001B  JMP		#002A
      0xB8160600,  //  001C  GETNGBL	R5	K3
      0x8C140B04,  //  001D  GETMET	R5	R5	K4
      0x601C0018,  //  001E  GETGBL	R7	G24
      0x582000C4,  //  001F  LDCONST	R8	K196
      0x5C240600,  //  0020  MOVE	R9	R3
      0x7C1C0400,  //  0021  CALL	R7	2
      0x7C140400,  //  0022  CALL	R5	2
      0x78120005,  //  0023  JMPF	R4	#002A
      0x8C1409C5,  //  0024  GETMET	R5	R4	K197
      0x5C1C0200,  //  0025  MOVE	R7	R1
      0x7C140400,  //  0026  CALL	R5	2
      0x8C14016F,  //  0027  GETMET	R5	R0	K111
      0x881C0359,  //  0028  GETMBR	R7	R1	K89
      0x7C140400,  //  0029  CALL	R5	2
      0x50140000,  //  002A  LDBOOL	R5	0	0
      0x80040A00,  //  002B  RET	1	R5
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
      0x8C100329,  //  0000  GETMET	R4	R1	K41
      0x541A0014,  //  0001  LDINT	R6	21
      0x581C002A,  //  0002  LDCONST	R7	K42
      0x7C100600,  //  0003  CALL	R4	3
      0x8C100329,  //  0004  GETMET	R4	R1	K41
      0x541A34FF,  //  0005  LDINT	R6	13568
      0x541DFFFD,  //  0006  LDINT	R7	-2
      0x7C100600,  //  0007  CALL	R4	3
      0x8C10012D,  //  0008  GETMET	R4	R0	K45
      0x5C180200,  //  0009  MOVE	R6	R1
      0x5C1C0400,  //  000A  MOVE	R7	R2
      0x58200040,  //  000B  LDCONST	R8	K64
      0x7C100800,  //  000C  CALL	R4	4
      0x8C100329,  //  000D  GETMET	R4	R1	K41
      0x541A3500,  //  000E  LDINT	R6	13569
      0x541DFFFD,  //  000F  LDINT	R7	-2
      0x7C100600,  //  0010  CALL	R4	3
      0x88100512,  //  0011  GETMBR	R4	R2	K18
      0x541600FE,  //  0012  LDINT	R5	255
      0x18100805,  //  0013  LE	R4	R4	R5
      0x78120008,  //  0014  JMPF	R4	#001E
      0x8C100329,  //  0015  GETMET	R4	R1	K41
      0x541A23FF,  //  0016  LDINT	R6	9216
      0x541DFFFD,  //  0017  LDINT	R7	-2
      0x7C100600,  //  0018  CALL	R4	3
      0x8C100329,  //  0019  GETMET	R4	R1	K41
      0x88180512,  //  001A  GETMBR	R6	R2	K18
      0x581C002A,  //  001B  LDCONST	R7	K42
      0x7C100600,  //  001C  CALL	R4	3
      0x70020007,  //  001D  JMP		#0026
      0x8C100329,  //  001E  GETMET	R4	R1	K41
      0x541A24FF,  //  001F  LDINT	R6	9472
      0x541DFFFD,  //  0020  LDINT	R7	-2
      0x7C100600,  //  0021  CALL	R4	3
      0x8C100329,  //  0022  GETMET	R4	R1	K41
      0x88180512,  //  0023  GETMBR	R6	R2	K18
      0x581C002B,  //  0024  LDCONST	R7	K43
      0x7C100600,  //  0025  CALL	R4	3
      0x8C100329,  //  0026  GETMET	R4	R1	K41
      0x541A1817,  //  0027  LDINT	R6	6168
      0x541DFFFD,  //  0028  LDINT	R7	-2
      0x7C100600,  //  0029  CALL	R4	3
      0x8C100329,  //  002A  GETMET	R4	R1	K41
      0x541A0017,  //  002B  LDINT	R6	24
      0x581C002A,  //  002C  LDCONST	R7	K42
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
    ( &(const binstruction[165]) {  /* code */
      0xB8160000,  //  0000  GETNGBL	R5	K0
      0x88140B87,  //  0001  GETMBR	R5	R5	K135
      0x4C180000,  //  0002  LDNIL	R6
      0xB81E0600,  //  0003  GETNGBL	R7	K3
      0x8C1C0F16,  //  0004  GETMET	R7	R7	K22
      0x54260003,  //  0005  LDINT	R9	4
      0x7C1C0400,  //  0006  CALL	R7	2
      0x781E000B,  //  0007  JMPF	R7	#0014
      0xB81E0000,  //  0008  GETNGBL	R7	K0
      0x8C1C0F17,  //  0009  GETMET	R7	R7	K23
      0x88240510,  //  000A  GETMBR	R9	R2	K16
      0x88280511,  //  000B  GETMBR	R10	R2	K17
      0x7C1C0600,  //  000C  CALL	R7	3
      0x5C180E00,  //  000D  MOVE	R6	R7
      0x781A0002,  //  000E  JMPF	R6	#0012
      0x001E3206,  //  000F  ADD	R7	K25	R6
      0x001C0F1A,  //  0010  ADD	R7	R7	K26
      0x70020000,  //  0011  JMP		#0013
      0x581C001B,  //  0012  LDCONST	R7	K27
      0x5C180E00,  //  0013  MOVE	R6	R7
      0x881C0512,  //  0014  GETMBR	R7	R2	K18
      0x4C200000,  //  0015  LDNIL	R8
      0x201C0E08,  //  0016  NE	R7	R7	R8
      0x4C200000,  //  0017  LDNIL	R8
      0x4C240000,  //  0018  LDNIL	R9
      0x4C280000,  //  0019  LDNIL	R10
      0x2028020A,  //  001A  NE	R10	R1	R10
      0x782A0005,  //  001B  JMPF	R10	#0022
      0x8C2803A6,  //  001C  GETMET	R10	R1	K166
      0x5C300600,  //  001D  MOVE	R12	R3
      0x5C340400,  //  001E  MOVE	R13	R2
      0x88380192,  //  001F  GETMBR	R14	R0	K146
      0x7C280800,  //  0020  CALL	R10	4
      0x5C201400,  //  0021  MOVE	R8	R10
      0x4C280000,  //  0022  LDNIL	R10
      0x2028100A,  //  0023  NE	R10	R8	R10
      0x782A0057,  //  0024  JMPF	R10	#007D
      0x5828001B,  //  0025  LDCONST	R10	K27
      0xB82E0600,  //  0026  GETNGBL	R11	K3
      0x8C2C1716,  //  0027  GETMET	R11	R11	K22
      0x54360003,  //  0028  LDINT	R13	4
      0x7C2C0400,  //  0029  CALL	R11	2
      0x782E0003,  //  002A  JMPF	R11	#002F
      0x78120002,  //  002B  JMPF	R4	#002F
      0x8C2C11B5,  //  002C  GETMET	R11	R8	K181
      0x7C2C0200,  //  002D  CALL	R11	1
      0x5C281600,  //  002E  MOVE	R10	R11
      0x882C11A7,  //  002F  GETMBR	R11	R8	K167
      0x742E0001,  //  0030  JMPT	R11	#0033
      0x882C11A8,  //  0031  GETMBR	R11	R8	K168
      0x782E002F,  //  0032  JMPF	R11	#0063
      0x8C2C11A9,  //  0033  GETMET	R11	R8	K169
      0x7C2C0200,  //  0034  CALL	R11	1
      0xB8320000,  //  0035  GETNGBL	R12	K0
      0x8830193F,  //  0036  GETMBR	R12	R12	K63
      0x883019AA,  //  0037  GETMBR	R12	R12	K170
      0x242C160C,  //  0038  GT	R11	R11	R12
      0x782E0028,  //  0039  JMPF	R11	#0063
      0x602C0012,  //  003A  GETGBL	R11	G18
      0x7C2C0000,  //  003B  CALL	R11	0
      0x5C241600,  //  003C  MOVE	R9	R11
      0x602C0015,  //  003D  GETGBL	R11	G21
      0x5432002F,  //  003E  LDINT	R12	48
      0x7C2C0200,  //  003F  CALL	R11	1
      0x8C300BC6,  //  0040  GETMET	R12	R5	K198
      0x7C300200,  //  0041  CALL	R12	1
      0x8C3401AF,  //  0042  GETMET	R13	R0	K175
      0x5C3C1600,  //  0043  MOVE	R15	R11
      0x5C400400,  //  0044  MOVE	R16	R2
      0x5C441800,  //  0045  MOVE	R17	R12
      0x50480000,  //  0046  LDBOOL	R18	0	0
      0x7C340A00,  //  0047  CALL	R13	5
      0x8C341327,  //  0048  GETMET	R13	R9	K39
      0x5C3C1600,  //  0049  MOVE	R15	R11
      0x7C340400,  //  004A  CALL	R13	2
      0x60340010,  //  004B  GETGBL	R13	G16
      0x883811C7,  //  004C  GETMBR	R14	R8	K199
      0x7C340200,  //  004D  CALL	R13	1
      0xA802000F,  //  004E  EXBLK	0	#005F
      0x5C381A00,  //  004F  MOVE	R14	R13
      0x7C380000,  //  0050  CALL	R14	0
      0x603C0015,  //  0051  GETGBL	R15	G21
      0x5442002F,  //  0052  LDINT	R16	48
      0x7C3C0200,  //  0053  CALL	R15	1
      0x5C2C1E00,  //  0054  MOVE	R11	R15
      0x8C3C01AF,  //  0055  GETMET	R15	R0	K175
      0x5C441600,  //  0056  MOVE	R17	R11
      0x5C480400,  //  0057  MOVE	R18	R2
      0x5C4C1C00,  //  0058  MOVE	R19	R14
      0x50500200,  //  0059  LDBOOL	R20	1	0
      0x7C3C0A00,  //  005A  CALL	R15	5
      0x8C3C1327,  //  005B  GETMET	R15	R9	K39
      0x5C441600,  //  005C  MOVE	R17	R11
      0x7C3C0400,  //  005D  CALL	R15	2
      0x7001FFEF,  //  005E  JMP		#004F
      0x58340025,  //  005F  LDCONST	R13	K37
      0xAC340200,  //  0060  CATCH	R13	1	0
      0xB0080000,  //  0061  RAISE	2	R0	R0
      0x70020008,  //  0062  JMP		#006C
      0x602C0015,  //  0063  GETGBL	R11	G21
      0x5432002F,  //  0064  LDINT	R12	48
      0x7C2C0200,  //  0065  CALL	R11	1
      0x5C241600,  //  0066  MOVE	R9	R11
      0x8C2C01AF,  //  0067  GETMET	R11	R0	K175
      0x5C341200,  //  0068  MOVE	R13	R9
      0x5C380400,  //  0069  MOVE	R14	R2
      0x5C3C1000,  //  006A  MOVE	R15	R8
      0x7C2C0800,  //  006B  CALL	R11	4
      0xB82E0600,  //  006C  GETNGBL	R11	K3
      0x8C2C1716,  //  006D  GETMET	R11	R11	K22
      0x54360003,  //  006E  LDINT	R13	4
      0x7C2C0400,  //  006F  CALL	R11	2
      0x782E000A,  //  0070  JMPF	R11	#007C
      0x78120009,  //  0071  JMPF	R4	#007C
      0xB82E0600,  //  0072  GETNGBL	R11	K3
      0x8C2C1704,  //  0073  GETMET	R11	R11	K4
      0x60340018,  //  0074  GETGBL	R13	G24
      0x583800C8,  //  0075  LDCONST	R14	K200
      0x883C0736,  //  0076  GETMBR	R15	R3	K54
      0x5C400400,  //  0077  MOVE	R16	R2
      0x5C440C00,  //  0078  MOVE	R17	R6
      0x5C481400,  //  0079  MOVE	R18	R10
      0x7C340A00,  //  007A  CALL	R13	5
      0x7C2C0400,  //  007B  CALL	R11	2
      0x70020026,  //  007C  JMP		#00A4
      0x88280512,  //  007D  GETMBR	R10	R2	K18
      0x4C2C0000,  //  007E  LDNIL	R11
      0x2028140B,  //  007F  NE	R10	R10	R11
      0x782A0022,  //  0080  JMPF	R10	#00A4
      0x781E0021,  //  0081  JMPF	R7	#00A4
      0x60280015,  //  0082  GETGBL	R10	G21
      0x542E002F,  //  0083  LDINT	R11	48
      0x7C280200,  //  0084  CALL	R10	1
      0x5C241400,  //  0085  MOVE	R9	R10
      0x8C2801B0,  //  0086  GETMET	R10	R0	K176
      0x5C301200,  //  0087  MOVE	R12	R9
      0x5C340400,  //  0088  MOVE	R13	R2
      0x88380512,  //  0089  GETMBR	R14	R2	K18
      0x7C280800,  //  008A  CALL	R10	4
      0xB82A0600,  //  008B  GETNGBL	R10	K3
      0x8C281516,  //  008C  GETMET	R10	R10	K22
      0x54320003,  //  008D  LDINT	R12	4
      0x7C280400,  //  008E  CALL	R10	2
      0x782A0013,  //  008F  JMPF	R10	#00A4
      0xB82A0600,  //  0090  GETNGBL	R10	K3
      0x8C281504,  //  0091  GETMET	R10	R10	K4
      0x60300018,  //  0092  GETGBL	R12	G24
      0x583400C9,  //  0093  LDCONST	R13	K201
      0x88380736,  //  0094  GETMBR	R14	R3	K54
      0x603C0008,  //  0095  GETGBL	R15	G8
      0x5C400400,  //  0096  MOVE	R16	R2
      0x7C3C0200,  //  0097  CALL	R15	1
      0x5C400C00,  //  0098  MOVE	R16	R6
      0x88440512,  //  0099  GETMBR	R17	R2	K18
      0x88480512,  //  009A  GETMBR	R18	R2	K18
      0xB84E0000,  //  009B  GETNGBL	R19	K0
      0x884C27A5,  //  009C  GETMBR	R19	R19	K165
      0x1C482413,  //  009D  EQ	R18	R18	R19
      0x784A0001,  //  009E  JMPF	R18	#00A1
      0x584800A5,  //  009F  LDCONST	R18	K165
      0x70020000,  //  00A0  JMP		#00A2
      0x5848001B,  //  00A1  LDCONST	R18	K27
      0x7C300C00,  //  00A2  CALL	R12	6
      0x7C280400,  //  00A3  CALL	R10	2
      0x80041200,  //  00A4  RET	1	R9
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
      0x880C0126,  //  0000  GETMBR	R3	R0	K38
      0x8C0C0727,  //  0001  GETMET	R3	R3	K39
      0xB8160000,  //  0002  GETNGBL	R5	K0
      0x8C140BCA,  //  0003  GETMET	R5	R5	K202
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
    ( &(const binstruction[178]) {  /* code */
      0x880803CB,  //  0000  GETMBR	R2	R1	K203
      0x1C0C052B,  //  0001  EQ	R3	R2	K43
      0x780E0014,  //  0002  JMPF	R3	#0018
      0x880C018E,  //  0003  GETMBR	R3	R0	K142
      0x8C0C07CC,  //  0004  GETMET	R3	R3	K204
      0x8814039D,  //  0005  GETMBR	R5	R1	K157
      0x881803AD,  //  0006  GETMBR	R6	R1	K173
      0x7C0C0600,  //  0007  CALL	R3	3
      0x4C100000,  //  0008  LDNIL	R4
      0x20100604,  //  0009  NE	R4	R3	R4
      0x7812000B,  //  000A  JMPF	R4	#0017
      0xB8120600,  //  000B  GETNGBL	R4	K3
      0x8C100904,  //  000C  GETMET	R4	R4	K4
      0x60180018,  //  000D  GETGBL	R6	G24
      0x581C00CD,  //  000E  LDCONST	R7	K205
      0x5C200600,  //  000F  MOVE	R8	R3
      0x7C180400,  //  0010  CALL	R6	2
      0x7C100400,  //  0011  CALL	R4	2
      0x8C1001CE,  //  0012  GETMET	R4	R0	K206
      0x5C180200,  //  0013  MOVE	R6	R1
      0x5C1C0600,  //  0014  MOVE	R7	R3
      0x7C100600,  //  0015  CALL	R4	3
      0x80040800,  //  0016  RET	1	R4
      0x70020020,  //  0017  JMP		#0039
      0x540E0007,  //  0018  LDINT	R3	8
      0x1C0C0403,  //  0019  EQ	R3	R2	R3
      0x780E001D,  //  001A  JMPF	R3	#0039
      0x880C0190,  //  001B  GETMBR	R3	R0	K144
      0x8C0C07CC,  //  001C  GETMET	R3	R3	K204
      0x8814039D,  //  001D  GETMBR	R5	R1	K157
      0x881803AD,  //  001E  GETMBR	R6	R1	K173
      0x7C0C0600,  //  001F  CALL	R3	3
      0xB8120600,  //  0020  GETNGBL	R4	K3
      0x8C100904,  //  0021  GETMET	R4	R4	K4
      0x60180018,  //  0022  GETGBL	R6	G24
      0x581C00CF,  //  0023  LDCONST	R7	K207
      0x5C200600,  //  0024  MOVE	R8	R3
      0x882403AD,  //  0025  GETMBR	R9	R1	K173
      0x402413D0,  //  0026  CONNECT	R9	R9	K208
      0x8828039D,  //  0027  GETMBR	R10	R1	K157
      0x94241409,  //  0028  GETIDX	R9	R10	R9
      0x8C24139A,  //  0029  GETMET	R9	R9	K154
      0x7C240200,  //  002A  CALL	R9	1
      0x882803AD,  //  002B  GETMBR	R10	R1	K173
      0x882C039D,  //  002C  GETMBR	R11	R1	K157
      0x8C2C179A,  //  002D  GETMET	R11	R11	K154
      0x7C2C0200,  //  002E  CALL	R11	1
      0x7C180A00,  //  002F  CALL	R6	5
      0x7C100400,  //  0030  CALL	R4	2
      0x4C100000,  //  0031  LDNIL	R4
      0x20100604,  //  0032  NE	R4	R3	R4
      0x78120004,  //  0033  JMPF	R4	#0039
      0x8C1001D1,  //  0034  GETMET	R4	R0	K209
      0x5C180200,  //  0035  MOVE	R6	R1
      0x5C1C0600,  //  0036  MOVE	R7	R3
      0x7C100600,  //  0037  CALL	R4	3
      0x80040800,  //  0038  RET	1	R4
      0xB80E0600,  //  0039  GETNGBL	R3	K3
      0x8C0C0704,  //  003A  GETMET	R3	R3	K4
      0xB8160000,  //  003B  GETNGBL	R5	K0
      0x8C140BD3,  //  003C  GETMET	R5	R5	K211
      0x5C1C0200,  //  003D  MOVE	R7	R1
      0x7C140400,  //  003E  CALL	R5	2
      0x0017A405,  //  003F  ADD	R5	K210	R5
      0x7C0C0400,  //  0040  CALL	R3	2
      0xB80E0000,  //  0041  GETNGBL	R3	K0
      0x880C0787,  //  0042  GETMBR	R3	R3	K135
      0x8C0C07AC,  //  0043  GETMET	R3	R3	K172
      0x8814039D,  //  0044  GETMBR	R5	R1	K157
      0x881803AD,  //  0045  GETMBR	R6	R1	K173
      0x7C0C0600,  //  0046  CALL	R3	3
      0xB8120600,  //  0047  GETNGBL	R4	K3
      0x8C100904,  //  0048  GETMET	R4	R4	K4
      0x60180008,  //  0049  GETGBL	R6	G8
      0x5C1C0600,  //  004A  MOVE	R7	R3
      0x7C180200,  //  004B  CALL	R6	1
      0x001BA806,  //  004C  ADD	R6	K212	R6
      0x7C100400,  //  004D  CALL	R4	2
      0x8C1007C1,  //  004E  GETMET	R4	R3	K193
      0x541A00FE,  //  004F  LDINT	R6	255
      0x7C100400,  //  0050  CALL	R4	2
      0xB8160600,  //  0051  GETNGBL	R5	K3
      0x8C140B04,  //  0052  GETMET	R5	R5	K4
      0x4C1C0000,  //  0053  LDNIL	R7
      0x201C0807,  //  0054  NE	R7	R4	R7
      0x781E0003,  //  0055  JMPF	R7	#005A
      0x601C0008,  //  0056  GETGBL	R7	G8
      0x5C200800,  //  0057  MOVE	R8	R4
      0x7C1C0200,  //  0058  CALL	R7	1
      0x70020000,  //  0059  JMP		#005B
      0x581C00D6,  //  005A  LDCONST	R7	K214
      0x001FAA07,  //  005B  ADD	R7	K213	R7
      0x7C140400,  //  005C  CALL	R5	2
      0x1C14052A,  //  005D  EQ	R5	R2	K42
      0x78160005,  //  005E  JMPF	R5	#0065
      0x8C1401D7,  //  005F  GETMET	R5	R0	K215
      0x5C1C0200,  //  0060  MOVE	R7	R1
      0x5C200600,  //  0061  MOVE	R8	R3
      0x7C140600,  //  0062  CALL	R5	3
      0x80040A00,  //  0063  RET	1	R5
      0x7002004A,  //  0064  JMP		#00B0
      0x1C14052B,  //  0065  EQ	R5	R2	K43
      0x78160008,  //  0066  JMPF	R5	#0070
      0x8C1401D8,  //  0067  GETMET	R5	R0	K216
      0x5C1C0200,  //  0068  MOVE	R7	R1
      0x7C140400,  //  0069  CALL	R5	2
      0x8C1401AE,  //  006A  GETMET	R5	R0	K174
      0x5C1C0200,  //  006B  MOVE	R7	R1
      0x5C200600,  //  006C  MOVE	R8	R3
      0x7C140600,  //  006D  CALL	R5	3
      0x80040A00,  //  006E  RET	1	R5
      0x7002003F,  //  006F  JMP		#00B0
      0x1C14058B,  //  0070  EQ	R5	R2	K139
      0x78160008,  //  0071  JMPF	R5	#007B
      0x8C1401D8,  //  0072  GETMET	R5	R0	K216
      0x5C1C0200,  //  0073  MOVE	R7	R1
      0x7C140400,  //  0074  CALL	R5	2
      0x8C1401D9,  //  0075  GETMET	R5	R0	K217
      0x5C1C0200,  //  0076  MOVE	R7	R1
      0x5C200600,  //  0077  MOVE	R8	R3
      0x7C140600,  //  0078  CALL	R5	3
      0x80040A00,  //  0079  RET	1	R5
      0x70020034,  //  007A  JMP		#00B0
      0x54160003,  //  007B  LDINT	R5	4
      0x1C140405,  //  007C  EQ	R5	R2	R5
      0x78160002,  //  007D  JMPF	R5	#0081
      0x50140000,  //  007E  LDBOOL	R5	0	0
      0x80040A00,  //  007F  RET	1	R5
      0x7002002E,  //  0080  JMP		#00B0
      0x54160004,  //  0081  LDINT	R5	5
      0x1C140405,  //  0082  EQ	R5	R2	R5
      0x78160002,  //  0083  JMPF	R5	#0087
      0x50140000,  //  0084  LDBOOL	R5	0	0
      0x80040A00,  //  0085  RET	1	R5
      0x70020028,  //  0086  JMP		#00B0
      0x54160005,  //  0087  LDINT	R5	6
      0x1C140405,  //  0088  EQ	R5	R2	R5
      0x78160008,  //  0089  JMPF	R5	#0093
      0x8C1401D8,  //  008A  GETMET	R5	R0	K216
      0x5C1C0200,  //  008B  MOVE	R7	R1
      0x7C140400,  //  008C  CALL	R5	2
      0x8C1401DA,  //  008D  GETMET	R5	R0	K218
      0x5C1C0200,  //  008E  MOVE	R7	R1
      0x5C200600,  //  008F  MOVE	R8	R3
      0x7C140600,  //  0090  CALL	R5	3
      0x80040A00,  //  0091  RET	1	R5
      0x7002001C,  //  0092  JMP		#00B0
      0x54160006,  //  0093  LDINT	R5	7
      0x1C140405,  //  0094  EQ	R5	R2	R5
      0x78160002,  //  0095  JMPF	R5	#0099
      0x50140000,  //  0096  LDBOOL	R5	0	0
      0x80040A00,  //  0097  RET	1	R5
      0x70020016,  //  0098  JMP		#00B0
      0x54160007,  //  0099  LDINT	R5	8
      0x1C140405,  //  009A  EQ	R5	R2	R5
      0x78160005,  //  009B  JMPF	R5	#00A2
      0x8C1401DB,  //  009C  GETMET	R5	R0	K219
      0x5C1C0200,  //  009D  MOVE	R7	R1
      0x5C200600,  //  009E  MOVE	R8	R3
      0x7C140600,  //  009F  CALL	R5	3
      0x80040A00,  //  00A0  RET	1	R5
      0x7002000D,  //  00A1  JMP		#00B0
      0x54160008,  //  00A2  LDINT	R5	9
      0x1C140405,  //  00A3  EQ	R5	R2	R5
      0x78160002,  //  00A4  JMPF	R5	#00A8
      0x50140000,  //  00A5  LDBOOL	R5	0	0
      0x80040A00,  //  00A6  RET	1	R5
      0x70020007,  //  00A7  JMP		#00B0
      0x54160009,  //  00A8  LDINT	R5	10
      0x1C140405,  //  00A9  EQ	R5	R2	R5
      0x78160004,  //  00AA  JMPF	R5	#00B0
      0x8C1401DC,  //  00AB  GETMET	R5	R0	K220
      0x5C1C0200,  //  00AC  MOVE	R7	R1
      0x5C200600,  //  00AD  MOVE	R8	R3
      0x7C140600,  //  00AE  CALL	R5	3
      0x80040A00,  //  00AF  RET	1	R5
      0x50140000,  //  00B0  LDBOOL	R5	0	0
      0x80040A00,  //  00B1  RET	1	R5
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
