
// Generated from TSqlParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "TSqlParserListener.h"


namespace parser {

/**
 * This class provides an empty implementation of TSqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TSqlParserBaseListener : public TSqlParserListener {
public:

  virtual void enterTsql_file(TSqlParser::Tsql_fileContext * /*ctx*/) override { }
  virtual void exitTsql_file(TSqlParser::Tsql_fileContext * /*ctx*/) override { }

  virtual void enterBatch(TSqlParser::BatchContext * /*ctx*/) override { }
  virtual void exitBatch(TSqlParser::BatchContext * /*ctx*/) override { }

  virtual void enterBatch_level_statement(TSqlParser::Batch_level_statementContext * /*ctx*/) override { }
  virtual void exitBatch_level_statement(TSqlParser::Batch_level_statementContext * /*ctx*/) override { }

  virtual void enterSql_clauses(TSqlParser::Sql_clausesContext * /*ctx*/) override { }
  virtual void exitSql_clauses(TSqlParser::Sql_clausesContext * /*ctx*/) override { }

  virtual void enterDml_clause(TSqlParser::Dml_clauseContext * /*ctx*/) override { }
  virtual void exitDml_clause(TSqlParser::Dml_clauseContext * /*ctx*/) override { }

  virtual void enterDdl_clause(TSqlParser::Ddl_clauseContext * /*ctx*/) override { }
  virtual void exitDdl_clause(TSqlParser::Ddl_clauseContext * /*ctx*/) override { }

  virtual void enterBackup_statement(TSqlParser::Backup_statementContext * /*ctx*/) override { }
  virtual void exitBackup_statement(TSqlParser::Backup_statementContext * /*ctx*/) override { }

  virtual void enterCfl_statement(TSqlParser::Cfl_statementContext * /*ctx*/) override { }
  virtual void exitCfl_statement(TSqlParser::Cfl_statementContext * /*ctx*/) override { }

  virtual void enterBlock_statement(TSqlParser::Block_statementContext * /*ctx*/) override { }
  virtual void exitBlock_statement(TSqlParser::Block_statementContext * /*ctx*/) override { }

  virtual void enterBreak_statement(TSqlParser::Break_statementContext * /*ctx*/) override { }
  virtual void exitBreak_statement(TSqlParser::Break_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(TSqlParser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(TSqlParser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterGoto_statement(TSqlParser::Goto_statementContext * /*ctx*/) override { }
  virtual void exitGoto_statement(TSqlParser::Goto_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(TSqlParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(TSqlParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(TSqlParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(TSqlParser::If_statementContext * /*ctx*/) override { }

  virtual void enterThrow_statement(TSqlParser::Throw_statementContext * /*ctx*/) override { }
  virtual void exitThrow_statement(TSqlParser::Throw_statementContext * /*ctx*/) override { }

  virtual void enterThrow_error_number(TSqlParser::Throw_error_numberContext * /*ctx*/) override { }
  virtual void exitThrow_error_number(TSqlParser::Throw_error_numberContext * /*ctx*/) override { }

  virtual void enterThrow_message(TSqlParser::Throw_messageContext * /*ctx*/) override { }
  virtual void exitThrow_message(TSqlParser::Throw_messageContext * /*ctx*/) override { }

  virtual void enterThrow_state(TSqlParser::Throw_stateContext * /*ctx*/) override { }
  virtual void exitThrow_state(TSqlParser::Throw_stateContext * /*ctx*/) override { }

  virtual void enterTry_catch_statement(TSqlParser::Try_catch_statementContext * /*ctx*/) override { }
  virtual void exitTry_catch_statement(TSqlParser::Try_catch_statementContext * /*ctx*/) override { }

  virtual void enterWaitfor_statement(TSqlParser::Waitfor_statementContext * /*ctx*/) override { }
  virtual void exitWaitfor_statement(TSqlParser::Waitfor_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(TSqlParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(TSqlParser::While_statementContext * /*ctx*/) override { }

  virtual void enterPrint_statement(TSqlParser::Print_statementContext * /*ctx*/) override { }
  virtual void exitPrint_statement(TSqlParser::Print_statementContext * /*ctx*/) override { }

  virtual void enterRaiseerror_statement(TSqlParser::Raiseerror_statementContext * /*ctx*/) override { }
  virtual void exitRaiseerror_statement(TSqlParser::Raiseerror_statementContext * /*ctx*/) override { }

  virtual void enterEmpty_statement(TSqlParser::Empty_statementContext * /*ctx*/) override { }
  virtual void exitEmpty_statement(TSqlParser::Empty_statementContext * /*ctx*/) override { }

  virtual void enterAnother_statement(TSqlParser::Another_statementContext * /*ctx*/) override { }
  virtual void exitAnother_statement(TSqlParser::Another_statementContext * /*ctx*/) override { }

  virtual void enterAlter_application_role(TSqlParser::Alter_application_roleContext * /*ctx*/) override { }
  virtual void exitAlter_application_role(TSqlParser::Alter_application_roleContext * /*ctx*/) override { }

  virtual void enterAlter_xml_schema_collection(TSqlParser::Alter_xml_schema_collectionContext * /*ctx*/) override { }
  virtual void exitAlter_xml_schema_collection(TSqlParser::Alter_xml_schema_collectionContext * /*ctx*/) override { }

  virtual void enterCreate_application_role(TSqlParser::Create_application_roleContext * /*ctx*/) override { }
  virtual void exitCreate_application_role(TSqlParser::Create_application_roleContext * /*ctx*/) override { }

  virtual void enterDrop_aggregate(TSqlParser::Drop_aggregateContext * /*ctx*/) override { }
  virtual void exitDrop_aggregate(TSqlParser::Drop_aggregateContext * /*ctx*/) override { }

  virtual void enterDrop_application_role(TSqlParser::Drop_application_roleContext * /*ctx*/) override { }
  virtual void exitDrop_application_role(TSqlParser::Drop_application_roleContext * /*ctx*/) override { }

  virtual void enterAlter_assembly(TSqlParser::Alter_assemblyContext * /*ctx*/) override { }
  virtual void exitAlter_assembly(TSqlParser::Alter_assemblyContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_start(TSqlParser::Alter_assembly_startContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_start(TSqlParser::Alter_assembly_startContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_clause(TSqlParser::Alter_assembly_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_clause(TSqlParser::Alter_assembly_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_from_clause(TSqlParser::Alter_assembly_from_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_from_clause(TSqlParser::Alter_assembly_from_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_from_clause_start(TSqlParser::Alter_assembly_from_clause_startContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_from_clause_start(TSqlParser::Alter_assembly_from_clause_startContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_drop_clause(TSqlParser::Alter_assembly_drop_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_drop_clause(TSqlParser::Alter_assembly_drop_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_drop_multiple_files(TSqlParser::Alter_assembly_drop_multiple_filesContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_drop_multiple_files(TSqlParser::Alter_assembly_drop_multiple_filesContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_drop(TSqlParser::Alter_assembly_dropContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_drop(TSqlParser::Alter_assembly_dropContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_add_clause(TSqlParser::Alter_assembly_add_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_add_clause(TSqlParser::Alter_assembly_add_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_asssembly_add_clause_start(TSqlParser::Alter_asssembly_add_clause_startContext * /*ctx*/) override { }
  virtual void exitAlter_asssembly_add_clause_start(TSqlParser::Alter_asssembly_add_clause_startContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_client_file_clause(TSqlParser::Alter_assembly_client_file_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_client_file_clause(TSqlParser::Alter_assembly_client_file_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_file_name(TSqlParser::Alter_assembly_file_nameContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_file_name(TSqlParser::Alter_assembly_file_nameContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_file_bits(TSqlParser::Alter_assembly_file_bitsContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_file_bits(TSqlParser::Alter_assembly_file_bitsContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_as(TSqlParser::Alter_assembly_asContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_as(TSqlParser::Alter_assembly_asContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_with_clause(TSqlParser::Alter_assembly_with_clauseContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_with_clause(TSqlParser::Alter_assembly_with_clauseContext * /*ctx*/) override { }

  virtual void enterAlter_assembly_with(TSqlParser::Alter_assembly_withContext * /*ctx*/) override { }
  virtual void exitAlter_assembly_with(TSqlParser::Alter_assembly_withContext * /*ctx*/) override { }

  virtual void enterClient_assembly_specifier(TSqlParser::Client_assembly_specifierContext * /*ctx*/) override { }
  virtual void exitClient_assembly_specifier(TSqlParser::Client_assembly_specifierContext * /*ctx*/) override { }

  virtual void enterAssembly_option(TSqlParser::Assembly_optionContext * /*ctx*/) override { }
  virtual void exitAssembly_option(TSqlParser::Assembly_optionContext * /*ctx*/) override { }

  virtual void enterNetwork_file_share(TSqlParser::Network_file_shareContext * /*ctx*/) override { }
  virtual void exitNetwork_file_share(TSqlParser::Network_file_shareContext * /*ctx*/) override { }

  virtual void enterNetwork_computer(TSqlParser::Network_computerContext * /*ctx*/) override { }
  virtual void exitNetwork_computer(TSqlParser::Network_computerContext * /*ctx*/) override { }

  virtual void enterNetwork_file_start(TSqlParser::Network_file_startContext * /*ctx*/) override { }
  virtual void exitNetwork_file_start(TSqlParser::Network_file_startContext * /*ctx*/) override { }

  virtual void enterFile_path(TSqlParser::File_pathContext * /*ctx*/) override { }
  virtual void exitFile_path(TSqlParser::File_pathContext * /*ctx*/) override { }

  virtual void enterFile_directory_path_separator(TSqlParser::File_directory_path_separatorContext * /*ctx*/) override { }
  virtual void exitFile_directory_path_separator(TSqlParser::File_directory_path_separatorContext * /*ctx*/) override { }

  virtual void enterLocal_file(TSqlParser::Local_fileContext * /*ctx*/) override { }
  virtual void exitLocal_file(TSqlParser::Local_fileContext * /*ctx*/) override { }

  virtual void enterLocal_drive(TSqlParser::Local_driveContext * /*ctx*/) override { }
  virtual void exitLocal_drive(TSqlParser::Local_driveContext * /*ctx*/) override { }

  virtual void enterMultiple_local_files(TSqlParser::Multiple_local_filesContext * /*ctx*/) override { }
  virtual void exitMultiple_local_files(TSqlParser::Multiple_local_filesContext * /*ctx*/) override { }

  virtual void enterMultiple_local_file_start(TSqlParser::Multiple_local_file_startContext * /*ctx*/) override { }
  virtual void exitMultiple_local_file_start(TSqlParser::Multiple_local_file_startContext * /*ctx*/) override { }

  virtual void enterCreate_assembly(TSqlParser::Create_assemblyContext * /*ctx*/) override { }
  virtual void exitCreate_assembly(TSqlParser::Create_assemblyContext * /*ctx*/) override { }

  virtual void enterDrop_assembly(TSqlParser::Drop_assemblyContext * /*ctx*/) override { }
  virtual void exitDrop_assembly(TSqlParser::Drop_assemblyContext * /*ctx*/) override { }

  virtual void enterAlter_asymmetric_key(TSqlParser::Alter_asymmetric_keyContext * /*ctx*/) override { }
  virtual void exitAlter_asymmetric_key(TSqlParser::Alter_asymmetric_keyContext * /*ctx*/) override { }

  virtual void enterAlter_asymmetric_key_start(TSqlParser::Alter_asymmetric_key_startContext * /*ctx*/) override { }
  virtual void exitAlter_asymmetric_key_start(TSqlParser::Alter_asymmetric_key_startContext * /*ctx*/) override { }

  virtual void enterAsymmetric_key_option(TSqlParser::Asymmetric_key_optionContext * /*ctx*/) override { }
  virtual void exitAsymmetric_key_option(TSqlParser::Asymmetric_key_optionContext * /*ctx*/) override { }

  virtual void enterAsymmetric_key_option_start(TSqlParser::Asymmetric_key_option_startContext * /*ctx*/) override { }
  virtual void exitAsymmetric_key_option_start(TSqlParser::Asymmetric_key_option_startContext * /*ctx*/) override { }

  virtual void enterAsymmetric_key_password_change_option(TSqlParser::Asymmetric_key_password_change_optionContext * /*ctx*/) override { }
  virtual void exitAsymmetric_key_password_change_option(TSqlParser::Asymmetric_key_password_change_optionContext * /*ctx*/) override { }

  virtual void enterCreate_asymmetric_key(TSqlParser::Create_asymmetric_keyContext * /*ctx*/) override { }
  virtual void exitCreate_asymmetric_key(TSqlParser::Create_asymmetric_keyContext * /*ctx*/) override { }

  virtual void enterDrop_asymmetric_key(TSqlParser::Drop_asymmetric_keyContext * /*ctx*/) override { }
  virtual void exitDrop_asymmetric_key(TSqlParser::Drop_asymmetric_keyContext * /*ctx*/) override { }

  virtual void enterAlter_authorization(TSqlParser::Alter_authorizationContext * /*ctx*/) override { }
  virtual void exitAlter_authorization(TSqlParser::Alter_authorizationContext * /*ctx*/) override { }

  virtual void enterAuthorization_grantee(TSqlParser::Authorization_granteeContext * /*ctx*/) override { }
  virtual void exitAuthorization_grantee(TSqlParser::Authorization_granteeContext * /*ctx*/) override { }

  virtual void enterEntity_to(TSqlParser::Entity_toContext * /*ctx*/) override { }
  virtual void exitEntity_to(TSqlParser::Entity_toContext * /*ctx*/) override { }

  virtual void enterColon_colon(TSqlParser::Colon_colonContext * /*ctx*/) override { }
  virtual void exitColon_colon(TSqlParser::Colon_colonContext * /*ctx*/) override { }

  virtual void enterAlter_authorization_start(TSqlParser::Alter_authorization_startContext * /*ctx*/) override { }
  virtual void exitAlter_authorization_start(TSqlParser::Alter_authorization_startContext * /*ctx*/) override { }

  virtual void enterAlter_authorization_for_sql_database(TSqlParser::Alter_authorization_for_sql_databaseContext * /*ctx*/) override { }
  virtual void exitAlter_authorization_for_sql_database(TSqlParser::Alter_authorization_for_sql_databaseContext * /*ctx*/) override { }

  virtual void enterAlter_authorization_for_azure_dw(TSqlParser::Alter_authorization_for_azure_dwContext * /*ctx*/) override { }
  virtual void exitAlter_authorization_for_azure_dw(TSqlParser::Alter_authorization_for_azure_dwContext * /*ctx*/) override { }

  virtual void enterAlter_authorization_for_parallel_dw(TSqlParser::Alter_authorization_for_parallel_dwContext * /*ctx*/) override { }
  virtual void exitAlter_authorization_for_parallel_dw(TSqlParser::Alter_authorization_for_parallel_dwContext * /*ctx*/) override { }

  virtual void enterClass_type(TSqlParser::Class_typeContext * /*ctx*/) override { }
  virtual void exitClass_type(TSqlParser::Class_typeContext * /*ctx*/) override { }

  virtual void enterClass_type_for_sql_database(TSqlParser::Class_type_for_sql_databaseContext * /*ctx*/) override { }
  virtual void exitClass_type_for_sql_database(TSqlParser::Class_type_for_sql_databaseContext * /*ctx*/) override { }

  virtual void enterClass_type_for_azure_dw(TSqlParser::Class_type_for_azure_dwContext * /*ctx*/) override { }
  virtual void exitClass_type_for_azure_dw(TSqlParser::Class_type_for_azure_dwContext * /*ctx*/) override { }

  virtual void enterClass_type_for_parallel_dw(TSqlParser::Class_type_for_parallel_dwContext * /*ctx*/) override { }
  virtual void exitClass_type_for_parallel_dw(TSqlParser::Class_type_for_parallel_dwContext * /*ctx*/) override { }

  virtual void enterClass_type_for_grant(TSqlParser::Class_type_for_grantContext * /*ctx*/) override { }
  virtual void exitClass_type_for_grant(TSqlParser::Class_type_for_grantContext * /*ctx*/) override { }

  virtual void enterDrop_availability_group(TSqlParser::Drop_availability_groupContext * /*ctx*/) override { }
  virtual void exitDrop_availability_group(TSqlParser::Drop_availability_groupContext * /*ctx*/) override { }

  virtual void enterAlter_availability_group(TSqlParser::Alter_availability_groupContext * /*ctx*/) override { }
  virtual void exitAlter_availability_group(TSqlParser::Alter_availability_groupContext * /*ctx*/) override { }

  virtual void enterAlter_availability_group_start(TSqlParser::Alter_availability_group_startContext * /*ctx*/) override { }
  virtual void exitAlter_availability_group_start(TSqlParser::Alter_availability_group_startContext * /*ctx*/) override { }

  virtual void enterAlter_availability_group_options(TSqlParser::Alter_availability_group_optionsContext * /*ctx*/) override { }
  virtual void exitAlter_availability_group_options(TSqlParser::Alter_availability_group_optionsContext * /*ctx*/) override { }

  virtual void enterIp_v4_failover(TSqlParser::Ip_v4_failoverContext * /*ctx*/) override { }
  virtual void exitIp_v4_failover(TSqlParser::Ip_v4_failoverContext * /*ctx*/) override { }

  virtual void enterIp_v6_failover(TSqlParser::Ip_v6_failoverContext * /*ctx*/) override { }
  virtual void exitIp_v6_failover(TSqlParser::Ip_v6_failoverContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_broker_priority(TSqlParser::Create_or_alter_broker_priorityContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_broker_priority(TSqlParser::Create_or_alter_broker_priorityContext * /*ctx*/) override { }

  virtual void enterDrop_broker_priority(TSqlParser::Drop_broker_priorityContext * /*ctx*/) override { }
  virtual void exitDrop_broker_priority(TSqlParser::Drop_broker_priorityContext * /*ctx*/) override { }

  virtual void enterAlter_certificate(TSqlParser::Alter_certificateContext * /*ctx*/) override { }
  virtual void exitAlter_certificate(TSqlParser::Alter_certificateContext * /*ctx*/) override { }

  virtual void enterAlter_column_encryption_key(TSqlParser::Alter_column_encryption_keyContext * /*ctx*/) override { }
  virtual void exitAlter_column_encryption_key(TSqlParser::Alter_column_encryption_keyContext * /*ctx*/) override { }

  virtual void enterCreate_column_encryption_key(TSqlParser::Create_column_encryption_keyContext * /*ctx*/) override { }
  virtual void exitCreate_column_encryption_key(TSqlParser::Create_column_encryption_keyContext * /*ctx*/) override { }

  virtual void enterDrop_certificate(TSqlParser::Drop_certificateContext * /*ctx*/) override { }
  virtual void exitDrop_certificate(TSqlParser::Drop_certificateContext * /*ctx*/) override { }

  virtual void enterDrop_column_encryption_key(TSqlParser::Drop_column_encryption_keyContext * /*ctx*/) override { }
  virtual void exitDrop_column_encryption_key(TSqlParser::Drop_column_encryption_keyContext * /*ctx*/) override { }

  virtual void enterDrop_column_master_key(TSqlParser::Drop_column_master_keyContext * /*ctx*/) override { }
  virtual void exitDrop_column_master_key(TSqlParser::Drop_column_master_keyContext * /*ctx*/) override { }

  virtual void enterDrop_contract(TSqlParser::Drop_contractContext * /*ctx*/) override { }
  virtual void exitDrop_contract(TSqlParser::Drop_contractContext * /*ctx*/) override { }

  virtual void enterDrop_credential(TSqlParser::Drop_credentialContext * /*ctx*/) override { }
  virtual void exitDrop_credential(TSqlParser::Drop_credentialContext * /*ctx*/) override { }

  virtual void enterDrop_cryptograhic_provider(TSqlParser::Drop_cryptograhic_providerContext * /*ctx*/) override { }
  virtual void exitDrop_cryptograhic_provider(TSqlParser::Drop_cryptograhic_providerContext * /*ctx*/) override { }

  virtual void enterDrop_database(TSqlParser::Drop_databaseContext * /*ctx*/) override { }
  virtual void exitDrop_database(TSqlParser::Drop_databaseContext * /*ctx*/) override { }

  virtual void enterDrop_database_audit_specification(TSqlParser::Drop_database_audit_specificationContext * /*ctx*/) override { }
  virtual void exitDrop_database_audit_specification(TSqlParser::Drop_database_audit_specificationContext * /*ctx*/) override { }

  virtual void enterDrop_database_encryption_key(TSqlParser::Drop_database_encryption_keyContext * /*ctx*/) override { }
  virtual void exitDrop_database_encryption_key(TSqlParser::Drop_database_encryption_keyContext * /*ctx*/) override { }

  virtual void enterDrop_database_scoped_credential(TSqlParser::Drop_database_scoped_credentialContext * /*ctx*/) override { }
  virtual void exitDrop_database_scoped_credential(TSqlParser::Drop_database_scoped_credentialContext * /*ctx*/) override { }

  virtual void enterDrop_default(TSqlParser::Drop_defaultContext * /*ctx*/) override { }
  virtual void exitDrop_default(TSqlParser::Drop_defaultContext * /*ctx*/) override { }

  virtual void enterDrop_endpoint(TSqlParser::Drop_endpointContext * /*ctx*/) override { }
  virtual void exitDrop_endpoint(TSqlParser::Drop_endpointContext * /*ctx*/) override { }

  virtual void enterDrop_external_data_source(TSqlParser::Drop_external_data_sourceContext * /*ctx*/) override { }
  virtual void exitDrop_external_data_source(TSqlParser::Drop_external_data_sourceContext * /*ctx*/) override { }

  virtual void enterDrop_external_file_format(TSqlParser::Drop_external_file_formatContext * /*ctx*/) override { }
  virtual void exitDrop_external_file_format(TSqlParser::Drop_external_file_formatContext * /*ctx*/) override { }

  virtual void enterDrop_external_library(TSqlParser::Drop_external_libraryContext * /*ctx*/) override { }
  virtual void exitDrop_external_library(TSqlParser::Drop_external_libraryContext * /*ctx*/) override { }

  virtual void enterDrop_external_resource_pool(TSqlParser::Drop_external_resource_poolContext * /*ctx*/) override { }
  virtual void exitDrop_external_resource_pool(TSqlParser::Drop_external_resource_poolContext * /*ctx*/) override { }

  virtual void enterDrop_external_table(TSqlParser::Drop_external_tableContext * /*ctx*/) override { }
  virtual void exitDrop_external_table(TSqlParser::Drop_external_tableContext * /*ctx*/) override { }

  virtual void enterDrop_event_notifications(TSqlParser::Drop_event_notificationsContext * /*ctx*/) override { }
  virtual void exitDrop_event_notifications(TSqlParser::Drop_event_notificationsContext * /*ctx*/) override { }

  virtual void enterDrop_event_session(TSqlParser::Drop_event_sessionContext * /*ctx*/) override { }
  virtual void exitDrop_event_session(TSqlParser::Drop_event_sessionContext * /*ctx*/) override { }

  virtual void enterDrop_fulltext_catalog(TSqlParser::Drop_fulltext_catalogContext * /*ctx*/) override { }
  virtual void exitDrop_fulltext_catalog(TSqlParser::Drop_fulltext_catalogContext * /*ctx*/) override { }

  virtual void enterDrop_fulltext_index(TSqlParser::Drop_fulltext_indexContext * /*ctx*/) override { }
  virtual void exitDrop_fulltext_index(TSqlParser::Drop_fulltext_indexContext * /*ctx*/) override { }

  virtual void enterDrop_fulltext_stoplist(TSqlParser::Drop_fulltext_stoplistContext * /*ctx*/) override { }
  virtual void exitDrop_fulltext_stoplist(TSqlParser::Drop_fulltext_stoplistContext * /*ctx*/) override { }

  virtual void enterDrop_login(TSqlParser::Drop_loginContext * /*ctx*/) override { }
  virtual void exitDrop_login(TSqlParser::Drop_loginContext * /*ctx*/) override { }

  virtual void enterDrop_master_key(TSqlParser::Drop_master_keyContext * /*ctx*/) override { }
  virtual void exitDrop_master_key(TSqlParser::Drop_master_keyContext * /*ctx*/) override { }

  virtual void enterDrop_message_type(TSqlParser::Drop_message_typeContext * /*ctx*/) override { }
  virtual void exitDrop_message_type(TSqlParser::Drop_message_typeContext * /*ctx*/) override { }

  virtual void enterDrop_partition_function(TSqlParser::Drop_partition_functionContext * /*ctx*/) override { }
  virtual void exitDrop_partition_function(TSqlParser::Drop_partition_functionContext * /*ctx*/) override { }

  virtual void enterDrop_partition_scheme(TSqlParser::Drop_partition_schemeContext * /*ctx*/) override { }
  virtual void exitDrop_partition_scheme(TSqlParser::Drop_partition_schemeContext * /*ctx*/) override { }

  virtual void enterDrop_queue(TSqlParser::Drop_queueContext * /*ctx*/) override { }
  virtual void exitDrop_queue(TSqlParser::Drop_queueContext * /*ctx*/) override { }

  virtual void enterDrop_remote_service_binding(TSqlParser::Drop_remote_service_bindingContext * /*ctx*/) override { }
  virtual void exitDrop_remote_service_binding(TSqlParser::Drop_remote_service_bindingContext * /*ctx*/) override { }

  virtual void enterDrop_resource_pool(TSqlParser::Drop_resource_poolContext * /*ctx*/) override { }
  virtual void exitDrop_resource_pool(TSqlParser::Drop_resource_poolContext * /*ctx*/) override { }

  virtual void enterDrop_db_role(TSqlParser::Drop_db_roleContext * /*ctx*/) override { }
  virtual void exitDrop_db_role(TSqlParser::Drop_db_roleContext * /*ctx*/) override { }

  virtual void enterDrop_route(TSqlParser::Drop_routeContext * /*ctx*/) override { }
  virtual void exitDrop_route(TSqlParser::Drop_routeContext * /*ctx*/) override { }

  virtual void enterDrop_rule(TSqlParser::Drop_ruleContext * /*ctx*/) override { }
  virtual void exitDrop_rule(TSqlParser::Drop_ruleContext * /*ctx*/) override { }

  virtual void enterDrop_schema(TSqlParser::Drop_schemaContext * /*ctx*/) override { }
  virtual void exitDrop_schema(TSqlParser::Drop_schemaContext * /*ctx*/) override { }

  virtual void enterDrop_search_property_list(TSqlParser::Drop_search_property_listContext * /*ctx*/) override { }
  virtual void exitDrop_search_property_list(TSqlParser::Drop_search_property_listContext * /*ctx*/) override { }

  virtual void enterDrop_security_policy(TSqlParser::Drop_security_policyContext * /*ctx*/) override { }
  virtual void exitDrop_security_policy(TSqlParser::Drop_security_policyContext * /*ctx*/) override { }

  virtual void enterDrop_sequence(TSqlParser::Drop_sequenceContext * /*ctx*/) override { }
  virtual void exitDrop_sequence(TSqlParser::Drop_sequenceContext * /*ctx*/) override { }

  virtual void enterDrop_server_audit(TSqlParser::Drop_server_auditContext * /*ctx*/) override { }
  virtual void exitDrop_server_audit(TSqlParser::Drop_server_auditContext * /*ctx*/) override { }

  virtual void enterDrop_server_audit_specification(TSqlParser::Drop_server_audit_specificationContext * /*ctx*/) override { }
  virtual void exitDrop_server_audit_specification(TSqlParser::Drop_server_audit_specificationContext * /*ctx*/) override { }

  virtual void enterDrop_server_role(TSqlParser::Drop_server_roleContext * /*ctx*/) override { }
  virtual void exitDrop_server_role(TSqlParser::Drop_server_roleContext * /*ctx*/) override { }

  virtual void enterDrop_service(TSqlParser::Drop_serviceContext * /*ctx*/) override { }
  virtual void exitDrop_service(TSqlParser::Drop_serviceContext * /*ctx*/) override { }

  virtual void enterDrop_signature(TSqlParser::Drop_signatureContext * /*ctx*/) override { }
  virtual void exitDrop_signature(TSqlParser::Drop_signatureContext * /*ctx*/) override { }

  virtual void enterDrop_statistics_name_azure_dw_and_pdw(TSqlParser::Drop_statistics_name_azure_dw_and_pdwContext * /*ctx*/) override { }
  virtual void exitDrop_statistics_name_azure_dw_and_pdw(TSqlParser::Drop_statistics_name_azure_dw_and_pdwContext * /*ctx*/) override { }

  virtual void enterDrop_symmetric_key(TSqlParser::Drop_symmetric_keyContext * /*ctx*/) override { }
  virtual void exitDrop_symmetric_key(TSqlParser::Drop_symmetric_keyContext * /*ctx*/) override { }

  virtual void enterDrop_synonym(TSqlParser::Drop_synonymContext * /*ctx*/) override { }
  virtual void exitDrop_synonym(TSqlParser::Drop_synonymContext * /*ctx*/) override { }

  virtual void enterDrop_user(TSqlParser::Drop_userContext * /*ctx*/) override { }
  virtual void exitDrop_user(TSqlParser::Drop_userContext * /*ctx*/) override { }

  virtual void enterDrop_workload_group(TSqlParser::Drop_workload_groupContext * /*ctx*/) override { }
  virtual void exitDrop_workload_group(TSqlParser::Drop_workload_groupContext * /*ctx*/) override { }

  virtual void enterDrop_xml_schema_collection(TSqlParser::Drop_xml_schema_collectionContext * /*ctx*/) override { }
  virtual void exitDrop_xml_schema_collection(TSqlParser::Drop_xml_schema_collectionContext * /*ctx*/) override { }

  virtual void enterDisable_trigger(TSqlParser::Disable_triggerContext * /*ctx*/) override { }
  virtual void exitDisable_trigger(TSqlParser::Disable_triggerContext * /*ctx*/) override { }

  virtual void enterEnable_trigger(TSqlParser::Enable_triggerContext * /*ctx*/) override { }
  virtual void exitEnable_trigger(TSqlParser::Enable_triggerContext * /*ctx*/) override { }

  virtual void enterLock_table(TSqlParser::Lock_tableContext * /*ctx*/) override { }
  virtual void exitLock_table(TSqlParser::Lock_tableContext * /*ctx*/) override { }

  virtual void enterTruncate_table(TSqlParser::Truncate_tableContext * /*ctx*/) override { }
  virtual void exitTruncate_table(TSqlParser::Truncate_tableContext * /*ctx*/) override { }

  virtual void enterCreate_column_master_key(TSqlParser::Create_column_master_keyContext * /*ctx*/) override { }
  virtual void exitCreate_column_master_key(TSqlParser::Create_column_master_keyContext * /*ctx*/) override { }

  virtual void enterAlter_credential(TSqlParser::Alter_credentialContext * /*ctx*/) override { }
  virtual void exitAlter_credential(TSqlParser::Alter_credentialContext * /*ctx*/) override { }

  virtual void enterCreate_credential(TSqlParser::Create_credentialContext * /*ctx*/) override { }
  virtual void exitCreate_credential(TSqlParser::Create_credentialContext * /*ctx*/) override { }

  virtual void enterAlter_cryptographic_provider(TSqlParser::Alter_cryptographic_providerContext * /*ctx*/) override { }
  virtual void exitAlter_cryptographic_provider(TSqlParser::Alter_cryptographic_providerContext * /*ctx*/) override { }

  virtual void enterCreate_cryptographic_provider(TSqlParser::Create_cryptographic_providerContext * /*ctx*/) override { }
  virtual void exitCreate_cryptographic_provider(TSqlParser::Create_cryptographic_providerContext * /*ctx*/) override { }

  virtual void enterCreate_endpoint(TSqlParser::Create_endpointContext * /*ctx*/) override { }
  virtual void exitCreate_endpoint(TSqlParser::Create_endpointContext * /*ctx*/) override { }

  virtual void enterEndpoint_encryption_alogorithm_clause(TSqlParser::Endpoint_encryption_alogorithm_clauseContext * /*ctx*/) override { }
  virtual void exitEndpoint_encryption_alogorithm_clause(TSqlParser::Endpoint_encryption_alogorithm_clauseContext * /*ctx*/) override { }

  virtual void enterEndpoint_authentication_clause(TSqlParser::Endpoint_authentication_clauseContext * /*ctx*/) override { }
  virtual void exitEndpoint_authentication_clause(TSqlParser::Endpoint_authentication_clauseContext * /*ctx*/) override { }

  virtual void enterEndpoint_listener_clause(TSqlParser::Endpoint_listener_clauseContext * /*ctx*/) override { }
  virtual void exitEndpoint_listener_clause(TSqlParser::Endpoint_listener_clauseContext * /*ctx*/) override { }

  virtual void enterCreate_event_notification(TSqlParser::Create_event_notificationContext * /*ctx*/) override { }
  virtual void exitCreate_event_notification(TSqlParser::Create_event_notificationContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_event_session(TSqlParser::Create_or_alter_event_sessionContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_event_session(TSqlParser::Create_or_alter_event_sessionContext * /*ctx*/) override { }

  virtual void enterEvent_session_predicate_expression(TSqlParser::Event_session_predicate_expressionContext * /*ctx*/) override { }
  virtual void exitEvent_session_predicate_expression(TSqlParser::Event_session_predicate_expressionContext * /*ctx*/) override { }

  virtual void enterEvent_session_predicate_factor(TSqlParser::Event_session_predicate_factorContext * /*ctx*/) override { }
  virtual void exitEvent_session_predicate_factor(TSqlParser::Event_session_predicate_factorContext * /*ctx*/) override { }

  virtual void enterEvent_session_predicate_leaf(TSqlParser::Event_session_predicate_leafContext * /*ctx*/) override { }
  virtual void exitEvent_session_predicate_leaf(TSqlParser::Event_session_predicate_leafContext * /*ctx*/) override { }

  virtual void enterAlter_external_data_source(TSqlParser::Alter_external_data_sourceContext * /*ctx*/) override { }
  virtual void exitAlter_external_data_source(TSqlParser::Alter_external_data_sourceContext * /*ctx*/) override { }

  virtual void enterAlter_external_library(TSqlParser::Alter_external_libraryContext * /*ctx*/) override { }
  virtual void exitAlter_external_library(TSqlParser::Alter_external_libraryContext * /*ctx*/) override { }

  virtual void enterCreate_external_library(TSqlParser::Create_external_libraryContext * /*ctx*/) override { }
  virtual void exitCreate_external_library(TSqlParser::Create_external_libraryContext * /*ctx*/) override { }

  virtual void enterAlter_external_resource_pool(TSqlParser::Alter_external_resource_poolContext * /*ctx*/) override { }
  virtual void exitAlter_external_resource_pool(TSqlParser::Alter_external_resource_poolContext * /*ctx*/) override { }

  virtual void enterCreate_external_resource_pool(TSqlParser::Create_external_resource_poolContext * /*ctx*/) override { }
  virtual void exitCreate_external_resource_pool(TSqlParser::Create_external_resource_poolContext * /*ctx*/) override { }

  virtual void enterAlter_fulltext_catalog(TSqlParser::Alter_fulltext_catalogContext * /*ctx*/) override { }
  virtual void exitAlter_fulltext_catalog(TSqlParser::Alter_fulltext_catalogContext * /*ctx*/) override { }

  virtual void enterCreate_fulltext_catalog(TSqlParser::Create_fulltext_catalogContext * /*ctx*/) override { }
  virtual void exitCreate_fulltext_catalog(TSqlParser::Create_fulltext_catalogContext * /*ctx*/) override { }

  virtual void enterAlter_fulltext_stoplist(TSqlParser::Alter_fulltext_stoplistContext * /*ctx*/) override { }
  virtual void exitAlter_fulltext_stoplist(TSqlParser::Alter_fulltext_stoplistContext * /*ctx*/) override { }

  virtual void enterCreate_fulltext_stoplist(TSqlParser::Create_fulltext_stoplistContext * /*ctx*/) override { }
  virtual void exitCreate_fulltext_stoplist(TSqlParser::Create_fulltext_stoplistContext * /*ctx*/) override { }

  virtual void enterAlter_login_sql_server(TSqlParser::Alter_login_sql_serverContext * /*ctx*/) override { }
  virtual void exitAlter_login_sql_server(TSqlParser::Alter_login_sql_serverContext * /*ctx*/) override { }

  virtual void enterCreate_login_sql_server(TSqlParser::Create_login_sql_serverContext * /*ctx*/) override { }
  virtual void exitCreate_login_sql_server(TSqlParser::Create_login_sql_serverContext * /*ctx*/) override { }

  virtual void enterAlter_login_azure_sql(TSqlParser::Alter_login_azure_sqlContext * /*ctx*/) override { }
  virtual void exitAlter_login_azure_sql(TSqlParser::Alter_login_azure_sqlContext * /*ctx*/) override { }

  virtual void enterCreate_login_azure_sql(TSqlParser::Create_login_azure_sqlContext * /*ctx*/) override { }
  virtual void exitCreate_login_azure_sql(TSqlParser::Create_login_azure_sqlContext * /*ctx*/) override { }

  virtual void enterAlter_login_azure_sql_dw_and_pdw(TSqlParser::Alter_login_azure_sql_dw_and_pdwContext * /*ctx*/) override { }
  virtual void exitAlter_login_azure_sql_dw_and_pdw(TSqlParser::Alter_login_azure_sql_dw_and_pdwContext * /*ctx*/) override { }

  virtual void enterCreate_login_pdw(TSqlParser::Create_login_pdwContext * /*ctx*/) override { }
  virtual void exitCreate_login_pdw(TSqlParser::Create_login_pdwContext * /*ctx*/) override { }

  virtual void enterAlter_master_key_sql_server(TSqlParser::Alter_master_key_sql_serverContext * /*ctx*/) override { }
  virtual void exitAlter_master_key_sql_server(TSqlParser::Alter_master_key_sql_serverContext * /*ctx*/) override { }

  virtual void enterCreate_master_key_sql_server(TSqlParser::Create_master_key_sql_serverContext * /*ctx*/) override { }
  virtual void exitCreate_master_key_sql_server(TSqlParser::Create_master_key_sql_serverContext * /*ctx*/) override { }

  virtual void enterAlter_master_key_azure_sql(TSqlParser::Alter_master_key_azure_sqlContext * /*ctx*/) override { }
  virtual void exitAlter_master_key_azure_sql(TSqlParser::Alter_master_key_azure_sqlContext * /*ctx*/) override { }

  virtual void enterCreate_master_key_azure_sql(TSqlParser::Create_master_key_azure_sqlContext * /*ctx*/) override { }
  virtual void exitCreate_master_key_azure_sql(TSqlParser::Create_master_key_azure_sqlContext * /*ctx*/) override { }

  virtual void enterAlter_message_type(TSqlParser::Alter_message_typeContext * /*ctx*/) override { }
  virtual void exitAlter_message_type(TSqlParser::Alter_message_typeContext * /*ctx*/) override { }

  virtual void enterAlter_partition_function(TSqlParser::Alter_partition_functionContext * /*ctx*/) override { }
  virtual void exitAlter_partition_function(TSqlParser::Alter_partition_functionContext * /*ctx*/) override { }

  virtual void enterAlter_partition_scheme(TSqlParser::Alter_partition_schemeContext * /*ctx*/) override { }
  virtual void exitAlter_partition_scheme(TSqlParser::Alter_partition_schemeContext * /*ctx*/) override { }

  virtual void enterAlter_remote_service_binding(TSqlParser::Alter_remote_service_bindingContext * /*ctx*/) override { }
  virtual void exitAlter_remote_service_binding(TSqlParser::Alter_remote_service_bindingContext * /*ctx*/) override { }

  virtual void enterCreate_remote_service_binding(TSqlParser::Create_remote_service_bindingContext * /*ctx*/) override { }
  virtual void exitCreate_remote_service_binding(TSqlParser::Create_remote_service_bindingContext * /*ctx*/) override { }

  virtual void enterCreate_resource_pool(TSqlParser::Create_resource_poolContext * /*ctx*/) override { }
  virtual void exitCreate_resource_pool(TSqlParser::Create_resource_poolContext * /*ctx*/) override { }

  virtual void enterAlter_resource_governor(TSqlParser::Alter_resource_governorContext * /*ctx*/) override { }
  virtual void exitAlter_resource_governor(TSqlParser::Alter_resource_governorContext * /*ctx*/) override { }

  virtual void enterAlter_database_audit_specification(TSqlParser::Alter_database_audit_specificationContext * /*ctx*/) override { }
  virtual void exitAlter_database_audit_specification(TSqlParser::Alter_database_audit_specificationContext * /*ctx*/) override { }

  virtual void enterAudit_action_spec_group(TSqlParser::Audit_action_spec_groupContext * /*ctx*/) override { }
  virtual void exitAudit_action_spec_group(TSqlParser::Audit_action_spec_groupContext * /*ctx*/) override { }

  virtual void enterAudit_action_specification(TSqlParser::Audit_action_specificationContext * /*ctx*/) override { }
  virtual void exitAudit_action_specification(TSqlParser::Audit_action_specificationContext * /*ctx*/) override { }

  virtual void enterAction_specification(TSqlParser::Action_specificationContext * /*ctx*/) override { }
  virtual void exitAction_specification(TSqlParser::Action_specificationContext * /*ctx*/) override { }

  virtual void enterAudit_class_name(TSqlParser::Audit_class_nameContext * /*ctx*/) override { }
  virtual void exitAudit_class_name(TSqlParser::Audit_class_nameContext * /*ctx*/) override { }

  virtual void enterAudit_securable(TSqlParser::Audit_securableContext * /*ctx*/) override { }
  virtual void exitAudit_securable(TSqlParser::Audit_securableContext * /*ctx*/) override { }

  virtual void enterAlter_db_role(TSqlParser::Alter_db_roleContext * /*ctx*/) override { }
  virtual void exitAlter_db_role(TSqlParser::Alter_db_roleContext * /*ctx*/) override { }

  virtual void enterCreate_database_audit_specification(TSqlParser::Create_database_audit_specificationContext * /*ctx*/) override { }
  virtual void exitCreate_database_audit_specification(TSqlParser::Create_database_audit_specificationContext * /*ctx*/) override { }

  virtual void enterCreate_db_role(TSqlParser::Create_db_roleContext * /*ctx*/) override { }
  virtual void exitCreate_db_role(TSqlParser::Create_db_roleContext * /*ctx*/) override { }

  virtual void enterCreate_route(TSqlParser::Create_routeContext * /*ctx*/) override { }
  virtual void exitCreate_route(TSqlParser::Create_routeContext * /*ctx*/) override { }

  virtual void enterCreate_rule(TSqlParser::Create_ruleContext * /*ctx*/) override { }
  virtual void exitCreate_rule(TSqlParser::Create_ruleContext * /*ctx*/) override { }

  virtual void enterAlter_schema_sql(TSqlParser::Alter_schema_sqlContext * /*ctx*/) override { }
  virtual void exitAlter_schema_sql(TSqlParser::Alter_schema_sqlContext * /*ctx*/) override { }

  virtual void enterCreate_schema(TSqlParser::Create_schemaContext * /*ctx*/) override { }
  virtual void exitCreate_schema(TSqlParser::Create_schemaContext * /*ctx*/) override { }

  virtual void enterCreate_schema_azure_sql_dw_and_pdw(TSqlParser::Create_schema_azure_sql_dw_and_pdwContext * /*ctx*/) override { }
  virtual void exitCreate_schema_azure_sql_dw_and_pdw(TSqlParser::Create_schema_azure_sql_dw_and_pdwContext * /*ctx*/) override { }

  virtual void enterAlter_schema_azure_sql_dw_and_pdw(TSqlParser::Alter_schema_azure_sql_dw_and_pdwContext * /*ctx*/) override { }
  virtual void exitAlter_schema_azure_sql_dw_and_pdw(TSqlParser::Alter_schema_azure_sql_dw_and_pdwContext * /*ctx*/) override { }

  virtual void enterCreate_search_property_list(TSqlParser::Create_search_property_listContext * /*ctx*/) override { }
  virtual void exitCreate_search_property_list(TSqlParser::Create_search_property_listContext * /*ctx*/) override { }

  virtual void enterCreate_security_policy(TSqlParser::Create_security_policyContext * /*ctx*/) override { }
  virtual void exitCreate_security_policy(TSqlParser::Create_security_policyContext * /*ctx*/) override { }

  virtual void enterAlter_sequence(TSqlParser::Alter_sequenceContext * /*ctx*/) override { }
  virtual void exitAlter_sequence(TSqlParser::Alter_sequenceContext * /*ctx*/) override { }

  virtual void enterCreate_sequence(TSqlParser::Create_sequenceContext * /*ctx*/) override { }
  virtual void exitCreate_sequence(TSqlParser::Create_sequenceContext * /*ctx*/) override { }

  virtual void enterAlter_server_audit(TSqlParser::Alter_server_auditContext * /*ctx*/) override { }
  virtual void exitAlter_server_audit(TSqlParser::Alter_server_auditContext * /*ctx*/) override { }

  virtual void enterCreate_server_audit(TSqlParser::Create_server_auditContext * /*ctx*/) override { }
  virtual void exitCreate_server_audit(TSqlParser::Create_server_auditContext * /*ctx*/) override { }

  virtual void enterAlter_server_audit_specification(TSqlParser::Alter_server_audit_specificationContext * /*ctx*/) override { }
  virtual void exitAlter_server_audit_specification(TSqlParser::Alter_server_audit_specificationContext * /*ctx*/) override { }

  virtual void enterCreate_server_audit_specification(TSqlParser::Create_server_audit_specificationContext * /*ctx*/) override { }
  virtual void exitCreate_server_audit_specification(TSqlParser::Create_server_audit_specificationContext * /*ctx*/) override { }

  virtual void enterAlter_server_configuration(TSqlParser::Alter_server_configurationContext * /*ctx*/) override { }
  virtual void exitAlter_server_configuration(TSqlParser::Alter_server_configurationContext * /*ctx*/) override { }

  virtual void enterAlter_server_role(TSqlParser::Alter_server_roleContext * /*ctx*/) override { }
  virtual void exitAlter_server_role(TSqlParser::Alter_server_roleContext * /*ctx*/) override { }

  virtual void enterCreate_server_role(TSqlParser::Create_server_roleContext * /*ctx*/) override { }
  virtual void exitCreate_server_role(TSqlParser::Create_server_roleContext * /*ctx*/) override { }

  virtual void enterAlter_server_role_pdw(TSqlParser::Alter_server_role_pdwContext * /*ctx*/) override { }
  virtual void exitAlter_server_role_pdw(TSqlParser::Alter_server_role_pdwContext * /*ctx*/) override { }

  virtual void enterAlter_service(TSqlParser::Alter_serviceContext * /*ctx*/) override { }
  virtual void exitAlter_service(TSqlParser::Alter_serviceContext * /*ctx*/) override { }

  virtual void enterOpt_arg_clause(TSqlParser::Opt_arg_clauseContext * /*ctx*/) override { }
  virtual void exitOpt_arg_clause(TSqlParser::Opt_arg_clauseContext * /*ctx*/) override { }

  virtual void enterCreate_service(TSqlParser::Create_serviceContext * /*ctx*/) override { }
  virtual void exitCreate_service(TSqlParser::Create_serviceContext * /*ctx*/) override { }

  virtual void enterAlter_service_master_key(TSqlParser::Alter_service_master_keyContext * /*ctx*/) override { }
  virtual void exitAlter_service_master_key(TSqlParser::Alter_service_master_keyContext * /*ctx*/) override { }

  virtual void enterAlter_symmetric_key(TSqlParser::Alter_symmetric_keyContext * /*ctx*/) override { }
  virtual void exitAlter_symmetric_key(TSqlParser::Alter_symmetric_keyContext * /*ctx*/) override { }

  virtual void enterCreate_synonym(TSqlParser::Create_synonymContext * /*ctx*/) override { }
  virtual void exitCreate_synonym(TSqlParser::Create_synonymContext * /*ctx*/) override { }

  virtual void enterAlter_user(TSqlParser::Alter_userContext * /*ctx*/) override { }
  virtual void exitAlter_user(TSqlParser::Alter_userContext * /*ctx*/) override { }

  virtual void enterCreate_user(TSqlParser::Create_userContext * /*ctx*/) override { }
  virtual void exitCreate_user(TSqlParser::Create_userContext * /*ctx*/) override { }

  virtual void enterCreate_user_azure_sql_dw(TSqlParser::Create_user_azure_sql_dwContext * /*ctx*/) override { }
  virtual void exitCreate_user_azure_sql_dw(TSqlParser::Create_user_azure_sql_dwContext * /*ctx*/) override { }

  virtual void enterAlter_user_azure_sql(TSqlParser::Alter_user_azure_sqlContext * /*ctx*/) override { }
  virtual void exitAlter_user_azure_sql(TSqlParser::Alter_user_azure_sqlContext * /*ctx*/) override { }

  virtual void enterAlter_workload_group(TSqlParser::Alter_workload_groupContext * /*ctx*/) override { }
  virtual void exitAlter_workload_group(TSqlParser::Alter_workload_groupContext * /*ctx*/) override { }

  virtual void enterCreate_workload_group(TSqlParser::Create_workload_groupContext * /*ctx*/) override { }
  virtual void exitCreate_workload_group(TSqlParser::Create_workload_groupContext * /*ctx*/) override { }

  virtual void enterCreate_xml_schema_collection(TSqlParser::Create_xml_schema_collectionContext * /*ctx*/) override { }
  virtual void exitCreate_xml_schema_collection(TSqlParser::Create_xml_schema_collectionContext * /*ctx*/) override { }

  virtual void enterCreate_partition_function(TSqlParser::Create_partition_functionContext * /*ctx*/) override { }
  virtual void exitCreate_partition_function(TSqlParser::Create_partition_functionContext * /*ctx*/) override { }

  virtual void enterCreate_partition_scheme(TSqlParser::Create_partition_schemeContext * /*ctx*/) override { }
  virtual void exitCreate_partition_scheme(TSqlParser::Create_partition_schemeContext * /*ctx*/) override { }

  virtual void enterCreate_queue(TSqlParser::Create_queueContext * /*ctx*/) override { }
  virtual void exitCreate_queue(TSqlParser::Create_queueContext * /*ctx*/) override { }

  virtual void enterQueue_settings(TSqlParser::Queue_settingsContext * /*ctx*/) override { }
  virtual void exitQueue_settings(TSqlParser::Queue_settingsContext * /*ctx*/) override { }

  virtual void enterAlter_queue(TSqlParser::Alter_queueContext * /*ctx*/) override { }
  virtual void exitAlter_queue(TSqlParser::Alter_queueContext * /*ctx*/) override { }

  virtual void enterQueue_action(TSqlParser::Queue_actionContext * /*ctx*/) override { }
  virtual void exitQueue_action(TSqlParser::Queue_actionContext * /*ctx*/) override { }

  virtual void enterQueue_rebuild_options(TSqlParser::Queue_rebuild_optionsContext * /*ctx*/) override { }
  virtual void exitQueue_rebuild_options(TSqlParser::Queue_rebuild_optionsContext * /*ctx*/) override { }

  virtual void enterCreate_contract(TSqlParser::Create_contractContext * /*ctx*/) override { }
  virtual void exitCreate_contract(TSqlParser::Create_contractContext * /*ctx*/) override { }

  virtual void enterConversation_statement(TSqlParser::Conversation_statementContext * /*ctx*/) override { }
  virtual void exitConversation_statement(TSqlParser::Conversation_statementContext * /*ctx*/) override { }

  virtual void enterMessage_statement(TSqlParser::Message_statementContext * /*ctx*/) override { }
  virtual void exitMessage_statement(TSqlParser::Message_statementContext * /*ctx*/) override { }

  virtual void enterMerge_statement(TSqlParser::Merge_statementContext * /*ctx*/) override { }
  virtual void exitMerge_statement(TSqlParser::Merge_statementContext * /*ctx*/) override { }

  virtual void enterWhen_matches(TSqlParser::When_matchesContext * /*ctx*/) override { }
  virtual void exitWhen_matches(TSqlParser::When_matchesContext * /*ctx*/) override { }

  virtual void enterMerge_matched(TSqlParser::Merge_matchedContext * /*ctx*/) override { }
  virtual void exitMerge_matched(TSqlParser::Merge_matchedContext * /*ctx*/) override { }

  virtual void enterMerge_not_matched(TSqlParser::Merge_not_matchedContext * /*ctx*/) override { }
  virtual void exitMerge_not_matched(TSqlParser::Merge_not_matchedContext * /*ctx*/) override { }

  virtual void enterDelete_statement(TSqlParser::Delete_statementContext * /*ctx*/) override { }
  virtual void exitDelete_statement(TSqlParser::Delete_statementContext * /*ctx*/) override { }

  virtual void enterDelete_statement_from(TSqlParser::Delete_statement_fromContext * /*ctx*/) override { }
  virtual void exitDelete_statement_from(TSqlParser::Delete_statement_fromContext * /*ctx*/) override { }

  virtual void enterInsert_statement(TSqlParser::Insert_statementContext * /*ctx*/) override { }
  virtual void exitInsert_statement(TSqlParser::Insert_statementContext * /*ctx*/) override { }

  virtual void enterInsert_statement_value(TSqlParser::Insert_statement_valueContext * /*ctx*/) override { }
  virtual void exitInsert_statement_value(TSqlParser::Insert_statement_valueContext * /*ctx*/) override { }

  virtual void enterReceive_statement(TSqlParser::Receive_statementContext * /*ctx*/) override { }
  virtual void exitReceive_statement(TSqlParser::Receive_statementContext * /*ctx*/) override { }

  virtual void enterSelect_statement_standalone(TSqlParser::Select_statement_standaloneContext * /*ctx*/) override { }
  virtual void exitSelect_statement_standalone(TSqlParser::Select_statement_standaloneContext * /*ctx*/) override { }

  virtual void enterSelect_statement(TSqlParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(TSqlParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterTime(TSqlParser::TimeContext * /*ctx*/) override { }
  virtual void exitTime(TSqlParser::TimeContext * /*ctx*/) override { }

  virtual void enterUpdate_statement(TSqlParser::Update_statementContext * /*ctx*/) override { }
  virtual void exitUpdate_statement(TSqlParser::Update_statementContext * /*ctx*/) override { }

  virtual void enterOutput_clause(TSqlParser::Output_clauseContext * /*ctx*/) override { }
  virtual void exitOutput_clause(TSqlParser::Output_clauseContext * /*ctx*/) override { }

  virtual void enterOutput_dml_list_elem(TSqlParser::Output_dml_list_elemContext * /*ctx*/) override { }
  virtual void exitOutput_dml_list_elem(TSqlParser::Output_dml_list_elemContext * /*ctx*/) override { }

  virtual void enterCreate_database(TSqlParser::Create_databaseContext * /*ctx*/) override { }
  virtual void exitCreate_database(TSqlParser::Create_databaseContext * /*ctx*/) override { }

  virtual void enterCreate_index(TSqlParser::Create_indexContext * /*ctx*/) override { }
  virtual void exitCreate_index(TSqlParser::Create_indexContext * /*ctx*/) override { }

  virtual void enterCreate_index_options(TSqlParser::Create_index_optionsContext * /*ctx*/) override { }
  virtual void exitCreate_index_options(TSqlParser::Create_index_optionsContext * /*ctx*/) override { }

  virtual void enterRelational_index_option(TSqlParser::Relational_index_optionContext * /*ctx*/) override { }
  virtual void exitRelational_index_option(TSqlParser::Relational_index_optionContext * /*ctx*/) override { }

  virtual void enterAlter_index(TSqlParser::Alter_indexContext * /*ctx*/) override { }
  virtual void exitAlter_index(TSqlParser::Alter_indexContext * /*ctx*/) override { }

  virtual void enterResumable_index_options(TSqlParser::Resumable_index_optionsContext * /*ctx*/) override { }
  virtual void exitResumable_index_options(TSqlParser::Resumable_index_optionsContext * /*ctx*/) override { }

  virtual void enterResumable_index_option(TSqlParser::Resumable_index_optionContext * /*ctx*/) override { }
  virtual void exitResumable_index_option(TSqlParser::Resumable_index_optionContext * /*ctx*/) override { }

  virtual void enterReorganize_partition(TSqlParser::Reorganize_partitionContext * /*ctx*/) override { }
  virtual void exitReorganize_partition(TSqlParser::Reorganize_partitionContext * /*ctx*/) override { }

  virtual void enterReorganize_options(TSqlParser::Reorganize_optionsContext * /*ctx*/) override { }
  virtual void exitReorganize_options(TSqlParser::Reorganize_optionsContext * /*ctx*/) override { }

  virtual void enterReorganize_option(TSqlParser::Reorganize_optionContext * /*ctx*/) override { }
  virtual void exitReorganize_option(TSqlParser::Reorganize_optionContext * /*ctx*/) override { }

  virtual void enterSet_index_options(TSqlParser::Set_index_optionsContext * /*ctx*/) override { }
  virtual void exitSet_index_options(TSqlParser::Set_index_optionsContext * /*ctx*/) override { }

  virtual void enterSet_index_option(TSqlParser::Set_index_optionContext * /*ctx*/) override { }
  virtual void exitSet_index_option(TSqlParser::Set_index_optionContext * /*ctx*/) override { }

  virtual void enterRebuild_partition(TSqlParser::Rebuild_partitionContext * /*ctx*/) override { }
  virtual void exitRebuild_partition(TSqlParser::Rebuild_partitionContext * /*ctx*/) override { }

  virtual void enterRebuild_index_options(TSqlParser::Rebuild_index_optionsContext * /*ctx*/) override { }
  virtual void exitRebuild_index_options(TSqlParser::Rebuild_index_optionsContext * /*ctx*/) override { }

  virtual void enterRebuild_index_option(TSqlParser::Rebuild_index_optionContext * /*ctx*/) override { }
  virtual void exitRebuild_index_option(TSqlParser::Rebuild_index_optionContext * /*ctx*/) override { }

  virtual void enterSingle_partition_rebuild_index_options(TSqlParser::Single_partition_rebuild_index_optionsContext * /*ctx*/) override { }
  virtual void exitSingle_partition_rebuild_index_options(TSqlParser::Single_partition_rebuild_index_optionsContext * /*ctx*/) override { }

  virtual void enterSingle_partition_rebuild_index_option(TSqlParser::Single_partition_rebuild_index_optionContext * /*ctx*/) override { }
  virtual void exitSingle_partition_rebuild_index_option(TSqlParser::Single_partition_rebuild_index_optionContext * /*ctx*/) override { }

  virtual void enterOn_partitions(TSqlParser::On_partitionsContext * /*ctx*/) override { }
  virtual void exitOn_partitions(TSqlParser::On_partitionsContext * /*ctx*/) override { }

  virtual void enterCreate_columnstore_index(TSqlParser::Create_columnstore_indexContext * /*ctx*/) override { }
  virtual void exitCreate_columnstore_index(TSqlParser::Create_columnstore_indexContext * /*ctx*/) override { }

  virtual void enterCreate_columnstore_index_options(TSqlParser::Create_columnstore_index_optionsContext * /*ctx*/) override { }
  virtual void exitCreate_columnstore_index_options(TSqlParser::Create_columnstore_index_optionsContext * /*ctx*/) override { }

  virtual void enterColumnstore_index_option(TSqlParser::Columnstore_index_optionContext * /*ctx*/) override { }
  virtual void exitColumnstore_index_option(TSqlParser::Columnstore_index_optionContext * /*ctx*/) override { }

  virtual void enterCreate_nonclustered_columnstore_index(TSqlParser::Create_nonclustered_columnstore_indexContext * /*ctx*/) override { }
  virtual void exitCreate_nonclustered_columnstore_index(TSqlParser::Create_nonclustered_columnstore_indexContext * /*ctx*/) override { }

  virtual void enterCreate_xml_index(TSqlParser::Create_xml_indexContext * /*ctx*/) override { }
  virtual void exitCreate_xml_index(TSqlParser::Create_xml_indexContext * /*ctx*/) override { }

  virtual void enterXml_index_options(TSqlParser::Xml_index_optionsContext * /*ctx*/) override { }
  virtual void exitXml_index_options(TSqlParser::Xml_index_optionsContext * /*ctx*/) override { }

  virtual void enterXml_index_option(TSqlParser::Xml_index_optionContext * /*ctx*/) override { }
  virtual void exitXml_index_option(TSqlParser::Xml_index_optionContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_procedure(TSqlParser::Create_or_alter_procedureContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_procedure(TSqlParser::Create_or_alter_procedureContext * /*ctx*/) override { }

  virtual void enterAs_external_name(TSqlParser::As_external_nameContext * /*ctx*/) override { }
  virtual void exitAs_external_name(TSqlParser::As_external_nameContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_trigger(TSqlParser::Create_or_alter_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_trigger(TSqlParser::Create_or_alter_triggerContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_dml_trigger(TSqlParser::Create_or_alter_dml_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_dml_trigger(TSqlParser::Create_or_alter_dml_triggerContext * /*ctx*/) override { }

  virtual void enterDml_trigger_option(TSqlParser::Dml_trigger_optionContext * /*ctx*/) override { }
  virtual void exitDml_trigger_option(TSqlParser::Dml_trigger_optionContext * /*ctx*/) override { }

  virtual void enterDml_trigger_operation(TSqlParser::Dml_trigger_operationContext * /*ctx*/) override { }
  virtual void exitDml_trigger_operation(TSqlParser::Dml_trigger_operationContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_ddl_trigger(TSqlParser::Create_or_alter_ddl_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_ddl_trigger(TSqlParser::Create_or_alter_ddl_triggerContext * /*ctx*/) override { }

  virtual void enterDdl_trigger_operation(TSqlParser::Ddl_trigger_operationContext * /*ctx*/) override { }
  virtual void exitDdl_trigger_operation(TSqlParser::Ddl_trigger_operationContext * /*ctx*/) override { }

  virtual void enterCreate_or_alter_function(TSqlParser::Create_or_alter_functionContext * /*ctx*/) override { }
  virtual void exitCreate_or_alter_function(TSqlParser::Create_or_alter_functionContext * /*ctx*/) override { }

  virtual void enterFunc_body_returns_select(TSqlParser::Func_body_returns_selectContext * /*ctx*/) override { }
  virtual void exitFunc_body_returns_select(TSqlParser::Func_body_returns_selectContext * /*ctx*/) override { }

  virtual void enterFunc_body_returns_table(TSqlParser::Func_body_returns_tableContext * /*ctx*/) override { }
  virtual void exitFunc_body_returns_table(TSqlParser::Func_body_returns_tableContext * /*ctx*/) override { }

  virtual void enterFunc_body_returns_scalar(TSqlParser::Func_body_returns_scalarContext * /*ctx*/) override { }
  virtual void exitFunc_body_returns_scalar(TSqlParser::Func_body_returns_scalarContext * /*ctx*/) override { }

  virtual void enterProcedure_param_default_value(TSqlParser::Procedure_param_default_valueContext * /*ctx*/) override { }
  virtual void exitProcedure_param_default_value(TSqlParser::Procedure_param_default_valueContext * /*ctx*/) override { }

  virtual void enterProcedure_param(TSqlParser::Procedure_paramContext * /*ctx*/) override { }
  virtual void exitProcedure_param(TSqlParser::Procedure_paramContext * /*ctx*/) override { }

  virtual void enterProcedure_option(TSqlParser::Procedure_optionContext * /*ctx*/) override { }
  virtual void exitProcedure_option(TSqlParser::Procedure_optionContext * /*ctx*/) override { }

  virtual void enterFunction_option(TSqlParser::Function_optionContext * /*ctx*/) override { }
  virtual void exitFunction_option(TSqlParser::Function_optionContext * /*ctx*/) override { }

  virtual void enterCreate_statistics(TSqlParser::Create_statisticsContext * /*ctx*/) override { }
  virtual void exitCreate_statistics(TSqlParser::Create_statisticsContext * /*ctx*/) override { }

  virtual void enterUpdate_statistics(TSqlParser::Update_statisticsContext * /*ctx*/) override { }
  virtual void exitUpdate_statistics(TSqlParser::Update_statisticsContext * /*ctx*/) override { }

  virtual void enterUpdate_statistics_options(TSqlParser::Update_statistics_optionsContext * /*ctx*/) override { }
  virtual void exitUpdate_statistics_options(TSqlParser::Update_statistics_optionsContext * /*ctx*/) override { }

  virtual void enterUpdate_statistics_option(TSqlParser::Update_statistics_optionContext * /*ctx*/) override { }
  virtual void exitUpdate_statistics_option(TSqlParser::Update_statistics_optionContext * /*ctx*/) override { }

  virtual void enterCreate_table(TSqlParser::Create_tableContext * /*ctx*/) override { }
  virtual void exitCreate_table(TSqlParser::Create_tableContext * /*ctx*/) override { }

  virtual void enterTable_indices(TSqlParser::Table_indicesContext * /*ctx*/) override { }
  virtual void exitTable_indices(TSqlParser::Table_indicesContext * /*ctx*/) override { }

  virtual void enterTable_options(TSqlParser::Table_optionsContext * /*ctx*/) override { }
  virtual void exitTable_options(TSqlParser::Table_optionsContext * /*ctx*/) override { }

  virtual void enterTable_option(TSqlParser::Table_optionContext * /*ctx*/) override { }
  virtual void exitTable_option(TSqlParser::Table_optionContext * /*ctx*/) override { }

  virtual void enterCreate_table_index_options(TSqlParser::Create_table_index_optionsContext * /*ctx*/) override { }
  virtual void exitCreate_table_index_options(TSqlParser::Create_table_index_optionsContext * /*ctx*/) override { }

  virtual void enterCreate_table_index_option(TSqlParser::Create_table_index_optionContext * /*ctx*/) override { }
  virtual void exitCreate_table_index_option(TSqlParser::Create_table_index_optionContext * /*ctx*/) override { }

  virtual void enterCreate_view(TSqlParser::Create_viewContext * /*ctx*/) override { }
  virtual void exitCreate_view(TSqlParser::Create_viewContext * /*ctx*/) override { }

  virtual void enterView_attribute(TSqlParser::View_attributeContext * /*ctx*/) override { }
  virtual void exitView_attribute(TSqlParser::View_attributeContext * /*ctx*/) override { }

  virtual void enterAlter_table(TSqlParser::Alter_tableContext * /*ctx*/) override { }
  virtual void exitAlter_table(TSqlParser::Alter_tableContext * /*ctx*/) override { }

  virtual void enterSwitch_partition(TSqlParser::Switch_partitionContext * /*ctx*/) override { }
  virtual void exitSwitch_partition(TSqlParser::Switch_partitionContext * /*ctx*/) override { }

  virtual void enterLow_priority_lock_wait(TSqlParser::Low_priority_lock_waitContext * /*ctx*/) override { }
  virtual void exitLow_priority_lock_wait(TSqlParser::Low_priority_lock_waitContext * /*ctx*/) override { }

  virtual void enterAlter_database(TSqlParser::Alter_databaseContext * /*ctx*/) override { }
  virtual void exitAlter_database(TSqlParser::Alter_databaseContext * /*ctx*/) override { }

  virtual void enterAdd_or_modify_files(TSqlParser::Add_or_modify_filesContext * /*ctx*/) override { }
  virtual void exitAdd_or_modify_files(TSqlParser::Add_or_modify_filesContext * /*ctx*/) override { }

  virtual void enterFilespec(TSqlParser::FilespecContext * /*ctx*/) override { }
  virtual void exitFilespec(TSqlParser::FilespecContext * /*ctx*/) override { }

  virtual void enterAdd_or_modify_filegroups(TSqlParser::Add_or_modify_filegroupsContext * /*ctx*/) override { }
  virtual void exitAdd_or_modify_filegroups(TSqlParser::Add_or_modify_filegroupsContext * /*ctx*/) override { }

  virtual void enterFilegroup_updatability_option(TSqlParser::Filegroup_updatability_optionContext * /*ctx*/) override { }
  virtual void exitFilegroup_updatability_option(TSqlParser::Filegroup_updatability_optionContext * /*ctx*/) override { }

  virtual void enterDatabase_optionspec(TSqlParser::Database_optionspecContext * /*ctx*/) override { }
  virtual void exitDatabase_optionspec(TSqlParser::Database_optionspecContext * /*ctx*/) override { }

  virtual void enterAuto_option(TSqlParser::Auto_optionContext * /*ctx*/) override { }
  virtual void exitAuto_option(TSqlParser::Auto_optionContext * /*ctx*/) override { }

  virtual void enterChange_tracking_option(TSqlParser::Change_tracking_optionContext * /*ctx*/) override { }
  virtual void exitChange_tracking_option(TSqlParser::Change_tracking_optionContext * /*ctx*/) override { }

  virtual void enterChange_tracking_option_list(TSqlParser::Change_tracking_option_listContext * /*ctx*/) override { }
  virtual void exitChange_tracking_option_list(TSqlParser::Change_tracking_option_listContext * /*ctx*/) override { }

  virtual void enterContainment_option(TSqlParser::Containment_optionContext * /*ctx*/) override { }
  virtual void exitContainment_option(TSqlParser::Containment_optionContext * /*ctx*/) override { }

  virtual void enterCursor_option(TSqlParser::Cursor_optionContext * /*ctx*/) override { }
  virtual void exitCursor_option(TSqlParser::Cursor_optionContext * /*ctx*/) override { }

  virtual void enterAlter_endpoint(TSqlParser::Alter_endpointContext * /*ctx*/) override { }
  virtual void exitAlter_endpoint(TSqlParser::Alter_endpointContext * /*ctx*/) override { }

  virtual void enterDatabase_mirroring_option(TSqlParser::Database_mirroring_optionContext * /*ctx*/) override { }
  virtual void exitDatabase_mirroring_option(TSqlParser::Database_mirroring_optionContext * /*ctx*/) override { }

  virtual void enterMirroring_set_option(TSqlParser::Mirroring_set_optionContext * /*ctx*/) override { }
  virtual void exitMirroring_set_option(TSqlParser::Mirroring_set_optionContext * /*ctx*/) override { }

  virtual void enterMirroring_partner(TSqlParser::Mirroring_partnerContext * /*ctx*/) override { }
  virtual void exitMirroring_partner(TSqlParser::Mirroring_partnerContext * /*ctx*/) override { }

  virtual void enterMirroring_witness(TSqlParser::Mirroring_witnessContext * /*ctx*/) override { }
  virtual void exitMirroring_witness(TSqlParser::Mirroring_witnessContext * /*ctx*/) override { }

  virtual void enterWitness_partner_equal(TSqlParser::Witness_partner_equalContext * /*ctx*/) override { }
  virtual void exitWitness_partner_equal(TSqlParser::Witness_partner_equalContext * /*ctx*/) override { }

  virtual void enterPartner_option(TSqlParser::Partner_optionContext * /*ctx*/) override { }
  virtual void exitPartner_option(TSqlParser::Partner_optionContext * /*ctx*/) override { }

  virtual void enterWitness_option(TSqlParser::Witness_optionContext * /*ctx*/) override { }
  virtual void exitWitness_option(TSqlParser::Witness_optionContext * /*ctx*/) override { }

  virtual void enterWitness_server(TSqlParser::Witness_serverContext * /*ctx*/) override { }
  virtual void exitWitness_server(TSqlParser::Witness_serverContext * /*ctx*/) override { }

  virtual void enterPartner_server(TSqlParser::Partner_serverContext * /*ctx*/) override { }
  virtual void exitPartner_server(TSqlParser::Partner_serverContext * /*ctx*/) override { }

  virtual void enterMirroring_host_port_seperator(TSqlParser::Mirroring_host_port_seperatorContext * /*ctx*/) override { }
  virtual void exitMirroring_host_port_seperator(TSqlParser::Mirroring_host_port_seperatorContext * /*ctx*/) override { }

  virtual void enterPartner_server_tcp_prefix(TSqlParser::Partner_server_tcp_prefixContext * /*ctx*/) override { }
  virtual void exitPartner_server_tcp_prefix(TSqlParser::Partner_server_tcp_prefixContext * /*ctx*/) override { }

  virtual void enterPort_number(TSqlParser::Port_numberContext * /*ctx*/) override { }
  virtual void exitPort_number(TSqlParser::Port_numberContext * /*ctx*/) override { }

  virtual void enterHost(TSqlParser::HostContext * /*ctx*/) override { }
  virtual void exitHost(TSqlParser::HostContext * /*ctx*/) override { }

  virtual void enterDate_correlation_optimization_option(TSqlParser::Date_correlation_optimization_optionContext * /*ctx*/) override { }
  virtual void exitDate_correlation_optimization_option(TSqlParser::Date_correlation_optimization_optionContext * /*ctx*/) override { }

  virtual void enterDb_encryption_option(TSqlParser::Db_encryption_optionContext * /*ctx*/) override { }
  virtual void exitDb_encryption_option(TSqlParser::Db_encryption_optionContext * /*ctx*/) override { }

  virtual void enterDb_state_option(TSqlParser::Db_state_optionContext * /*ctx*/) override { }
  virtual void exitDb_state_option(TSqlParser::Db_state_optionContext * /*ctx*/) override { }

  virtual void enterDb_update_option(TSqlParser::Db_update_optionContext * /*ctx*/) override { }
  virtual void exitDb_update_option(TSqlParser::Db_update_optionContext * /*ctx*/) override { }

  virtual void enterDb_user_access_option(TSqlParser::Db_user_access_optionContext * /*ctx*/) override { }
  virtual void exitDb_user_access_option(TSqlParser::Db_user_access_optionContext * /*ctx*/) override { }

  virtual void enterDelayed_durability_option(TSqlParser::Delayed_durability_optionContext * /*ctx*/) override { }
  virtual void exitDelayed_durability_option(TSqlParser::Delayed_durability_optionContext * /*ctx*/) override { }

  virtual void enterExternal_access_option(TSqlParser::External_access_optionContext * /*ctx*/) override { }
  virtual void exitExternal_access_option(TSqlParser::External_access_optionContext * /*ctx*/) override { }

  virtual void enterHadr_options(TSqlParser::Hadr_optionsContext * /*ctx*/) override { }
  virtual void exitHadr_options(TSqlParser::Hadr_optionsContext * /*ctx*/) override { }

  virtual void enterMixed_page_allocation_option(TSqlParser::Mixed_page_allocation_optionContext * /*ctx*/) override { }
  virtual void exitMixed_page_allocation_option(TSqlParser::Mixed_page_allocation_optionContext * /*ctx*/) override { }

  virtual void enterParameterization_option(TSqlParser::Parameterization_optionContext * /*ctx*/) override { }
  virtual void exitParameterization_option(TSqlParser::Parameterization_optionContext * /*ctx*/) override { }

  virtual void enterRecovery_option(TSqlParser::Recovery_optionContext * /*ctx*/) override { }
  virtual void exitRecovery_option(TSqlParser::Recovery_optionContext * /*ctx*/) override { }

  virtual void enterService_broker_option(TSqlParser::Service_broker_optionContext * /*ctx*/) override { }
  virtual void exitService_broker_option(TSqlParser::Service_broker_optionContext * /*ctx*/) override { }

  virtual void enterSnapshot_option(TSqlParser::Snapshot_optionContext * /*ctx*/) override { }
  virtual void exitSnapshot_option(TSqlParser::Snapshot_optionContext * /*ctx*/) override { }

  virtual void enterSql_option(TSqlParser::Sql_optionContext * /*ctx*/) override { }
  virtual void exitSql_option(TSqlParser::Sql_optionContext * /*ctx*/) override { }

  virtual void enterTarget_recovery_time_option(TSqlParser::Target_recovery_time_optionContext * /*ctx*/) override { }
  virtual void exitTarget_recovery_time_option(TSqlParser::Target_recovery_time_optionContext * /*ctx*/) override { }

  virtual void enterTermination(TSqlParser::TerminationContext * /*ctx*/) override { }
  virtual void exitTermination(TSqlParser::TerminationContext * /*ctx*/) override { }

  virtual void enterDrop_index(TSqlParser::Drop_indexContext * /*ctx*/) override { }
  virtual void exitDrop_index(TSqlParser::Drop_indexContext * /*ctx*/) override { }

  virtual void enterDrop_relational_or_xml_or_spatial_index(TSqlParser::Drop_relational_or_xml_or_spatial_indexContext * /*ctx*/) override { }
  virtual void exitDrop_relational_or_xml_or_spatial_index(TSqlParser::Drop_relational_or_xml_or_spatial_indexContext * /*ctx*/) override { }

  virtual void enterDrop_backward_compatible_index(TSqlParser::Drop_backward_compatible_indexContext * /*ctx*/) override { }
  virtual void exitDrop_backward_compatible_index(TSqlParser::Drop_backward_compatible_indexContext * /*ctx*/) override { }

  virtual void enterDrop_procedure(TSqlParser::Drop_procedureContext * /*ctx*/) override { }
  virtual void exitDrop_procedure(TSqlParser::Drop_procedureContext * /*ctx*/) override { }

  virtual void enterDrop_trigger(TSqlParser::Drop_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_trigger(TSqlParser::Drop_triggerContext * /*ctx*/) override { }

  virtual void enterDrop_dml_trigger(TSqlParser::Drop_dml_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_dml_trigger(TSqlParser::Drop_dml_triggerContext * /*ctx*/) override { }

  virtual void enterDrop_ddl_trigger(TSqlParser::Drop_ddl_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_ddl_trigger(TSqlParser::Drop_ddl_triggerContext * /*ctx*/) override { }

  virtual void enterDrop_function(TSqlParser::Drop_functionContext * /*ctx*/) override { }
  virtual void exitDrop_function(TSqlParser::Drop_functionContext * /*ctx*/) override { }

  virtual void enterDrop_statistics(TSqlParser::Drop_statisticsContext * /*ctx*/) override { }
  virtual void exitDrop_statistics(TSqlParser::Drop_statisticsContext * /*ctx*/) override { }

  virtual void enterDrop_table(TSqlParser::Drop_tableContext * /*ctx*/) override { }
  virtual void exitDrop_table(TSqlParser::Drop_tableContext * /*ctx*/) override { }

  virtual void enterDrop_view(TSqlParser::Drop_viewContext * /*ctx*/) override { }
  virtual void exitDrop_view(TSqlParser::Drop_viewContext * /*ctx*/) override { }

  virtual void enterCreate_type(TSqlParser::Create_typeContext * /*ctx*/) override { }
  virtual void exitCreate_type(TSqlParser::Create_typeContext * /*ctx*/) override { }

  virtual void enterDrop_type(TSqlParser::Drop_typeContext * /*ctx*/) override { }
  virtual void exitDrop_type(TSqlParser::Drop_typeContext * /*ctx*/) override { }

  virtual void enterRowset_function_limited(TSqlParser::Rowset_function_limitedContext * /*ctx*/) override { }
  virtual void exitRowset_function_limited(TSqlParser::Rowset_function_limitedContext * /*ctx*/) override { }

  virtual void enterOpenquery(TSqlParser::OpenqueryContext * /*ctx*/) override { }
  virtual void exitOpenquery(TSqlParser::OpenqueryContext * /*ctx*/) override { }

  virtual void enterOpendatasource(TSqlParser::OpendatasourceContext * /*ctx*/) override { }
  virtual void exitOpendatasource(TSqlParser::OpendatasourceContext * /*ctx*/) override { }

  virtual void enterDeclare_statement(TSqlParser::Declare_statementContext * /*ctx*/) override { }
  virtual void exitDeclare_statement(TSqlParser::Declare_statementContext * /*ctx*/) override { }

  virtual void enterXml_declaration(TSqlParser::Xml_declarationContext * /*ctx*/) override { }
  virtual void exitXml_declaration(TSqlParser::Xml_declarationContext * /*ctx*/) override { }

  virtual void enterCursor_statement(TSqlParser::Cursor_statementContext * /*ctx*/) override { }
  virtual void exitCursor_statement(TSqlParser::Cursor_statementContext * /*ctx*/) override { }

  virtual void enterBackup_database(TSqlParser::Backup_databaseContext * /*ctx*/) override { }
  virtual void exitBackup_database(TSqlParser::Backup_databaseContext * /*ctx*/) override { }

  virtual void enterBackup_log(TSqlParser::Backup_logContext * /*ctx*/) override { }
  virtual void exitBackup_log(TSqlParser::Backup_logContext * /*ctx*/) override { }

  virtual void enterBackup_certificate(TSqlParser::Backup_certificateContext * /*ctx*/) override { }
  virtual void exitBackup_certificate(TSqlParser::Backup_certificateContext * /*ctx*/) override { }

  virtual void enterBackup_master_key(TSqlParser::Backup_master_keyContext * /*ctx*/) override { }
  virtual void exitBackup_master_key(TSqlParser::Backup_master_keyContext * /*ctx*/) override { }

  virtual void enterBackup_service_master_key(TSqlParser::Backup_service_master_keyContext * /*ctx*/) override { }
  virtual void exitBackup_service_master_key(TSqlParser::Backup_service_master_keyContext * /*ctx*/) override { }

  virtual void enterKill_statement(TSqlParser::Kill_statementContext * /*ctx*/) override { }
  virtual void exitKill_statement(TSqlParser::Kill_statementContext * /*ctx*/) override { }

  virtual void enterKill_process(TSqlParser::Kill_processContext * /*ctx*/) override { }
  virtual void exitKill_process(TSqlParser::Kill_processContext * /*ctx*/) override { }

  virtual void enterKill_query_notification(TSqlParser::Kill_query_notificationContext * /*ctx*/) override { }
  virtual void exitKill_query_notification(TSqlParser::Kill_query_notificationContext * /*ctx*/) override { }

  virtual void enterKill_stats_job(TSqlParser::Kill_stats_jobContext * /*ctx*/) override { }
  virtual void exitKill_stats_job(TSqlParser::Kill_stats_jobContext * /*ctx*/) override { }

  virtual void enterExecute_statement(TSqlParser::Execute_statementContext * /*ctx*/) override { }
  virtual void exitExecute_statement(TSqlParser::Execute_statementContext * /*ctx*/) override { }

  virtual void enterExecute_body_batch(TSqlParser::Execute_body_batchContext * /*ctx*/) override { }
  virtual void exitExecute_body_batch(TSqlParser::Execute_body_batchContext * /*ctx*/) override { }

  virtual void enterExecute_body(TSqlParser::Execute_bodyContext * /*ctx*/) override { }
  virtual void exitExecute_body(TSqlParser::Execute_bodyContext * /*ctx*/) override { }

  virtual void enterExecute_statement_arg(TSqlParser::Execute_statement_argContext * /*ctx*/) override { }
  virtual void exitExecute_statement_arg(TSqlParser::Execute_statement_argContext * /*ctx*/) override { }

  virtual void enterExecute_statement_arg_named(TSqlParser::Execute_statement_arg_namedContext * /*ctx*/) override { }
  virtual void exitExecute_statement_arg_named(TSqlParser::Execute_statement_arg_namedContext * /*ctx*/) override { }

  virtual void enterExecute_statement_arg_unnamed(TSqlParser::Execute_statement_arg_unnamedContext * /*ctx*/) override { }
  virtual void exitExecute_statement_arg_unnamed(TSqlParser::Execute_statement_arg_unnamedContext * /*ctx*/) override { }

  virtual void enterExecute_parameter(TSqlParser::Execute_parameterContext * /*ctx*/) override { }
  virtual void exitExecute_parameter(TSqlParser::Execute_parameterContext * /*ctx*/) override { }

  virtual void enterExecute_var_string(TSqlParser::Execute_var_stringContext * /*ctx*/) override { }
  virtual void exitExecute_var_string(TSqlParser::Execute_var_stringContext * /*ctx*/) override { }

  virtual void enterSecurity_statement(TSqlParser::Security_statementContext * /*ctx*/) override { }
  virtual void exitSecurity_statement(TSqlParser::Security_statementContext * /*ctx*/) override { }

  virtual void enterPrincipal_id(TSqlParser::Principal_idContext * /*ctx*/) override { }
  virtual void exitPrincipal_id(TSqlParser::Principal_idContext * /*ctx*/) override { }

  virtual void enterCreate_certificate(TSqlParser::Create_certificateContext * /*ctx*/) override { }
  virtual void exitCreate_certificate(TSqlParser::Create_certificateContext * /*ctx*/) override { }

  virtual void enterExisting_keys(TSqlParser::Existing_keysContext * /*ctx*/) override { }
  virtual void exitExisting_keys(TSqlParser::Existing_keysContext * /*ctx*/) override { }

  virtual void enterPrivate_key_options(TSqlParser::Private_key_optionsContext * /*ctx*/) override { }
  virtual void exitPrivate_key_options(TSqlParser::Private_key_optionsContext * /*ctx*/) override { }

  virtual void enterGenerate_new_keys(TSqlParser::Generate_new_keysContext * /*ctx*/) override { }
  virtual void exitGenerate_new_keys(TSqlParser::Generate_new_keysContext * /*ctx*/) override { }

  virtual void enterDate_options(TSqlParser::Date_optionsContext * /*ctx*/) override { }
  virtual void exitDate_options(TSqlParser::Date_optionsContext * /*ctx*/) override { }

  virtual void enterOpen_key(TSqlParser::Open_keyContext * /*ctx*/) override { }
  virtual void exitOpen_key(TSqlParser::Open_keyContext * /*ctx*/) override { }

  virtual void enterClose_key(TSqlParser::Close_keyContext * /*ctx*/) override { }
  virtual void exitClose_key(TSqlParser::Close_keyContext * /*ctx*/) override { }

  virtual void enterCreate_key(TSqlParser::Create_keyContext * /*ctx*/) override { }
  virtual void exitCreate_key(TSqlParser::Create_keyContext * /*ctx*/) override { }

  virtual void enterKey_options(TSqlParser::Key_optionsContext * /*ctx*/) override { }
  virtual void exitKey_options(TSqlParser::Key_optionsContext * /*ctx*/) override { }

  virtual void enterAlgorithm(TSqlParser::AlgorithmContext * /*ctx*/) override { }
  virtual void exitAlgorithm(TSqlParser::AlgorithmContext * /*ctx*/) override { }

  virtual void enterEncryption_mechanism(TSqlParser::Encryption_mechanismContext * /*ctx*/) override { }
  virtual void exitEncryption_mechanism(TSqlParser::Encryption_mechanismContext * /*ctx*/) override { }

  virtual void enterDecryption_mechanism(TSqlParser::Decryption_mechanismContext * /*ctx*/) override { }
  virtual void exitDecryption_mechanism(TSqlParser::Decryption_mechanismContext * /*ctx*/) override { }

  virtual void enterGrant_permission(TSqlParser::Grant_permissionContext * /*ctx*/) override { }
  virtual void exitGrant_permission(TSqlParser::Grant_permissionContext * /*ctx*/) override { }

  virtual void enterSet_statement(TSqlParser::Set_statementContext * /*ctx*/) override { }
  virtual void exitSet_statement(TSqlParser::Set_statementContext * /*ctx*/) override { }

  virtual void enterTransaction_statement(TSqlParser::Transaction_statementContext * /*ctx*/) override { }
  virtual void exitTransaction_statement(TSqlParser::Transaction_statementContext * /*ctx*/) override { }

  virtual void enterGo_statement(TSqlParser::Go_statementContext * /*ctx*/) override { }
  virtual void exitGo_statement(TSqlParser::Go_statementContext * /*ctx*/) override { }

  virtual void enterUse_statement(TSqlParser::Use_statementContext * /*ctx*/) override { }
  virtual void exitUse_statement(TSqlParser::Use_statementContext * /*ctx*/) override { }

  virtual void enterSetuser_statement(TSqlParser::Setuser_statementContext * /*ctx*/) override { }
  virtual void exitSetuser_statement(TSqlParser::Setuser_statementContext * /*ctx*/) override { }

  virtual void enterReconfigure_statement(TSqlParser::Reconfigure_statementContext * /*ctx*/) override { }
  virtual void exitReconfigure_statement(TSqlParser::Reconfigure_statementContext * /*ctx*/) override { }

  virtual void enterShutdown_statement(TSqlParser::Shutdown_statementContext * /*ctx*/) override { }
  virtual void exitShutdown_statement(TSqlParser::Shutdown_statementContext * /*ctx*/) override { }

  virtual void enterCheckpoint_statement(TSqlParser::Checkpoint_statementContext * /*ctx*/) override { }
  virtual void exitCheckpoint_statement(TSqlParser::Checkpoint_statementContext * /*ctx*/) override { }

  virtual void enterDbcc_checkalloc_option(TSqlParser::Dbcc_checkalloc_optionContext * /*ctx*/) override { }
  virtual void exitDbcc_checkalloc_option(TSqlParser::Dbcc_checkalloc_optionContext * /*ctx*/) override { }

  virtual void enterDbcc_checkalloc(TSqlParser::Dbcc_checkallocContext * /*ctx*/) override { }
  virtual void exitDbcc_checkalloc(TSqlParser::Dbcc_checkallocContext * /*ctx*/) override { }

  virtual void enterDbcc_checkcatalog(TSqlParser::Dbcc_checkcatalogContext * /*ctx*/) override { }
  virtual void exitDbcc_checkcatalog(TSqlParser::Dbcc_checkcatalogContext * /*ctx*/) override { }

  virtual void enterDbcc_checkconstraints_option(TSqlParser::Dbcc_checkconstraints_optionContext * /*ctx*/) override { }
  virtual void exitDbcc_checkconstraints_option(TSqlParser::Dbcc_checkconstraints_optionContext * /*ctx*/) override { }

  virtual void enterDbcc_checkconstraints(TSqlParser::Dbcc_checkconstraintsContext * /*ctx*/) override { }
  virtual void exitDbcc_checkconstraints(TSqlParser::Dbcc_checkconstraintsContext * /*ctx*/) override { }

  virtual void enterDbcc_checkdb_table_option(TSqlParser::Dbcc_checkdb_table_optionContext * /*ctx*/) override { }
  virtual void exitDbcc_checkdb_table_option(TSqlParser::Dbcc_checkdb_table_optionContext * /*ctx*/) override { }

  virtual void enterDbcc_checkdb(TSqlParser::Dbcc_checkdbContext * /*ctx*/) override { }
  virtual void exitDbcc_checkdb(TSqlParser::Dbcc_checkdbContext * /*ctx*/) override { }

  virtual void enterDbcc_checkfilegroup_option(TSqlParser::Dbcc_checkfilegroup_optionContext * /*ctx*/) override { }
  virtual void exitDbcc_checkfilegroup_option(TSqlParser::Dbcc_checkfilegroup_optionContext * /*ctx*/) override { }

  virtual void enterDbcc_checkfilegroup(TSqlParser::Dbcc_checkfilegroupContext * /*ctx*/) override { }
  virtual void exitDbcc_checkfilegroup(TSqlParser::Dbcc_checkfilegroupContext * /*ctx*/) override { }

  virtual void enterDbcc_checktable(TSqlParser::Dbcc_checktableContext * /*ctx*/) override { }
  virtual void exitDbcc_checktable(TSqlParser::Dbcc_checktableContext * /*ctx*/) override { }

  virtual void enterDbcc_cleantable(TSqlParser::Dbcc_cleantableContext * /*ctx*/) override { }
  virtual void exitDbcc_cleantable(TSqlParser::Dbcc_cleantableContext * /*ctx*/) override { }

  virtual void enterDbcc_clonedatabase_option(TSqlParser::Dbcc_clonedatabase_optionContext * /*ctx*/) override { }
  virtual void exitDbcc_clonedatabase_option(TSqlParser::Dbcc_clonedatabase_optionContext * /*ctx*/) override { }

  virtual void enterDbcc_clonedatabase(TSqlParser::Dbcc_clonedatabaseContext * /*ctx*/) override { }
  virtual void exitDbcc_clonedatabase(TSqlParser::Dbcc_clonedatabaseContext * /*ctx*/) override { }

  virtual void enterDbcc_pdw_showspaceused(TSqlParser::Dbcc_pdw_showspaceusedContext * /*ctx*/) override { }
  virtual void exitDbcc_pdw_showspaceused(TSqlParser::Dbcc_pdw_showspaceusedContext * /*ctx*/) override { }

  virtual void enterDbcc_proccache(TSqlParser::Dbcc_proccacheContext * /*ctx*/) override { }
  virtual void exitDbcc_proccache(TSqlParser::Dbcc_proccacheContext * /*ctx*/) override { }

  virtual void enterDbcc_showcontig_option(TSqlParser::Dbcc_showcontig_optionContext * /*ctx*/) override { }
  virtual void exitDbcc_showcontig_option(TSqlParser::Dbcc_showcontig_optionContext * /*ctx*/) override { }

  virtual void enterDbcc_showcontig(TSqlParser::Dbcc_showcontigContext * /*ctx*/) override { }
  virtual void exitDbcc_showcontig(TSqlParser::Dbcc_showcontigContext * /*ctx*/) override { }

  virtual void enterDbcc_shrinklog(TSqlParser::Dbcc_shrinklogContext * /*ctx*/) override { }
  virtual void exitDbcc_shrinklog(TSqlParser::Dbcc_shrinklogContext * /*ctx*/) override { }

  virtual void enterDbcc_dbreindex(TSqlParser::Dbcc_dbreindexContext * /*ctx*/) override { }
  virtual void exitDbcc_dbreindex(TSqlParser::Dbcc_dbreindexContext * /*ctx*/) override { }

  virtual void enterDbcc_dll_free(TSqlParser::Dbcc_dll_freeContext * /*ctx*/) override { }
  virtual void exitDbcc_dll_free(TSqlParser::Dbcc_dll_freeContext * /*ctx*/) override { }

  virtual void enterDbcc_dropcleanbuffers(TSqlParser::Dbcc_dropcleanbuffersContext * /*ctx*/) override { }
  virtual void exitDbcc_dropcleanbuffers(TSqlParser::Dbcc_dropcleanbuffersContext * /*ctx*/) override { }

  virtual void enterDbcc_clause(TSqlParser::Dbcc_clauseContext * /*ctx*/) override { }
  virtual void exitDbcc_clause(TSqlParser::Dbcc_clauseContext * /*ctx*/) override { }

  virtual void enterExecute_clause(TSqlParser::Execute_clauseContext * /*ctx*/) override { }
  virtual void exitExecute_clause(TSqlParser::Execute_clauseContext * /*ctx*/) override { }

  virtual void enterDeclare_local(TSqlParser::Declare_localContext * /*ctx*/) override { }
  virtual void exitDeclare_local(TSqlParser::Declare_localContext * /*ctx*/) override { }

  virtual void enterTable_type_definition(TSqlParser::Table_type_definitionContext * /*ctx*/) override { }
  virtual void exitTable_type_definition(TSqlParser::Table_type_definitionContext * /*ctx*/) override { }

  virtual void enterTable_type_indices(TSqlParser::Table_type_indicesContext * /*ctx*/) override { }
  virtual void exitTable_type_indices(TSqlParser::Table_type_indicesContext * /*ctx*/) override { }

  virtual void enterXml_type_definition(TSqlParser::Xml_type_definitionContext * /*ctx*/) override { }
  virtual void exitXml_type_definition(TSqlParser::Xml_type_definitionContext * /*ctx*/) override { }

  virtual void enterXml_schema_collection(TSqlParser::Xml_schema_collectionContext * /*ctx*/) override { }
  virtual void exitXml_schema_collection(TSqlParser::Xml_schema_collectionContext * /*ctx*/) override { }

  virtual void enterColumn_def_table_constraints(TSqlParser::Column_def_table_constraintsContext * /*ctx*/) override { }
  virtual void exitColumn_def_table_constraints(TSqlParser::Column_def_table_constraintsContext * /*ctx*/) override { }

  virtual void enterColumn_def_table_constraint(TSqlParser::Column_def_table_constraintContext * /*ctx*/) override { }
  virtual void exitColumn_def_table_constraint(TSqlParser::Column_def_table_constraintContext * /*ctx*/) override { }

  virtual void enterColumn_definition(TSqlParser::Column_definitionContext * /*ctx*/) override { }
  virtual void exitColumn_definition(TSqlParser::Column_definitionContext * /*ctx*/) override { }

  virtual void enterColumn_definition_element(TSqlParser::Column_definition_elementContext * /*ctx*/) override { }
  virtual void exitColumn_definition_element(TSqlParser::Column_definition_elementContext * /*ctx*/) override { }

  virtual void enterColumn_modifier(TSqlParser::Column_modifierContext * /*ctx*/) override { }
  virtual void exitColumn_modifier(TSqlParser::Column_modifierContext * /*ctx*/) override { }

  virtual void enterMaterialized_column_definition(TSqlParser::Materialized_column_definitionContext * /*ctx*/) override { }
  virtual void exitMaterialized_column_definition(TSqlParser::Materialized_column_definitionContext * /*ctx*/) override { }

  virtual void enterColumn_constraint(TSqlParser::Column_constraintContext * /*ctx*/) override { }
  virtual void exitColumn_constraint(TSqlParser::Column_constraintContext * /*ctx*/) override { }

  virtual void enterColumn_index(TSqlParser::Column_indexContext * /*ctx*/) override { }
  virtual void exitColumn_index(TSqlParser::Column_indexContext * /*ctx*/) override { }

  virtual void enterOn_partition_or_filegroup(TSqlParser::On_partition_or_filegroupContext * /*ctx*/) override { }
  virtual void exitOn_partition_or_filegroup(TSqlParser::On_partition_or_filegroupContext * /*ctx*/) override { }

  virtual void enterTable_constraint(TSqlParser::Table_constraintContext * /*ctx*/) override { }
  virtual void exitTable_constraint(TSqlParser::Table_constraintContext * /*ctx*/) override { }

  virtual void enterConnection_node(TSqlParser::Connection_nodeContext * /*ctx*/) override { }
  virtual void exitConnection_node(TSqlParser::Connection_nodeContext * /*ctx*/) override { }

  virtual void enterPrimary_key_options(TSqlParser::Primary_key_optionsContext * /*ctx*/) override { }
  virtual void exitPrimary_key_options(TSqlParser::Primary_key_optionsContext * /*ctx*/) override { }

  virtual void enterForeign_key_options(TSqlParser::Foreign_key_optionsContext * /*ctx*/) override { }
  virtual void exitForeign_key_options(TSqlParser::Foreign_key_optionsContext * /*ctx*/) override { }

  virtual void enterCheck_constraint(TSqlParser::Check_constraintContext * /*ctx*/) override { }
  virtual void exitCheck_constraint(TSqlParser::Check_constraintContext * /*ctx*/) override { }

  virtual void enterOn_delete(TSqlParser::On_deleteContext * /*ctx*/) override { }
  virtual void exitOn_delete(TSqlParser::On_deleteContext * /*ctx*/) override { }

  virtual void enterOn_update(TSqlParser::On_updateContext * /*ctx*/) override { }
  virtual void exitOn_update(TSqlParser::On_updateContext * /*ctx*/) override { }

  virtual void enterAlter_table_index_options(TSqlParser::Alter_table_index_optionsContext * /*ctx*/) override { }
  virtual void exitAlter_table_index_options(TSqlParser::Alter_table_index_optionsContext * /*ctx*/) override { }

  virtual void enterAlter_table_index_option(TSqlParser::Alter_table_index_optionContext * /*ctx*/) override { }
  virtual void exitAlter_table_index_option(TSqlParser::Alter_table_index_optionContext * /*ctx*/) override { }

  virtual void enterDeclare_cursor(TSqlParser::Declare_cursorContext * /*ctx*/) override { }
  virtual void exitDeclare_cursor(TSqlParser::Declare_cursorContext * /*ctx*/) override { }

  virtual void enterDeclare_set_cursor_common(TSqlParser::Declare_set_cursor_commonContext * /*ctx*/) override { }
  virtual void exitDeclare_set_cursor_common(TSqlParser::Declare_set_cursor_commonContext * /*ctx*/) override { }

  virtual void enterDeclare_set_cursor_common_partial(TSqlParser::Declare_set_cursor_common_partialContext * /*ctx*/) override { }
  virtual void exitDeclare_set_cursor_common_partial(TSqlParser::Declare_set_cursor_common_partialContext * /*ctx*/) override { }

  virtual void enterFetch_cursor(TSqlParser::Fetch_cursorContext * /*ctx*/) override { }
  virtual void exitFetch_cursor(TSqlParser::Fetch_cursorContext * /*ctx*/) override { }

  virtual void enterSet_special(TSqlParser::Set_specialContext * /*ctx*/) override { }
  virtual void exitSet_special(TSqlParser::Set_specialContext * /*ctx*/) override { }

  virtual void enterSpecial_list(TSqlParser::Special_listContext * /*ctx*/) override { }
  virtual void exitSpecial_list(TSqlParser::Special_listContext * /*ctx*/) override { }

  virtual void enterConstant_LOCAL_ID(TSqlParser::Constant_LOCAL_IDContext * /*ctx*/) override { }
  virtual void exitConstant_LOCAL_ID(TSqlParser::Constant_LOCAL_IDContext * /*ctx*/) override { }

  virtual void enterExpression(TSqlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(TSqlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterParameter(TSqlParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(TSqlParser::ParameterContext * /*ctx*/) override { }

  virtual void enterTime_zone(TSqlParser::Time_zoneContext * /*ctx*/) override { }
  virtual void exitTime_zone(TSqlParser::Time_zoneContext * /*ctx*/) override { }

  virtual void enterPrimitive_expression(TSqlParser::Primitive_expressionContext * /*ctx*/) override { }
  virtual void exitPrimitive_expression(TSqlParser::Primitive_expressionContext * /*ctx*/) override { }

  virtual void enterCase_expression(TSqlParser::Case_expressionContext * /*ctx*/) override { }
  virtual void exitCase_expression(TSqlParser::Case_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_operator_expression(TSqlParser::Unary_operator_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_operator_expression(TSqlParser::Unary_operator_expressionContext * /*ctx*/) override { }

  virtual void enterBracket_expression(TSqlParser::Bracket_expressionContext * /*ctx*/) override { }
  virtual void exitBracket_expression(TSqlParser::Bracket_expressionContext * /*ctx*/) override { }

  virtual void enterSubquery(TSqlParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(TSqlParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterWith_expression(TSqlParser::With_expressionContext * /*ctx*/) override { }
  virtual void exitWith_expression(TSqlParser::With_expressionContext * /*ctx*/) override { }

  virtual void enterCommon_table_expression(TSqlParser::Common_table_expressionContext * /*ctx*/) override { }
  virtual void exitCommon_table_expression(TSqlParser::Common_table_expressionContext * /*ctx*/) override { }

  virtual void enterUpdate_elem(TSqlParser::Update_elemContext * /*ctx*/) override { }
  virtual void exitUpdate_elem(TSqlParser::Update_elemContext * /*ctx*/) override { }

  virtual void enterUpdate_elem_merge(TSqlParser::Update_elem_mergeContext * /*ctx*/) override { }
  virtual void exitUpdate_elem_merge(TSqlParser::Update_elem_mergeContext * /*ctx*/) override { }

  virtual void enterSearch_condition(TSqlParser::Search_conditionContext * /*ctx*/) override { }
  virtual void exitSearch_condition(TSqlParser::Search_conditionContext * /*ctx*/) override { }

  virtual void enterPredicate(TSqlParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(TSqlParser::PredicateContext * /*ctx*/) override { }

  virtual void enterQuery_expression(TSqlParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(TSqlParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterSql_union(TSqlParser::Sql_unionContext * /*ctx*/) override { }
  virtual void exitSql_union(TSqlParser::Sql_unionContext * /*ctx*/) override { }

  virtual void enterQuery_specification(TSqlParser::Query_specificationContext * /*ctx*/) override { }
  virtual void exitQuery_specification(TSqlParser::Query_specificationContext * /*ctx*/) override { }

  virtual void enterGroup_by_clause(TSqlParser::Group_by_clauseContext * /*ctx*/) override { }
  virtual void exitGroup_by_clause(TSqlParser::Group_by_clauseContext * /*ctx*/) override { }

  virtual void enterHaving_clause(TSqlParser::Having_clauseContext * /*ctx*/) override { }
  virtual void exitHaving_clause(TSqlParser::Having_clauseContext * /*ctx*/) override { }

  virtual void enterFrom_table_sources(TSqlParser::From_table_sourcesContext * /*ctx*/) override { }
  virtual void exitFrom_table_sources(TSqlParser::From_table_sourcesContext * /*ctx*/) override { }

  virtual void enterTop_clause(TSqlParser::Top_clauseContext * /*ctx*/) override { }
  virtual void exitTop_clause(TSqlParser::Top_clauseContext * /*ctx*/) override { }

  virtual void enterTop_percent(TSqlParser::Top_percentContext * /*ctx*/) override { }
  virtual void exitTop_percent(TSqlParser::Top_percentContext * /*ctx*/) override { }

  virtual void enterTop_count(TSqlParser::Top_countContext * /*ctx*/) override { }
  virtual void exitTop_count(TSqlParser::Top_countContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause(TSqlParser::Order_by_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause(TSqlParser::Order_by_clauseContext * /*ctx*/) override { }

  virtual void enterSelect_order_by_clause(TSqlParser::Select_order_by_clauseContext * /*ctx*/) override { }
  virtual void exitSelect_order_by_clause(TSqlParser::Select_order_by_clauseContext * /*ctx*/) override { }

  virtual void enterFor_clause(TSqlParser::For_clauseContext * /*ctx*/) override { }
  virtual void exitFor_clause(TSqlParser::For_clauseContext * /*ctx*/) override { }

  virtual void enterXml_common_directives(TSqlParser::Xml_common_directivesContext * /*ctx*/) override { }
  virtual void exitXml_common_directives(TSqlParser::Xml_common_directivesContext * /*ctx*/) override { }

  virtual void enterOrder_by_expression(TSqlParser::Order_by_expressionContext * /*ctx*/) override { }
  virtual void exitOrder_by_expression(TSqlParser::Order_by_expressionContext * /*ctx*/) override { }

  virtual void enterGrouping_sets_item(TSqlParser::Grouping_sets_itemContext * /*ctx*/) override { }
  virtual void exitGrouping_sets_item(TSqlParser::Grouping_sets_itemContext * /*ctx*/) override { }

  virtual void enterGroup_by_item(TSqlParser::Group_by_itemContext * /*ctx*/) override { }
  virtual void exitGroup_by_item(TSqlParser::Group_by_itemContext * /*ctx*/) override { }

  virtual void enterOption_clause(TSqlParser::Option_clauseContext * /*ctx*/) override { }
  virtual void exitOption_clause(TSqlParser::Option_clauseContext * /*ctx*/) override { }

  virtual void enterOption(TSqlParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(TSqlParser::OptionContext * /*ctx*/) override { }

  virtual void enterOptimize_for_arg(TSqlParser::Optimize_for_argContext * /*ctx*/) override { }
  virtual void exitOptimize_for_arg(TSqlParser::Optimize_for_argContext * /*ctx*/) override { }

  virtual void enterSelect_list(TSqlParser::Select_listContext * /*ctx*/) override { }
  virtual void exitSelect_list(TSqlParser::Select_listContext * /*ctx*/) override { }

  virtual void enterUdt_method_arguments(TSqlParser::Udt_method_argumentsContext * /*ctx*/) override { }
  virtual void exitUdt_method_arguments(TSqlParser::Udt_method_argumentsContext * /*ctx*/) override { }

  virtual void enterAsterisk(TSqlParser::AsteriskContext * /*ctx*/) override { }
  virtual void exitAsterisk(TSqlParser::AsteriskContext * /*ctx*/) override { }

  virtual void enterUdt_elem(TSqlParser::Udt_elemContext * /*ctx*/) override { }
  virtual void exitUdt_elem(TSqlParser::Udt_elemContext * /*ctx*/) override { }

  virtual void enterExpression_elem(TSqlParser::Expression_elemContext * /*ctx*/) override { }
  virtual void exitExpression_elem(TSqlParser::Expression_elemContext * /*ctx*/) override { }

  virtual void enterSelect_list_elem(TSqlParser::Select_list_elemContext * /*ctx*/) override { }
  virtual void exitSelect_list_elem(TSqlParser::Select_list_elemContext * /*ctx*/) override { }

  virtual void enterTable_sources(TSqlParser::Table_sourcesContext * /*ctx*/) override { }
  virtual void exitTable_sources(TSqlParser::Table_sourcesContext * /*ctx*/) override { }

  virtual void enterNon_ansi_join(TSqlParser::Non_ansi_joinContext * /*ctx*/) override { }
  virtual void exitNon_ansi_join(TSqlParser::Non_ansi_joinContext * /*ctx*/) override { }

  virtual void enterTable_source(TSqlParser::Table_sourceContext * /*ctx*/) override { }
  virtual void exitTable_source(TSqlParser::Table_sourceContext * /*ctx*/) override { }

  virtual void enterTable_source_item(TSqlParser::Table_source_itemContext * /*ctx*/) override { }
  virtual void exitTable_source_item(TSqlParser::Table_source_itemContext * /*ctx*/) override { }

  virtual void enterOpen_xml(TSqlParser::Open_xmlContext * /*ctx*/) override { }
  virtual void exitOpen_xml(TSqlParser::Open_xmlContext * /*ctx*/) override { }

  virtual void enterOpen_json(TSqlParser::Open_jsonContext * /*ctx*/) override { }
  virtual void exitOpen_json(TSqlParser::Open_jsonContext * /*ctx*/) override { }

  virtual void enterJson_declaration(TSqlParser::Json_declarationContext * /*ctx*/) override { }
  virtual void exitJson_declaration(TSqlParser::Json_declarationContext * /*ctx*/) override { }

  virtual void enterJson_column_declaration(TSqlParser::Json_column_declarationContext * /*ctx*/) override { }
  virtual void exitJson_column_declaration(TSqlParser::Json_column_declarationContext * /*ctx*/) override { }

  virtual void enterSchema_declaration(TSqlParser::Schema_declarationContext * /*ctx*/) override { }
  virtual void exitSchema_declaration(TSqlParser::Schema_declarationContext * /*ctx*/) override { }

  virtual void enterColumn_declaration(TSqlParser::Column_declarationContext * /*ctx*/) override { }
  virtual void exitColumn_declaration(TSqlParser::Column_declarationContext * /*ctx*/) override { }

  virtual void enterChange_table(TSqlParser::Change_tableContext * /*ctx*/) override { }
  virtual void exitChange_table(TSqlParser::Change_tableContext * /*ctx*/) override { }

  virtual void enterChange_table_changes(TSqlParser::Change_table_changesContext * /*ctx*/) override { }
  virtual void exitChange_table_changes(TSqlParser::Change_table_changesContext * /*ctx*/) override { }

  virtual void enterChange_table_version(TSqlParser::Change_table_versionContext * /*ctx*/) override { }
  virtual void exitChange_table_version(TSqlParser::Change_table_versionContext * /*ctx*/) override { }

  virtual void enterJoin_part(TSqlParser::Join_partContext * /*ctx*/) override { }
  virtual void exitJoin_part(TSqlParser::Join_partContext * /*ctx*/) override { }

  virtual void enterJoin_on(TSqlParser::Join_onContext * /*ctx*/) override { }
  virtual void exitJoin_on(TSqlParser::Join_onContext * /*ctx*/) override { }

  virtual void enterCross_join(TSqlParser::Cross_joinContext * /*ctx*/) override { }
  virtual void exitCross_join(TSqlParser::Cross_joinContext * /*ctx*/) override { }

  virtual void enterApply_(TSqlParser::Apply_Context * /*ctx*/) override { }
  virtual void exitApply_(TSqlParser::Apply_Context * /*ctx*/) override { }

  virtual void enterPivot(TSqlParser::PivotContext * /*ctx*/) override { }
  virtual void exitPivot(TSqlParser::PivotContext * /*ctx*/) override { }

  virtual void enterUnpivot(TSqlParser::UnpivotContext * /*ctx*/) override { }
  virtual void exitUnpivot(TSqlParser::UnpivotContext * /*ctx*/) override { }

  virtual void enterPivot_clause(TSqlParser::Pivot_clauseContext * /*ctx*/) override { }
  virtual void exitPivot_clause(TSqlParser::Pivot_clauseContext * /*ctx*/) override { }

  virtual void enterUnpivot_clause(TSqlParser::Unpivot_clauseContext * /*ctx*/) override { }
  virtual void exitUnpivot_clause(TSqlParser::Unpivot_clauseContext * /*ctx*/) override { }

  virtual void enterFull_column_name_list(TSqlParser::Full_column_name_listContext * /*ctx*/) override { }
  virtual void exitFull_column_name_list(TSqlParser::Full_column_name_listContext * /*ctx*/) override { }

  virtual void enterRowset_function(TSqlParser::Rowset_functionContext * /*ctx*/) override { }
  virtual void exitRowset_function(TSqlParser::Rowset_functionContext * /*ctx*/) override { }

  virtual void enterBulk_option(TSqlParser::Bulk_optionContext * /*ctx*/) override { }
  virtual void exitBulk_option(TSqlParser::Bulk_optionContext * /*ctx*/) override { }

  virtual void enterDerived_table(TSqlParser::Derived_tableContext * /*ctx*/) override { }
  virtual void exitDerived_table(TSqlParser::Derived_tableContext * /*ctx*/) override { }

  virtual void enterRANKING_WINDOWED_FUNC(TSqlParser::RANKING_WINDOWED_FUNCContext * /*ctx*/) override { }
  virtual void exitRANKING_WINDOWED_FUNC(TSqlParser::RANKING_WINDOWED_FUNCContext * /*ctx*/) override { }

  virtual void enterAGGREGATE_WINDOWED_FUNC(TSqlParser::AGGREGATE_WINDOWED_FUNCContext * /*ctx*/) override { }
  virtual void exitAGGREGATE_WINDOWED_FUNC(TSqlParser::AGGREGATE_WINDOWED_FUNCContext * /*ctx*/) override { }

  virtual void enterANALYTIC_WINDOWED_FUNC(TSqlParser::ANALYTIC_WINDOWED_FUNCContext * /*ctx*/) override { }
  virtual void exitANALYTIC_WINDOWED_FUNC(TSqlParser::ANALYTIC_WINDOWED_FUNCContext * /*ctx*/) override { }

  virtual void enterBUILT_IN_FUNC(TSqlParser::BUILT_IN_FUNCContext * /*ctx*/) override { }
  virtual void exitBUILT_IN_FUNC(TSqlParser::BUILT_IN_FUNCContext * /*ctx*/) override { }

  virtual void enterSCALAR_FUNCTION(TSqlParser::SCALAR_FUNCTIONContext * /*ctx*/) override { }
  virtual void exitSCALAR_FUNCTION(TSqlParser::SCALAR_FUNCTIONContext * /*ctx*/) override { }

  virtual void enterFREE_TEXT(TSqlParser::FREE_TEXTContext * /*ctx*/) override { }
  virtual void exitFREE_TEXT(TSqlParser::FREE_TEXTContext * /*ctx*/) override { }

  virtual void enterPARTITION_FUNC(TSqlParser::PARTITION_FUNCContext * /*ctx*/) override { }
  virtual void exitPARTITION_FUNC(TSqlParser::PARTITION_FUNCContext * /*ctx*/) override { }

  virtual void enterHIERARCHYID_METHOD(TSqlParser::HIERARCHYID_METHODContext * /*ctx*/) override { }
  virtual void exitHIERARCHYID_METHOD(TSqlParser::HIERARCHYID_METHODContext * /*ctx*/) override { }

  virtual void enterPartition_function(TSqlParser::Partition_functionContext * /*ctx*/) override { }
  virtual void exitPartition_function(TSqlParser::Partition_functionContext * /*ctx*/) override { }

  virtual void enterFreetext_function(TSqlParser::Freetext_functionContext * /*ctx*/) override { }
  virtual void exitFreetext_function(TSqlParser::Freetext_functionContext * /*ctx*/) override { }

  virtual void enterFreetext_predicate(TSqlParser::Freetext_predicateContext * /*ctx*/) override { }
  virtual void exitFreetext_predicate(TSqlParser::Freetext_predicateContext * /*ctx*/) override { }

  virtual void enterJson_key_value(TSqlParser::Json_key_valueContext * /*ctx*/) override { }
  virtual void exitJson_key_value(TSqlParser::Json_key_valueContext * /*ctx*/) override { }

  virtual void enterJson_null_clause(TSqlParser::Json_null_clauseContext * /*ctx*/) override { }
  virtual void exitJson_null_clause(TSqlParser::Json_null_clauseContext * /*ctx*/) override { }

  virtual void enterAPP_NAME(TSqlParser::APP_NAMEContext * /*ctx*/) override { }
  virtual void exitAPP_NAME(TSqlParser::APP_NAMEContext * /*ctx*/) override { }

  virtual void enterAPPLOCK_MODE(TSqlParser::APPLOCK_MODEContext * /*ctx*/) override { }
  virtual void exitAPPLOCK_MODE(TSqlParser::APPLOCK_MODEContext * /*ctx*/) override { }

  virtual void enterAPPLOCK_TEST(TSqlParser::APPLOCK_TESTContext * /*ctx*/) override { }
  virtual void exitAPPLOCK_TEST(TSqlParser::APPLOCK_TESTContext * /*ctx*/) override { }

  virtual void enterASSEMBLYPROPERTY(TSqlParser::ASSEMBLYPROPERTYContext * /*ctx*/) override { }
  virtual void exitASSEMBLYPROPERTY(TSqlParser::ASSEMBLYPROPERTYContext * /*ctx*/) override { }

  virtual void enterCOL_LENGTH(TSqlParser::COL_LENGTHContext * /*ctx*/) override { }
  virtual void exitCOL_LENGTH(TSqlParser::COL_LENGTHContext * /*ctx*/) override { }

  virtual void enterCOL_NAME(TSqlParser::COL_NAMEContext * /*ctx*/) override { }
  virtual void exitCOL_NAME(TSqlParser::COL_NAMEContext * /*ctx*/) override { }

  virtual void enterCOLUMNPROPERTY(TSqlParser::COLUMNPROPERTYContext * /*ctx*/) override { }
  virtual void exitCOLUMNPROPERTY(TSqlParser::COLUMNPROPERTYContext * /*ctx*/) override { }

  virtual void enterDATABASEPROPERTYEX(TSqlParser::DATABASEPROPERTYEXContext * /*ctx*/) override { }
  virtual void exitDATABASEPROPERTYEX(TSqlParser::DATABASEPROPERTYEXContext * /*ctx*/) override { }

  virtual void enterDB_ID(TSqlParser::DB_IDContext * /*ctx*/) override { }
  virtual void exitDB_ID(TSqlParser::DB_IDContext * /*ctx*/) override { }

  virtual void enterDB_NAME(TSqlParser::DB_NAMEContext * /*ctx*/) override { }
  virtual void exitDB_NAME(TSqlParser::DB_NAMEContext * /*ctx*/) override { }

  virtual void enterFILE_ID(TSqlParser::FILE_IDContext * /*ctx*/) override { }
  virtual void exitFILE_ID(TSqlParser::FILE_IDContext * /*ctx*/) override { }

  virtual void enterFILE_IDEX(TSqlParser::FILE_IDEXContext * /*ctx*/) override { }
  virtual void exitFILE_IDEX(TSqlParser::FILE_IDEXContext * /*ctx*/) override { }

  virtual void enterFILE_NAME(TSqlParser::FILE_NAMEContext * /*ctx*/) override { }
  virtual void exitFILE_NAME(TSqlParser::FILE_NAMEContext * /*ctx*/) override { }

  virtual void enterFILEGROUP_ID(TSqlParser::FILEGROUP_IDContext * /*ctx*/) override { }
  virtual void exitFILEGROUP_ID(TSqlParser::FILEGROUP_IDContext * /*ctx*/) override { }

  virtual void enterFILEGROUP_NAME(TSqlParser::FILEGROUP_NAMEContext * /*ctx*/) override { }
  virtual void exitFILEGROUP_NAME(TSqlParser::FILEGROUP_NAMEContext * /*ctx*/) override { }

  virtual void enterFILEGROUPPROPERTY(TSqlParser::FILEGROUPPROPERTYContext * /*ctx*/) override { }
  virtual void exitFILEGROUPPROPERTY(TSqlParser::FILEGROUPPROPERTYContext * /*ctx*/) override { }

  virtual void enterFILEPROPERTY(TSqlParser::FILEPROPERTYContext * /*ctx*/) override { }
  virtual void exitFILEPROPERTY(TSqlParser::FILEPROPERTYContext * /*ctx*/) override { }

  virtual void enterFILEPROPERTYEX(TSqlParser::FILEPROPERTYEXContext * /*ctx*/) override { }
  virtual void exitFILEPROPERTYEX(TSqlParser::FILEPROPERTYEXContext * /*ctx*/) override { }

  virtual void enterFULLTEXTCATALOGPROPERTY(TSqlParser::FULLTEXTCATALOGPROPERTYContext * /*ctx*/) override { }
  virtual void exitFULLTEXTCATALOGPROPERTY(TSqlParser::FULLTEXTCATALOGPROPERTYContext * /*ctx*/) override { }

  virtual void enterFULLTEXTSERVICEPROPERTY(TSqlParser::FULLTEXTSERVICEPROPERTYContext * /*ctx*/) override { }
  virtual void exitFULLTEXTSERVICEPROPERTY(TSqlParser::FULLTEXTSERVICEPROPERTYContext * /*ctx*/) override { }

  virtual void enterINDEX_COL(TSqlParser::INDEX_COLContext * /*ctx*/) override { }
  virtual void exitINDEX_COL(TSqlParser::INDEX_COLContext * /*ctx*/) override { }

  virtual void enterINDEXKEY_PROPERTY(TSqlParser::INDEXKEY_PROPERTYContext * /*ctx*/) override { }
  virtual void exitINDEXKEY_PROPERTY(TSqlParser::INDEXKEY_PROPERTYContext * /*ctx*/) override { }

  virtual void enterINDEXPROPERTY(TSqlParser::INDEXPROPERTYContext * /*ctx*/) override { }
  virtual void exitINDEXPROPERTY(TSqlParser::INDEXPROPERTYContext * /*ctx*/) override { }

  virtual void enterNEXT_VALUE_FOR(TSqlParser::NEXT_VALUE_FORContext * /*ctx*/) override { }
  virtual void exitNEXT_VALUE_FOR(TSqlParser::NEXT_VALUE_FORContext * /*ctx*/) override { }

  virtual void enterOBJECT_DEFINITION(TSqlParser::OBJECT_DEFINITIONContext * /*ctx*/) override { }
  virtual void exitOBJECT_DEFINITION(TSqlParser::OBJECT_DEFINITIONContext * /*ctx*/) override { }

  virtual void enterOBJECT_ID(TSqlParser::OBJECT_IDContext * /*ctx*/) override { }
  virtual void exitOBJECT_ID(TSqlParser::OBJECT_IDContext * /*ctx*/) override { }

  virtual void enterOBJECT_NAME(TSqlParser::OBJECT_NAMEContext * /*ctx*/) override { }
  virtual void exitOBJECT_NAME(TSqlParser::OBJECT_NAMEContext * /*ctx*/) override { }

  virtual void enterOBJECT_SCHEMA_NAME(TSqlParser::OBJECT_SCHEMA_NAMEContext * /*ctx*/) override { }
  virtual void exitOBJECT_SCHEMA_NAME(TSqlParser::OBJECT_SCHEMA_NAMEContext * /*ctx*/) override { }

  virtual void enterOBJECTPROPERTY(TSqlParser::OBJECTPROPERTYContext * /*ctx*/) override { }
  virtual void exitOBJECTPROPERTY(TSqlParser::OBJECTPROPERTYContext * /*ctx*/) override { }

  virtual void enterOBJECTPROPERTYEX(TSqlParser::OBJECTPROPERTYEXContext * /*ctx*/) override { }
  virtual void exitOBJECTPROPERTYEX(TSqlParser::OBJECTPROPERTYEXContext * /*ctx*/) override { }

  virtual void enterORIGINAL_DB_NAME(TSqlParser::ORIGINAL_DB_NAMEContext * /*ctx*/) override { }
  virtual void exitORIGINAL_DB_NAME(TSqlParser::ORIGINAL_DB_NAMEContext * /*ctx*/) override { }

  virtual void enterPARSENAME(TSqlParser::PARSENAMEContext * /*ctx*/) override { }
  virtual void exitPARSENAME(TSqlParser::PARSENAMEContext * /*ctx*/) override { }

  virtual void enterSCHEMA_ID(TSqlParser::SCHEMA_IDContext * /*ctx*/) override { }
  virtual void exitSCHEMA_ID(TSqlParser::SCHEMA_IDContext * /*ctx*/) override { }

  virtual void enterSCHEMA_NAME(TSqlParser::SCHEMA_NAMEContext * /*ctx*/) override { }
  virtual void exitSCHEMA_NAME(TSqlParser::SCHEMA_NAMEContext * /*ctx*/) override { }

  virtual void enterSCOPE_IDENTITY(TSqlParser::SCOPE_IDENTITYContext * /*ctx*/) override { }
  virtual void exitSCOPE_IDENTITY(TSqlParser::SCOPE_IDENTITYContext * /*ctx*/) override { }

  virtual void enterSERVERPROPERTY(TSqlParser::SERVERPROPERTYContext * /*ctx*/) override { }
  virtual void exitSERVERPROPERTY(TSqlParser::SERVERPROPERTYContext * /*ctx*/) override { }

  virtual void enterSTATS_DATE(TSqlParser::STATS_DATEContext * /*ctx*/) override { }
  virtual void exitSTATS_DATE(TSqlParser::STATS_DATEContext * /*ctx*/) override { }

  virtual void enterTYPE_ID(TSqlParser::TYPE_IDContext * /*ctx*/) override { }
  virtual void exitTYPE_ID(TSqlParser::TYPE_IDContext * /*ctx*/) override { }

  virtual void enterTYPE_NAME(TSqlParser::TYPE_NAMEContext * /*ctx*/) override { }
  virtual void exitTYPE_NAME(TSqlParser::TYPE_NAMEContext * /*ctx*/) override { }

  virtual void enterTYPEPROPERTY(TSqlParser::TYPEPROPERTYContext * /*ctx*/) override { }
  virtual void exitTYPEPROPERTY(TSqlParser::TYPEPROPERTYContext * /*ctx*/) override { }

  virtual void enterASCII(TSqlParser::ASCIIContext * /*ctx*/) override { }
  virtual void exitASCII(TSqlParser::ASCIIContext * /*ctx*/) override { }

  virtual void enterCHAR(TSqlParser::CHARContext * /*ctx*/) override { }
  virtual void exitCHAR(TSqlParser::CHARContext * /*ctx*/) override { }

  virtual void enterCHARINDEX(TSqlParser::CHARINDEXContext * /*ctx*/) override { }
  virtual void exitCHARINDEX(TSqlParser::CHARINDEXContext * /*ctx*/) override { }

  virtual void enterCONCAT(TSqlParser::CONCATContext * /*ctx*/) override { }
  virtual void exitCONCAT(TSqlParser::CONCATContext * /*ctx*/) override { }

  virtual void enterCONCAT_WS(TSqlParser::CONCAT_WSContext * /*ctx*/) override { }
  virtual void exitCONCAT_WS(TSqlParser::CONCAT_WSContext * /*ctx*/) override { }

  virtual void enterDIFFERENCE(TSqlParser::DIFFERENCEContext * /*ctx*/) override { }
  virtual void exitDIFFERENCE(TSqlParser::DIFFERENCEContext * /*ctx*/) override { }

  virtual void enterFORMAT(TSqlParser::FORMATContext * /*ctx*/) override { }
  virtual void exitFORMAT(TSqlParser::FORMATContext * /*ctx*/) override { }

  virtual void enterLEFT(TSqlParser::LEFTContext * /*ctx*/) override { }
  virtual void exitLEFT(TSqlParser::LEFTContext * /*ctx*/) override { }

  virtual void enterLEN(TSqlParser::LENContext * /*ctx*/) override { }
  virtual void exitLEN(TSqlParser::LENContext * /*ctx*/) override { }

  virtual void enterLOWER(TSqlParser::LOWERContext * /*ctx*/) override { }
  virtual void exitLOWER(TSqlParser::LOWERContext * /*ctx*/) override { }

  virtual void enterLTRIM(TSqlParser::LTRIMContext * /*ctx*/) override { }
  virtual void exitLTRIM(TSqlParser::LTRIMContext * /*ctx*/) override { }

  virtual void enterNCHAR(TSqlParser::NCHARContext * /*ctx*/) override { }
  virtual void exitNCHAR(TSqlParser::NCHARContext * /*ctx*/) override { }

  virtual void enterPATINDEX(TSqlParser::PATINDEXContext * /*ctx*/) override { }
  virtual void exitPATINDEX(TSqlParser::PATINDEXContext * /*ctx*/) override { }

  virtual void enterQUOTENAME(TSqlParser::QUOTENAMEContext * /*ctx*/) override { }
  virtual void exitQUOTENAME(TSqlParser::QUOTENAMEContext * /*ctx*/) override { }

  virtual void enterREPLACE(TSqlParser::REPLACEContext * /*ctx*/) override { }
  virtual void exitREPLACE(TSqlParser::REPLACEContext * /*ctx*/) override { }

  virtual void enterREPLICATE(TSqlParser::REPLICATEContext * /*ctx*/) override { }
  virtual void exitREPLICATE(TSqlParser::REPLICATEContext * /*ctx*/) override { }

  virtual void enterREVERSE(TSqlParser::REVERSEContext * /*ctx*/) override { }
  virtual void exitREVERSE(TSqlParser::REVERSEContext * /*ctx*/) override { }

  virtual void enterRIGHT(TSqlParser::RIGHTContext * /*ctx*/) override { }
  virtual void exitRIGHT(TSqlParser::RIGHTContext * /*ctx*/) override { }

  virtual void enterRTRIM(TSqlParser::RTRIMContext * /*ctx*/) override { }
  virtual void exitRTRIM(TSqlParser::RTRIMContext * /*ctx*/) override { }

  virtual void enterSOUNDEX(TSqlParser::SOUNDEXContext * /*ctx*/) override { }
  virtual void exitSOUNDEX(TSqlParser::SOUNDEXContext * /*ctx*/) override { }

  virtual void enterSPACE(TSqlParser::SPACEContext * /*ctx*/) override { }
  virtual void exitSPACE(TSqlParser::SPACEContext * /*ctx*/) override { }

  virtual void enterSTR(TSqlParser::STRContext * /*ctx*/) override { }
  virtual void exitSTR(TSqlParser::STRContext * /*ctx*/) override { }

  virtual void enterSTRINGAGG(TSqlParser::STRINGAGGContext * /*ctx*/) override { }
  virtual void exitSTRINGAGG(TSqlParser::STRINGAGGContext * /*ctx*/) override { }

  virtual void enterSTRING_ESCAPE(TSqlParser::STRING_ESCAPEContext * /*ctx*/) override { }
  virtual void exitSTRING_ESCAPE(TSqlParser::STRING_ESCAPEContext * /*ctx*/) override { }

  virtual void enterSTUFF(TSqlParser::STUFFContext * /*ctx*/) override { }
  virtual void exitSTUFF(TSqlParser::STUFFContext * /*ctx*/) override { }

  virtual void enterSUBSTRING(TSqlParser::SUBSTRINGContext * /*ctx*/) override { }
  virtual void exitSUBSTRING(TSqlParser::SUBSTRINGContext * /*ctx*/) override { }

  virtual void enterTRANSLATE(TSqlParser::TRANSLATEContext * /*ctx*/) override { }
  virtual void exitTRANSLATE(TSqlParser::TRANSLATEContext * /*ctx*/) override { }

  virtual void enterTRIM(TSqlParser::TRIMContext * /*ctx*/) override { }
  virtual void exitTRIM(TSqlParser::TRIMContext * /*ctx*/) override { }

  virtual void enterUNICODE(TSqlParser::UNICODEContext * /*ctx*/) override { }
  virtual void exitUNICODE(TSqlParser::UNICODEContext * /*ctx*/) override { }

  virtual void enterUPPER(TSqlParser::UPPERContext * /*ctx*/) override { }
  virtual void exitUPPER(TSqlParser::UPPERContext * /*ctx*/) override { }

  virtual void enterBINARY_CHECKSUM(TSqlParser::BINARY_CHECKSUMContext * /*ctx*/) override { }
  virtual void exitBINARY_CHECKSUM(TSqlParser::BINARY_CHECKSUMContext * /*ctx*/) override { }

  virtual void enterCHECKSUM(TSqlParser::CHECKSUMContext * /*ctx*/) override { }
  virtual void exitCHECKSUM(TSqlParser::CHECKSUMContext * /*ctx*/) override { }

  virtual void enterCOMPRESS(TSqlParser::COMPRESSContext * /*ctx*/) override { }
  virtual void exitCOMPRESS(TSqlParser::COMPRESSContext * /*ctx*/) override { }

  virtual void enterCONNECTIONPROPERTY(TSqlParser::CONNECTIONPROPERTYContext * /*ctx*/) override { }
  virtual void exitCONNECTIONPROPERTY(TSqlParser::CONNECTIONPROPERTYContext * /*ctx*/) override { }

  virtual void enterCONTEXT_INFO(TSqlParser::CONTEXT_INFOContext * /*ctx*/) override { }
  virtual void exitCONTEXT_INFO(TSqlParser::CONTEXT_INFOContext * /*ctx*/) override { }

  virtual void enterCURRENT_REQUEST_ID(TSqlParser::CURRENT_REQUEST_IDContext * /*ctx*/) override { }
  virtual void exitCURRENT_REQUEST_ID(TSqlParser::CURRENT_REQUEST_IDContext * /*ctx*/) override { }

  virtual void enterCURRENT_TRANSACTION_ID(TSqlParser::CURRENT_TRANSACTION_IDContext * /*ctx*/) override { }
  virtual void exitCURRENT_TRANSACTION_ID(TSqlParser::CURRENT_TRANSACTION_IDContext * /*ctx*/) override { }

  virtual void enterDECOMPRESS(TSqlParser::DECOMPRESSContext * /*ctx*/) override { }
  virtual void exitDECOMPRESS(TSqlParser::DECOMPRESSContext * /*ctx*/) override { }

  virtual void enterERROR_LINE(TSqlParser::ERROR_LINEContext * /*ctx*/) override { }
  virtual void exitERROR_LINE(TSqlParser::ERROR_LINEContext * /*ctx*/) override { }

  virtual void enterERROR_MESSAGE(TSqlParser::ERROR_MESSAGEContext * /*ctx*/) override { }
  virtual void exitERROR_MESSAGE(TSqlParser::ERROR_MESSAGEContext * /*ctx*/) override { }

  virtual void enterERROR_NUMBER(TSqlParser::ERROR_NUMBERContext * /*ctx*/) override { }
  virtual void exitERROR_NUMBER(TSqlParser::ERROR_NUMBERContext * /*ctx*/) override { }

  virtual void enterERROR_PROCEDURE(TSqlParser::ERROR_PROCEDUREContext * /*ctx*/) override { }
  virtual void exitERROR_PROCEDURE(TSqlParser::ERROR_PROCEDUREContext * /*ctx*/) override { }

  virtual void enterERROR_SEVERITY(TSqlParser::ERROR_SEVERITYContext * /*ctx*/) override { }
  virtual void exitERROR_SEVERITY(TSqlParser::ERROR_SEVERITYContext * /*ctx*/) override { }

  virtual void enterERROR_STATE(TSqlParser::ERROR_STATEContext * /*ctx*/) override { }
  virtual void exitERROR_STATE(TSqlParser::ERROR_STATEContext * /*ctx*/) override { }

  virtual void enterFORMATMESSAGE(TSqlParser::FORMATMESSAGEContext * /*ctx*/) override { }
  virtual void exitFORMATMESSAGE(TSqlParser::FORMATMESSAGEContext * /*ctx*/) override { }

  virtual void enterGET_FILESTREAM_TRANSACTION_CONTEXT(TSqlParser::GET_FILESTREAM_TRANSACTION_CONTEXTContext * /*ctx*/) override { }
  virtual void exitGET_FILESTREAM_TRANSACTION_CONTEXT(TSqlParser::GET_FILESTREAM_TRANSACTION_CONTEXTContext * /*ctx*/) override { }

  virtual void enterGETANSINULL(TSqlParser::GETANSINULLContext * /*ctx*/) override { }
  virtual void exitGETANSINULL(TSqlParser::GETANSINULLContext * /*ctx*/) override { }

  virtual void enterHOST_ID(TSqlParser::HOST_IDContext * /*ctx*/) override { }
  virtual void exitHOST_ID(TSqlParser::HOST_IDContext * /*ctx*/) override { }

  virtual void enterHOST_NAME(TSqlParser::HOST_NAMEContext * /*ctx*/) override { }
  virtual void exitHOST_NAME(TSqlParser::HOST_NAMEContext * /*ctx*/) override { }

  virtual void enterISNULL(TSqlParser::ISNULLContext * /*ctx*/) override { }
  virtual void exitISNULL(TSqlParser::ISNULLContext * /*ctx*/) override { }

  virtual void enterISNUMERIC(TSqlParser::ISNUMERICContext * /*ctx*/) override { }
  virtual void exitISNUMERIC(TSqlParser::ISNUMERICContext * /*ctx*/) override { }

  virtual void enterMIN_ACTIVE_ROWVERSION(TSqlParser::MIN_ACTIVE_ROWVERSIONContext * /*ctx*/) override { }
  virtual void exitMIN_ACTIVE_ROWVERSION(TSqlParser::MIN_ACTIVE_ROWVERSIONContext * /*ctx*/) override { }

  virtual void enterNEWID(TSqlParser::NEWIDContext * /*ctx*/) override { }
  virtual void exitNEWID(TSqlParser::NEWIDContext * /*ctx*/) override { }

  virtual void enterNEWSEQUENTIALID(TSqlParser::NEWSEQUENTIALIDContext * /*ctx*/) override { }
  virtual void exitNEWSEQUENTIALID(TSqlParser::NEWSEQUENTIALIDContext * /*ctx*/) override { }

  virtual void enterROWCOUNT_BIG(TSqlParser::ROWCOUNT_BIGContext * /*ctx*/) override { }
  virtual void exitROWCOUNT_BIG(TSqlParser::ROWCOUNT_BIGContext * /*ctx*/) override { }

  virtual void enterSESSION_CONTEXT(TSqlParser::SESSION_CONTEXTContext * /*ctx*/) override { }
  virtual void exitSESSION_CONTEXT(TSqlParser::SESSION_CONTEXTContext * /*ctx*/) override { }

  virtual void enterXACT_STATE(TSqlParser::XACT_STATEContext * /*ctx*/) override { }
  virtual void exitXACT_STATE(TSqlParser::XACT_STATEContext * /*ctx*/) override { }

  virtual void enterCAST(TSqlParser::CASTContext * /*ctx*/) override { }
  virtual void exitCAST(TSqlParser::CASTContext * /*ctx*/) override { }

  virtual void enterTRY_CAST(TSqlParser::TRY_CASTContext * /*ctx*/) override { }
  virtual void exitTRY_CAST(TSqlParser::TRY_CASTContext * /*ctx*/) override { }

  virtual void enterCONVERT(TSqlParser::CONVERTContext * /*ctx*/) override { }
  virtual void exitCONVERT(TSqlParser::CONVERTContext * /*ctx*/) override { }

  virtual void enterCOALESCE(TSqlParser::COALESCEContext * /*ctx*/) override { }
  virtual void exitCOALESCE(TSqlParser::COALESCEContext * /*ctx*/) override { }

  virtual void enterCURSOR_ROWS(TSqlParser::CURSOR_ROWSContext * /*ctx*/) override { }
  virtual void exitCURSOR_ROWS(TSqlParser::CURSOR_ROWSContext * /*ctx*/) override { }

  virtual void enterFETCH_STATUS(TSqlParser::FETCH_STATUSContext * /*ctx*/) override { }
  virtual void exitFETCH_STATUS(TSqlParser::FETCH_STATUSContext * /*ctx*/) override { }

  virtual void enterCURSOR_STATUS(TSqlParser::CURSOR_STATUSContext * /*ctx*/) override { }
  virtual void exitCURSOR_STATUS(TSqlParser::CURSOR_STATUSContext * /*ctx*/) override { }

  virtual void enterCERT_ID(TSqlParser::CERT_IDContext * /*ctx*/) override { }
  virtual void exitCERT_ID(TSqlParser::CERT_IDContext * /*ctx*/) override { }

  virtual void enterDATALENGTH(TSqlParser::DATALENGTHContext * /*ctx*/) override { }
  virtual void exitDATALENGTH(TSqlParser::DATALENGTHContext * /*ctx*/) override { }

  virtual void enterIDENT_CURRENT(TSqlParser::IDENT_CURRENTContext * /*ctx*/) override { }
  virtual void exitIDENT_CURRENT(TSqlParser::IDENT_CURRENTContext * /*ctx*/) override { }

  virtual void enterIDENT_INCR(TSqlParser::IDENT_INCRContext * /*ctx*/) override { }
  virtual void exitIDENT_INCR(TSqlParser::IDENT_INCRContext * /*ctx*/) override { }

  virtual void enterIDENT_SEED(TSqlParser::IDENT_SEEDContext * /*ctx*/) override { }
  virtual void exitIDENT_SEED(TSqlParser::IDENT_SEEDContext * /*ctx*/) override { }

  virtual void enterIDENTITY(TSqlParser::IDENTITYContext * /*ctx*/) override { }
  virtual void exitIDENTITY(TSqlParser::IDENTITYContext * /*ctx*/) override { }

  virtual void enterSQL_VARIANT_PROPERTY(TSqlParser::SQL_VARIANT_PROPERTYContext * /*ctx*/) override { }
  virtual void exitSQL_VARIANT_PROPERTY(TSqlParser::SQL_VARIANT_PROPERTYContext * /*ctx*/) override { }

  virtual void enterCURRENT_DATE(TSqlParser::CURRENT_DATEContext * /*ctx*/) override { }
  virtual void exitCURRENT_DATE(TSqlParser::CURRENT_DATEContext * /*ctx*/) override { }

  virtual void enterCURRENT_TIMESTAMP(TSqlParser::CURRENT_TIMESTAMPContext * /*ctx*/) override { }
  virtual void exitCURRENT_TIMESTAMP(TSqlParser::CURRENT_TIMESTAMPContext * /*ctx*/) override { }

  virtual void enterCURRENT_TIMEZONE(TSqlParser::CURRENT_TIMEZONEContext * /*ctx*/) override { }
  virtual void exitCURRENT_TIMEZONE(TSqlParser::CURRENT_TIMEZONEContext * /*ctx*/) override { }

  virtual void enterCURRENT_TIMEZONE_ID(TSqlParser::CURRENT_TIMEZONE_IDContext * /*ctx*/) override { }
  virtual void exitCURRENT_TIMEZONE_ID(TSqlParser::CURRENT_TIMEZONE_IDContext * /*ctx*/) override { }

  virtual void enterDATE_BUCKET(TSqlParser::DATE_BUCKETContext * /*ctx*/) override { }
  virtual void exitDATE_BUCKET(TSqlParser::DATE_BUCKETContext * /*ctx*/) override { }

  virtual void enterDATEADD(TSqlParser::DATEADDContext * /*ctx*/) override { }
  virtual void exitDATEADD(TSqlParser::DATEADDContext * /*ctx*/) override { }

  virtual void enterDATEDIFF(TSqlParser::DATEDIFFContext * /*ctx*/) override { }
  virtual void exitDATEDIFF(TSqlParser::DATEDIFFContext * /*ctx*/) override { }

  virtual void enterDATEDIFF_BIG(TSqlParser::DATEDIFF_BIGContext * /*ctx*/) override { }
  virtual void exitDATEDIFF_BIG(TSqlParser::DATEDIFF_BIGContext * /*ctx*/) override { }

  virtual void enterDATEFROMPARTS(TSqlParser::DATEFROMPARTSContext * /*ctx*/) override { }
  virtual void exitDATEFROMPARTS(TSqlParser::DATEFROMPARTSContext * /*ctx*/) override { }

  virtual void enterDATENAME(TSqlParser::DATENAMEContext * /*ctx*/) override { }
  virtual void exitDATENAME(TSqlParser::DATENAMEContext * /*ctx*/) override { }

  virtual void enterDATEPART(TSqlParser::DATEPARTContext * /*ctx*/) override { }
  virtual void exitDATEPART(TSqlParser::DATEPARTContext * /*ctx*/) override { }

  virtual void enterDATETIME2FROMPARTS(TSqlParser::DATETIME2FROMPARTSContext * /*ctx*/) override { }
  virtual void exitDATETIME2FROMPARTS(TSqlParser::DATETIME2FROMPARTSContext * /*ctx*/) override { }

  virtual void enterDATETIMEFROMPARTS(TSqlParser::DATETIMEFROMPARTSContext * /*ctx*/) override { }
  virtual void exitDATETIMEFROMPARTS(TSqlParser::DATETIMEFROMPARTSContext * /*ctx*/) override { }

  virtual void enterDATETIMEOFFSETFROMPARTS(TSqlParser::DATETIMEOFFSETFROMPARTSContext * /*ctx*/) override { }
  virtual void exitDATETIMEOFFSETFROMPARTS(TSqlParser::DATETIMEOFFSETFROMPARTSContext * /*ctx*/) override { }

  virtual void enterDATETRUNC(TSqlParser::DATETRUNCContext * /*ctx*/) override { }
  virtual void exitDATETRUNC(TSqlParser::DATETRUNCContext * /*ctx*/) override { }

  virtual void enterDAY(TSqlParser::DAYContext * /*ctx*/) override { }
  virtual void exitDAY(TSqlParser::DAYContext * /*ctx*/) override { }

  virtual void enterEOMONTH(TSqlParser::EOMONTHContext * /*ctx*/) override { }
  virtual void exitEOMONTH(TSqlParser::EOMONTHContext * /*ctx*/) override { }

  virtual void enterGETDATE(TSqlParser::GETDATEContext * /*ctx*/) override { }
  virtual void exitGETDATE(TSqlParser::GETDATEContext * /*ctx*/) override { }

  virtual void enterGETUTCDATE(TSqlParser::GETUTCDATEContext * /*ctx*/) override { }
  virtual void exitGETUTCDATE(TSqlParser::GETUTCDATEContext * /*ctx*/) override { }

  virtual void enterISDATE(TSqlParser::ISDATEContext * /*ctx*/) override { }
  virtual void exitISDATE(TSqlParser::ISDATEContext * /*ctx*/) override { }

  virtual void enterMONTH(TSqlParser::MONTHContext * /*ctx*/) override { }
  virtual void exitMONTH(TSqlParser::MONTHContext * /*ctx*/) override { }

  virtual void enterSMALLDATETIMEFROMPARTS(TSqlParser::SMALLDATETIMEFROMPARTSContext * /*ctx*/) override { }
  virtual void exitSMALLDATETIMEFROMPARTS(TSqlParser::SMALLDATETIMEFROMPARTSContext * /*ctx*/) override { }

  virtual void enterSWITCHOFFSET(TSqlParser::SWITCHOFFSETContext * /*ctx*/) override { }
  virtual void exitSWITCHOFFSET(TSqlParser::SWITCHOFFSETContext * /*ctx*/) override { }

  virtual void enterSYSDATETIME(TSqlParser::SYSDATETIMEContext * /*ctx*/) override { }
  virtual void exitSYSDATETIME(TSqlParser::SYSDATETIMEContext * /*ctx*/) override { }

  virtual void enterSYSDATETIMEOFFSET(TSqlParser::SYSDATETIMEOFFSETContext * /*ctx*/) override { }
  virtual void exitSYSDATETIMEOFFSET(TSqlParser::SYSDATETIMEOFFSETContext * /*ctx*/) override { }

  virtual void enterSYSUTCDATETIME(TSqlParser::SYSUTCDATETIMEContext * /*ctx*/) override { }
  virtual void exitSYSUTCDATETIME(TSqlParser::SYSUTCDATETIMEContext * /*ctx*/) override { }

  virtual void enterTIMEFROMPARTS(TSqlParser::TIMEFROMPARTSContext * /*ctx*/) override { }
  virtual void exitTIMEFROMPARTS(TSqlParser::TIMEFROMPARTSContext * /*ctx*/) override { }

  virtual void enterTODATETIMEOFFSET(TSqlParser::TODATETIMEOFFSETContext * /*ctx*/) override { }
  virtual void exitTODATETIMEOFFSET(TSqlParser::TODATETIMEOFFSETContext * /*ctx*/) override { }

  virtual void enterYEAR(TSqlParser::YEARContext * /*ctx*/) override { }
  virtual void exitYEAR(TSqlParser::YEARContext * /*ctx*/) override { }

  virtual void enterNULLIF(TSqlParser::NULLIFContext * /*ctx*/) override { }
  virtual void exitNULLIF(TSqlParser::NULLIFContext * /*ctx*/) override { }

  virtual void enterPARSE(TSqlParser::PARSEContext * /*ctx*/) override { }
  virtual void exitPARSE(TSqlParser::PARSEContext * /*ctx*/) override { }

  virtual void enterXML_DATA_TYPE_FUNC(TSqlParser::XML_DATA_TYPE_FUNCContext * /*ctx*/) override { }
  virtual void exitXML_DATA_TYPE_FUNC(TSqlParser::XML_DATA_TYPE_FUNCContext * /*ctx*/) override { }

  virtual void enterIIF(TSqlParser::IIFContext * /*ctx*/) override { }
  virtual void exitIIF(TSqlParser::IIFContext * /*ctx*/) override { }

  virtual void enterISJSON(TSqlParser::ISJSONContext * /*ctx*/) override { }
  virtual void exitISJSON(TSqlParser::ISJSONContext * /*ctx*/) override { }

  virtual void enterJSON_OBJECT(TSqlParser::JSON_OBJECTContext * /*ctx*/) override { }
  virtual void exitJSON_OBJECT(TSqlParser::JSON_OBJECTContext * /*ctx*/) override { }

  virtual void enterJSON_ARRAY(TSqlParser::JSON_ARRAYContext * /*ctx*/) override { }
  virtual void exitJSON_ARRAY(TSqlParser::JSON_ARRAYContext * /*ctx*/) override { }

  virtual void enterJSON_VALUE(TSqlParser::JSON_VALUEContext * /*ctx*/) override { }
  virtual void exitJSON_VALUE(TSqlParser::JSON_VALUEContext * /*ctx*/) override { }

  virtual void enterJSON_QUERY(TSqlParser::JSON_QUERYContext * /*ctx*/) override { }
  virtual void exitJSON_QUERY(TSqlParser::JSON_QUERYContext * /*ctx*/) override { }

  virtual void enterJSON_MODIFY(TSqlParser::JSON_MODIFYContext * /*ctx*/) override { }
  virtual void exitJSON_MODIFY(TSqlParser::JSON_MODIFYContext * /*ctx*/) override { }

  virtual void enterJSON_PATH_EXISTS(TSqlParser::JSON_PATH_EXISTSContext * /*ctx*/) override { }
  virtual void exitJSON_PATH_EXISTS(TSqlParser::JSON_PATH_EXISTSContext * /*ctx*/) override { }

  virtual void enterABS(TSqlParser::ABSContext * /*ctx*/) override { }
  virtual void exitABS(TSqlParser::ABSContext * /*ctx*/) override { }

  virtual void enterACOS(TSqlParser::ACOSContext * /*ctx*/) override { }
  virtual void exitACOS(TSqlParser::ACOSContext * /*ctx*/) override { }

  virtual void enterASIN(TSqlParser::ASINContext * /*ctx*/) override { }
  virtual void exitASIN(TSqlParser::ASINContext * /*ctx*/) override { }

  virtual void enterATAN(TSqlParser::ATANContext * /*ctx*/) override { }
  virtual void exitATAN(TSqlParser::ATANContext * /*ctx*/) override { }

  virtual void enterATN2(TSqlParser::ATN2Context * /*ctx*/) override { }
  virtual void exitATN2(TSqlParser::ATN2Context * /*ctx*/) override { }

  virtual void enterCEILING(TSqlParser::CEILINGContext * /*ctx*/) override { }
  virtual void exitCEILING(TSqlParser::CEILINGContext * /*ctx*/) override { }

  virtual void enterCOS(TSqlParser::COSContext * /*ctx*/) override { }
  virtual void exitCOS(TSqlParser::COSContext * /*ctx*/) override { }

  virtual void enterCOT(TSqlParser::COTContext * /*ctx*/) override { }
  virtual void exitCOT(TSqlParser::COTContext * /*ctx*/) override { }

  virtual void enterDEGREES(TSqlParser::DEGREESContext * /*ctx*/) override { }
  virtual void exitDEGREES(TSqlParser::DEGREESContext * /*ctx*/) override { }

  virtual void enterEXP(TSqlParser::EXPContext * /*ctx*/) override { }
  virtual void exitEXP(TSqlParser::EXPContext * /*ctx*/) override { }

  virtual void enterFLOOR(TSqlParser::FLOORContext * /*ctx*/) override { }
  virtual void exitFLOOR(TSqlParser::FLOORContext * /*ctx*/) override { }

  virtual void enterLOG(TSqlParser::LOGContext * /*ctx*/) override { }
  virtual void exitLOG(TSqlParser::LOGContext * /*ctx*/) override { }

  virtual void enterLOG10(TSqlParser::LOG10Context * /*ctx*/) override { }
  virtual void exitLOG10(TSqlParser::LOG10Context * /*ctx*/) override { }

  virtual void enterPI(TSqlParser::PIContext * /*ctx*/) override { }
  virtual void exitPI(TSqlParser::PIContext * /*ctx*/) override { }

  virtual void enterPOWER(TSqlParser::POWERContext * /*ctx*/) override { }
  virtual void exitPOWER(TSqlParser::POWERContext * /*ctx*/) override { }

  virtual void enterRADIANS(TSqlParser::RADIANSContext * /*ctx*/) override { }
  virtual void exitRADIANS(TSqlParser::RADIANSContext * /*ctx*/) override { }

  virtual void enterRAND(TSqlParser::RANDContext * /*ctx*/) override { }
  virtual void exitRAND(TSqlParser::RANDContext * /*ctx*/) override { }

  virtual void enterROUND(TSqlParser::ROUNDContext * /*ctx*/) override { }
  virtual void exitROUND(TSqlParser::ROUNDContext * /*ctx*/) override { }

  virtual void enterMATH_SIGN(TSqlParser::MATH_SIGNContext * /*ctx*/) override { }
  virtual void exitMATH_SIGN(TSqlParser::MATH_SIGNContext * /*ctx*/) override { }

  virtual void enterSIN(TSqlParser::SINContext * /*ctx*/) override { }
  virtual void exitSIN(TSqlParser::SINContext * /*ctx*/) override { }

  virtual void enterSQRT(TSqlParser::SQRTContext * /*ctx*/) override { }
  virtual void exitSQRT(TSqlParser::SQRTContext * /*ctx*/) override { }

  virtual void enterSQUARE(TSqlParser::SQUAREContext * /*ctx*/) override { }
  virtual void exitSQUARE(TSqlParser::SQUAREContext * /*ctx*/) override { }

  virtual void enterTAN(TSqlParser::TANContext * /*ctx*/) override { }
  virtual void exitTAN(TSqlParser::TANContext * /*ctx*/) override { }

  virtual void enterGREATEST(TSqlParser::GREATESTContext * /*ctx*/) override { }
  virtual void exitGREATEST(TSqlParser::GREATESTContext * /*ctx*/) override { }

  virtual void enterLEAST(TSqlParser::LEASTContext * /*ctx*/) override { }
  virtual void exitLEAST(TSqlParser::LEASTContext * /*ctx*/) override { }

  virtual void enterCERTENCODED(TSqlParser::CERTENCODEDContext * /*ctx*/) override { }
  virtual void exitCERTENCODED(TSqlParser::CERTENCODEDContext * /*ctx*/) override { }

  virtual void enterCERTPRIVATEKEY(TSqlParser::CERTPRIVATEKEYContext * /*ctx*/) override { }
  virtual void exitCERTPRIVATEKEY(TSqlParser::CERTPRIVATEKEYContext * /*ctx*/) override { }

  virtual void enterCURRENT_USER(TSqlParser::CURRENT_USERContext * /*ctx*/) override { }
  virtual void exitCURRENT_USER(TSqlParser::CURRENT_USERContext * /*ctx*/) override { }

  virtual void enterDATABASE_PRINCIPAL_ID(TSqlParser::DATABASE_PRINCIPAL_IDContext * /*ctx*/) override { }
  virtual void exitDATABASE_PRINCIPAL_ID(TSqlParser::DATABASE_PRINCIPAL_IDContext * /*ctx*/) override { }

  virtual void enterHAS_DBACCESS(TSqlParser::HAS_DBACCESSContext * /*ctx*/) override { }
  virtual void exitHAS_DBACCESS(TSqlParser::HAS_DBACCESSContext * /*ctx*/) override { }

  virtual void enterHAS_PERMS_BY_NAME(TSqlParser::HAS_PERMS_BY_NAMEContext * /*ctx*/) override { }
  virtual void exitHAS_PERMS_BY_NAME(TSqlParser::HAS_PERMS_BY_NAMEContext * /*ctx*/) override { }

  virtual void enterIS_MEMBER(TSqlParser::IS_MEMBERContext * /*ctx*/) override { }
  virtual void exitIS_MEMBER(TSqlParser::IS_MEMBERContext * /*ctx*/) override { }

  virtual void enterIS_ROLEMEMBER(TSqlParser::IS_ROLEMEMBERContext * /*ctx*/) override { }
  virtual void exitIS_ROLEMEMBER(TSqlParser::IS_ROLEMEMBERContext * /*ctx*/) override { }

  virtual void enterIS_SRVROLEMEMBER(TSqlParser::IS_SRVROLEMEMBERContext * /*ctx*/) override { }
  virtual void exitIS_SRVROLEMEMBER(TSqlParser::IS_SRVROLEMEMBERContext * /*ctx*/) override { }

  virtual void enterLOGINPROPERTY(TSqlParser::LOGINPROPERTYContext * /*ctx*/) override { }
  virtual void exitLOGINPROPERTY(TSqlParser::LOGINPROPERTYContext * /*ctx*/) override { }

  virtual void enterORIGINAL_LOGIN(TSqlParser::ORIGINAL_LOGINContext * /*ctx*/) override { }
  virtual void exitORIGINAL_LOGIN(TSqlParser::ORIGINAL_LOGINContext * /*ctx*/) override { }

  virtual void enterPERMISSIONS(TSqlParser::PERMISSIONSContext * /*ctx*/) override { }
  virtual void exitPERMISSIONS(TSqlParser::PERMISSIONSContext * /*ctx*/) override { }

  virtual void enterPWDENCRYPT(TSqlParser::PWDENCRYPTContext * /*ctx*/) override { }
  virtual void exitPWDENCRYPT(TSqlParser::PWDENCRYPTContext * /*ctx*/) override { }

  virtual void enterPWDCOMPARE(TSqlParser::PWDCOMPAREContext * /*ctx*/) override { }
  virtual void exitPWDCOMPARE(TSqlParser::PWDCOMPAREContext * /*ctx*/) override { }

  virtual void enterSESSION_USER(TSqlParser::SESSION_USERContext * /*ctx*/) override { }
  virtual void exitSESSION_USER(TSqlParser::SESSION_USERContext * /*ctx*/) override { }

  virtual void enterSESSIONPROPERTY(TSqlParser::SESSIONPROPERTYContext * /*ctx*/) override { }
  virtual void exitSESSIONPROPERTY(TSqlParser::SESSIONPROPERTYContext * /*ctx*/) override { }

  virtual void enterSUSER_ID(TSqlParser::SUSER_IDContext * /*ctx*/) override { }
  virtual void exitSUSER_ID(TSqlParser::SUSER_IDContext * /*ctx*/) override { }

  virtual void enterSUSER_SNAME(TSqlParser::SUSER_SNAMEContext * /*ctx*/) override { }
  virtual void exitSUSER_SNAME(TSqlParser::SUSER_SNAMEContext * /*ctx*/) override { }

  virtual void enterSUSER_SID(TSqlParser::SUSER_SIDContext * /*ctx*/) override { }
  virtual void exitSUSER_SID(TSqlParser::SUSER_SIDContext * /*ctx*/) override { }

  virtual void enterSYSTEM_USER(TSqlParser::SYSTEM_USERContext * /*ctx*/) override { }
  virtual void exitSYSTEM_USER(TSqlParser::SYSTEM_USERContext * /*ctx*/) override { }

  virtual void enterUSER(TSqlParser::USERContext * /*ctx*/) override { }
  virtual void exitUSER(TSqlParser::USERContext * /*ctx*/) override { }

  virtual void enterUSER_ID(TSqlParser::USER_IDContext * /*ctx*/) override { }
  virtual void exitUSER_ID(TSqlParser::USER_IDContext * /*ctx*/) override { }

  virtual void enterUSER_NAME(TSqlParser::USER_NAMEContext * /*ctx*/) override { }
  virtual void exitUSER_NAME(TSqlParser::USER_NAMEContext * /*ctx*/) override { }

  virtual void enterXml_data_type_methods(TSqlParser::Xml_data_type_methodsContext * /*ctx*/) override { }
  virtual void exitXml_data_type_methods(TSqlParser::Xml_data_type_methodsContext * /*ctx*/) override { }

  virtual void enterDateparts_9(TSqlParser::Dateparts_9Context * /*ctx*/) override { }
  virtual void exitDateparts_9(TSqlParser::Dateparts_9Context * /*ctx*/) override { }

  virtual void enterDateparts_12(TSqlParser::Dateparts_12Context * /*ctx*/) override { }
  virtual void exitDateparts_12(TSqlParser::Dateparts_12Context * /*ctx*/) override { }

  virtual void enterDateparts_15(TSqlParser::Dateparts_15Context * /*ctx*/) override { }
  virtual void exitDateparts_15(TSqlParser::Dateparts_15Context * /*ctx*/) override { }

  virtual void enterDateparts_datetrunc(TSqlParser::Dateparts_datetruncContext * /*ctx*/) override { }
  virtual void exitDateparts_datetrunc(TSqlParser::Dateparts_datetruncContext * /*ctx*/) override { }

  virtual void enterValue_method(TSqlParser::Value_methodContext * /*ctx*/) override { }
  virtual void exitValue_method(TSqlParser::Value_methodContext * /*ctx*/) override { }

  virtual void enterValue_call(TSqlParser::Value_callContext * /*ctx*/) override { }
  virtual void exitValue_call(TSqlParser::Value_callContext * /*ctx*/) override { }

  virtual void enterQuery_method(TSqlParser::Query_methodContext * /*ctx*/) override { }
  virtual void exitQuery_method(TSqlParser::Query_methodContext * /*ctx*/) override { }

  virtual void enterQuery_call(TSqlParser::Query_callContext * /*ctx*/) override { }
  virtual void exitQuery_call(TSqlParser::Query_callContext * /*ctx*/) override { }

  virtual void enterExist_method(TSqlParser::Exist_methodContext * /*ctx*/) override { }
  virtual void exitExist_method(TSqlParser::Exist_methodContext * /*ctx*/) override { }

  virtual void enterExist_call(TSqlParser::Exist_callContext * /*ctx*/) override { }
  virtual void exitExist_call(TSqlParser::Exist_callContext * /*ctx*/) override { }

  virtual void enterModify_method(TSqlParser::Modify_methodContext * /*ctx*/) override { }
  virtual void exitModify_method(TSqlParser::Modify_methodContext * /*ctx*/) override { }

  virtual void enterModify_call(TSqlParser::Modify_callContext * /*ctx*/) override { }
  virtual void exitModify_call(TSqlParser::Modify_callContext * /*ctx*/) override { }

  virtual void enterHierarchyid_call(TSqlParser::Hierarchyid_callContext * /*ctx*/) override { }
  virtual void exitHierarchyid_call(TSqlParser::Hierarchyid_callContext * /*ctx*/) override { }

  virtual void enterHierarchyid_static_method(TSqlParser::Hierarchyid_static_methodContext * /*ctx*/) override { }
  virtual void exitHierarchyid_static_method(TSqlParser::Hierarchyid_static_methodContext * /*ctx*/) override { }

  virtual void enterNodes_method(TSqlParser::Nodes_methodContext * /*ctx*/) override { }
  virtual void exitNodes_method(TSqlParser::Nodes_methodContext * /*ctx*/) override { }

  virtual void enterSwitch_section(TSqlParser::Switch_sectionContext * /*ctx*/) override { }
  virtual void exitSwitch_section(TSqlParser::Switch_sectionContext * /*ctx*/) override { }

  virtual void enterSwitch_search_condition_section(TSqlParser::Switch_search_condition_sectionContext * /*ctx*/) override { }
  virtual void exitSwitch_search_condition_section(TSqlParser::Switch_search_condition_sectionContext * /*ctx*/) override { }

  virtual void enterAs_column_alias(TSqlParser::As_column_aliasContext * /*ctx*/) override { }
  virtual void exitAs_column_alias(TSqlParser::As_column_aliasContext * /*ctx*/) override { }

  virtual void enterAs_table_alias(TSqlParser::As_table_aliasContext * /*ctx*/) override { }
  virtual void exitAs_table_alias(TSqlParser::As_table_aliasContext * /*ctx*/) override { }

  virtual void enterTable_alias(TSqlParser::Table_aliasContext * /*ctx*/) override { }
  virtual void exitTable_alias(TSqlParser::Table_aliasContext * /*ctx*/) override { }

  virtual void enterWith_table_hints(TSqlParser::With_table_hintsContext * /*ctx*/) override { }
  virtual void exitWith_table_hints(TSqlParser::With_table_hintsContext * /*ctx*/) override { }

  virtual void enterDeprecated_table_hint(TSqlParser::Deprecated_table_hintContext * /*ctx*/) override { }
  virtual void exitDeprecated_table_hint(TSqlParser::Deprecated_table_hintContext * /*ctx*/) override { }

  virtual void enterSybase_legacy_hints(TSqlParser::Sybase_legacy_hintsContext * /*ctx*/) override { }
  virtual void exitSybase_legacy_hints(TSqlParser::Sybase_legacy_hintsContext * /*ctx*/) override { }

  virtual void enterSybase_legacy_hint(TSqlParser::Sybase_legacy_hintContext * /*ctx*/) override { }
  virtual void exitSybase_legacy_hint(TSqlParser::Sybase_legacy_hintContext * /*ctx*/) override { }

  virtual void enterTable_hint(TSqlParser::Table_hintContext * /*ctx*/) override { }
  virtual void exitTable_hint(TSqlParser::Table_hintContext * /*ctx*/) override { }

  virtual void enterIndex_value(TSqlParser::Index_valueContext * /*ctx*/) override { }
  virtual void exitIndex_value(TSqlParser::Index_valueContext * /*ctx*/) override { }

  virtual void enterColumn_alias_list(TSqlParser::Column_alias_listContext * /*ctx*/) override { }
  virtual void exitColumn_alias_list(TSqlParser::Column_alias_listContext * /*ctx*/) override { }

  virtual void enterColumn_alias(TSqlParser::Column_aliasContext * /*ctx*/) override { }
  virtual void exitColumn_alias(TSqlParser::Column_aliasContext * /*ctx*/) override { }

  virtual void enterTable_value_constructor(TSqlParser::Table_value_constructorContext * /*ctx*/) override { }
  virtual void exitTable_value_constructor(TSqlParser::Table_value_constructorContext * /*ctx*/) override { }

  virtual void enterExpression_list_(TSqlParser::Expression_list_Context * /*ctx*/) override { }
  virtual void exitExpression_list_(TSqlParser::Expression_list_Context * /*ctx*/) override { }

  virtual void enterRanking_windowed_function(TSqlParser::Ranking_windowed_functionContext * /*ctx*/) override { }
  virtual void exitRanking_windowed_function(TSqlParser::Ranking_windowed_functionContext * /*ctx*/) override { }

  virtual void enterAggregate_windowed_function(TSqlParser::Aggregate_windowed_functionContext * /*ctx*/) override { }
  virtual void exitAggregate_windowed_function(TSqlParser::Aggregate_windowed_functionContext * /*ctx*/) override { }

  virtual void enterAnalytic_windowed_function(TSqlParser::Analytic_windowed_functionContext * /*ctx*/) override { }
  virtual void exitAnalytic_windowed_function(TSqlParser::Analytic_windowed_functionContext * /*ctx*/) override { }

  virtual void enterAll_distinct_expression(TSqlParser::All_distinct_expressionContext * /*ctx*/) override { }
  virtual void exitAll_distinct_expression(TSqlParser::All_distinct_expressionContext * /*ctx*/) override { }

  virtual void enterOver_clause(TSqlParser::Over_clauseContext * /*ctx*/) override { }
  virtual void exitOver_clause(TSqlParser::Over_clauseContext * /*ctx*/) override { }

  virtual void enterRow_or_range_clause(TSqlParser::Row_or_range_clauseContext * /*ctx*/) override { }
  virtual void exitRow_or_range_clause(TSqlParser::Row_or_range_clauseContext * /*ctx*/) override { }

  virtual void enterWindow_frame_extent(TSqlParser::Window_frame_extentContext * /*ctx*/) override { }
  virtual void exitWindow_frame_extent(TSqlParser::Window_frame_extentContext * /*ctx*/) override { }

  virtual void enterWindow_frame_bound(TSqlParser::Window_frame_boundContext * /*ctx*/) override { }
  virtual void exitWindow_frame_bound(TSqlParser::Window_frame_boundContext * /*ctx*/) override { }

  virtual void enterWindow_frame_preceding(TSqlParser::Window_frame_precedingContext * /*ctx*/) override { }
  virtual void exitWindow_frame_preceding(TSqlParser::Window_frame_precedingContext * /*ctx*/) override { }

  virtual void enterWindow_frame_following(TSqlParser::Window_frame_followingContext * /*ctx*/) override { }
  virtual void exitWindow_frame_following(TSqlParser::Window_frame_followingContext * /*ctx*/) override { }

  virtual void enterCreate_database_option(TSqlParser::Create_database_optionContext * /*ctx*/) override { }
  virtual void exitCreate_database_option(TSqlParser::Create_database_optionContext * /*ctx*/) override { }

  virtual void enterDatabase_filestream_option(TSqlParser::Database_filestream_optionContext * /*ctx*/) override { }
  virtual void exitDatabase_filestream_option(TSqlParser::Database_filestream_optionContext * /*ctx*/) override { }

  virtual void enterDatabase_file_spec(TSqlParser::Database_file_specContext * /*ctx*/) override { }
  virtual void exitDatabase_file_spec(TSqlParser::Database_file_specContext * /*ctx*/) override { }

  virtual void enterFile_group(TSqlParser::File_groupContext * /*ctx*/) override { }
  virtual void exitFile_group(TSqlParser::File_groupContext * /*ctx*/) override { }

  virtual void enterFile_spec(TSqlParser::File_specContext * /*ctx*/) override { }
  virtual void exitFile_spec(TSqlParser::File_specContext * /*ctx*/) override { }

  virtual void enterEntity_name(TSqlParser::Entity_nameContext * /*ctx*/) override { }
  virtual void exitEntity_name(TSqlParser::Entity_nameContext * /*ctx*/) override { }

  virtual void enterEntity_name_for_azure_dw(TSqlParser::Entity_name_for_azure_dwContext * /*ctx*/) override { }
  virtual void exitEntity_name_for_azure_dw(TSqlParser::Entity_name_for_azure_dwContext * /*ctx*/) override { }

  virtual void enterEntity_name_for_parallel_dw(TSqlParser::Entity_name_for_parallel_dwContext * /*ctx*/) override { }
  virtual void exitEntity_name_for_parallel_dw(TSqlParser::Entity_name_for_parallel_dwContext * /*ctx*/) override { }

  virtual void enterFull_table_name(TSqlParser::Full_table_nameContext * /*ctx*/) override { }
  virtual void exitFull_table_name(TSqlParser::Full_table_nameContext * /*ctx*/) override { }

  virtual void enterTable_name(TSqlParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(TSqlParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterSimple_name(TSqlParser::Simple_nameContext * /*ctx*/) override { }
  virtual void exitSimple_name(TSqlParser::Simple_nameContext * /*ctx*/) override { }

  virtual void enterFunc_proc_name_schema(TSqlParser::Func_proc_name_schemaContext * /*ctx*/) override { }
  virtual void exitFunc_proc_name_schema(TSqlParser::Func_proc_name_schemaContext * /*ctx*/) override { }

  virtual void enterFunc_proc_name_database_schema(TSqlParser::Func_proc_name_database_schemaContext * /*ctx*/) override { }
  virtual void exitFunc_proc_name_database_schema(TSqlParser::Func_proc_name_database_schemaContext * /*ctx*/) override { }

  virtual void enterFunc_proc_name_server_database_schema(TSqlParser::Func_proc_name_server_database_schemaContext * /*ctx*/) override { }
  virtual void exitFunc_proc_name_server_database_schema(TSqlParser::Func_proc_name_server_database_schemaContext * /*ctx*/) override { }

  virtual void enterDdl_object(TSqlParser::Ddl_objectContext * /*ctx*/) override { }
  virtual void exitDdl_object(TSqlParser::Ddl_objectContext * /*ctx*/) override { }

  virtual void enterFull_column_name(TSqlParser::Full_column_nameContext * /*ctx*/) override { }
  virtual void exitFull_column_name(TSqlParser::Full_column_nameContext * /*ctx*/) override { }

  virtual void enterColumn_name_list_with_order(TSqlParser::Column_name_list_with_orderContext * /*ctx*/) override { }
  virtual void exitColumn_name_list_with_order(TSqlParser::Column_name_list_with_orderContext * /*ctx*/) override { }

  virtual void enterInsert_column_name_list(TSqlParser::Insert_column_name_listContext * /*ctx*/) override { }
  virtual void exitInsert_column_name_list(TSqlParser::Insert_column_name_listContext * /*ctx*/) override { }

  virtual void enterInsert_column_id(TSqlParser::Insert_column_idContext * /*ctx*/) override { }
  virtual void exitInsert_column_id(TSqlParser::Insert_column_idContext * /*ctx*/) override { }

  virtual void enterColumn_name_list(TSqlParser::Column_name_listContext * /*ctx*/) override { }
  virtual void exitColumn_name_list(TSqlParser::Column_name_listContext * /*ctx*/) override { }

  virtual void enterCursor_name(TSqlParser::Cursor_nameContext * /*ctx*/) override { }
  virtual void exitCursor_name(TSqlParser::Cursor_nameContext * /*ctx*/) override { }

  virtual void enterOn_off(TSqlParser::On_offContext * /*ctx*/) override { }
  virtual void exitOn_off(TSqlParser::On_offContext * /*ctx*/) override { }

  virtual void enterClustered(TSqlParser::ClusteredContext * /*ctx*/) override { }
  virtual void exitClustered(TSqlParser::ClusteredContext * /*ctx*/) override { }

  virtual void enterNull_notnull(TSqlParser::Null_notnullContext * /*ctx*/) override { }
  virtual void exitNull_notnull(TSqlParser::Null_notnullContext * /*ctx*/) override { }

  virtual void enterScalar_function_name(TSqlParser::Scalar_function_nameContext * /*ctx*/) override { }
  virtual void exitScalar_function_name(TSqlParser::Scalar_function_nameContext * /*ctx*/) override { }

  virtual void enterBegin_conversation_timer(TSqlParser::Begin_conversation_timerContext * /*ctx*/) override { }
  virtual void exitBegin_conversation_timer(TSqlParser::Begin_conversation_timerContext * /*ctx*/) override { }

  virtual void enterBegin_conversation_dialog(TSqlParser::Begin_conversation_dialogContext * /*ctx*/) override { }
  virtual void exitBegin_conversation_dialog(TSqlParser::Begin_conversation_dialogContext * /*ctx*/) override { }

  virtual void enterContract_name(TSqlParser::Contract_nameContext * /*ctx*/) override { }
  virtual void exitContract_name(TSqlParser::Contract_nameContext * /*ctx*/) override { }

  virtual void enterService_name(TSqlParser::Service_nameContext * /*ctx*/) override { }
  virtual void exitService_name(TSqlParser::Service_nameContext * /*ctx*/) override { }

  virtual void enterEnd_conversation(TSqlParser::End_conversationContext * /*ctx*/) override { }
  virtual void exitEnd_conversation(TSqlParser::End_conversationContext * /*ctx*/) override { }

  virtual void enterWaitfor_conversation(TSqlParser::Waitfor_conversationContext * /*ctx*/) override { }
  virtual void exitWaitfor_conversation(TSqlParser::Waitfor_conversationContext * /*ctx*/) override { }

  virtual void enterGet_conversation(TSqlParser::Get_conversationContext * /*ctx*/) override { }
  virtual void exitGet_conversation(TSqlParser::Get_conversationContext * /*ctx*/) override { }

  virtual void enterQueue_id(TSqlParser::Queue_idContext * /*ctx*/) override { }
  virtual void exitQueue_id(TSqlParser::Queue_idContext * /*ctx*/) override { }

  virtual void enterSend_conversation(TSqlParser::Send_conversationContext * /*ctx*/) override { }
  virtual void exitSend_conversation(TSqlParser::Send_conversationContext * /*ctx*/) override { }

  virtual void enterData_type(TSqlParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(TSqlParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterConstant(TSqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(TSqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterPrimitive_constant(TSqlParser::Primitive_constantContext * /*ctx*/) override { }
  virtual void exitPrimitive_constant(TSqlParser::Primitive_constantContext * /*ctx*/) override { }

  virtual void enterKeyword(TSqlParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TSqlParser::KeywordContext * /*ctx*/) override { }

  virtual void enterId_(TSqlParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(TSqlParser::Id_Context * /*ctx*/) override { }

  virtual void enterSimple_id(TSqlParser::Simple_idContext * /*ctx*/) override { }
  virtual void exitSimple_id(TSqlParser::Simple_idContext * /*ctx*/) override { }

  virtual void enterId_or_string(TSqlParser::Id_or_stringContext * /*ctx*/) override { }
  virtual void exitId_or_string(TSqlParser::Id_or_stringContext * /*ctx*/) override { }

  virtual void enterComparison_operator(TSqlParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(TSqlParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(TSqlParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(TSqlParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterFile_size(TSqlParser::File_sizeContext * /*ctx*/) override { }
  virtual void exitFile_size(TSqlParser::File_sizeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace parser
