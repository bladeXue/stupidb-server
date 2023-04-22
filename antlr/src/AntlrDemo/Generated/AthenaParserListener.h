
// Generated from AthenaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "AthenaParser.h"


namespace AntlrDemo.Generated {

/**
 * This interface defines an abstract listener for a parse tree produced by AthenaParser.
 */
class  AthenaParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmt(AthenaParser::StmtContext *ctx) = 0;
  virtual void exitStmt(AthenaParser::StmtContext *ctx) = 0;

  virtual void enterCommand(AthenaParser::CommandContext *ctx) = 0;
  virtual void exitCommand(AthenaParser::CommandContext *ctx) = 0;

  virtual void enterDdl_command(AthenaParser::Ddl_commandContext *ctx) = 0;
  virtual void exitDdl_command(AthenaParser::Ddl_commandContext *ctx) = 0;

  virtual void enterDml_command(AthenaParser::Dml_commandContext *ctx) = 0;
  virtual void exitDml_command(AthenaParser::Dml_commandContext *ctx) = 0;

  virtual void enterSelect(AthenaParser::SelectContext *ctx) = 0;
  virtual void exitSelect(AthenaParser::SelectContext *ctx) = 0;

  virtual void enterSelect_statement(AthenaParser::Select_statementContext *ctx) = 0;
  virtual void exitSelect_statement(AthenaParser::Select_statementContext *ctx) = 0;

  virtual void enterAll_distinct(AthenaParser::All_distinctContext *ctx) = 0;
  virtual void exitAll_distinct(AthenaParser::All_distinctContext *ctx) = 0;

  virtual void enterOrder_item(AthenaParser::Order_itemContext *ctx) = 0;
  virtual void exitOrder_item(AthenaParser::Order_itemContext *ctx) = 0;

  virtual void enterFrom_item(AthenaParser::From_itemContext *ctx) = 0;
  virtual void exitFrom_item(AthenaParser::From_itemContext *ctx) = 0;

  virtual void enterCount(AthenaParser::CountContext *ctx) = 0;
  virtual void exitCount(AthenaParser::CountContext *ctx) = 0;

  virtual void enterWith_query(AthenaParser::With_queryContext *ctx) = 0;
  virtual void exitWith_query(AthenaParser::With_queryContext *ctx) = 0;

  virtual void enterGrouping_element(AthenaParser::Grouping_elementContext *ctx) = 0;
  virtual void exitGrouping_element(AthenaParser::Grouping_elementContext *ctx) = 0;

  virtual void enterCondition(AthenaParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(AthenaParser::ConditionContext *ctx) = 0;

  virtual void enterInsert_into(AthenaParser::Insert_intoContext *ctx) = 0;
  virtual void exitInsert_into(AthenaParser::Insert_intoContext *ctx) = 0;

  virtual void enterValue_list(AthenaParser::Value_listContext *ctx) = 0;
  virtual void exitValue_list(AthenaParser::Value_listContext *ctx) = 0;

  virtual void enterSelect_list(AthenaParser::Select_listContext *ctx) = 0;
  virtual void exitSelect_list(AthenaParser::Select_listContext *ctx) = 0;

  virtual void enterSelect_item(AthenaParser::Select_itemContext *ctx) = 0;
  virtual void exitSelect_item(AthenaParser::Select_itemContext *ctx) = 0;

  virtual void enterDelete_stmt(AthenaParser::Delete_stmtContext *ctx) = 0;
  virtual void exitDelete_stmt(AthenaParser::Delete_stmtContext *ctx) = 0;

  virtual void enterUpdate(AthenaParser::UpdateContext *ctx) = 0;
  virtual void exitUpdate(AthenaParser::UpdateContext *ctx) = 0;

  virtual void enterMerge_into(AthenaParser::Merge_intoContext *ctx) = 0;
  virtual void exitMerge_into(AthenaParser::Merge_intoContext *ctx) = 0;

  virtual void enterSearch_condition(AthenaParser::Search_conditionContext *ctx) = 0;
  virtual void exitSearch_condition(AthenaParser::Search_conditionContext *ctx) = 0;

  virtual void enterWhen_clauses(AthenaParser::When_clausesContext *ctx) = 0;
  virtual void exitWhen_clauses(AthenaParser::When_clausesContext *ctx) = 0;

  virtual void enterWhen_not_matched_clause(AthenaParser::When_not_matched_clauseContext *ctx) = 0;
  virtual void exitWhen_not_matched_clause(AthenaParser::When_not_matched_clauseContext *ctx) = 0;

  virtual void enterExpression_list_(AthenaParser::Expression_list_Context *ctx) = 0;
  virtual void exitExpression_list_(AthenaParser::Expression_list_Context *ctx) = 0;

  virtual void enterColumn_list(AthenaParser::Column_listContext *ctx) = 0;
  virtual void exitColumn_list(AthenaParser::Column_listContext *ctx) = 0;

  virtual void enterWhen_matched_and_clause(AthenaParser::When_matched_and_clauseContext *ctx) = 0;
  virtual void exitWhen_matched_and_clause(AthenaParser::When_matched_and_clauseContext *ctx) = 0;

  virtual void enterWhen_matched_then_clause(AthenaParser::When_matched_then_clauseContext *ctx) = 0;
  virtual void exitWhen_matched_then_clause(AthenaParser::When_matched_then_clauseContext *ctx) = 0;

  virtual void enterUpdate_delete(AthenaParser::Update_deleteContext *ctx) = 0;
  virtual void exitUpdate_delete(AthenaParser::Update_deleteContext *ctx) = 0;

  virtual void enterOptimize_stmt(AthenaParser::Optimize_stmtContext *ctx) = 0;
  virtual void exitOptimize_stmt(AthenaParser::Optimize_stmtContext *ctx) = 0;

  virtual void enterVacuum(AthenaParser::VacuumContext *ctx) = 0;
  virtual void exitVacuum(AthenaParser::VacuumContext *ctx) = 0;

  virtual void enterTarget_table(AthenaParser::Target_tableContext *ctx) = 0;
  virtual void exitTarget_table(AthenaParser::Target_tableContext *ctx) = 0;

  virtual void enterSource_table(AthenaParser::Source_tableContext *ctx) = 0;
  virtual void exitSource_table(AthenaParser::Source_tableContext *ctx) = 0;

  virtual void enterExplain(AthenaParser::ExplainContext *ctx) = 0;
  virtual void exitExplain(AthenaParser::ExplainContext *ctx) = 0;

  virtual void enterExplain_option(AthenaParser::Explain_optionContext *ctx) = 0;
  virtual void exitExplain_option(AthenaParser::Explain_optionContext *ctx) = 0;

  virtual void enterPrepare(AthenaParser::PrepareContext *ctx) = 0;
  virtual void exitPrepare(AthenaParser::PrepareContext *ctx) = 0;

  virtual void enterStatement(AthenaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(AthenaParser::StatementContext *ctx) = 0;

  virtual void enterExecute(AthenaParser::ExecuteContext *ctx) = 0;
  virtual void exitExecute(AthenaParser::ExecuteContext *ctx) = 0;

  virtual void enterParameter(AthenaParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(AthenaParser::ParameterContext *ctx) = 0;

  virtual void enterValue(AthenaParser::ValueContext *ctx) = 0;
  virtual void exitValue(AthenaParser::ValueContext *ctx) = 0;

  virtual void enterDeallocate(AthenaParser::DeallocateContext *ctx) = 0;
  virtual void exitDeallocate(AthenaParser::DeallocateContext *ctx) = 0;

  virtual void enterUnload(AthenaParser::UnloadContext *ctx) = 0;
  virtual void exitUnload(AthenaParser::UnloadContext *ctx) = 0;

  virtual void enterProperty_list(AthenaParser::Property_listContext *ctx) = 0;
  virtual void exitProperty_list(AthenaParser::Property_listContext *ctx) = 0;

  virtual void enterProperty_value(AthenaParser::Property_valueContext *ctx) = 0;
  virtual void exitProperty_value(AthenaParser::Property_valueContext *ctx) = 0;

  virtual void enterPredicate(AthenaParser::PredicateContext *ctx) = 0;
  virtual void exitPredicate(AthenaParser::PredicateContext *ctx) = 0;

  virtual void enterAlter_database(AthenaParser::Alter_databaseContext *ctx) = 0;
  virtual void exitAlter_database(AthenaParser::Alter_databaseContext *ctx) = 0;

  virtual void enterDb_schema(AthenaParser::Db_schemaContext *ctx) = 0;
  virtual void exitDb_schema(AthenaParser::Db_schemaContext *ctx) = 0;

  virtual void enterKv_pair(AthenaParser::Kv_pairContext *ctx) = 0;
  virtual void exitKv_pair(AthenaParser::Kv_pairContext *ctx) = 0;

  virtual void enterAlter_table_add_cols(AthenaParser::Alter_table_add_colsContext *ctx) = 0;
  virtual void exitAlter_table_add_cols(AthenaParser::Alter_table_add_colsContext *ctx) = 0;

  virtual void enterPart_col_name_value(AthenaParser::Part_col_name_valueContext *ctx) = 0;
  virtual void exitPart_col_name_value(AthenaParser::Part_col_name_valueContext *ctx) = 0;

  virtual void enterPartition_col_name(AthenaParser::Partition_col_nameContext *ctx) = 0;
  virtual void exitPartition_col_name(AthenaParser::Partition_col_nameContext *ctx) = 0;

  virtual void enterPartition_col_value(AthenaParser::Partition_col_valueContext *ctx) = 0;
  virtual void exitPartition_col_value(AthenaParser::Partition_col_valueContext *ctx) = 0;

  virtual void enterAlter_table_add_part(AthenaParser::Alter_table_add_partContext *ctx) = 0;
  virtual void exitAlter_table_add_part(AthenaParser::Alter_table_add_partContext *ctx) = 0;

  virtual void enterAlter_table_drop_part(AthenaParser::Alter_table_drop_partContext *ctx) = 0;
  virtual void exitAlter_table_drop_part(AthenaParser::Alter_table_drop_partContext *ctx) = 0;

  virtual void enterPartition_spec(AthenaParser::Partition_specContext *ctx) = 0;
  virtual void exitPartition_spec(AthenaParser::Partition_specContext *ctx) = 0;

  virtual void enterAlter_table_rename_part(AthenaParser::Alter_table_rename_partContext *ctx) = 0;
  virtual void exitAlter_table_rename_part(AthenaParser::Alter_table_rename_partContext *ctx) = 0;

  virtual void enterAlter_table_replace_part(AthenaParser::Alter_table_replace_partContext *ctx) = 0;
  virtual void exitAlter_table_replace_part(AthenaParser::Alter_table_replace_partContext *ctx) = 0;

  virtual void enterAlter_table_set_location(AthenaParser::Alter_table_set_locationContext *ctx) = 0;
  virtual void exitAlter_table_set_location(AthenaParser::Alter_table_set_locationContext *ctx) = 0;

  virtual void enterAlter_table_set_props(AthenaParser::Alter_table_set_propsContext *ctx) = 0;
  virtual void exitAlter_table_set_props(AthenaParser::Alter_table_set_propsContext *ctx) = 0;

  virtual void enterCreate_database(AthenaParser::Create_databaseContext *ctx) = 0;
  virtual void exitCreate_database(AthenaParser::Create_databaseContext *ctx) = 0;

  virtual void enterCreate_table(AthenaParser::Create_tableContext *ctx) = 0;
  virtual void exitCreate_table(AthenaParser::Create_tableContext *ctx) = 0;

  virtual void enterTable_comment(AthenaParser::Table_commentContext *ctx) = 0;
  virtual void exitTable_comment(AthenaParser::Table_commentContext *ctx) = 0;

  virtual void enterRow_format(AthenaParser::Row_formatContext *ctx) = 0;
  virtual void exitRow_format(AthenaParser::Row_formatContext *ctx) = 0;

  virtual void enterTable_row_format_field_identifier(AthenaParser::Table_row_format_field_identifierContext *ctx) = 0;
  virtual void exitTable_row_format_field_identifier(AthenaParser::Table_row_format_field_identifierContext *ctx) = 0;

  virtual void enterTable_row_format_coll_items_identifier(AthenaParser::Table_row_format_coll_items_identifierContext *ctx) = 0;
  virtual void exitTable_row_format_coll_items_identifier(AthenaParser::Table_row_format_coll_items_identifierContext *ctx) = 0;

  virtual void enterTable_row_format_map_keys_identifier(AthenaParser::Table_row_format_map_keys_identifierContext *ctx) = 0;
  virtual void exitTable_row_format_map_keys_identifier(AthenaParser::Table_row_format_map_keys_identifierContext *ctx) = 0;

  virtual void enterTable_row_format_lines_identifier(AthenaParser::Table_row_format_lines_identifierContext *ctx) = 0;
  virtual void exitTable_row_format_lines_identifier(AthenaParser::Table_row_format_lines_identifierContext *ctx) = 0;

  virtual void enterTable_row_null_format(AthenaParser::Table_row_null_formatContext *ctx) = 0;
  virtual void exitTable_row_null_format(AthenaParser::Table_row_null_formatContext *ctx) = 0;

  virtual void enterFile_format(AthenaParser::File_formatContext *ctx) = 0;
  virtual void exitFile_format(AthenaParser::File_formatContext *ctx) = 0;

  virtual void enterNum_buckets(AthenaParser::Num_bucketsContext *ctx) = 0;
  virtual void exitNum_buckets(AthenaParser::Num_bucketsContext *ctx) = 0;

  virtual void enterCol_def_with_comment(AthenaParser::Col_def_with_commentContext *ctx) = 0;
  virtual void exitCol_def_with_comment(AthenaParser::Col_def_with_commentContext *ctx) = 0;

  virtual void enterCol_comment(AthenaParser::Col_commentContext *ctx) = 0;
  virtual void exitCol_comment(AthenaParser::Col_commentContext *ctx) = 0;

  virtual void enterCreate_table_as(AthenaParser::Create_table_asContext *ctx) = 0;
  virtual void exitCreate_table_as(AthenaParser::Create_table_asContext *ctx) = 0;

  virtual void enterProperty_name(AthenaParser::Property_nameContext *ctx) = 0;
  virtual void exitProperty_name(AthenaParser::Property_nameContext *ctx) = 0;

  virtual void enterProp_exp(AthenaParser::Prop_expContext *ctx) = 0;
  virtual void exitProp_exp(AthenaParser::Prop_expContext *ctx) = 0;

  virtual void enterCreate_view(AthenaParser::Create_viewContext *ctx) = 0;
  virtual void exitCreate_view(AthenaParser::Create_viewContext *ctx) = 0;

  virtual void enterDescribe(AthenaParser::DescribeContext *ctx) = 0;
  virtual void exitDescribe(AthenaParser::DescribeContext *ctx) = 0;

  virtual void enterField_name(AthenaParser::Field_nameContext *ctx) = 0;
  virtual void exitField_name(AthenaParser::Field_nameContext *ctx) = 0;

  virtual void enterDescribe_view(AthenaParser::Describe_viewContext *ctx) = 0;
  virtual void exitDescribe_view(AthenaParser::Describe_viewContext *ctx) = 0;

  virtual void enterDrop_database(AthenaParser::Drop_databaseContext *ctx) = 0;
  virtual void exitDrop_database(AthenaParser::Drop_databaseContext *ctx) = 0;

  virtual void enterDrop_table(AthenaParser::Drop_tableContext *ctx) = 0;
  virtual void exitDrop_table(AthenaParser::Drop_tableContext *ctx) = 0;

  virtual void enterDrop_view(AthenaParser::Drop_viewContext *ctx) = 0;
  virtual void exitDrop_view(AthenaParser::Drop_viewContext *ctx) = 0;

  virtual void enterMsck(AthenaParser::MsckContext *ctx) = 0;
  virtual void exitMsck(AthenaParser::MsckContext *ctx) = 0;

  virtual void enterShow_columns(AthenaParser::Show_columnsContext *ctx) = 0;
  virtual void exitShow_columns(AthenaParser::Show_columnsContext *ctx) = 0;

  virtual void enterShow_create_table(AthenaParser::Show_create_tableContext *ctx) = 0;
  virtual void exitShow_create_table(AthenaParser::Show_create_tableContext *ctx) = 0;

  virtual void enterShow_create_view(AthenaParser::Show_create_viewContext *ctx) = 0;
  virtual void exitShow_create_view(AthenaParser::Show_create_viewContext *ctx) = 0;

  virtual void enterShow_databases(AthenaParser::Show_databasesContext *ctx) = 0;
  virtual void exitShow_databases(AthenaParser::Show_databasesContext *ctx) = 0;

  virtual void enterShow_partitions(AthenaParser::Show_partitionsContext *ctx) = 0;
  virtual void exitShow_partitions(AthenaParser::Show_partitionsContext *ctx) = 0;

  virtual void enterShow_tables(AthenaParser::Show_tablesContext *ctx) = 0;
  virtual void exitShow_tables(AthenaParser::Show_tablesContext *ctx) = 0;

  virtual void enterShow_tblproperties(AthenaParser::Show_tblpropertiesContext *ctx) = 0;
  virtual void exitShow_tblproperties(AthenaParser::Show_tblpropertiesContext *ctx) = 0;

  virtual void enterShow_views(AthenaParser::Show_viewsContext *ctx) = 0;
  virtual void exitShow_views(AthenaParser::Show_viewsContext *ctx) = 0;

  virtual void enterQuery(AthenaParser::QueryContext *ctx) = 0;
  virtual void exitQuery(AthenaParser::QueryContext *ctx) = 0;

  virtual void enterTrue_false(AthenaParser::True_falseContext *ctx) = 0;
  virtual void exitTrue_false(AthenaParser::True_falseContext *ctx) = 0;

  virtual void enterBoolean_expression(AthenaParser::Boolean_expressionContext *ctx) = 0;
  virtual void exitBoolean_expression(AthenaParser::Boolean_expressionContext *ctx) = 0;

  virtual void enterPred(AthenaParser::PredContext *ctx) = 0;
  virtual void exitPred(AthenaParser::PredContext *ctx) = 0;

  virtual void enterTable_subquery(AthenaParser::Table_subqueryContext *ctx) = 0;
  virtual void exitTable_subquery(AthenaParser::Table_subqueryContext *ctx) = 0;

  virtual void enterComparison_operator(AthenaParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(AthenaParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterExpression(AthenaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(AthenaParser::ExpressionContext *ctx) = 0;

  virtual void enterCase_expression(AthenaParser::Case_expressionContext *ctx) = 0;
  virtual void exitCase_expression(AthenaParser::Case_expressionContext *ctx) = 0;

  virtual void enterWhen_expression(AthenaParser::When_expressionContext *ctx) = 0;
  virtual void exitWhen_expression(AthenaParser::When_expressionContext *ctx) = 0;

  virtual void enterPrimitive_expression(AthenaParser::Primitive_expressionContext *ctx) = 0;
  virtual void exitPrimitive_expression(AthenaParser::Primitive_expressionContext *ctx) = 0;

  virtual void enterLiteral(AthenaParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(AthenaParser::LiteralContext *ctx) = 0;

  virtual void enterInt_number(AthenaParser::Int_numberContext *ctx) = 0;
  virtual void exitInt_number(AthenaParser::Int_numberContext *ctx) = 0;

  virtual void enterNumber(AthenaParser::NumberContext *ctx) = 0;
  virtual void exitNumber(AthenaParser::NumberContext *ctx) = 0;

  virtual void enterData_type(AthenaParser::Data_typeContext *ctx) = 0;
  virtual void exitData_type(AthenaParser::Data_typeContext *ctx) = 0;

  virtual void enterPrimitive_type(AthenaParser::Primitive_typeContext *ctx) = 0;
  virtual void exitPrimitive_type(AthenaParser::Primitive_typeContext *ctx) = 0;

  virtual void enterPrecision(AthenaParser::PrecisionContext *ctx) = 0;
  virtual void exitPrecision(AthenaParser::PrecisionContext *ctx) = 0;

  virtual void enterScale(AthenaParser::ScaleContext *ctx) = 0;
  virtual void exitScale(AthenaParser::ScaleContext *ctx) = 0;

  virtual void enterStruct_col_def(AthenaParser::Struct_col_defContext *ctx) = 0;
  virtual void exitStruct_col_def(AthenaParser::Struct_col_defContext *ctx) = 0;

  virtual void enterCol_name(AthenaParser::Col_nameContext *ctx) = 0;
  virtual void exitCol_name(AthenaParser::Col_nameContext *ctx) = 0;

  virtual void enterDb_name(AthenaParser::Db_nameContext *ctx) = 0;
  virtual void exitDb_name(AthenaParser::Db_nameContext *ctx) = 0;

  virtual void enterDatabase_name(AthenaParser::Database_nameContext *ctx) = 0;
  virtual void exitDatabase_name(AthenaParser::Database_nameContext *ctx) = 0;

  virtual void enterStatement_name(AthenaParser::Statement_nameContext *ctx) = 0;
  virtual void exitStatement_name(AthenaParser::Statement_nameContext *ctx) = 0;

  virtual void enterTable_name(AthenaParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(AthenaParser::Table_nameContext *ctx) = 0;

  virtual void enterView_name(AthenaParser::View_nameContext *ctx) = 0;
  virtual void exitView_name(AthenaParser::View_nameContext *ctx) = 0;

  virtual void enterDestination_table(AthenaParser::Destination_tableContext *ctx) = 0;
  virtual void exitDestination_table(AthenaParser::Destination_tableContext *ctx) = 0;

  virtual void enterString(AthenaParser::StringContext *ctx) = 0;
  virtual void exitString(AthenaParser::StringContext *ctx) = 0;

  virtual void enterReg_ex(AthenaParser::Reg_exContext *ctx) = 0;
  virtual void exitReg_ex(AthenaParser::Reg_exContext *ctx) = 0;

  virtual void enterAlias(AthenaParser::AliasContext *ctx) = 0;
  virtual void exitAlias(AthenaParser::AliasContext *ctx) = 0;

  virtual void enterTarget_alias(AthenaParser::Target_aliasContext *ctx) = 0;
  virtual void exitTarget_alias(AthenaParser::Target_aliasContext *ctx) = 0;

  virtual void enterSource_alias(AthenaParser::Source_aliasContext *ctx) = 0;
  virtual void exitSource_alias(AthenaParser::Source_aliasContext *ctx) = 0;

  virtual void enterId_(AthenaParser::Id_Context *ctx) = 0;
  virtual void exitId_(AthenaParser::Id_Context *ctx) = 0;

  virtual void enterIf_not_exists(AthenaParser::If_not_existsContext *ctx) = 0;
  virtual void exitIf_not_exists(AthenaParser::If_not_existsContext *ctx) = 0;

  virtual void enterIf_exists(AthenaParser::If_existsContext *ctx) = 0;
  virtual void exitIf_exists(AthenaParser::If_existsContext *ctx) = 0;

  virtual void enterOr_replace(AthenaParser::Or_replaceContext *ctx) = 0;
  virtual void exitOr_replace(AthenaParser::Or_replaceContext *ctx) = 0;

  virtual void enterFrom_in(AthenaParser::From_inContext *ctx) = 0;
  virtual void exitFrom_in(AthenaParser::From_inContext *ctx) = 0;


};

}  // namespace AntlrDemo.Generated
