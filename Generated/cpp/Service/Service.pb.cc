// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Service/Service.proto

#include "Service/Service.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace proto {
}  // namespace proto
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Service_2fService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Service_2fService_2eproto = nullptr;
const uint32_t TableStruct_Service_2fService_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_Service_2fService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025Service/Service.proto\022\005proto\032\037google/p"
  "rotobuf/timestamp.proto\032\025Message/Message"
  ".proto\032\025Message/Request.proto\032\026Message/R"
  "esponse.proto2\373*\n\004DBMS\022C\n\nCreateUser\022\030.p"
  "roto.CreateUserRequest\032\031.proto.CreateUse"
  "rResponse\"\000\022C\n\nDeleteUser\022\030.proto.Delete"
  "UserRequest\032\031.proto.DeleteUserResponse\"\000"
  "\022C\n\nUpdateUser\022\030.proto.UpdateUserRequest"
  "\032\031.proto.UpdateUserResponse\"\000\022L\n\rGetUser"
  "ByUuid\022\033.proto.GetUserByUuidRequest\032\034.pr"
  "oto.GetUserByUuidResponse\"\000\022L\n\rGetUserBy"
  "Name\022\033.proto.GetUserByNameRequest\032\034.prot"
  "o.GetUserByNameResponse\"\000\022C\n\nGetAllUser\022"
  "\030.proto.GetAllUserRequest\032\031.proto.GetAll"
  "UserResponse\"\000\022@\n\tUserLogin\022\027.proto.User"
  "LoginRequest\032\030.proto.UserLoginResponse\"\000"
  "\022C\n\nUserLogout\022\030.proto.UserLogoutRequest"
  "\032\031.proto.UserLogoutResponse\"\000\022p\n UserOnl"
  "ineHeartBeatNotifications\022&.proto.UserOn"
  "lineHeartBeatNotification\032\".proto.UserOn"
  "lineHeartBeatResponse\"\000\022g\n\026GetUserPermis"
  "sionGroup\022$.proto.GetUserPermissionGroup"
  "Request\032%.proto.GetUserPermissionGroupRe"
  "sponse\"\000\022m\n\030GetPermissionGroupByUuid\022&.p"
  "roto.GetPermissionGroupByUuidRequest\032\'.p"
  "roto.GetPermissionGroupByUuidResponse\"\000\022"
  "m\n\030GetPermissionGroupByName\022&.proto.GetP"
  "ermissionGroupByNameRequest\032\'.proto.GetP"
  "ermissionGroupByNameResponse\"\000\022d\n\025GetAll"
  "PermissionGroup\022#.proto.GetAllPermission"
  "GroupRequest\032$.proto.GetAllPermissionGro"
  "upResponse\"\000\022p\n\031ChangeUserPermissionGrou"
  "p\022\'.proto.ChangeUserPermissionGroupReque"
  "st\032(.proto.ChangeUserPermissionGroupResp"
  "onse\"\000\022L\n\rCreateProject\022\033.proto.CreatePr"
  "ojectRequest\032\034.proto.CreateProjectRespon"
  "se\"\000\022L\n\rDeleteProject\022\033.proto.DeleteProj"
  "ectRequest\032\034.proto.DeleteProjectResponse"
  "\"\000\022L\n\rUpdateProject\022\033.proto.UpdateProjec"
  "tRequest\032\034.proto.UpdateProjectResponse\"\000"
  "\022C\n\nGetProject\022\030.proto.GetProjectRequest"
  "\032\031.proto.GetProjectResponse\"\000\022L\n\rGetAllP"
  "roject\022\033.proto.GetAllProjectRequest\032\034.pr"
  "oto.GetAllProjectResponse\"\000\022@\n\tCreateSwc"
  "\022\027.proto.CreateSwcRequest\032\030.proto.Create"
  "SwcResponse\"\000\022@\n\tDeleteSwc\022\027.proto.Delet"
  "eSwcRequest\032\030.proto.DeleteSwcResponse\"\000\022"
  "@\n\tUpdateSwc\022\027.proto.UpdateSwcRequest\032\030."
  "proto.UpdateSwcResponse\"\000\022O\n\016GetSwcMetaI"
  "nfo\022\034.proto.GetSwcMetaInfoRequest\032\035.prot"
  "o.GetSwcMetaInfoResponse\"\000\022X\n\021GetAllSwcM"
  "etaInfo\022\037.proto.GetAllSwcMetaInfoRequest"
  "\032 .proto.GetAllSwcMetaInfoResponse\"\000\022X\n\021"
  "CreateSwcSnapshot\022\037.proto.CreateSwcSnaps"
  "hotRequest\032 .proto.CreateSwcSnapshotResp"
  "onse\"\000\022g\n\026GetAllSnapshotMetaInfo\022$.proto"
  ".GetAllSnapshotMetaInfoRequest\032%.proto.G"
  "etAllSnapshotMetaInfoResponse\"\000\022F\n\013GetSn"
  "apshot\022\031.proto.GetSnapshotRequest\032\032.prot"
  "o.GetSnapshotResponse\"\000\022\205\001\n GetAllIncrem"
  "entOperationMetaInfo\022..proto.GetAllIncre"
  "mentOperationMetaInfoRequest\032/.proto.Get"
  "AllIncrementOperationMetaInfoResponse\"\000\022"
  "d\n\025GetIncrementOperation\022#.proto.GetIncr"
  "ementOperationRequest\032$.proto.GetIncreme"
  "ntOperationResponse\"\000\022X\n\021CreateSwcNodeDa"
  "ta\022\037.proto.CreateSwcNodeDataRequest\032 .pr"
  "oto.CreateSwcNodeDataResponse\"\000\022X\n\021Delet"
  "eSwcNodeData\022\037.proto.DeleteSwcNodeDataRe"
  "quest\032 .proto.DeleteSwcNodeDataResponse\""
  "\000\022X\n\021UpdateSwcNodeData\022\037.proto.UpdateSwc"
  "NodeDataRequest\032 .proto.UpdateSwcNodeDat"
  "aResponse\"\000\022O\n\016GetSwcNodeData\022\034.proto.Ge"
  "tSwcNodeDataRequest\032\035.proto.GetSwcNodeDa"
  "taResponse\"\000\022[\n\022GetSwcFullNodeData\022 .pro"
  "to.GetSwcFullNodeDataRequest\032!.proto.Get"
  "SwcFullNodeDataResponse\"\000\022\202\001\n\037GetSwcNode"
  "DataListByTimeAndUser\022-.proto.GetSwcNode"
  "DataListByTimeAndUserRequest\032..proto.Get"
  "SwcNodeDataListByTimeAndUserResponse\"\000\022d"
  "\n\025CreateDailyStatistics\022#.proto.CreateDa"
  "ilyStatisticsRequest\032$.proto.CreateDaily"
  "StatisticsResponse\"\000\022d\n\025DeleteDailyStati"
  "stics\022#.proto.DeleteDailyStatisticsReque"
  "st\032$.proto.DeleteDailyStatisticsResponse"
  "\"\000\022d\n\025UpdateDailyStatistics\022#.proto.Upda"
  "teDailyStatisticsRequest\032$.proto.UpdateD"
  "ailyStatisticsResponse\"\000\022[\n\022GetDailyStat"
  "istics\022 .proto.GetDailyStatisticsRequest"
  "\032!.proto.GetDailyStatisticsResponse\"\000\022d\n"
  "\025GetAllDailyStatistics\022#.proto.GetAllDai"
  "lyStatisticsRequest\032$.proto.GetAllDailyS"
  "tatisticsResponse\"\000\022g\n\026CreateSwcAttachme"
  "ntAno\022$.proto.CreateSwcAttachmentAnoRequ"
  "est\032%.proto.CreateSwcAttachmentAnoRespon"
  "se\"\000\022g\n\026DeleteSwcAttachmentAno\022$.proto.D"
  "eleteSwcAttachmentAnoRequest\032%.proto.Del"
  "eteSwcAttachmentAnoResponse\"\000\022g\n\026UpdateS"
  "wcAttachmentAno\022$.proto.UpdateSwcAttachm"
  "entAnoRequest\032%.proto.UpdateSwcAttachmen"
  "tAnoResponse\"\000\022^\n\023GetSwcAttachmentAno\022!."
  "proto.GetSwcAttachmentAnoRequest\032\".proto"
  ".GetSwcAttachmentAnoResponse\"\000\022g\n\026Create"
  "SwcAttachmentApo\022$.proto.CreateSwcAttach"
  "mentApoRequest\032%.proto.CreateSwcAttachme"
  "ntApoResponse\"\000\022g\n\026DeleteSwcAttachmentAp"
  "o\022$.proto.DeleteSwcAttachmentApoRequest\032"
  "%.proto.DeleteSwcAttachmentApoResponse\"\000"
  "\022g\n\026UpdateSwcAttachmentApo\022$.proto.Updat"
  "eSwcAttachmentApoRequest\032%.proto.UpdateS"
  "wcAttachmentApoResponse\"\000\022^\n\023GetSwcAttac"
  "hmentApo\022!.proto.GetSwcAttachmentApoRequ"
  "est\032\".proto.GetSwcAttachmentApoResponse\""
  "\000\022U\n\020RevertSwcVersion\022\036.proto.RevertSwcV"
  "ersionRequest\032\037.proto.RevertSwcVersionRe"
  "sponse\"\000\022g\n\026CreateSwcAttachmentSwc\022$.pro"
  "to.CreateSwcAttachmentSwcRequest\032%.proto"
  ".CreateSwcAttachmentSwcResponse\"\000\022g\n\026Del"
  "eteSwcAttachmentSwc\022$.proto.DeleteSwcAtt"
  "achmentSwcRequest\032%.proto.DeleteSwcAttac"
  "hmentSwcResponse\"\000\022g\n\026UpdateSwcAttachmen"
  "tSwc\022$.proto.UpdateSwcAttachmentSwcReque"
  "st\032%.proto.UpdateSwcAttachmentSwcRespons"
  "e\"\000\022^\n\023GetSwcAttachmentSwc\022!.proto.GetSw"
  "cAttachmentSwcRequest\032\".proto.GetSwcAtta"
  "chmentSwcResponse\"\000\022d\n\025CreatePermissionG"
  "roup\022#.proto.CreatePermissionGroupReques"
  "t\032$.proto.CreatePermissionGroupResponse\""
  "\000\022d\n\025DeletePermissionGroup\022#.proto.Delet"
  "ePermissionGroupRequest\032$.proto.DeletePe"
  "rmissionGroupResponse\"\000\022d\n\025UpdatePermiss"
  "ionGroup\022#.proto.UpdatePermissionGroupRe"
  "quest\032$.proto.UpdatePermissionGroupRespo"
  "nse\"\000\022\202\001\n\037GetProjectSwcNamesByProjectUui"
  "d\022-.proto.GetProjectSwcNamesByProjectUui"
  "dRequest\032..proto.GetProjectSwcNamesByPro"
  "jectUuidResponse\"\000\022a\n\024UpdateSwcNParentIn"
  "fo\022\".proto.UpdateSwcNParentInfoRequest\032#"
  ".proto.UpdateSwcNParentInfoResponse\"\000\022L\n"
  "\rClearAllNodes\022\033.proto.ClearAllNodesRequ"
  "est\032\034.proto.ClearAllNodesResponse\"\000B/Z-D"
  "BMS/SwcDbmsCommon/Generated/go/proto/ser"
  "viceP\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Service_2fService_2eproto_deps[4] = {
  &::descriptor_table_Message_2fMessage_2eproto,
  &::descriptor_table_Message_2fRequest_2eproto,
  &::descriptor_table_Message_2fResponse_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::_pbi::once_flag descriptor_table_Service_2fService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Service_2fService_2eproto = {
    false, false, 5694, descriptor_table_protodef_Service_2fService_2eproto,
    "Service/Service.proto",
    &descriptor_table_Service_2fService_2eproto_once, descriptor_table_Service_2fService_2eproto_deps, 4, 0,
    schemas, file_default_instances, TableStruct_Service_2fService_2eproto::offsets,
    nullptr, file_level_enum_descriptors_Service_2fService_2eproto,
    file_level_service_descriptors_Service_2fService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Service_2fService_2eproto_getter() {
  return &descriptor_table_Service_2fService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Service_2fService_2eproto(&descriptor_table_Service_2fService_2eproto);
namespace proto {

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
