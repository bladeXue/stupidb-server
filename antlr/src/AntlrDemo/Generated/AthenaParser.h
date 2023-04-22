
// Generated from AthenaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace AntlrDemo.Generated {


class  AthenaParser : public antlr4::Parser {
public:
  enum {
    ADD = 1, ALL = 2, ALTER = 3, ANALYZE = 4, AND = 5, ANY = 6, ARRAY = 7, 
    AS = 8, ASC = 9, AVRO = 10, BETWEEN = 11, BIGINT = 12, BIN_PACK = 13, 
    BINARY = 14, BOOLEAN = 15, BUCKETS = 16, BY = 17, CASCADE = 18, CASE = 19, 
    CAST = 20, CHAR = 21, CLUSTERED = 22, COLLECTION = 23, COLUMNS = 24, 
    COMMENT = 25, CREATE = 26, DATA = 27, DATABASE = 28, DATABASES = 29, 
    DATE = 30, DBPROPERTIES = 31, DEALLOCATE = 32, DECIMAL = 33, DEFINED = 34, 
    DELETE = 35, DELIMITED = 36, DESC = 37, DESCRIBE = 38, DISTINCT = 39, 
    DISTRIBUTED = 40, DOUBLE = 41, DROP = 42, ELSE = 43, END = 44, ESCAPED = 45, 
    EXCEPT = 46, EXECUTE = 47, EXISTS = 48, EXPLAIN = 49, EXTENDED = 50, 
    EXTERNAL = 51, FALSE = 52, FIELDS = 53, FIRST = 54, FLOAT = 55, FORMAT = 56, 
    FORMATTED = 57, FROM = 58, GRAPHVIZ = 59, GROUP = 60, HAVING = 61, IF = 62, 
    IN = 63, INPUTFORMAT = 64, INSERT = 65, INT = 66, INTEGER = 67, INTERSECT = 68, 
    INTO = 69, IO = 70, ION = 71, IS = 72, ITEMS = 73, JSON = 74, KEYS = 75, 
    LAST = 76, LIKE = 77, LIMIT = 78, LINES = 79, LOCATION = 80, LOGICAL = 81, 
    MAP = 82, MATCHED = 83, MERGE = 84, MSCK = 85, NO = 86, NOT = 87, NULL_ = 88, 
    NULLS = 89, OFFSET = 90, ON = 91, OPTIMIZE = 92, OR = 93, ORC = 94, 
    ORDER = 95, OUTPUTFORMAT = 96, PARQUET = 97, PARTITION = 98, PARTITIONED = 99, 
    PARTITIONS = 100, PREPARE = 101, RCFILE = 102, RENAME = 103, REPAIR = 104, 
    REPLACE = 105, RESTRICT = 106, REWRITE = 107, ROW = 108, ROWS = 109, 
    SCHEMA = 110, SCHEMAS = 111, SELECT = 112, SEQUENCEFILE = 113, SERDE = 114, 
    SERDEPROPERTIES = 115, SET = 116, SHOW = 117, SMALLINT = 118, SOME = 119, 
    STORED = 120, STRING = 121, STRUCT = 122, TABLE = 123, TABLES = 124, 
    TBLPROPERTIES = 125, TERMINATED = 126, TEXT = 127, TEXTFILE = 128, THEN = 129, 
    TIMESTAMP = 130, TINYINT = 131, TO = 132, TRUE = 133, TYPE = 134, UNION = 135, 
    UNLOAD = 136, UPDATE = 137, USING = 138, VACUUM = 139, VALIDATE = 140, 
    VALUES = 141, VARCHAR = 142, VIEW = 143, VIEWS = 144, WHEN = 145, WHERE = 146, 
    WITH = 147, EQ = 148, SEMI = 149, LP = 150, RP = 151, DOT = 152, COMMA = 153, 
    LT = 154, GT = 155, LE = 156, GE = 157, NE = 158, BOX = 159, COLON = 160, 
    QM = 161, STAR = 162, PLUS = 163, MINUS = 164, DIVIDE = 165, MODULE = 166, 
    IDENTIFIER = 167, SQ_STRING_LITERAL = 168, DQ_STRING_LITERAL = 169, 
    INTEGRAL_LITERAL = 170, FLOAT_LITERAL = 171, REAL_LITERAL = 172, WS = 173, 
    LINE_COMMENT = 174
  };

  enum {
    RuleStmt = 0, RuleCommand = 1, RuleDdl_command = 2, RuleDml_command = 3, 
    RuleSelect = 4, RuleSelect_statement = 5, RuleAll_distinct = 6, RuleOrder_item = 7, 
    RuleFrom_item = 8, RuleCount = 9, RuleWith_query = 10, RuleGrouping_element = 11, 
    RuleCondition = 12, RuleInsert_into = 13, RuleValue_list = 14, RuleSelect_list = 15, 
    RuleSelect_item = 16, RuleDelete_stmt = 17, RuleUpdate = 18, RuleMerge_into = 19, 
    RuleSearch_condition = 20, RuleWhen_clauses = 21, RuleWhen_not_matched_clause = 22, 
    RuleExpression_list_ = 23, RuleColumn_list = 24, RuleWhen_matched_and_clause = 25, 
    RuleWhen_matched_then_clause = 26, RuleUpdate_delete = 27, RuleOptimize_stmt = 28, 
    RuleVacuum = 29, RuleTarget_table = 30, RuleSource_table = 31, RuleExplain = 32, 
    RuleExplain_option = 33, RulePrepare = 34, RuleStatement = 35, RuleExecute = 36, 
    RuleParameter = 37, RuleValue = 38, RuleDeallocate = 39, RuleUnload = 40, 
    RuleProperty_list = 41, RuleProperty_value = 42, RulePredicate = 43, 
    RuleAlter_database = 44, RuleDb_schema = 45, RuleKv_pair = 46, RuleAlter_table_add_cols = 47, 
    RulePart_col_name_value = 48, RulePartition_col_name = 49, RulePartition_col_value = 50, 
    RuleAlter_table_add_part = 51, RuleAlter_table_drop_part = 52, RulePartition_spec = 53, 
    RuleAlter_table_rename_part = 54, RuleAlter_table_replace_part = 55, 
    RuleAlter_table_set_location = 56, RuleAlter_table_set_props = 57, RuleCreate_database = 58, 
    RuleCreate_table = 59, RuleTable_comment = 60, RuleRow_format = 61, 
    RuleTable_row_format_field_identifier = 62, RuleTable_row_format_coll_items_identifier = 63, 
    RuleTable_row_format_map_keys_identifier = 64, RuleTable_row_format_lines_identifier = 65, 
    RuleTable_row_null_format = 66, RuleFile_format = 67, RuleNum_buckets = 68, 
    RuleCol_def_with_comment = 69, RuleCol_comment = 70, RuleCreate_table_as = 71, 
    RuleProperty_name = 72, RuleProp_exp = 73, RuleCreate_view = 74, RuleDescribe = 75, 
    RuleField_name = 76, RuleDescribe_view = 77, RuleDrop_database = 78, 
    RuleDrop_table = 79, RuleDrop_view = 80, RuleMsck = 81, RuleShow_columns = 82, 
    RuleShow_create_table = 83, RuleShow_create_view = 84, RuleShow_databases = 85, 
    RuleShow_partitions = 86, RuleShow_tables = 87, RuleShow_tblproperties = 88, 
    RuleShow_views = 89, RuleQuery = 90, RuleTrue_false = 91, RuleBoolean_expression = 92, 
    RulePred = 93, RuleTable_subquery = 94, RuleComparison_operator = 95, 
    RuleExpression = 96, RuleCase_expression = 97, RuleWhen_expression = 98, 
    RulePrimitive_expression = 99, RuleLiteral = 100, RuleInt_number = 101, 
    RuleNumber = 102, RuleData_type = 103, RulePrimitive_type = 104, RulePrecision = 105, 
    RuleScale = 106, RuleStruct_col_def = 107, RuleCol_name = 108, RuleDb_name = 109, 
    RuleDatabase_name = 110, RuleStatement_name = 111, RuleTable_name = 112, 
    RuleView_name = 113, RuleDestination_table = 114, RuleString = 115, 
    RuleReg_ex = 116, RuleAlias = 117, RuleTarget_alias = 118, RuleSource_alias = 119, 
    RuleId_ = 120, RuleIf_not_exists = 121, RuleIf_exists = 122, RuleOr_replace = 123, 
    RuleFrom_in = 124
  };

  explicit AthenaParser(antlr4::TokenStream *input);

  AthenaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AthenaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StmtContext;
  class CommandContext;
  class Ddl_commandContext;
  class Dml_commandContext;
  class SelectContext;
  class Select_statementContext;
  class All_distinctContext;
  class Order_itemContext;
  class From_itemContext;
  class CountContext;
  class With_queryContext;
  class Grouping_elementContext;
  class ConditionContext;
  class Insert_intoContext;
  class Value_listContext;
  class Select_listContext;
  class Select_itemContext;
  class Delete_stmtContext;
  class UpdateContext;
  class Merge_intoContext;
  class Search_conditionContext;
  class When_clausesContext;
  class When_not_matched_clauseContext;
  class Expression_list_Context;
  class Column_listContext;
  class When_matched_and_clauseContext;
  class When_matched_then_clauseContext;
  class Update_deleteContext;
  class Optimize_stmtContext;
  class VacuumContext;
  class Target_tableContext;
  class Source_tableContext;
  class ExplainContext;
  class Explain_optionContext;
  class PrepareContext;
  class StatementContext;
  class ExecuteContext;
  class ParameterContext;
  class ValueContext;
  class DeallocateContext;
  class UnloadContext;
  class Property_listContext;
  class Property_valueContext;
  class PredicateContext;
  class Alter_databaseContext;
  class Db_schemaContext;
  class Kv_pairContext;
  class Alter_table_add_colsContext;
  class Part_col_name_valueContext;
  class Partition_col_nameContext;
  class Partition_col_valueContext;
  class Alter_table_add_partContext;
  class Alter_table_drop_partContext;
  class Partition_specContext;
  class Alter_table_rename_partContext;
  class Alter_table_replace_partContext;
  class Alter_table_set_locationContext;
  class Alter_table_set_propsContext;
  class Create_databaseContext;
  class Create_tableContext;
  class Table_commentContext;
  class Row_formatContext;
  class Table_row_format_field_identifierContext;
  class Table_row_format_coll_items_identifierContext;
  class Table_row_format_map_keys_identifierContext;
  class Table_row_format_lines_identifierContext;
  class Table_row_null_formatContext;
  class File_formatContext;
  class Num_bucketsContext;
  class Col_def_with_commentContext;
  class Col_commentContext;
  class Create_table_asContext;
  class Property_nameContext;
  class Prop_expContext;
  class Create_viewContext;
  class DescribeContext;
  class Field_nameContext;
  class Describe_viewContext;
  class Drop_databaseContext;
  class Drop_tableContext;
  class Drop_viewContext;
  class MsckContext;
  class Show_columnsContext;
  class Show_create_tableContext;
  class Show_create_viewContext;
  class Show_databasesContext;
  class Show_partitionsContext;
  class Show_tablesContext;
  class Show_tblpropertiesContext;
  class Show_viewsContext;
  class QueryContext;
  class True_falseContext;
  class Boolean_expressionContext;
  class PredContext;
  class Table_subqueryContext;
  class Comparison_operatorContext;
  class ExpressionContext;
  class Case_expressionContext;
  class When_expressionContext;
  class Primitive_expressionContext;
  class LiteralContext;
  class Int_numberContext;
  class NumberContext;
  class Data_typeContext;
  class Primitive_typeContext;
  class PrecisionContext;
  class ScaleContext;
  class Struct_col_defContext;
  class Col_nameContext;
  class Db_nameContext;
  class Database_nameContext;
  class Statement_nameContext;
  class Table_nameContext;
  class View_nameContext;
  class Destination_tableContext;
  class StringContext;
  class Reg_exContext;
  class AliasContext;
  class Target_aliasContext;
  class Source_aliasContext;
  class Id_Context;
  class If_not_existsContext;
  class If_existsContext;
  class Or_replaceContext;
  class From_inContext; 

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommandContext *command();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtContext* stmt();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ddl_commandContext *ddl_command();
    Dml_commandContext *dml_command();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommandContext* command();

  class  Ddl_commandContext : public antlr4::ParserRuleContext {
  public:
    Ddl_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_databaseContext *alter_database();
    Alter_table_add_colsContext *alter_table_add_cols();
    Alter_table_add_partContext *alter_table_add_part();
    Alter_table_drop_partContext *alter_table_drop_part();
    Alter_table_rename_partContext *alter_table_rename_part();
    Alter_table_replace_partContext *alter_table_replace_part();
    Alter_table_set_locationContext *alter_table_set_location();
    Alter_table_set_propsContext *alter_table_set_props();
    Create_databaseContext *create_database();
    Create_tableContext *create_table();
    Create_table_asContext *create_table_as();
    Create_viewContext *create_view();
    Drop_databaseContext *drop_database();
    Drop_tableContext *drop_table();
    Drop_viewContext *drop_view();
    DescribeContext *describe();
    Describe_viewContext *describe_view();
    MsckContext *msck();
    Show_columnsContext *show_columns();
    Show_create_tableContext *show_create_table();
    Show_create_viewContext *show_create_view();
    Show_databasesContext *show_databases();
    Show_partitionsContext *show_partitions();
    Show_tablesContext *show_tables();
    Show_tblpropertiesContext *show_tblproperties();
    Show_viewsContext *show_views();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ddl_commandContext* ddl_command();

  class  Dml_commandContext : public antlr4::ParserRuleContext {
  public:
    Dml_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    Insert_intoContext *insert_into();
    Delete_stmtContext *delete_stmt();
    UpdateContext *update();
    Merge_intoContext *merge_into();
    Optimize_stmtContext *optimize_stmt();
    VacuumContext *vacuum();
    ExplainContext *explain();
    PrepareContext *prepare();
    ExecuteContext *execute();
    DeallocateContext *deallocate();
    UnloadContext *unload();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dml_commandContext* dml_command();

  class  SelectContext : public antlr4::ParserRuleContext {
  public:
    SelectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *WITH();
    std::vector<With_queryContext *> with_query();
    With_queryContext* with_query(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectContext* select();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Select_listContext *select_list();
    std::vector<All_distinctContext *> all_distinct();
    All_distinctContext* all_distinct(size_t i);
    antlr4::tree::TerminalNode *FROM();
    std::vector<From_itemContext *> from_item();
    From_itemContext* from_item(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    antlr4::tree::TerminalNode *GROUP();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<Grouping_elementContext *> grouping_element();
    Grouping_elementContext* grouping_element(size_t i);
    antlr4::tree::TerminalNode *HAVING();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *ORDER();
    std::vector<Order_itemContext *> order_item();
    Order_itemContext* order_item(size_t i);
    antlr4::tree::TerminalNode *OFFSET();
    std::vector<CountContext *> count();
    CountContext* count(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_statementContext* select_statement();

  class  All_distinctContext : public antlr4::ParserRuleContext {
  public:
    All_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  All_distinctContext* all_distinct();

  class  Order_itemContext : public antlr4::ParserRuleContext {
  public:
    Order_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Order_itemContext* order_item();

  class  From_itemContext : public antlr4::ParserRuleContext {
  public:
    From_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  From_itemContext* from_item();

  class  CountContext : public antlr4::ParserRuleContext {
  public:
    CountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numberContext *int_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CountContext* count();

  class  With_queryContext : public antlr4::ParserRuleContext {
  public:
    With_queryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LP();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  With_queryContext* with_query();

  class  Grouping_elementContext : public antlr4::ParserRuleContext {
  public:
    Grouping_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Grouping_elementContext* grouping_element();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boolean_expressionContext *boolean_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  Insert_intoContext : public antlr4::ParserRuleContext {
  public:
    Insert_intoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    Destination_tableContext *destination_table();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<Value_listContext *> value_list();
    Value_listContext* value_list(size_t i);
    antlr4::tree::TerminalNode *LP();
    Column_listContext *column_list();
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Insert_intoContext* insert_into();

  class  Value_listContext : public antlr4::ParserRuleContext {
  public:
    Value_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Value_listContext* value_list();

  class  Select_listContext : public antlr4::ParserRuleContext {
  public:
    Select_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_itemContext *> select_item();
    Select_itemContext* select_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_listContext* select_list();

  class  Select_itemContext : public antlr4::ParserRuleContext {
  public:
    Select_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AliasContext *alias();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STAR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_itemContext* select_item();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    Table_nameContext *table_name();
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *WHERE();
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  UpdateContext : public antlr4::ParserRuleContext {
  public:
    UpdateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SET();
    std::vector<Col_nameContext *> col_name();
    Col_nameContext* col_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpdateContext* update();

  class  Merge_intoContext : public antlr4::ParserRuleContext {
  public:
    Merge_intoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *INTO();
    Target_tableContext *target_table();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *ON();
    Search_conditionContext *search_condition();
    When_clausesContext *when_clauses();
    Source_tableContext *source_table();
    QueryContext *query();
    Target_aliasContext *target_alias();
    Source_aliasContext *source_alias();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Merge_intoContext* merge_into();

  class  Search_conditionContext : public antlr4::ParserRuleContext {
  public:
    Search_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Search_conditionContext* search_condition();

  class  When_clausesContext : public antlr4::ParserRuleContext {
  public:
    When_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<When_matched_and_clauseContext *> when_matched_and_clause();
    When_matched_and_clauseContext* when_matched_and_clause(size_t i);
    std::vector<When_matched_then_clauseContext *> when_matched_then_clause();
    When_matched_then_clauseContext* when_matched_then_clause(size_t i);
    When_not_matched_clauseContext *when_not_matched_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_clausesContext* when_clauses();

  class  When_not_matched_clauseContext : public antlr4::ParserRuleContext {
  public:
    When_not_matched_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LP();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *AND();
    ExpressionContext *expression();
    Column_listContext *column_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_not_matched_clauseContext* when_not_matched_clause();

  class  Expression_list_Context : public antlr4::ParserRuleContext {
  public:
    Expression_list_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_list_Context* expression_list_();

  class  Column_listContext : public antlr4::ParserRuleContext {
  public:
    Column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Col_nameContext *> col_name();
    Col_nameContext* col_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Column_listContext* column_list();

  class  When_matched_and_clauseContext : public antlr4::ParserRuleContext {
  public:
    When_matched_and_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *AND();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    Update_deleteContext *update_delete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_matched_and_clauseContext* when_matched_and_clause();

  class  When_matched_then_clauseContext : public antlr4::ParserRuleContext {
  public:
    When_matched_then_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    Update_deleteContext *update_delete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_matched_then_clauseContext* when_matched_then_clause();

  class  Update_deleteContext : public antlr4::ParserRuleContext {
  public:
    Update_deleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LP();
    std::vector<Col_nameContext *> col_name();
    Col_nameContext* col_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Update_deleteContext* update_delete();

  class  Optimize_stmtContext : public antlr4::ParserRuleContext {
  public:
    Optimize_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *REWRITE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *BIN_PACK();
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *WHERE();
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Optimize_stmtContext* optimize_stmt();

  class  VacuumContext : public antlr4::ParserRuleContext {
  public:
    VacuumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VACUUM();
    Target_tableContext *target_table();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VacuumContext* vacuum();

  class  Target_tableContext : public antlr4::ParserRuleContext {
  public:
    Target_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Target_tableContext* target_table();

  class  Source_tableContext : public antlr4::ParserRuleContext {
  public:
    Source_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Source_tableContext* source_table();

  class  ExplainContext : public antlr4::ParserRuleContext {
  public:
    ExplainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLAIN();
    StatementContext *statement();
    antlr4::tree::TerminalNode *LP();
    std::vector<Explain_optionContext *> explain_option();
    Explain_optionContext* explain_option(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *JSON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplainContext* explain();

  class  Explain_optionContext : public antlr4::ParserRuleContext {
  public:
    Explain_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *GRAPHVIZ();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *IO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Explain_optionContext* explain_option();

  class  PrepareContext : public antlr4::ParserRuleContext {
  public:
    PrepareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *FROM();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrepareContext* prepare();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();
    Create_table_asContext *create_table_as();
    Insert_intoContext *insert_into();
    UnloadContext *unload();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ExecuteContext : public antlr4::ParserRuleContext {
  public:
    ExecuteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *USING();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecuteContext* execute();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numberContext *int_number();
    StringContext *string();
    True_falseContext *true_false();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  DeallocateContext : public antlr4::ParserRuleContext {
  public:
    DeallocateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *PREPARE();
    Statement_nameContext *statement_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeallocateContext* deallocate();

  class  UnloadContext : public antlr4::ParserRuleContext {
  public:
    UnloadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOAD();
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    SelectContext *select();
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    antlr4::tree::TerminalNode *TO();
    StringContext *string();
    antlr4::tree::TerminalNode *WITH();
    Property_listContext *property_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnloadContext* unload();

  class  Property_listContext : public antlr4::ParserRuleContext {
  public:
    Property_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Property_nameContext *> property_name();
    Property_nameContext* property_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<Property_valueContext *> property_value();
    Property_valueContext* property_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_listContext* property_list();

  class  Property_valueContext : public antlr4::ParserRuleContext {
  public:
    Property_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_valueContext* property_value();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    True_falseContext *true_false();
    Boolean_expressionContext *boolean_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateContext* predicate();

  class  Alter_databaseContext : public antlr4::ParserRuleContext {
  public:
    Alter_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Db_schemaContext *db_schema();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *LP();
    std::vector<Kv_pairContext *> kv_pair();
    Kv_pairContext* kv_pair(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_databaseContext* alter_database();

  class  Db_schemaContext : public antlr4::ParserRuleContext {
  public:
    Db_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Db_schemaContext* db_schema();

  class  Kv_pairContext : public antlr4::ParserRuleContext {
  public:
    Kv_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *DQ_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Kv_pairContext* kv_pair();

  class  Alter_table_add_colsContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_add_colsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *COLUMNS();
    Col_nameContext *col_name();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LP();
    std::vector<Part_col_name_valueContext *> part_col_name_value();
    Part_col_name_valueContext* part_col_name_value(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_add_colsContext* alter_table_add_cols();

  class  Part_col_name_valueContext : public antlr4::ParserRuleContext {
  public:
    Part_col_name_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Partition_col_nameContext *partition_col_name();
    antlr4::tree::TerminalNode *EQ();
    Partition_col_valueContext *partition_col_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Part_col_name_valueContext* part_col_name_value();

  class  Partition_col_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_col_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_nameContext *col_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Partition_col_nameContext* partition_col_name();

  class  Partition_col_valueContext : public antlr4::ParserRuleContext {
  public:
    Partition_col_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Partition_col_valueContext* partition_col_value();

  class  Alter_table_add_partContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_add_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ADD();
    If_not_existsContext *if_not_exists();
    std::vector<antlr4::tree::TerminalNode *> PARTITION();
    antlr4::tree::TerminalNode* PARTITION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    std::vector<Part_col_name_valueContext *> part_col_name_value();
    Part_col_name_valueContext* part_col_name_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCATION();
    antlr4::tree::TerminalNode* LOCATION(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_add_partContext* alter_table_add_part();

  class  Alter_table_drop_partContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_drop_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> PARTITION();
    antlr4::tree::TerminalNode* PARTITION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    std::vector<Partition_specContext *> partition_spec();
    Partition_specContext* partition_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    If_existsContext *if_exists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_drop_partContext* alter_table_drop_part();

  class  Partition_specContext : public antlr4::ParserRuleContext {
  public:
    Partition_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Part_col_name_valueContext *> part_col_name_value();
    Part_col_name_valueContext* part_col_name_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Partition_specContext* partition_spec();

  class  Alter_table_rename_partContext : public antlr4::ParserRuleContext {
  public:
    AthenaParser::Partition_specContext *np = nullptr;
    Alter_table_rename_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> PARTITION();
    antlr4::tree::TerminalNode* PARTITION(size_t i);
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    std::vector<Partition_specContext *> partition_spec();
    Partition_specContext* partition_spec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_rename_partContext* alter_table_rename_part();

  class  Alter_table_replace_partContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_replace_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    std::vector<Col_nameContext *> col_name();
    Col_nameContext* col_name(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<Part_col_name_valueContext *> part_col_name_value();
    Part_col_name_valueContext* part_col_name_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_replace_partContext* alter_table_replace_part();

  class  Alter_table_set_locationContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_set_locationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LOCATION();
    StringContext *string();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LP();
    Partition_specContext *partition_spec();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_set_locationContext* alter_table_set_location();

  class  Alter_table_set_propsContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_set_propsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    antlr4::tree::TerminalNode *LP();
    std::vector<Kv_pairContext *> kv_pair();
    Kv_pairContext* kv_pair(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alter_table_set_propsContext* alter_table_set_props();

  class  Create_databaseContext : public antlr4::ParserRuleContext {
  public:
    Create_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Db_schemaContext *db_schema();
    Database_nameContext *database_name();
    If_not_existsContext *if_not_exists();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *LP();
    std::vector<Kv_pairContext *> kv_pair();
    Kv_pairContext* kv_pair(size_t i);
    antlr4::tree::TerminalNode *RP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Create_databaseContext* create_database();

  class  Create_tableContext : public antlr4::ParserRuleContext {
  public:
    Create_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LOCATION();
    StringContext *string();
    If_not_existsContext *if_not_exists();
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> LP();
    antlr4::tree::TerminalNode* LP(size_t i);
    std::vector<Col_def_with_commentContext *> col_def_with_comment();
    Col_def_with_commentContext* col_def_with_comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RP();
    antlr4::tree::TerminalNode* RP(size_t i);
    antlr4::tree::TerminalNode *COMMENT();
    Table_commentContext *table_comment();
    antlr4::tree::TerminalNode *PARTITIONED();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *CLUSTERED();
    std::vector<Col_nameContext *> col_name();
    Col_nameContext* col_name(size_t i);
    antlr4::tree::TerminalNode *INTO();
    Num_bucketsContext *num_buckets();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *FORMAT();
    Row_formatContext *row_format();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *AS();
    File_formatContext *file_format();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    Property_listContext *property_list();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Create_tableContext* create_table();

  class  Table_commentContext : public antlr4::ParserRuleContext {
  public:
    Table_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_commentContext* table_comment();

  class  Row_formatContext : public antlr4::ParserRuleContext {
  public:
    Row_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELIMITED();
    Table_row_format_field_identifierContext *table_row_format_field_identifier();
    Table_row_format_coll_items_identifierContext *table_row_format_coll_items_identifier();
    Table_row_format_map_keys_identifierContext *table_row_format_map_keys_identifier();
    Table_row_format_lines_identifierContext *table_row_format_lines_identifier();
    Table_row_null_formatContext *table_row_null_format();
    antlr4::tree::TerminalNode *SERDE();
    StringContext *string();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    antlr4::tree::TerminalNode *LP();
    Property_listContext *property_list();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Row_formatContext* row_format();

  class  Table_row_format_field_identifierContext : public antlr4::ParserRuleContext {
  public:
    Table_row_format_field_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *TERMINATED();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *ESCAPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_row_format_field_identifierContext* table_row_format_field_identifier();

  class  Table_row_format_coll_items_identifierContext : public antlr4::ParserRuleContext {
  public:
    Table_row_format_coll_items_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_row_format_coll_items_identifierContext* table_row_format_coll_items_identifier();

  class  Table_row_format_map_keys_identifierContext : public antlr4::ParserRuleContext {
  public:
    Table_row_format_map_keys_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_row_format_map_keys_identifierContext* table_row_format_map_keys_identifier();

  class  Table_row_format_lines_identifierContext : public antlr4::ParserRuleContext {
  public:
    Table_row_format_lines_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_row_format_lines_identifierContext* table_row_format_lines_identifier();

  class  Table_row_null_formatContext : public antlr4::ParserRuleContext {
  public:
    Table_row_null_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *AS();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_row_null_formatContext* table_row_null_format();

  class  File_formatContext : public antlr4::ParserRuleContext {
  public:
    File_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCEFILE();
    antlr4::tree::TerminalNode *TEXTFILE();
    antlr4::tree::TerminalNode *RCFILE();
    antlr4::tree::TerminalNode *ORC();
    antlr4::tree::TerminalNode *PARQUET();
    antlr4::tree::TerminalNode *AVRO();
    antlr4::tree::TerminalNode *ION();
    antlr4::tree::TerminalNode *INPUTFORMAT();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *OUTPUTFORMAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  File_formatContext* file_format();

  class  Num_bucketsContext : public antlr4::ParserRuleContext {
  public:
    Num_bucketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numberContext *int_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Num_bucketsContext* num_buckets();

  class  Col_def_with_commentContext : public antlr4::ParserRuleContext {
  public:
    Col_def_with_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_nameContext *col_name();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *COMMENT();
    Col_commentContext *col_comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Col_def_with_commentContext* col_def_with_comment();

  class  Col_commentContext : public antlr4::ParserRuleContext {
  public:
    Col_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Col_commentContext* col_comment();

  class  Create_table_asContext : public antlr4::ParserRuleContext {
  public:
    Create_table_asContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *LP();
    std::vector<Prop_expContext *> prop_exp();
    Prop_expContext* prop_exp(size_t i);
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *DATA();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Create_table_asContext* create_table_as();

  class  Property_nameContext : public antlr4::ParserRuleContext {
  public:
    Property_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Property_nameContext* property_name();

  class  Prop_expContext : public antlr4::ParserRuleContext {
  public:
    Prop_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_nameContext *property_name();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Prop_expContext* prop_exp();

  class  Create_viewContext : public antlr4::ParserRuleContext {
  public:
    Create_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    Or_replaceContext *or_replace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Create_viewContext* create_view();

  class  DescribeContext : public antlr4::ParserRuleContext {
  public:
    DescribeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESCRIBE();
    Table_nameContext *table_name();
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *PARTITION();
    Partition_specContext *partition_spec();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *FORMATTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DescribeContext* describe();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_nameContext* field_name();

  class  Describe_viewContext : public antlr4::ParserRuleContext {
  public:
    Describe_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESCRIBE();
    View_nameContext *view_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Describe_viewContext* describe_view();

  class  Drop_databaseContext : public antlr4::ParserRuleContext {
  public:
    Drop_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Db_schemaContext *db_schema();
    Database_nameContext *database_name();
    If_existsContext *if_exists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Drop_databaseContext* drop_database();

  class  Drop_tableContext : public antlr4::ParserRuleContext {
  public:
    Drop_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Drop_tableContext* drop_table();

  class  Drop_viewContext : public antlr4::ParserRuleContext {
  public:
    Drop_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    If_existsContext *if_exists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Drop_viewContext* drop_view();

  class  MsckContext : public antlr4::ParserRuleContext {
  public:
    MsckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MsckContext* msck();

  class  Show_columnsContext : public antlr4::ParserRuleContext {
  public:
    Show_columnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<From_inContext *> from_in();
    From_inContext* from_in(size_t i);
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *DOT();
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_columnsContext* show_columns();

  class  Show_create_tableContext : public antlr4::ParserRuleContext {
  public:
    Show_create_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    Db_nameContext *db_name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_create_tableContext* show_create_table();

  class  Show_create_viewContext : public antlr4::ParserRuleContext {
  public:
    Show_create_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_create_viewContext* show_create_view();

  class  Show_databasesContext : public antlr4::ParserRuleContext {
  public:
    Show_databasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *LIKE();
    Reg_exContext *reg_ex();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_databasesContext* show_databases();

  class  Show_partitionsContext : public antlr4::ParserRuleContext {
  public:
    Show_partitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PARTITIONS();
    Table_nameContext *table_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_partitionsContext* show_partitions();

  class  Show_tablesContext : public antlr4::ParserRuleContext {
  public:
    Show_tablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *IN();
    Database_nameContext *database_name();
    Reg_exContext *reg_ex();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_tablesContext* show_tables();

  class  Show_tblpropertiesContext : public antlr4::ParserRuleContext {
  public:
    Show_tblpropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LP();
    StringContext *string();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_tblpropertiesContext* show_tblproperties();

  class  Show_viewsContext : public antlr4::ParserRuleContext {
  public:
    Show_viewsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *IN();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *LIKE();
    Reg_exContext *reg_ex();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Show_viewsContext* show_views();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectContext *select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QueryContext* query();

  class  True_falseContext : public antlr4::ParserRuleContext {
  public:
    True_falseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  True_falseContext* true_false();

  class  Boolean_expressionContext : public antlr4::ParserRuleContext {
  public:
    Boolean_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    std::vector<Boolean_expressionContext *> boolean_expression();
    Boolean_expressionContext* boolean_expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    PredContext *pred();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Boolean_expressionContext* boolean_expression();
  Boolean_expressionContext* boolean_expression(int precedence);
  class  PredContext : public antlr4::ParserRuleContext {
  public:
    PredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NOT();
    Id_Context *id_();
    antlr4::tree::TerminalNode *LIKE();
    StringContext *string();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *IN();
    Table_subqueryContext *table_subquery();
    antlr4::tree::TerminalNode *LP();
    Expression_list_Context *expression_list_();
    antlr4::tree::TerminalNode *RP();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredContext* pred();

  class  Table_subqueryContext : public antlr4::ParserRuleContext {
  public:
    Table_subqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *RP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_subqueryContext* table_subquery();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *BOX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primitive_expressionContext *primitive_expression();
    antlr4::tree::TerminalNode *LP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RP();
    Table_subqueryContext *table_subquery();
    Id_Context *id_();
    Expression_list_Context *expression_list_();
    Case_expressionContext *case_expression();
    When_expressionContext *when_expression();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_expressionContext* case_expression();

  class  When_expressionContext : public antlr4::ParserRuleContext {
  public:
    When_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_expressionContext* when_expression();

  class  Primitive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primitive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primitive_expressionContext* primitive_expression();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();
    True_falseContext *true_false();
    antlr4::tree::TerminalNode *NULL_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  Int_numberContext : public antlr4::ParserRuleContext {
  public:
    Int_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGRAL_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Int_numberContext* int_number();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numberContext *int_number();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primitive_typeContext *primitive_type();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LT();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *MAP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *STRUCT();
    std::vector<Struct_col_defContext *> struct_col_def();
    Struct_col_defContext* struct_col_def(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_typeContext* data_type();

  class  Primitive_typeContext : public antlr4::ParserRuleContext {
  public:
    Primitive_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *LP();
    PrecisionContext *precision();
    antlr4::tree::TerminalNode *COMMA();
    ScaleContext *scale();
    antlr4::tree::TerminalNode *RP();
    Int_numberContext *int_number();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Primitive_typeContext* primitive_type();

  class  PrecisionContext : public antlr4::ParserRuleContext {
  public:
    PrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numberContext *int_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrecisionContext* precision();

  class  ScaleContext : public antlr4::ParserRuleContext {
  public:
    ScaleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_numberContext *int_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScaleContext* scale();

  class  Struct_col_defContext : public antlr4::ParserRuleContext {
  public:
    Struct_col_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Col_nameContext *col_name();
    antlr4::tree::TerminalNode *COLON();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *COMMENT();
    Col_commentContext *col_comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_col_defContext* struct_col_def();

  class  Col_nameContext : public antlr4::ParserRuleContext {
  public:
    Col_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Col_nameContext* col_name();

  class  Db_nameContext : public antlr4::ParserRuleContext {
  public:
    Db_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Db_nameContext* db_name();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Database_nameContext* database_name();

  class  Statement_nameContext : public antlr4::ParserRuleContext {
  public:
    Statement_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Statement_nameContext* statement_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_nameContext* table_name();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  View_nameContext* view_name();

  class  Destination_tableContext : public antlr4::ParserRuleContext {
  public:
    Destination_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Destination_tableContext* destination_table();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQ_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringContext* string();

  class  Reg_exContext : public antlr4::ParserRuleContext {
  public:
    Reg_exContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reg_exContext* reg_ex();

  class  AliasContext : public antlr4::ParserRuleContext {
  public:
    AliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AliasContext* alias();

  class  Target_aliasContext : public antlr4::ParserRuleContext {
  public:
    Target_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Target_aliasContext* target_alias();

  class  Source_aliasContext : public antlr4::ParserRuleContext {
  public:
    Source_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Source_aliasContext* source_alias();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *DQ_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Id_Context* id_();

  class  If_not_existsContext : public antlr4::ParserRuleContext {
  public:
    If_not_existsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_not_existsContext* if_not_exists();

  class  If_existsContext : public antlr4::ParserRuleContext {
  public:
    If_existsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_existsContext* if_exists();

  class  Or_replaceContext : public antlr4::ParserRuleContext {
  public:
    Or_replaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Or_replaceContext* or_replace();

  class  From_inContext : public antlr4::ParserRuleContext {
  public:
    From_inContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  From_inContext* from_in();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool boolean_expressionSempred(Boolean_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace AntlrDemo.Generated
