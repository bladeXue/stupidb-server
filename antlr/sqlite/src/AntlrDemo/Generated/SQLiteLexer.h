
// Generated from SQLiteLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace AntlrDemo.Generated {


class  SQLiteLexer : public antlr4::Lexer {
public:
  enum {
    SCOL = 1, DOT = 2, OPEN_PAR = 3, CLOSE_PAR = 4, COMMA = 5, ASSIGN = 6, 
    STAR = 7, PLUS = 8, MINUS = 9, TILDE = 10, PIPE2 = 11, DIV = 12, MOD = 13, 
    LT2 = 14, GT2 = 15, AMP = 16, PIPE = 17, LT = 18, LT_EQ = 19, GT = 20, 
    GT_EQ = 21, EQ = 22, NOT_EQ1 = 23, NOT_EQ2 = 24, ABORT_ = 25, ACTION_ = 26, 
    ADD_ = 27, AFTER_ = 28, ALL_ = 29, ALTER_ = 30, ANALYZE_ = 31, AND_ = 32, 
    AS_ = 33, ASC_ = 34, ATTACH_ = 35, AUTOINCREMENT_ = 36, BEFORE_ = 37, 
    BEGIN_ = 38, BETWEEN_ = 39, BY_ = 40, CASCADE_ = 41, CASE_ = 42, CAST_ = 43, 
    CHECK_ = 44, COLLATE_ = 45, COLUMN_ = 46, COMMIT_ = 47, CONFLICT_ = 48, 
    CONSTRAINT_ = 49, CREATE_ = 50, CROSS_ = 51, CURRENT_DATE_ = 52, CURRENT_TIME_ = 53, 
    CURRENT_TIMESTAMP_ = 54, DATABASE_ = 55, DEFAULT_ = 56, DEFERRABLE_ = 57, 
    DEFERRED_ = 58, DELETE_ = 59, DESC_ = 60, DETACH_ = 61, DISTINCT_ = 62, 
    DROP_ = 63, EACH_ = 64, ELSE_ = 65, END_ = 66, ESCAPE_ = 67, EXCEPT_ = 68, 
    EXCLUSIVE_ = 69, EXISTS_ = 70, EXPLAIN_ = 71, FAIL_ = 72, FOR_ = 73, 
    FOREIGN_ = 74, FROM_ = 75, FULL_ = 76, GLOB_ = 77, GROUP_ = 78, HAVING_ = 79, 
    IF_ = 80, IGNORE_ = 81, IMMEDIATE_ = 82, IN_ = 83, INDEX_ = 84, INDEXED_ = 85, 
    INITIALLY_ = 86, INNER_ = 87, INSERT_ = 88, INSTEAD_ = 89, INTERSECT_ = 90, 
    INTO_ = 91, IS_ = 92, ISNULL_ = 93, JOIN_ = 94, KEY_ = 95, LEFT_ = 96, 
    LIKE_ = 97, LIMIT_ = 98, MATCH_ = 99, NATURAL_ = 100, NO_ = 101, NOT_ = 102, 
    NOTNULL_ = 103, NULL_ = 104, OF_ = 105, OFFSET_ = 106, ON_ = 107, OR_ = 108, 
    ORDER_ = 109, OUTER_ = 110, PLAN_ = 111, PRAGMA_ = 112, PRIMARY_ = 113, 
    QUERY_ = 114, RAISE_ = 115, RECURSIVE_ = 116, REFERENCES_ = 117, REGEXP_ = 118, 
    REINDEX_ = 119, RELEASE_ = 120, RENAME_ = 121, REPLACE_ = 122, RESTRICT_ = 123, 
    RETURNING_ = 124, RIGHT_ = 125, ROLLBACK_ = 126, ROW_ = 127, ROWS_ = 128, 
    SAVEPOINT_ = 129, SELECT_ = 130, SET_ = 131, TABLE_ = 132, TEMP_ = 133, 
    TEMPORARY_ = 134, THEN_ = 135, TO_ = 136, TRANSACTION_ = 137, TRIGGER_ = 138, 
    UNION_ = 139, UNIQUE_ = 140, UPDATE_ = 141, USING_ = 142, VACUUM_ = 143, 
    VALUES_ = 144, VIEW_ = 145, VIRTUAL_ = 146, WHEN_ = 147, WHERE_ = 148, 
    WITH_ = 149, WITHOUT_ = 150, FIRST_VALUE_ = 151, OVER_ = 152, PARTITION_ = 153, 
    RANGE_ = 154, PRECEDING_ = 155, UNBOUNDED_ = 156, CURRENT_ = 157, FOLLOWING_ = 158, 
    CUME_DIST_ = 159, DENSE_RANK_ = 160, LAG_ = 161, LAST_VALUE_ = 162, 
    LEAD_ = 163, NTH_VALUE_ = 164, NTILE_ = 165, PERCENT_RANK_ = 166, RANK_ = 167, 
    ROW_NUMBER_ = 168, GENERATED_ = 169, ALWAYS_ = 170, STORED_ = 171, TRUE_ = 172, 
    FALSE_ = 173, WINDOW_ = 174, NULLS_ = 175, FIRST_ = 176, LAST_ = 177, 
    FILTER_ = 178, GROUPS_ = 179, EXCLUDE_ = 180, TIES_ = 181, OTHERS_ = 182, 
    DO_ = 183, NOTHING_ = 184, IDENTIFIER = 185, NUMERIC_LITERAL = 186, 
    BIND_PARAMETER = 187, STRING_LITERAL = 188, BLOB_LITERAL = 189, SINGLE_LINE_COMMENT = 190, 
    MULTILINE_COMMENT = 191, SPACES = 192, UNEXPECTED_CHAR = 193
  };

  explicit SQLiteLexer(antlr4::CharStream *input);

  ~SQLiteLexer() override;


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
