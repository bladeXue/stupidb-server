
// Generated from AthenaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "AthenaParserListener.h"


namespace AntlrDemo.Generated {

/**
 * This class provides an empty implementation of AthenaParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  AthenaParserBaseListener : public AthenaParserListener {
public:

  virtual void enterStmt(AthenaParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(AthenaParser::StmtContext * /*ctx*/) override { }

  virtual void enterCommand(AthenaParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(AthenaParser::CommandContext * /*ctx*/) override { }

  virtual void enterDdl_command(AthenaParser::Ddl_commandContext * /*ctx*/) override { }
  virtual void exitDdl_command(AthenaParser::Ddl_commandContext * /*ctx*/) override { }

  virtual void enterDml_command(AthenaParser::Dml_commandContext * /*ctx*/) override { }
  virtual void exitDml_command(AthenaParser::Dml_commandContext * /*ctx*/) override { }

  virtual void enterSelect(AthenaParser::SelectContext * /*ctx*/) override { }
  virtual void exitSelect(AthenaParser::SelectContext * /*ctx*/) override { }

  virtual void enterSelect_statement(AthenaParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(AthenaParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterAll_distinct(AthenaParser::All_distinctContext * /*ctx*/) override { }
  virtual void exitAll_distinct(AthenaParser::All_distinctContext * /*ctx*/) override { }

  virtual void enterOrder_item(AthenaParser::Order_itemContext * /*ctx*/) override { }
  virtual void exitOrder_item(AthenaParser::Order_itemContext * /*ctx*/) override { }

  virtual void enterFrom_item(AthenaParser::From_itemContext * /*ctx*/) override { }
  virtual void exitFrom_item(AthenaParser::From_itemContext * /*ctx*/) override { }

  virtual void enterCount(AthenaParser::CountContext * /*ctx*/) override { }
  virtual void exitCount(AthenaParser::CountContext * /*ctx*/) override { }

  virtual void enterWith_query(AthenaParser::With_queryContext * /*ctx*/) override { }
  virtual void exitWith_query(AthenaParser::With_queryContext * /*ctx*/) override { }

  virtual void enterGrouping_element(AthenaParser::Grouping_elementContext * /*ctx*/) override { }
  virtual void exitGrouping_element(AthenaParser::Grouping_elementContext * /*ctx*/) override { }

  virtual void enterCondition(AthenaParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(AthenaParser::ConditionContext * /*ctx*/) override { }

  virtual void enterInsert_into(AthenaParser::Insert_intoContext * /*ctx*/) override { }
  virtual void exitInsert_into(AthenaParser::Insert_intoContext * /*ctx*/) override { }

  virtual void enterValue_list(AthenaParser::Value_listContext * /*ctx*/) override { }
  virtual void exitValue_list(AthenaParser::Value_listContext * /*ctx*/) override { }

  virtual void enterSelect_list(AthenaParser::Select_listContext * /*ctx*/) override { }
  virtual void exitSelect_list(AthenaParser::Select_listContext * /*ctx*/) override { }

  virtual void enterSelect_item(AthenaParser::Select_itemContext * /*ctx*/) override { }
  virtual void exitSelect_item(AthenaParser::Select_itemContext * /*ctx*/) override { }

  virtual void enterDelete_stmt(AthenaParser::Delete_stmtContext * /*ctx*/) override { }
  virtual void exitDelete_stmt(AthenaParser::Delete_stmtContext * /*ctx*/) override { }

  virtual void enterUpdate(AthenaParser::UpdateContext * /*ctx*/) override { }
  virtual void exitUpdate(AthenaParser::UpdateContext * /*ctx*/) override { }

  virtual void enterMerge_into(AthenaParser::Merge_intoContext * /*ctx*/) override { }
  virtual void exitMerge_into(AthenaParser::Merge_intoContext * /*ctx*/) override { }

  virtual void enterSearch_condition(AthenaParser::Search_conditionContext * /*ctx*/) override { }
  virtual void exitSearch_condition(AthenaParser::Search_conditionContext * /*ctx*/) override { }

  virtual void enterWhen_clauses(AthenaParser::When_clausesContext * /*ctx*/) override { }
  virtual void exitWhen_clauses(AthenaParser::When_clausesContext * /*ctx*/) override { }

  virtual void enterWhen_not_matched_clause(AthenaParser::When_not_matched_clauseContext * /*ctx*/) override { }
  virtual void exitWhen_not_matched_clause(AthenaParser::When_not_matched_clauseContext * /*ctx*/) override { }

  virtual void enterExpression_list_(AthenaParser::Expression_list_Context * /*ctx*/) override { }
  virtual void exitExpression_list_(AthenaParser::Expression_list_Context * /*ctx*/) override { }

  virtual void enterColumn_list(AthenaParser::Column_listContext * /*ctx*/) override { }
  virtual void exitColumn_list(AthenaParser::Column_listContext * /*ctx*/) override { }

  virtual void enterWhen_matched_and_clause(AthenaParser::When_matched_and_clauseContext * /*ctx*/) override { }
  virtual void exitWhen_matched_and_clause(AthenaParser::When_matched_and_clauseContext * /*ctx*/) override { }

  virtual void enterWhen_matched_then_clause(AthenaParser::When_matched_then_clauseContext * /*ctx*/) override { }
  virtual void exitWhen_matched_then_clause(AthenaParser::When_matched_then_clauseContext * /*ctx*/) override { }

  virtual void enterUpdate_delete(AthenaParser::Update_deleteContext * /*ctx*/) override { }
  virtual void exitUpdate_delete(AthenaParser::Update_deleteContext * /*ctx*/) override { }

  virtual void enterOptimize_stmt(AthenaParser::Optimize_stmtContext * /*ctx*/) override { }
  virtual void exitOptimize_stmt(AthenaParser::Optimize_stmtContext * /*ctx*/) override { }

  virtual void enterVacuum(AthenaParser::VacuumContext * /*ctx*/) override { }
  virtual void exitVacuum(AthenaParser::VacuumContext * /*ctx*/) override { }

  virtual void enterTarget_table(AthenaParser::Target_tableContext * /*ctx*/) override { }
  virtual void exitTarget_table(AthenaParser::Target_tableContext * /*ctx*/) override { }

  virtual void enterSource_table(AthenaParser::Source_tableContext * /*ctx*/) override { }
  virtual void exitSource_table(AthenaParser::Source_tableContext * /*ctx*/) override { }

  virtual void enterExplain(AthenaParser::ExplainContext * /*ctx*/) override { }
  virtual void exitExplain(AthenaParser::ExplainContext * /*ctx*/) override { }

  virtual void enterExplain_option(AthenaParser::Explain_optionContext * /*ctx*/) override { }
  virtual void exitExplain_option(AthenaParser::Explain_optionContext * /*ctx*/) override { }

  virtual void enterPrepare(AthenaParser::PrepareContext * /*ctx*/) override { }
  virtual void exitPrepare(AthenaParser::PrepareContext * /*ctx*/) override { }

  virtual void enterStatement(AthenaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(AthenaParser::StatementContext * /*ctx*/) override { }

  virtual void enterExecute(AthenaParser::ExecuteContext * /*ctx*/) override { }
  virtual void exitExecute(AthenaParser::ExecuteContext * /*ctx*/) override { }

  virtual void enterParameter(AthenaParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(AthenaParser::ParameterContext * /*ctx*/) override { }

  virtual void enterValue(AthenaParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(AthenaParser::ValueContext * /*ctx*/) override { }

  virtual void enterDeallocate(AthenaParser::DeallocateContext * /*ctx*/) override { }
  virtual void exitDeallocate(AthenaParser::DeallocateContext * /*ctx*/) override { }

  virtual void enterUnload(AthenaParser::UnloadContext * /*ctx*/) override { }
  virtual void exitUnload(AthenaParser::UnloadContext * /*ctx*/) override { }

  virtual void enterProperty_list(AthenaParser::Property_listContext * /*ctx*/) override { }
  virtual void exitProperty_list(AthenaParser::Property_listContext * /*ctx*/) override { }

  virtual void enterProperty_value(AthenaParser::Property_valueContext * /*ctx*/) override { }
  virtual void exitProperty_value(AthenaParser::Property_valueContext * /*ctx*/) override { }

  virtual void enterPredicate(AthenaParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(AthenaParser::PredicateContext * /*ctx*/) override { }

  virtual void enterAlter_database(AthenaParser::Alter_databaseContext * /*ctx*/) override { }
  virtual void exitAlter_database(AthenaParser::Alter_databaseContext * /*ctx*/) override { }

  virtual void enterDb_schema(AthenaParser::Db_schemaContext * /*ctx*/) override { }
  virtual void exitDb_schema(AthenaParser::Db_schemaContext * /*ctx*/) override { }

  virtual void enterKv_pair(AthenaParser::Kv_pairContext * /*ctx*/) override { }
  virtual void exitKv_pair(AthenaParser::Kv_pairContext * /*ctx*/) override { }

  virtual void enterAlter_table_add_cols(AthenaParser::Alter_table_add_colsContext * /*ctx*/) override { }
  virtual void exitAlter_table_add_cols(AthenaParser::Alter_table_add_colsContext * /*ctx*/) override { }

  virtual void enterPart_col_name_value(AthenaParser::Part_col_name_valueContext * /*ctx*/) override { }
  virtual void exitPart_col_name_value(AthenaParser::Part_col_name_valueContext * /*ctx*/) override { }

  virtual void enterPartition_col_name(AthenaParser::Partition_col_nameContext * /*ctx*/) override { }
  virtual void exitPartition_col_name(AthenaParser::Partition_col_nameContext * /*ctx*/) override { }

  virtual void enterPartition_col_value(AthenaParser::Partition_col_valueContext * /*ctx*/) override { }
  virtual void exitPartition_col_value(AthenaParser::Partition_col_valueContext * /*ctx*/) override { }

  virtual void enterAlter_table_add_part(AthenaParser::Alter_table_add_partContext * /*ctx*/) override { }
  virtual void exitAlter_table_add_part(AthenaParser::Alter_table_add_partContext * /*ctx*/) override { }

  virtual void enterAlter_table_drop_part(AthenaParser::Alter_table_drop_partContext * /*ctx*/) override { }
  virtual void exitAlter_table_drop_part(AthenaParser::Alter_table_drop_partContext * /*ctx*/) override { }

  virtual void enterPartition_spec(AthenaParser::Partition_specContext * /*ctx*/) override { }
  virtual void exitPartition_spec(AthenaParser::Partition_specContext * /*ctx*/) override { }

  virtual void enterAlter_table_rename_part(AthenaParser::Alter_table_rename_partContext * /*ctx*/) override { }
  virtual void exitAlter_table_rename_part(AthenaParser::Alter_table_rename_partContext * /*ctx*/) override { }

  virtual void enterAlter_table_replace_part(AthenaParser::Alter_table_replace_partContext * /*ctx*/) override { }
  virtual void exitAlter_table_replace_part(AthenaParser::Alter_table_replace_partContext * /*ctx*/) override { }

  virtual void enterAlter_table_set_location(AthenaParser::Alter_table_set_locationContext * /*ctx*/) override { }
  virtual void exitAlter_table_set_location(AthenaParser::Alter_table_set_locationContext * /*ctx*/) override { }

  virtual void enterAlter_table_set_props(AthenaParser::Alter_table_set_propsContext * /*ctx*/) override { }
  virtual void exitAlter_table_set_props(AthenaParser::Alter_table_set_propsContext * /*ctx*/) override { }

  virtual void enterCreate_database(AthenaParser::Create_databaseContext * /*ctx*/) override { }
  virtual void exitCreate_database(AthenaParser::Create_databaseContext * /*ctx*/) override { }

  virtual void enterCreate_table(AthenaParser::Create_tableContext * /*ctx*/) override { }
  virtual void exitCreate_table(AthenaParser::Create_tableContext * /*ctx*/) override { }

  virtual void enterTable_comment(AthenaParser::Table_commentContext * /*ctx*/) override { }
  virtual void exitTable_comment(AthenaParser::Table_commentContext * /*ctx*/) override { }

  virtual void enterRow_format(AthenaParser::Row_formatContext * /*ctx*/) override { }
  virtual void exitRow_format(AthenaParser::Row_formatContext * /*ctx*/) override { }

  virtual void enterTable_row_format_field_identifier(AthenaParser::Table_row_format_field_identifierContext * /*ctx*/) override { }
  virtual void exitTable_row_format_field_identifier(AthenaParser::Table_row_format_field_identifierContext * /*ctx*/) override { }

  virtual void enterTable_row_format_coll_items_identifier(AthenaParser::Table_row_format_coll_items_identifierContext * /*ctx*/) override { }
  virtual void exitTable_row_format_coll_items_identifier(AthenaParser::Table_row_format_coll_items_identifierContext * /*ctx*/) override { }

  virtual void enterTable_row_format_map_keys_identifier(AthenaParser::Table_row_format_map_keys_identifierContext * /*ctx*/) override { }
  virtual void exitTable_row_format_map_keys_identifier(AthenaParser::Table_row_format_map_keys_identifierContext * /*ctx*/) override { }

  virtual void enterTable_row_format_lines_identifier(AthenaParser::Table_row_format_lines_identifierContext * /*ctx*/) override { }
  virtual void exitTable_row_format_lines_identifier(AthenaParser::Table_row_format_lines_identifierContext * /*ctx*/) override { }

  virtual void enterTable_row_null_format(AthenaParser::Table_row_null_formatContext * /*ctx*/) override { }
  virtual void exitTable_row_null_format(AthenaParser::Table_row_null_formatContext * /*ctx*/) override { }

  virtual void enterFile_format(AthenaParser::File_formatContext * /*ctx*/) override { }
  virtual void exitFile_format(AthenaParser::File_formatContext * /*ctx*/) override { }

  virtual void enterNum_buckets(AthenaParser::Num_bucketsContext * /*ctx*/) override { }
  virtual void exitNum_buckets(AthenaParser::Num_bucketsContext * /*ctx*/) override { }

  virtual void enterCol_def_with_comment(AthenaParser::Col_def_with_commentContext * /*ctx*/) override { }
  virtual void exitCol_def_with_comment(AthenaParser::Col_def_with_commentContext * /*ctx*/) override { }

  virtual void enterCol_comment(AthenaParser::Col_commentContext * /*ctx*/) override { }
  virtual void exitCol_comment(AthenaParser::Col_commentContext * /*ctx*/) override { }

  virtual void enterCreate_table_as(AthenaParser::Create_table_asContext * /*ctx*/) override { }
  virtual void exitCreate_table_as(AthenaParser::Create_table_asContext * /*ctx*/) override { }

  virtual void enterProperty_name(AthenaParser::Property_nameContext * /*ctx*/) override { }
  virtual void exitProperty_name(AthenaParser::Property_nameContext * /*ctx*/) override { }

  virtual void enterProp_exp(AthenaParser::Prop_expContext * /*ctx*/) override { }
  virtual void exitProp_exp(AthenaParser::Prop_expContext * /*ctx*/) override { }

  virtual void enterCreate_view(AthenaParser::Create_viewContext * /*ctx*/) override { }
  virtual void exitCreate_view(AthenaParser::Create_viewContext * /*ctx*/) override { }

  virtual void enterDescribe(AthenaParser::DescribeContext * /*ctx*/) override { }
  virtual void exitDescribe(AthenaParser::DescribeContext * /*ctx*/) override { }

  virtual void enterField_name(AthenaParser::Field_nameContext * /*ctx*/) override { }
  virtual void exitField_name(AthenaParser::Field_nameContext * /*ctx*/) override { }

  virtual void enterDescribe_view(AthenaParser::Describe_viewContext * /*ctx*/) override { }
  virtual void exitDescribe_view(AthenaParser::Describe_viewContext * /*ctx*/) override { }

  virtual void enterDrop_database(AthenaParser::Drop_databaseContext * /*ctx*/) override { }
  virtual void exitDrop_database(AthenaParser::Drop_databaseContext * /*ctx*/) override { }

  virtual void enterDrop_table(AthenaParser::Drop_tableContext * /*ctx*/) override { }
  virtual void exitDrop_table(AthenaParser::Drop_tableContext * /*ctx*/) override { }

  virtual void enterDrop_view(AthenaParser::Drop_viewContext * /*ctx*/) override { }
  virtual void exitDrop_view(AthenaParser::Drop_viewContext * /*ctx*/) override { }

  virtual void enterMsck(AthenaParser::MsckContext * /*ctx*/) override { }
  virtual void exitMsck(AthenaParser::MsckContext * /*ctx*/) override { }

  virtual void enterShow_columns(AthenaParser::Show_columnsContext * /*ctx*/) override { }
  virtual void exitShow_columns(AthenaParser::Show_columnsContext * /*ctx*/) override { }

  virtual void enterShow_create_table(AthenaParser::Show_create_tableContext * /*ctx*/) override { }
  virtual void exitShow_create_table(AthenaParser::Show_create_tableContext * /*ctx*/) override { }

  virtual void enterShow_create_view(AthenaParser::Show_create_viewContext * /*ctx*/) override { }
  virtual void exitShow_create_view(AthenaParser::Show_create_viewContext * /*ctx*/) override { }

  virtual void enterShow_databases(AthenaParser::Show_databasesContext * /*ctx*/) override { }
  virtual void exitShow_databases(AthenaParser::Show_databasesContext * /*ctx*/) override { }

  virtual void enterShow_partitions(AthenaParser::Show_partitionsContext * /*ctx*/) override { }
  virtual void exitShow_partitions(AthenaParser::Show_partitionsContext * /*ctx*/) override { }

  virtual void enterShow_tables(AthenaParser::Show_tablesContext * /*ctx*/) override { }
  virtual void exitShow_tables(AthenaParser::Show_tablesContext * /*ctx*/) override { }

  virtual void enterShow_tblproperties(AthenaParser::Show_tblpropertiesContext * /*ctx*/) override { }
  virtual void exitShow_tblproperties(AthenaParser::Show_tblpropertiesContext * /*ctx*/) override { }

  virtual void enterShow_views(AthenaParser::Show_viewsContext * /*ctx*/) override { }
  virtual void exitShow_views(AthenaParser::Show_viewsContext * /*ctx*/) override { }

  virtual void enterQuery(AthenaParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(AthenaParser::QueryContext * /*ctx*/) override { }

  virtual void enterTrue_false(AthenaParser::True_falseContext * /*ctx*/) override { }
  virtual void exitTrue_false(AthenaParser::True_falseContext * /*ctx*/) override { }

  virtual void enterBoolean_expression(AthenaParser::Boolean_expressionContext * /*ctx*/) override { }
  virtual void exitBoolean_expression(AthenaParser::Boolean_expressionContext * /*ctx*/) override { }

  virtual void enterPred(AthenaParser::PredContext * /*ctx*/) override { }
  virtual void exitPred(AthenaParser::PredContext * /*ctx*/) override { }

  virtual void enterTable_subquery(AthenaParser::Table_subqueryContext * /*ctx*/) override { }
  virtual void exitTable_subquery(AthenaParser::Table_subqueryContext * /*ctx*/) override { }

  virtual void enterComparison_operator(AthenaParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(AthenaParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterExpression(AthenaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(AthenaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterCase_expression(AthenaParser::Case_expressionContext * /*ctx*/) override { }
  virtual void exitCase_expression(AthenaParser::Case_expressionContext * /*ctx*/) override { }

  virtual void enterWhen_expression(AthenaParser::When_expressionContext * /*ctx*/) override { }
  virtual void exitWhen_expression(AthenaParser::When_expressionContext * /*ctx*/) override { }

  virtual void enterPrimitive_expression(AthenaParser::Primitive_expressionContext * /*ctx*/) override { }
  virtual void exitPrimitive_expression(AthenaParser::Primitive_expressionContext * /*ctx*/) override { }

  virtual void enterLiteral(AthenaParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(AthenaParser::LiteralContext * /*ctx*/) override { }

  virtual void enterInt_number(AthenaParser::Int_numberContext * /*ctx*/) override { }
  virtual void exitInt_number(AthenaParser::Int_numberContext * /*ctx*/) override { }

  virtual void enterNumber(AthenaParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(AthenaParser::NumberContext * /*ctx*/) override { }

  virtual void enterData_type(AthenaParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(AthenaParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterPrimitive_type(AthenaParser::Primitive_typeContext * /*ctx*/) override { }
  virtual void exitPrimitive_type(AthenaParser::Primitive_typeContext * /*ctx*/) override { }

  virtual void enterPrecision(AthenaParser::PrecisionContext * /*ctx*/) override { }
  virtual void exitPrecision(AthenaParser::PrecisionContext * /*ctx*/) override { }

  virtual void enterScale(AthenaParser::ScaleContext * /*ctx*/) override { }
  virtual void exitScale(AthenaParser::ScaleContext * /*ctx*/) override { }

  virtual void enterStruct_col_def(AthenaParser::Struct_col_defContext * /*ctx*/) override { }
  virtual void exitStruct_col_def(AthenaParser::Struct_col_defContext * /*ctx*/) override { }

  virtual void enterCol_name(AthenaParser::Col_nameContext * /*ctx*/) override { }
  virtual void exitCol_name(AthenaParser::Col_nameContext * /*ctx*/) override { }

  virtual void enterDb_name(AthenaParser::Db_nameContext * /*ctx*/) override { }
  virtual void exitDb_name(AthenaParser::Db_nameContext * /*ctx*/) override { }

  virtual void enterDatabase_name(AthenaParser::Database_nameContext * /*ctx*/) override { }
  virtual void exitDatabase_name(AthenaParser::Database_nameContext * /*ctx*/) override { }

  virtual void enterStatement_name(AthenaParser::Statement_nameContext * /*ctx*/) override { }
  virtual void exitStatement_name(AthenaParser::Statement_nameContext * /*ctx*/) override { }

  virtual void enterTable_name(AthenaParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(AthenaParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterView_name(AthenaParser::View_nameContext * /*ctx*/) override { }
  virtual void exitView_name(AthenaParser::View_nameContext * /*ctx*/) override { }

  virtual void enterDestination_table(AthenaParser::Destination_tableContext * /*ctx*/) override { }
  virtual void exitDestination_table(AthenaParser::Destination_tableContext * /*ctx*/) override { }

  virtual void enterString(AthenaParser::StringContext * /*ctx*/) override { }
  virtual void exitString(AthenaParser::StringContext * /*ctx*/) override { }

  virtual void enterReg_ex(AthenaParser::Reg_exContext * /*ctx*/) override { }
  virtual void exitReg_ex(AthenaParser::Reg_exContext * /*ctx*/) override { }

  virtual void enterAlias(AthenaParser::AliasContext * /*ctx*/) override { }
  virtual void exitAlias(AthenaParser::AliasContext * /*ctx*/) override { }

  virtual void enterTarget_alias(AthenaParser::Target_aliasContext * /*ctx*/) override { }
  virtual void exitTarget_alias(AthenaParser::Target_aliasContext * /*ctx*/) override { }

  virtual void enterSource_alias(AthenaParser::Source_aliasContext * /*ctx*/) override { }
  virtual void exitSource_alias(AthenaParser::Source_aliasContext * /*ctx*/) override { }

  virtual void enterId_(AthenaParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(AthenaParser::Id_Context * /*ctx*/) override { }

  virtual void enterIf_not_exists(AthenaParser::If_not_existsContext * /*ctx*/) override { }
  virtual void exitIf_not_exists(AthenaParser::If_not_existsContext * /*ctx*/) override { }

  virtual void enterIf_exists(AthenaParser::If_existsContext * /*ctx*/) override { }
  virtual void exitIf_exists(AthenaParser::If_existsContext * /*ctx*/) override { }

  virtual void enterOr_replace(AthenaParser::Or_replaceContext * /*ctx*/) override { }
  virtual void exitOr_replace(AthenaParser::Or_replaceContext * /*ctx*/) override { }

  virtual void enterFrom_in(AthenaParser::From_inContext * /*ctx*/) override { }
  virtual void exitFrom_in(AthenaParser::From_inContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace AntlrDemo.Generated
