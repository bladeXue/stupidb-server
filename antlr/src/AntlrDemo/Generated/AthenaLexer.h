
// Generated from AthenaLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace AntlrDemo.Generated {


class  AthenaLexer : public antlr4::Lexer {
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

  explicit AthenaLexer(antlr4::CharStream *input);

  ~AthenaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace AntlrDemo.Generated
