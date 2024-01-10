
// Generated from filter.g4 by ANTLR 4.13.1


#include "filterListener.h"

#include "filterParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FilterParserStaticData final {
  FilterParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FilterParserStaticData(const FilterParserStaticData&) = delete;
  FilterParserStaticData(FilterParserStaticData&&) = delete;
  FilterParserStaticData& operator=(const FilterParserStaticData&) = delete;
  FilterParserStaticData& operator=(FilterParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag filterParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
FilterParserStaticData *filterParserStaticData = nullptr;

void filterParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (filterParserStaticData != nullptr) {
    return;
  }
#else
  assert(filterParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FilterParserStaticData>(
    std::vector<std::string>{
      "filter", "statement", "assignment", "typeAliasDeclaration", "moduleDeclaration", 
      "packageDeclaration", "importStatement", "enumDeclaration", "errorStatement", 
      "procMacroDeclaration", "procMacroInvocation", "macroDeclaration", 
      "mixinDeclaration", "varDeclaration", "operatorOverloadDeclaration", 
      "switchStatement", "caseStatement", "foldExpression", "foldOperator", 
      "typeclassDeclaration", "fmapDeclaration", "functionDeclaration", 
      "classDeclaration", "accessSpecifier", "templateParam", "param", "type", 
      "primary", "expression", "atom", "value", "valueList", "function", 
      "lambda", "paramList"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'USING'", "'MODULE'", "'{'", "'}'", "'PACKAGE'", 
      "'IMPORT'", "'.'", "'ENUM'", "','", "'ERROR'", "'PROC_MACRO'", "'('", 
      "')'", "'!'", "'MACRO'", "'MIXIN'", "'PUBLIC'", "'PRIVATE'", "'VAR'", 
      "':'", "'OPERATOR'", "'SWITCH'", "'CASE'", "'...'", "'+'", "'-'", 
      "'*'", "'/'", "'%'", "'&&'", "'||'", "'&'", "'|'", "'^'", "'<<'", 
      "'>>'", "'TYPECLASS'", "'FMAP'", "'FUNCTION'", "'<'", "'>'", "'VIRTUAL'", 
      "'CLASS'", "'INT'", "'FLOAT'", "'STRING'", "'BOOL'", "'DATE'", "'TIME'", 
      "'ARRAY'", "'DICT'", "'POINTER'", "'LAMBDA'", "'JSON'", "'AUTO'", 
      "'=='", "'!='", "'<='", "'>='", "'AND'", "'OR'", "'XOR'", "'IF'", 
      "'THEN'", "'ELSE'", "'FOR'", "'##'", "'IN'", "'LIKE'", "'BETWEEN'", 
      "'CONTAINS'", "'['", "']'", "'TRUE'", "'FALSE'", "'AS'", "'COUNT'", 
      "'SUM'", "'AVG'", "'GROUP'", "'BY'", "'=>'", "", "", "", "'NOT'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "ID", "STRING", "NUMBER", "NOT", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,90,839,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,5,
  	0,72,8,0,10,0,12,0,75,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,3,1,124,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,5,
  	4,139,8,4,10,4,12,4,142,9,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,150,8,5,10,5,
  	12,5,153,9,5,1,5,1,5,1,6,1,6,1,6,1,6,5,6,161,8,6,10,6,12,6,164,9,6,1,
  	7,1,7,1,7,1,7,1,7,1,7,5,7,172,8,7,10,7,12,7,175,9,7,1,7,1,7,1,8,1,8,1,
  	8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,188,8,9,10,9,12,9,191,9,9,3,9,193,8,9,1,
  	9,1,9,1,9,5,9,198,8,9,10,9,12,9,201,9,9,1,9,1,9,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,5,11,217,8,11,10,11,12,11,220,9,
  	11,3,11,222,8,11,1,11,1,11,1,11,5,11,227,8,11,10,11,12,11,230,9,11,1,
  	11,1,11,1,12,1,12,1,12,1,12,1,12,5,12,239,8,12,10,12,12,12,242,9,12,1,
  	12,1,12,1,13,3,13,247,8,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,
  	13,257,8,13,1,13,1,13,1,13,1,13,3,13,263,8,13,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,5,14,274,8,14,10,14,12,14,277,9,14,1,14,1,14,1,15,
  	1,15,1,15,1,15,1,15,1,15,5,15,287,8,15,10,15,12,15,290,9,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,5,16,298,8,16,10,16,12,16,301,9,16,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,328,8,17,1,18,1,18,1,19,
  	1,19,1,19,1,19,1,19,5,19,337,8,19,10,19,12,19,340,9,19,1,19,1,19,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,354,8,20,10,20,12,20,
  	357,9,20,1,20,1,20,1,21,3,21,362,8,21,1,21,1,21,1,21,1,21,1,21,1,21,5,
  	21,370,8,21,10,21,12,21,373,9,21,3,21,375,8,21,1,21,1,21,1,21,1,21,1,
  	21,5,21,382,8,21,10,21,12,21,385,9,21,1,21,1,21,1,21,3,21,390,8,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,5,21,398,8,21,10,21,12,21,401,9,21,1,21,1,
  	21,1,21,1,21,1,21,5,21,408,8,21,10,21,12,21,411,9,21,3,21,413,8,21,1,
  	21,1,21,1,21,1,21,1,21,5,21,420,8,21,10,21,12,21,423,9,21,1,21,1,21,1,
  	21,3,21,428,8,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,436,8,21,10,21,12,
  	21,439,9,21,1,21,1,21,1,21,3,21,444,8,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,5,21,453,8,21,10,21,12,21,456,9,21,3,21,458,8,21,1,21,1,21,1,21,
  	1,21,1,21,5,21,465,8,21,10,21,12,21,468,9,21,1,21,1,21,3,21,472,8,21,
  	1,22,1,22,1,22,1,22,1,22,1,22,5,22,480,8,22,10,22,12,22,483,9,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,5,22,492,8,22,10,22,12,22,495,9,22,1,22,
  	1,22,1,22,1,22,1,22,5,22,502,8,22,10,22,12,22,505,9,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,5,22,517,8,22,10,22,12,22,520,9,22,
  	1,22,3,22,523,8,22,1,23,1,23,1,23,1,23,3,23,529,8,23,1,23,1,23,1,23,1,
  	23,5,23,535,8,23,10,23,12,23,538,9,23,1,24,1,24,1,24,1,24,1,24,1,24,5,
  	24,546,8,24,10,24,12,24,549,9,24,1,24,1,24,3,24,553,8,24,1,25,1,25,1,
  	25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,3,26,586,8,26,1,27,1,27,1,27,1,27,3,27,592,8,27,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,5,28,617,8,28,10,28,12,28,620,9,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,5,28,630,8,28,10,28,12,28,633,9,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,3,28,641,8,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,5,28,688,8,28,
  	10,28,12,28,691,9,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,3,29,746,8,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,3,30,
  	771,8,30,1,31,1,31,1,31,5,31,776,8,31,10,31,12,31,779,9,31,1,32,1,32,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	1,32,1,32,1,32,1,32,1,32,3,32,816,8,32,1,33,1,33,1,33,1,33,1,33,1,33,
  	5,33,824,8,33,10,33,12,33,827,9,33,1,33,1,33,1,34,1,34,1,34,5,34,834,
  	8,34,10,34,12,34,837,9,34,1,34,0,1,56,35,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,
  	68,0,2,1,0,19,20,1,0,27,38,943,0,73,1,0,0,0,2,123,1,0,0,0,4,125,1,0,0,
  	0,6,129,1,0,0,0,8,134,1,0,0,0,10,145,1,0,0,0,12,156,1,0,0,0,14,165,1,
  	0,0,0,16,178,1,0,0,0,18,181,1,0,0,0,20,204,1,0,0,0,22,210,1,0,0,0,24,
  	233,1,0,0,0,26,262,1,0,0,0,28,264,1,0,0,0,30,280,1,0,0,0,32,293,1,0,0,
  	0,34,327,1,0,0,0,36,329,1,0,0,0,38,331,1,0,0,0,40,343,1,0,0,0,42,471,
  	1,0,0,0,44,522,1,0,0,0,46,528,1,0,0,0,48,552,1,0,0,0,50,554,1,0,0,0,52,
  	585,1,0,0,0,54,591,1,0,0,0,56,640,1,0,0,0,58,745,1,0,0,0,60,770,1,0,0,
  	0,62,772,1,0,0,0,64,815,1,0,0,0,66,817,1,0,0,0,68,830,1,0,0,0,70,72,3,
  	2,1,0,71,70,1,0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,76,1,
  	0,0,0,75,73,1,0,0,0,76,77,5,0,0,1,77,1,1,0,0,0,78,79,3,26,13,0,79,80,
  	5,1,0,0,80,124,1,0,0,0,81,82,3,42,21,0,82,83,5,1,0,0,83,124,1,0,0,0,84,
  	85,3,44,22,0,85,86,5,1,0,0,86,124,1,0,0,0,87,88,3,14,7,0,88,89,5,1,0,
  	0,89,124,1,0,0,0,90,91,3,56,28,0,91,92,5,1,0,0,92,124,1,0,0,0,93,94,3,
  	22,11,0,94,95,5,1,0,0,95,124,1,0,0,0,96,97,3,24,12,0,97,98,5,1,0,0,98,
  	124,1,0,0,0,99,100,3,16,8,0,100,101,5,1,0,0,101,124,1,0,0,0,102,103,3,
  	8,4,0,103,104,5,1,0,0,104,124,1,0,0,0,105,106,3,10,5,0,106,107,5,1,0,
  	0,107,124,1,0,0,0,108,109,3,12,6,0,109,110,5,1,0,0,110,124,1,0,0,0,111,
  	112,3,6,3,0,112,113,5,1,0,0,113,124,1,0,0,0,114,115,3,28,14,0,115,116,
  	5,1,0,0,116,124,1,0,0,0,117,118,3,30,15,0,118,119,5,1,0,0,119,124,1,0,
  	0,0,120,121,3,4,2,0,121,122,5,1,0,0,122,124,1,0,0,0,123,78,1,0,0,0,123,
  	81,1,0,0,0,123,84,1,0,0,0,123,87,1,0,0,0,123,90,1,0,0,0,123,93,1,0,0,
  	0,123,96,1,0,0,0,123,99,1,0,0,0,123,102,1,0,0,0,123,105,1,0,0,0,123,108,
  	1,0,0,0,123,111,1,0,0,0,123,114,1,0,0,0,123,117,1,0,0,0,123,120,1,0,0,
  	0,124,3,1,0,0,0,125,126,5,85,0,0,126,127,5,2,0,0,127,128,3,56,28,0,128,
  	5,1,0,0,0,129,130,5,3,0,0,130,131,5,85,0,0,131,132,5,2,0,0,132,133,3,
  	52,26,0,133,7,1,0,0,0,134,135,5,4,0,0,135,136,5,85,0,0,136,140,5,5,0,
  	0,137,139,3,2,1,0,138,137,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,
  	141,1,0,0,0,141,143,1,0,0,0,142,140,1,0,0,0,143,144,5,6,0,0,144,9,1,0,
  	0,0,145,146,5,7,0,0,146,147,5,85,0,0,147,151,5,5,0,0,148,150,3,2,1,0,
  	149,148,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,154,
  	1,0,0,0,153,151,1,0,0,0,154,155,5,6,0,0,155,11,1,0,0,0,156,157,5,8,0,
  	0,157,162,5,85,0,0,158,159,5,9,0,0,159,161,5,85,0,0,160,158,1,0,0,0,161,
  	164,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,13,1,0,0,0,164,162,1,
  	0,0,0,165,166,5,10,0,0,166,167,5,85,0,0,167,168,5,5,0,0,168,173,5,85,
  	0,0,169,170,5,11,0,0,170,172,5,85,0,0,171,169,1,0,0,0,172,175,1,0,0,0,
  	173,171,1,0,0,0,173,174,1,0,0,0,174,176,1,0,0,0,175,173,1,0,0,0,176,177,
  	5,6,0,0,177,15,1,0,0,0,178,179,5,12,0,0,179,180,5,86,0,0,180,17,1,0,0,
  	0,181,182,5,13,0,0,182,183,5,85,0,0,183,192,5,14,0,0,184,189,3,50,25,
  	0,185,186,5,11,0,0,186,188,3,50,25,0,187,185,1,0,0,0,188,191,1,0,0,0,
  	189,187,1,0,0,0,189,190,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,192,184,
  	1,0,0,0,192,193,1,0,0,0,193,194,1,0,0,0,194,195,5,15,0,0,195,199,5,5,
  	0,0,196,198,3,2,1,0,197,196,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,199,
  	200,1,0,0,0,200,202,1,0,0,0,201,199,1,0,0,0,202,203,5,6,0,0,203,19,1,
  	0,0,0,204,205,5,85,0,0,205,206,5,16,0,0,206,207,5,14,0,0,207,208,3,56,
  	28,0,208,209,5,15,0,0,209,21,1,0,0,0,210,211,5,17,0,0,211,212,5,85,0,
  	0,212,221,5,14,0,0,213,218,3,50,25,0,214,215,5,11,0,0,215,217,3,50,25,
  	0,216,214,1,0,0,0,217,220,1,0,0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,
  	222,1,0,0,0,220,218,1,0,0,0,221,213,1,0,0,0,221,222,1,0,0,0,222,223,1,
  	0,0,0,223,224,5,15,0,0,224,228,5,5,0,0,225,227,3,2,1,0,226,225,1,0,0,
  	0,227,230,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,231,1,0,0,0,230,
  	228,1,0,0,0,231,232,5,6,0,0,232,23,1,0,0,0,233,234,5,18,0,0,234,235,5,
  	85,0,0,235,240,5,5,0,0,236,239,3,26,13,0,237,239,3,42,21,0,238,236,1,
  	0,0,0,238,237,1,0,0,0,239,242,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,
  	241,243,1,0,0,0,242,240,1,0,0,0,243,244,5,6,0,0,244,25,1,0,0,0,245,247,
  	7,0,0,0,246,245,1,0,0,0,246,247,1,0,0,0,247,248,1,0,0,0,248,249,5,21,
  	0,0,249,250,5,85,0,0,250,251,5,22,0,0,251,252,3,52,26,0,252,253,5,2,0,
  	0,253,254,3,56,28,0,254,263,1,0,0,0,255,257,7,0,0,0,256,255,1,0,0,0,256,
  	257,1,0,0,0,257,258,1,0,0,0,258,259,5,21,0,0,259,260,5,85,0,0,260,261,
  	5,2,0,0,261,263,3,56,28,0,262,246,1,0,0,0,262,256,1,0,0,0,263,27,1,0,
  	0,0,264,265,5,23,0,0,265,266,5,85,0,0,266,267,5,14,0,0,267,268,3,50,25,
  	0,268,269,5,11,0,0,269,270,3,50,25,0,270,271,5,15,0,0,271,275,5,5,0,0,
  	272,274,3,2,1,0,273,272,1,0,0,0,274,277,1,0,0,0,275,273,1,0,0,0,275,276,
  	1,0,0,0,276,278,1,0,0,0,277,275,1,0,0,0,278,279,5,6,0,0,279,29,1,0,0,
  	0,280,281,5,24,0,0,281,282,5,14,0,0,282,283,3,56,28,0,283,284,5,15,0,
  	0,284,288,5,5,0,0,285,287,3,32,16,0,286,285,1,0,0,0,287,290,1,0,0,0,288,
  	286,1,0,0,0,288,289,1,0,0,0,289,291,1,0,0,0,290,288,1,0,0,0,291,292,5,
  	6,0,0,292,31,1,0,0,0,293,294,5,25,0,0,294,295,3,56,28,0,295,299,5,22,
  	0,0,296,298,3,2,1,0,297,296,1,0,0,0,298,301,1,0,0,0,299,297,1,0,0,0,299,
  	300,1,0,0,0,300,33,1,0,0,0,301,299,1,0,0,0,302,303,5,14,0,0,303,304,3,
  	52,26,0,304,305,5,26,0,0,305,306,3,36,18,0,306,307,5,15,0,0,307,328,1,
  	0,0,0,308,309,5,14,0,0,309,310,3,52,26,0,310,311,3,36,18,0,311,312,5,
  	26,0,0,312,313,5,15,0,0,313,328,1,0,0,0,314,315,5,14,0,0,315,316,5,26,
  	0,0,316,317,3,36,18,0,317,318,3,52,26,0,318,319,5,15,0,0,319,328,1,0,
  	0,0,320,321,5,14,0,0,321,322,3,52,26,0,322,323,5,26,0,0,323,324,3,36,
  	18,0,324,325,3,52,26,0,325,326,5,15,0,0,326,328,1,0,0,0,327,302,1,0,0,
  	0,327,308,1,0,0,0,327,314,1,0,0,0,327,320,1,0,0,0,328,35,1,0,0,0,329,
  	330,7,1,0,0,330,37,1,0,0,0,331,332,5,39,0,0,332,333,5,85,0,0,333,338,
  	5,5,0,0,334,337,3,42,21,0,335,337,3,40,20,0,336,334,1,0,0,0,336,335,1,
  	0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,341,1,0,0,0,
  	340,338,1,0,0,0,341,342,5,6,0,0,342,39,1,0,0,0,343,344,5,40,0,0,344,345,
  	5,14,0,0,345,346,3,50,25,0,346,347,5,11,0,0,347,348,3,50,25,0,348,349,
  	5,15,0,0,349,350,5,22,0,0,350,351,3,52,26,0,351,355,5,5,0,0,352,354,3,
  	2,1,0,353,352,1,0,0,0,354,357,1,0,0,0,355,353,1,0,0,0,355,356,1,0,0,0,
  	356,358,1,0,0,0,357,355,1,0,0,0,358,359,5,6,0,0,359,41,1,0,0,0,360,362,
  	7,0,0,0,361,360,1,0,0,0,361,362,1,0,0,0,362,363,1,0,0,0,363,364,5,41,
  	0,0,364,365,5,85,0,0,365,374,5,14,0,0,366,371,3,50,25,0,367,368,5,11,
  	0,0,368,370,3,50,25,0,369,367,1,0,0,0,370,373,1,0,0,0,371,369,1,0,0,0,
  	371,372,1,0,0,0,372,375,1,0,0,0,373,371,1,0,0,0,374,366,1,0,0,0,374,375,
  	1,0,0,0,375,376,1,0,0,0,376,377,5,15,0,0,377,378,5,22,0,0,378,379,3,52,
  	26,0,379,383,5,5,0,0,380,382,3,2,1,0,381,380,1,0,0,0,382,385,1,0,0,0,
  	383,381,1,0,0,0,383,384,1,0,0,0,384,386,1,0,0,0,385,383,1,0,0,0,386,387,
  	5,6,0,0,387,472,1,0,0,0,388,390,7,0,0,0,389,388,1,0,0,0,389,390,1,0,0,
  	0,390,391,1,0,0,0,391,392,5,41,0,0,392,393,5,85,0,0,393,394,5,42,0,0,
  	394,399,3,48,24,0,395,396,5,26,0,0,396,398,3,48,24,0,397,395,1,0,0,0,
  	398,401,1,0,0,0,399,397,1,0,0,0,399,400,1,0,0,0,400,402,1,0,0,0,401,399,
  	1,0,0,0,402,403,5,43,0,0,403,412,5,14,0,0,404,409,3,50,25,0,405,406,5,
  	11,0,0,406,408,3,50,25,0,407,405,1,0,0,0,408,411,1,0,0,0,409,407,1,0,
  	0,0,409,410,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,0,412,404,1,0,0,0,412,
  	413,1,0,0,0,413,414,1,0,0,0,414,415,5,15,0,0,415,416,5,22,0,0,416,417,
  	3,52,26,0,417,421,5,5,0,0,418,420,3,2,1,0,419,418,1,0,0,0,420,423,1,0,
  	0,0,421,419,1,0,0,0,421,422,1,0,0,0,422,424,1,0,0,0,423,421,1,0,0,0,424,
  	425,5,6,0,0,425,472,1,0,0,0,426,428,7,0,0,0,427,426,1,0,0,0,427,428,1,
  	0,0,0,428,429,1,0,0,0,429,430,5,41,0,0,430,431,5,85,0,0,431,432,5,22,
  	0,0,432,433,3,38,19,0,433,437,5,5,0,0,434,436,3,2,1,0,435,434,1,0,0,0,
  	436,439,1,0,0,0,437,435,1,0,0,0,437,438,1,0,0,0,438,440,1,0,0,0,439,437,
  	1,0,0,0,440,441,5,6,0,0,441,472,1,0,0,0,442,444,7,0,0,0,443,442,1,0,0,
  	0,443,444,1,0,0,0,444,445,1,0,0,0,445,446,5,44,0,0,446,447,5,41,0,0,447,
  	448,5,85,0,0,448,457,5,14,0,0,449,454,3,50,25,0,450,451,5,11,0,0,451,
  	453,3,50,25,0,452,450,1,0,0,0,453,456,1,0,0,0,454,452,1,0,0,0,454,455,
  	1,0,0,0,455,458,1,0,0,0,456,454,1,0,0,0,457,449,1,0,0,0,457,458,1,0,0,
  	0,458,459,1,0,0,0,459,460,5,15,0,0,460,461,5,22,0,0,461,462,3,52,26,0,
  	462,466,5,5,0,0,463,465,3,2,1,0,464,463,1,0,0,0,465,468,1,0,0,0,466,464,
  	1,0,0,0,466,467,1,0,0,0,467,469,1,0,0,0,468,466,1,0,0,0,469,470,5,6,0,
  	0,470,472,1,0,0,0,471,361,1,0,0,0,471,389,1,0,0,0,471,427,1,0,0,0,471,
  	443,1,0,0,0,472,43,1,0,0,0,473,474,5,45,0,0,474,475,5,85,0,0,475,481,
  	5,5,0,0,476,477,3,46,23,0,477,478,3,2,1,0,478,480,1,0,0,0,479,476,1,0,
  	0,0,480,483,1,0,0,0,481,479,1,0,0,0,481,482,1,0,0,0,482,484,1,0,0,0,483,
  	481,1,0,0,0,484,523,5,6,0,0,485,486,5,45,0,0,486,487,5,85,0,0,487,488,
  	5,42,0,0,488,493,3,48,24,0,489,490,5,26,0,0,490,492,3,48,24,0,491,489,
  	1,0,0,0,492,495,1,0,0,0,493,491,1,0,0,0,493,494,1,0,0,0,494,496,1,0,0,
  	0,495,493,1,0,0,0,496,497,5,43,0,0,497,503,5,5,0,0,498,499,3,46,23,0,
  	499,500,3,2,1,0,500,502,1,0,0,0,501,498,1,0,0,0,502,505,1,0,0,0,503,501,
  	1,0,0,0,503,504,1,0,0,0,504,506,1,0,0,0,505,503,1,0,0,0,506,507,5,6,0,
  	0,507,523,1,0,0,0,508,509,5,45,0,0,509,510,5,85,0,0,510,511,5,22,0,0,
  	511,512,5,85,0,0,512,518,5,5,0,0,513,514,3,46,23,0,514,515,3,2,1,0,515,
  	517,1,0,0,0,516,513,1,0,0,0,517,520,1,0,0,0,518,516,1,0,0,0,518,519,1,
  	0,0,0,519,521,1,0,0,0,520,518,1,0,0,0,521,523,5,6,0,0,522,473,1,0,0,0,
  	522,485,1,0,0,0,522,508,1,0,0,0,523,45,1,0,0,0,524,525,5,19,0,0,525,529,
  	5,22,0,0,526,527,5,20,0,0,527,529,5,22,0,0,528,524,1,0,0,0,528,526,1,
  	0,0,0,528,529,1,0,0,0,529,536,1,0,0,0,530,535,3,26,13,0,531,535,3,42,
  	21,0,532,535,3,24,12,0,533,535,3,38,19,0,534,530,1,0,0,0,534,531,1,0,
  	0,0,534,532,1,0,0,0,534,533,1,0,0,0,535,538,1,0,0,0,536,534,1,0,0,0,536,
  	537,1,0,0,0,537,47,1,0,0,0,538,536,1,0,0,0,539,553,3,52,26,0,540,541,
  	5,85,0,0,541,542,5,42,0,0,542,547,3,48,24,0,543,544,5,26,0,0,544,546,
  	3,48,24,0,545,543,1,0,0,0,546,549,1,0,0,0,547,545,1,0,0,0,547,548,1,0,
  	0,0,548,550,1,0,0,0,549,547,1,0,0,0,550,551,5,43,0,0,551,553,1,0,0,0,
  	552,539,1,0,0,0,552,540,1,0,0,0,553,49,1,0,0,0,554,555,5,85,0,0,555,556,
  	5,22,0,0,556,557,3,52,26,0,557,51,1,0,0,0,558,586,5,46,0,0,559,586,5,
  	47,0,0,560,586,5,48,0,0,561,586,5,49,0,0,562,586,5,50,0,0,563,586,5,51,
  	0,0,564,586,5,52,0,0,565,586,5,53,0,0,566,567,5,54,0,0,567,568,5,42,0,
  	0,568,569,3,48,24,0,569,570,5,43,0,0,570,586,1,0,0,0,571,572,5,41,0,0,
  	572,573,5,42,0,0,573,574,3,48,24,0,574,575,5,43,0,0,575,586,1,0,0,0,576,
  	577,5,55,0,0,577,578,5,42,0,0,578,579,3,48,24,0,579,580,5,43,0,0,580,
  	586,1,0,0,0,581,586,5,56,0,0,582,586,5,57,0,0,583,586,5,85,0,0,584,586,
  	3,14,7,0,585,558,1,0,0,0,585,559,1,0,0,0,585,560,1,0,0,0,585,561,1,0,
  	0,0,585,562,1,0,0,0,585,563,1,0,0,0,585,564,1,0,0,0,585,565,1,0,0,0,585,
  	566,1,0,0,0,585,571,1,0,0,0,585,576,1,0,0,0,585,581,1,0,0,0,585,582,1,
  	0,0,0,585,583,1,0,0,0,585,584,1,0,0,0,586,53,1,0,0,0,587,592,3,60,30,
  	0,588,592,5,85,0,0,589,592,3,64,32,0,590,592,3,58,29,0,591,587,1,0,0,
  	0,591,588,1,0,0,0,591,589,1,0,0,0,591,590,1,0,0,0,592,55,1,0,0,0,593,
  	594,6,28,-1,0,594,641,3,54,27,0,595,596,5,88,0,0,596,641,3,56,28,6,597,
  	598,5,65,0,0,598,599,5,14,0,0,599,600,3,56,28,0,600,601,5,15,0,0,601,
  	602,5,66,0,0,602,603,3,56,28,0,603,604,5,67,0,0,604,605,3,56,28,5,605,
  	641,1,0,0,0,606,607,5,68,0,0,607,608,5,14,0,0,608,609,3,26,13,0,609,610,
  	5,1,0,0,610,611,3,56,28,0,611,612,5,1,0,0,612,613,3,56,28,0,613,614,5,
  	15,0,0,614,618,5,5,0,0,615,617,3,2,1,0,616,615,1,0,0,0,617,620,1,0,0,
  	0,618,616,1,0,0,0,618,619,1,0,0,0,619,621,1,0,0,0,620,618,1,0,0,0,621,
  	622,5,6,0,0,622,641,1,0,0,0,623,624,5,68,0,0,624,625,5,14,0,0,625,626,
  	3,56,28,0,626,627,5,15,0,0,627,631,5,5,0,0,628,630,3,2,1,0,629,628,1,
  	0,0,0,630,633,1,0,0,0,631,629,1,0,0,0,631,632,1,0,0,0,632,634,1,0,0,0,
  	633,631,1,0,0,0,634,635,5,6,0,0,635,641,1,0,0,0,636,637,5,14,0,0,637,
  	638,3,56,28,0,638,639,5,15,0,0,639,641,1,0,0,0,640,593,1,0,0,0,640,595,
  	1,0,0,0,640,597,1,0,0,0,640,606,1,0,0,0,640,623,1,0,0,0,640,636,1,0,0,
  	0,641,689,1,0,0,0,642,643,10,20,0,0,643,644,5,27,0,0,644,688,3,56,28,
  	21,645,646,10,19,0,0,646,647,5,28,0,0,647,688,3,56,28,20,648,649,10,18,
  	0,0,649,650,5,29,0,0,650,688,3,56,28,19,651,652,10,17,0,0,652,653,5,30,
  	0,0,653,688,3,56,28,18,654,655,10,16,0,0,655,656,5,31,0,0,656,688,3,56,
  	28,17,657,658,10,15,0,0,658,659,5,58,0,0,659,688,3,56,28,16,660,661,10,
  	14,0,0,661,662,5,59,0,0,662,688,3,56,28,15,663,664,10,13,0,0,664,665,
  	5,42,0,0,665,688,3,56,28,14,666,667,10,12,0,0,667,668,5,43,0,0,668,688,
  	3,56,28,13,669,670,10,11,0,0,670,671,5,60,0,0,671,688,3,56,28,12,672,
  	673,10,10,0,0,673,674,5,61,0,0,674,688,3,56,28,11,675,676,10,9,0,0,676,
  	677,5,62,0,0,677,688,3,56,28,10,678,679,10,8,0,0,679,680,5,63,0,0,680,
  	688,3,56,28,9,681,682,10,7,0,0,682,683,5,64,0,0,683,688,3,56,28,8,684,
  	685,10,1,0,0,685,686,5,69,0,0,686,688,3,56,28,2,687,642,1,0,0,0,687,645,
  	1,0,0,0,687,648,1,0,0,0,687,651,1,0,0,0,687,654,1,0,0,0,687,657,1,0,0,
  	0,687,660,1,0,0,0,687,663,1,0,0,0,687,666,1,0,0,0,687,669,1,0,0,0,687,
  	672,1,0,0,0,687,675,1,0,0,0,687,678,1,0,0,0,687,681,1,0,0,0,687,684,1,
  	0,0,0,688,691,1,0,0,0,689,687,1,0,0,0,689,690,1,0,0,0,690,57,1,0,0,0,
  	691,689,1,0,0,0,692,693,5,85,0,0,693,694,5,70,0,0,694,695,5,14,0,0,695,
  	696,3,62,31,0,696,697,5,15,0,0,697,746,1,0,0,0,698,699,5,85,0,0,699,700,
  	5,2,0,0,700,746,3,60,30,0,701,702,5,85,0,0,702,703,5,59,0,0,703,746,3,
  	60,30,0,704,705,5,85,0,0,705,706,5,43,0,0,706,746,3,60,30,0,707,708,5,
  	85,0,0,708,709,5,42,0,0,709,746,3,60,30,0,710,711,5,85,0,0,711,712,5,
  	61,0,0,712,746,3,60,30,0,713,714,5,85,0,0,714,715,5,60,0,0,715,746,3,
  	60,30,0,716,717,5,85,0,0,717,718,5,71,0,0,718,746,5,86,0,0,719,720,5,
  	85,0,0,720,721,5,72,0,0,721,722,3,60,30,0,722,723,5,62,0,0,723,724,3,
  	60,30,0,724,746,1,0,0,0,725,726,5,85,0,0,726,727,5,9,0,0,727,728,5,85,
  	0,0,728,729,5,14,0,0,729,730,3,62,31,0,730,731,5,15,0,0,731,746,1,0,0,
  	0,732,733,5,85,0,0,733,734,5,73,0,0,734,746,5,86,0,0,735,736,5,85,0,0,
  	736,737,5,74,0,0,737,738,5,87,0,0,738,746,5,75,0,0,739,740,5,85,0,0,740,
  	741,5,74,0,0,741,742,5,87,0,0,742,743,5,22,0,0,743,744,5,87,0,0,744,746,
  	5,75,0,0,745,692,1,0,0,0,745,698,1,0,0,0,745,701,1,0,0,0,745,704,1,0,
  	0,0,745,707,1,0,0,0,745,710,1,0,0,0,745,713,1,0,0,0,745,716,1,0,0,0,745,
  	719,1,0,0,0,745,725,1,0,0,0,745,732,1,0,0,0,745,735,1,0,0,0,745,739,1,
  	0,0,0,746,59,1,0,0,0,747,771,5,86,0,0,748,771,5,87,0,0,749,771,5,85,0,
  	0,750,771,5,76,0,0,751,771,5,77,0,0,752,771,5,50,0,0,753,771,5,51,0,0,
  	754,771,5,56,0,0,755,756,5,85,0,0,756,757,5,42,0,0,757,758,3,52,26,0,
  	758,759,5,43,0,0,759,760,5,14,0,0,760,761,3,62,31,0,761,762,5,15,0,0,
  	762,771,1,0,0,0,763,764,5,85,0,0,764,765,5,42,0,0,765,766,3,52,26,0,766,
  	767,5,43,0,0,767,768,5,14,0,0,768,769,5,15,0,0,769,771,1,0,0,0,770,747,
  	1,0,0,0,770,748,1,0,0,0,770,749,1,0,0,0,770,750,1,0,0,0,770,751,1,0,0,
  	0,770,752,1,0,0,0,770,753,1,0,0,0,770,754,1,0,0,0,770,755,1,0,0,0,770,
  	763,1,0,0,0,771,61,1,0,0,0,772,777,3,60,30,0,773,774,5,11,0,0,774,776,
  	3,60,30,0,775,773,1,0,0,0,776,779,1,0,0,0,777,775,1,0,0,0,777,778,1,0,
  	0,0,778,63,1,0,0,0,779,777,1,0,0,0,780,781,5,85,0,0,781,782,5,14,0,0,
  	782,816,5,15,0,0,783,784,5,85,0,0,784,785,5,14,0,0,785,786,3,62,31,0,
  	786,787,5,15,0,0,787,816,1,0,0,0,788,789,5,85,0,0,789,790,5,14,0,0,790,
  	791,5,29,0,0,791,792,5,15,0,0,792,793,5,78,0,0,793,816,5,85,0,0,794,795,
  	5,79,0,0,795,796,5,14,0,0,796,797,5,29,0,0,797,798,5,15,0,0,798,799,5,
  	78,0,0,799,816,5,85,0,0,800,801,5,80,0,0,801,802,5,14,0,0,802,803,5,29,
  	0,0,803,804,5,15,0,0,804,805,5,78,0,0,805,816,5,85,0,0,806,807,5,81,0,
  	0,807,808,5,14,0,0,808,809,5,29,0,0,809,810,5,15,0,0,810,811,5,78,0,0,
  	811,816,5,85,0,0,812,813,5,82,0,0,813,814,5,83,0,0,814,816,3,62,31,0,
  	815,780,1,0,0,0,815,783,1,0,0,0,815,788,1,0,0,0,815,794,1,0,0,0,815,800,
  	1,0,0,0,815,806,1,0,0,0,815,812,1,0,0,0,816,65,1,0,0,0,817,818,5,14,0,
  	0,818,819,3,68,34,0,819,820,5,15,0,0,820,821,5,84,0,0,821,825,5,5,0,0,
  	822,824,3,2,1,0,823,822,1,0,0,0,824,827,1,0,0,0,825,823,1,0,0,0,825,826,
  	1,0,0,0,826,828,1,0,0,0,827,825,1,0,0,0,828,829,5,6,0,0,829,67,1,0,0,
  	0,830,835,3,50,25,0,831,832,5,11,0,0,832,834,3,50,25,0,833,831,1,0,0,
  	0,834,837,1,0,0,0,835,833,1,0,0,0,835,836,1,0,0,0,836,69,1,0,0,0,837,
  	835,1,0,0,0,63,73,123,140,151,162,173,189,192,199,218,221,228,238,240,
  	246,256,262,275,288,299,327,336,338,355,361,371,374,383,389,399,409,412,
  	421,427,437,443,454,457,466,471,481,493,503,518,522,528,534,536,547,552,
  	585,591,618,631,640,687,689,745,770,777,815,825,835
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  filterParserStaticData = staticData.release();
}

}

filterParser::filterParser(TokenStream *input) : filterParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

filterParser::filterParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  filterParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *filterParserStaticData->atn, filterParserStaticData->decisionToDFA, filterParserStaticData->sharedContextCache, options);
}

filterParser::~filterParser() {
  delete _interpreter;
}

const atn::ATN& filterParser::getATN() const {
  return *filterParserStaticData->atn;
}

std::string filterParser::getGrammarFileName() const {
  return "filter.g4";
}

const std::vector<std::string>& filterParser::getRuleNames() const {
  return filterParserStaticData->ruleNames;
}

const dfa::Vocabulary& filterParser::getVocabulary() const {
  return filterParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView filterParser::getSerializedATN() const {
  return filterParserStaticData->serializedATN;
}


//----------------- FilterContext ------------------------------------------------------------------

filterParser::FilterContext::FilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::FilterContext::EOF() {
  return getToken(filterParser::EOF, 0);
}

std::vector<filterParser::StatementContext *> filterParser::FilterContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::FilterContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::FilterContext::getRuleIndex() const {
  return filterParser::RuleFilter;
}

void filterParser::FilterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter(this);
}

void filterParser::FilterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter(this);
}

filterParser::FilterContext* filterParser::filter() {
  FilterContext *_localctx = _tracker.createInstance<FilterContext>(_ctx, getState());
  enterRule(_localctx, 0, filterParser::RuleFilter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(70);
      statement();
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(filterParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

filterParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::VarDeclarationContext* filterParser::StatementContext::varDeclaration() {
  return getRuleContext<filterParser::VarDeclarationContext>(0);
}

filterParser::FunctionDeclarationContext* filterParser::StatementContext::functionDeclaration() {
  return getRuleContext<filterParser::FunctionDeclarationContext>(0);
}

filterParser::ClassDeclarationContext* filterParser::StatementContext::classDeclaration() {
  return getRuleContext<filterParser::ClassDeclarationContext>(0);
}

filterParser::EnumDeclarationContext* filterParser::StatementContext::enumDeclaration() {
  return getRuleContext<filterParser::EnumDeclarationContext>(0);
}

filterParser::ExpressionContext* filterParser::StatementContext::expression() {
  return getRuleContext<filterParser::ExpressionContext>(0);
}

filterParser::MacroDeclarationContext* filterParser::StatementContext::macroDeclaration() {
  return getRuleContext<filterParser::MacroDeclarationContext>(0);
}

filterParser::MixinDeclarationContext* filterParser::StatementContext::mixinDeclaration() {
  return getRuleContext<filterParser::MixinDeclarationContext>(0);
}

filterParser::ErrorStatementContext* filterParser::StatementContext::errorStatement() {
  return getRuleContext<filterParser::ErrorStatementContext>(0);
}

filterParser::ModuleDeclarationContext* filterParser::StatementContext::moduleDeclaration() {
  return getRuleContext<filterParser::ModuleDeclarationContext>(0);
}

filterParser::PackageDeclarationContext* filterParser::StatementContext::packageDeclaration() {
  return getRuleContext<filterParser::PackageDeclarationContext>(0);
}

filterParser::ImportStatementContext* filterParser::StatementContext::importStatement() {
  return getRuleContext<filterParser::ImportStatementContext>(0);
}

filterParser::TypeAliasDeclarationContext* filterParser::StatementContext::typeAliasDeclaration() {
  return getRuleContext<filterParser::TypeAliasDeclarationContext>(0);
}

filterParser::OperatorOverloadDeclarationContext* filterParser::StatementContext::operatorOverloadDeclaration() {
  return getRuleContext<filterParser::OperatorOverloadDeclarationContext>(0);
}

filterParser::SwitchStatementContext* filterParser::StatementContext::switchStatement() {
  return getRuleContext<filterParser::SwitchStatementContext>(0);
}

filterParser::AssignmentContext* filterParser::StatementContext::assignment() {
  return getRuleContext<filterParser::AssignmentContext>(0);
}


size_t filterParser::StatementContext::getRuleIndex() const {
  return filterParser::RuleStatement;
}

void filterParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void filterParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

filterParser::StatementContext* filterParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, filterParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      varDeclaration();
      setState(79);
      match(filterParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(81);
      functionDeclaration();
      setState(82);
      match(filterParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(84);
      classDeclaration();
      setState(85);
      match(filterParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(87);
      enumDeclaration();
      setState(88);
      match(filterParser::T__0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(90);
      expression(0);
      setState(91);
      match(filterParser::T__0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(93);
      macroDeclaration();
      setState(94);
      match(filterParser::T__0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(96);
      mixinDeclaration();
      setState(97);
      match(filterParser::T__0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(99);
      errorStatement();
      setState(100);
      match(filterParser::T__0);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(102);
      moduleDeclaration();
      setState(103);
      match(filterParser::T__0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(105);
      packageDeclaration();
      setState(106);
      match(filterParser::T__0);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(108);
      importStatement();
      setState(109);
      match(filterParser::T__0);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(111);
      typeAliasDeclaration();
      setState(112);
      match(filterParser::T__0);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(114);
      operatorOverloadDeclaration();
      setState(115);
      match(filterParser::T__0);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(117);
      switchStatement();
      setState(118);
      match(filterParser::T__0);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(120);
      assignment();
      setState(121);
      match(filterParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

filterParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::AssignmentContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::ExpressionContext* filterParser::AssignmentContext::expression() {
  return getRuleContext<filterParser::ExpressionContext>(0);
}


size_t filterParser::AssignmentContext::getRuleIndex() const {
  return filterParser::RuleAssignment;
}

void filterParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void filterParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

filterParser::AssignmentContext* filterParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, filterParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(filterParser::ID);
    setState(126);
    match(filterParser::T__1);
    setState(127);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAliasDeclarationContext ------------------------------------------------------------------

filterParser::TypeAliasDeclarationContext::TypeAliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::TypeAliasDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::TypeContext* filterParser::TypeAliasDeclarationContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}


size_t filterParser::TypeAliasDeclarationContext::getRuleIndex() const {
  return filterParser::RuleTypeAliasDeclaration;
}

void filterParser::TypeAliasDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAliasDeclaration(this);
}

void filterParser::TypeAliasDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAliasDeclaration(this);
}

filterParser::TypeAliasDeclarationContext* filterParser::typeAliasDeclaration() {
  TypeAliasDeclarationContext *_localctx = _tracker.createInstance<TypeAliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, filterParser::RuleTypeAliasDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(filterParser::T__2);
    setState(130);
    match(filterParser::ID);
    setState(131);
    match(filterParser::T__1);
    setState(132);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationContext ------------------------------------------------------------------

filterParser::ModuleDeclarationContext::ModuleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::ModuleDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::StatementContext *> filterParser::ModuleDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::ModuleDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::ModuleDeclarationContext::getRuleIndex() const {
  return filterParser::RuleModuleDeclaration;
}

void filterParser::ModuleDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleDeclaration(this);
}

void filterParser::ModuleDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleDeclaration(this);
}

filterParser::ModuleDeclarationContext* filterParser::moduleDeclaration() {
  ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, filterParser::RuleModuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(filterParser::T__3);
    setState(135);
    match(filterParser::ID);
    setState(136);
    match(filterParser::T__4);
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(137);
      statement();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

filterParser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::PackageDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::StatementContext *> filterParser::PackageDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::PackageDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::PackageDeclarationContext::getRuleIndex() const {
  return filterParser::RulePackageDeclaration;
}

void filterParser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageDeclaration(this);
}

void filterParser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageDeclaration(this);
}

filterParser::PackageDeclarationContext* filterParser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, filterParser::RulePackageDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(filterParser::T__6);
    setState(146);
    match(filterParser::ID);
    setState(147);
    match(filterParser::T__4);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(148);
      statement();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

filterParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> filterParser::ImportStatementContext::ID() {
  return getTokens(filterParser::ID);
}

tree::TerminalNode* filterParser::ImportStatementContext::ID(size_t i) {
  return getToken(filterParser::ID, i);
}


size_t filterParser::ImportStatementContext::getRuleIndex() const {
  return filterParser::RuleImportStatement;
}

void filterParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void filterParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}

filterParser::ImportStatementContext* filterParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, filterParser::RuleImportStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(filterParser::T__7);

    setState(157);
    match(filterParser::ID);
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == filterParser::T__8) {
      setState(158);
      match(filterParser::T__8);
      setState(159);
      match(filterParser::ID);
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

filterParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> filterParser::EnumDeclarationContext::ID() {
  return getTokens(filterParser::ID);
}

tree::TerminalNode* filterParser::EnumDeclarationContext::ID(size_t i) {
  return getToken(filterParser::ID, i);
}


size_t filterParser::EnumDeclarationContext::getRuleIndex() const {
  return filterParser::RuleEnumDeclaration;
}

void filterParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void filterParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}

filterParser::EnumDeclarationContext* filterParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, filterParser::RuleEnumDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(filterParser::T__9);
    setState(166);
    match(filterParser::ID);
    setState(167);
    match(filterParser::T__4);
    setState(168);
    match(filterParser::ID);
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == filterParser::T__10) {
      setState(169);
      match(filterParser::T__10);
      setState(170);
      match(filterParser::ID);
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(176);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorStatementContext ------------------------------------------------------------------

filterParser::ErrorStatementContext::ErrorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::ErrorStatementContext::STRING() {
  return getToken(filterParser::STRING, 0);
}


size_t filterParser::ErrorStatementContext::getRuleIndex() const {
  return filterParser::RuleErrorStatement;
}

void filterParser::ErrorStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterErrorStatement(this);
}

void filterParser::ErrorStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitErrorStatement(this);
}

filterParser::ErrorStatementContext* filterParser::errorStatement() {
  ErrorStatementContext *_localctx = _tracker.createInstance<ErrorStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, filterParser::RuleErrorStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(filterParser::T__11);
    setState(179);
    match(filterParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcMacroDeclarationContext ------------------------------------------------------------------

filterParser::ProcMacroDeclarationContext::ProcMacroDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::ProcMacroDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::ParamContext *> filterParser::ProcMacroDeclarationContext::param() {
  return getRuleContexts<filterParser::ParamContext>();
}

filterParser::ParamContext* filterParser::ProcMacroDeclarationContext::param(size_t i) {
  return getRuleContext<filterParser::ParamContext>(i);
}

std::vector<filterParser::StatementContext *> filterParser::ProcMacroDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::ProcMacroDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::ProcMacroDeclarationContext::getRuleIndex() const {
  return filterParser::RuleProcMacroDeclaration;
}

void filterParser::ProcMacroDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcMacroDeclaration(this);
}

void filterParser::ProcMacroDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcMacroDeclaration(this);
}

filterParser::ProcMacroDeclarationContext* filterParser::procMacroDeclaration() {
  ProcMacroDeclarationContext *_localctx = _tracker.createInstance<ProcMacroDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, filterParser::RuleProcMacroDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(filterParser::T__12);
    setState(182);
    match(filterParser::ID);
    setState(183);
    match(filterParser::T__13);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == filterParser::ID) {
      setState(184);
      param();
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == filterParser::T__10) {
        setState(185);
        match(filterParser::T__10);
        setState(186);
        param();
        setState(191);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(194);
    match(filterParser::T__14);
    setState(195);
    match(filterParser::T__4);
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(196);
      statement();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcMacroInvocationContext ------------------------------------------------------------------

filterParser::ProcMacroInvocationContext::ProcMacroInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::ProcMacroInvocationContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::ExpressionContext* filterParser::ProcMacroInvocationContext::expression() {
  return getRuleContext<filterParser::ExpressionContext>(0);
}


size_t filterParser::ProcMacroInvocationContext::getRuleIndex() const {
  return filterParser::RuleProcMacroInvocation;
}

void filterParser::ProcMacroInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcMacroInvocation(this);
}

void filterParser::ProcMacroInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcMacroInvocation(this);
}

filterParser::ProcMacroInvocationContext* filterParser::procMacroInvocation() {
  ProcMacroInvocationContext *_localctx = _tracker.createInstance<ProcMacroInvocationContext>(_ctx, getState());
  enterRule(_localctx, 20, filterParser::RuleProcMacroInvocation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(filterParser::ID);
    setState(205);
    match(filterParser::T__15);
    setState(206);
    match(filterParser::T__13);
    setState(207);
    expression(0);
    setState(208);
    match(filterParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MacroDeclarationContext ------------------------------------------------------------------

filterParser::MacroDeclarationContext::MacroDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::MacroDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::ParamContext *> filterParser::MacroDeclarationContext::param() {
  return getRuleContexts<filterParser::ParamContext>();
}

filterParser::ParamContext* filterParser::MacroDeclarationContext::param(size_t i) {
  return getRuleContext<filterParser::ParamContext>(i);
}

std::vector<filterParser::StatementContext *> filterParser::MacroDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::MacroDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::MacroDeclarationContext::getRuleIndex() const {
  return filterParser::RuleMacroDeclaration;
}

void filterParser::MacroDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacroDeclaration(this);
}

void filterParser::MacroDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacroDeclaration(this);
}

filterParser::MacroDeclarationContext* filterParser::macroDeclaration() {
  MacroDeclarationContext *_localctx = _tracker.createInstance<MacroDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, filterParser::RuleMacroDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(filterParser::T__16);
    setState(211);
    match(filterParser::ID);
    setState(212);
    match(filterParser::T__13);
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == filterParser::ID) {
      setState(213);
      param();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == filterParser::T__10) {
        setState(214);
        match(filterParser::T__10);
        setState(215);
        param();
        setState(220);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(223);
    match(filterParser::T__14);
    setState(224);
    match(filterParser::T__4);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(225);
      statement();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MixinDeclarationContext ------------------------------------------------------------------

filterParser::MixinDeclarationContext::MixinDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::MixinDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::VarDeclarationContext *> filterParser::MixinDeclarationContext::varDeclaration() {
  return getRuleContexts<filterParser::VarDeclarationContext>();
}

filterParser::VarDeclarationContext* filterParser::MixinDeclarationContext::varDeclaration(size_t i) {
  return getRuleContext<filterParser::VarDeclarationContext>(i);
}

std::vector<filterParser::FunctionDeclarationContext *> filterParser::MixinDeclarationContext::functionDeclaration() {
  return getRuleContexts<filterParser::FunctionDeclarationContext>();
}

filterParser::FunctionDeclarationContext* filterParser::MixinDeclarationContext::functionDeclaration(size_t i) {
  return getRuleContext<filterParser::FunctionDeclarationContext>(i);
}


size_t filterParser::MixinDeclarationContext::getRuleIndex() const {
  return filterParser::RuleMixinDeclaration;
}

void filterParser::MixinDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMixinDeclaration(this);
}

void filterParser::MixinDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMixinDeclaration(this);
}

filterParser::MixinDeclarationContext* filterParser::mixinDeclaration() {
  MixinDeclarationContext *_localctx = _tracker.createInstance<MixinDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, filterParser::RuleMixinDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(filterParser::T__17);
    setState(234);
    match(filterParser::ID);
    setState(235);
    match(filterParser::T__4);
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 19791212969984) != 0)) {
      setState(238);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(236);
        varDeclaration();
        break;
      }

      case 2: {
        setState(237);
        functionDeclaration();
        break;
      }

      default:
        break;
      }
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(243);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

filterParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::VarDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::TypeContext* filterParser::VarDeclarationContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}

filterParser::ExpressionContext* filterParser::VarDeclarationContext::expression() {
  return getRuleContext<filterParser::ExpressionContext>(0);
}


size_t filterParser::VarDeclarationContext::getRuleIndex() const {
  return filterParser::RuleVarDeclaration;
}

void filterParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void filterParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}

filterParser::VarDeclarationContext* filterParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, filterParser::RuleVarDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(246);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::T__18

      || _la == filterParser::T__19) {
        setState(245);
        _la = _input->LA(1);
        if (!(_la == filterParser::T__18

        || _la == filterParser::T__19)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(248);
      match(filterParser::T__20);
      setState(249);
      match(filterParser::ID);
      setState(250);
      match(filterParser::T__21);
      setState(251);
      type();
      setState(252);
      match(filterParser::T__1);
      setState(253);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(256);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::T__18

      || _la == filterParser::T__19) {
        setState(255);
        _la = _input->LA(1);
        if (!(_la == filterParser::T__18

        || _la == filterParser::T__19)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(258);
      match(filterParser::T__20);
      setState(259);
      match(filterParser::ID);
      setState(260);
      match(filterParser::T__1);
      setState(261);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorOverloadDeclarationContext ------------------------------------------------------------------

filterParser::OperatorOverloadDeclarationContext::OperatorOverloadDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::OperatorOverloadDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::ParamContext *> filterParser::OperatorOverloadDeclarationContext::param() {
  return getRuleContexts<filterParser::ParamContext>();
}

filterParser::ParamContext* filterParser::OperatorOverloadDeclarationContext::param(size_t i) {
  return getRuleContext<filterParser::ParamContext>(i);
}

std::vector<filterParser::StatementContext *> filterParser::OperatorOverloadDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::OperatorOverloadDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::OperatorOverloadDeclarationContext::getRuleIndex() const {
  return filterParser::RuleOperatorOverloadDeclaration;
}

void filterParser::OperatorOverloadDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorOverloadDeclaration(this);
}

void filterParser::OperatorOverloadDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorOverloadDeclaration(this);
}

filterParser::OperatorOverloadDeclarationContext* filterParser::operatorOverloadDeclaration() {
  OperatorOverloadDeclarationContext *_localctx = _tracker.createInstance<OperatorOverloadDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, filterParser::RuleOperatorOverloadDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(filterParser::T__22);
    setState(265);
    match(filterParser::ID);
    setState(266);
    match(filterParser::T__13);
    setState(267);
    param();
    setState(268);
    match(filterParser::T__10);
    setState(269);
    param();
    setState(270);
    match(filterParser::T__14);
    setState(271);
    match(filterParser::T__4);
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(272);
      statement();
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(278);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

filterParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::ExpressionContext* filterParser::SwitchStatementContext::expression() {
  return getRuleContext<filterParser::ExpressionContext>(0);
}

std::vector<filterParser::CaseStatementContext *> filterParser::SwitchStatementContext::caseStatement() {
  return getRuleContexts<filterParser::CaseStatementContext>();
}

filterParser::CaseStatementContext* filterParser::SwitchStatementContext::caseStatement(size_t i) {
  return getRuleContext<filterParser::CaseStatementContext>(i);
}


size_t filterParser::SwitchStatementContext::getRuleIndex() const {
  return filterParser::RuleSwitchStatement;
}

void filterParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void filterParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

filterParser::SwitchStatementContext* filterParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, filterParser::RuleSwitchStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(filterParser::T__23);
    setState(281);
    match(filterParser::T__13);
    setState(282);
    expression(0);
    setState(283);
    match(filterParser::T__14);
    setState(284);
    match(filterParser::T__4);
    setState(288);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == filterParser::T__24) {
      setState(285);
      caseStatement();
      setState(290);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(291);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

filterParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::ExpressionContext* filterParser::CaseStatementContext::expression() {
  return getRuleContext<filterParser::ExpressionContext>(0);
}

std::vector<filterParser::StatementContext *> filterParser::CaseStatementContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::CaseStatementContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::CaseStatementContext::getRuleIndex() const {
  return filterParser::RuleCaseStatement;
}

void filterParser::CaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseStatement(this);
}

void filterParser::CaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseStatement(this);
}

filterParser::CaseStatementContext* filterParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, filterParser::RuleCaseStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(filterParser::T__24);
    setState(294);
    expression(0);
    setState(295);
    match(filterParser::T__21);
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(296);
      statement();
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FoldExpressionContext ------------------------------------------------------------------

filterParser::FoldExpressionContext::FoldExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<filterParser::TypeContext *> filterParser::FoldExpressionContext::type() {
  return getRuleContexts<filterParser::TypeContext>();
}

filterParser::TypeContext* filterParser::FoldExpressionContext::type(size_t i) {
  return getRuleContext<filterParser::TypeContext>(i);
}

filterParser::FoldOperatorContext* filterParser::FoldExpressionContext::foldOperator() {
  return getRuleContext<filterParser::FoldOperatorContext>(0);
}


size_t filterParser::FoldExpressionContext::getRuleIndex() const {
  return filterParser::RuleFoldExpression;
}

void filterParser::FoldExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFoldExpression(this);
}

void filterParser::FoldExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFoldExpression(this);
}

filterParser::FoldExpressionContext* filterParser::foldExpression() {
  FoldExpressionContext *_localctx = _tracker.createInstance<FoldExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, filterParser::RuleFoldExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(302);
      match(filterParser::T__13);
      setState(303);
      type();
      setState(304);
      match(filterParser::T__25);
      setState(305);
      foldOperator();
      setState(306);
      match(filterParser::T__14);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(308);
      match(filterParser::T__13);
      setState(309);
      type();
      setState(310);
      foldOperator();
      setState(311);
      match(filterParser::T__25);
      setState(312);
      match(filterParser::T__14);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(314);
      match(filterParser::T__13);
      setState(315);
      match(filterParser::T__25);
      setState(316);
      foldOperator();
      setState(317);
      type();
      setState(318);
      match(filterParser::T__14);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(320);
      match(filterParser::T__13);
      setState(321);
      type();
      setState(322);
      match(filterParser::T__25);
      setState(323);
      foldOperator();
      setState(324);
      type();
      setState(325);
      match(filterParser::T__14);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FoldOperatorContext ------------------------------------------------------------------

filterParser::FoldOperatorContext::FoldOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t filterParser::FoldOperatorContext::getRuleIndex() const {
  return filterParser::RuleFoldOperator;
}

void filterParser::FoldOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFoldOperator(this);
}

void filterParser::FoldOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFoldOperator(this);
}

filterParser::FoldOperatorContext* filterParser::foldOperator() {
  FoldOperatorContext *_localctx = _tracker.createInstance<FoldOperatorContext>(_ctx, getState());
  enterRule(_localctx, 36, filterParser::RuleFoldOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 549621596160) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeclassDeclarationContext ------------------------------------------------------------------

filterParser::TypeclassDeclarationContext::TypeclassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::TypeclassDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::FunctionDeclarationContext *> filterParser::TypeclassDeclarationContext::functionDeclaration() {
  return getRuleContexts<filterParser::FunctionDeclarationContext>();
}

filterParser::FunctionDeclarationContext* filterParser::TypeclassDeclarationContext::functionDeclaration(size_t i) {
  return getRuleContext<filterParser::FunctionDeclarationContext>(i);
}

std::vector<filterParser::FmapDeclarationContext *> filterParser::TypeclassDeclarationContext::fmapDeclaration() {
  return getRuleContexts<filterParser::FmapDeclarationContext>();
}

filterParser::FmapDeclarationContext* filterParser::TypeclassDeclarationContext::fmapDeclaration(size_t i) {
  return getRuleContext<filterParser::FmapDeclarationContext>(i);
}


size_t filterParser::TypeclassDeclarationContext::getRuleIndex() const {
  return filterParser::RuleTypeclassDeclaration;
}

void filterParser::TypeclassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeclassDeclaration(this);
}

void filterParser::TypeclassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeclassDeclaration(this);
}

filterParser::TypeclassDeclarationContext* filterParser::typeclassDeclaration() {
  TypeclassDeclarationContext *_localctx = _tracker.createInstance<TypeclassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 38, filterParser::RuleTypeclassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(filterParser::T__38);
    setState(332);
    match(filterParser::ID);
    setState(333);
    match(filterParser::T__4);
    setState(338);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 20890722500608) != 0)) {
      setState(336);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case filterParser::T__18:
        case filterParser::T__19:
        case filterParser::T__40:
        case filterParser::T__43: {
          setState(334);
          functionDeclaration();
          break;
        }

        case filterParser::T__39: {
          setState(335);
          fmapDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(340);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(341);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FmapDeclarationContext ------------------------------------------------------------------

filterParser::FmapDeclarationContext::FmapDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<filterParser::ParamContext *> filterParser::FmapDeclarationContext::param() {
  return getRuleContexts<filterParser::ParamContext>();
}

filterParser::ParamContext* filterParser::FmapDeclarationContext::param(size_t i) {
  return getRuleContext<filterParser::ParamContext>(i);
}

filterParser::TypeContext* filterParser::FmapDeclarationContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}

std::vector<filterParser::StatementContext *> filterParser::FmapDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::FmapDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::FmapDeclarationContext::getRuleIndex() const {
  return filterParser::RuleFmapDeclaration;
}

void filterParser::FmapDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFmapDeclaration(this);
}

void filterParser::FmapDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFmapDeclaration(this);
}

filterParser::FmapDeclarationContext* filterParser::fmapDeclaration() {
  FmapDeclarationContext *_localctx = _tracker.createInstance<FmapDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, filterParser::RuleFmapDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(filterParser::T__39);
    setState(344);
    match(filterParser::T__13);
    setState(345);
    param();
    setState(346);
    match(filterParser::T__10);
    setState(347);
    param();
    setState(348);
    match(filterParser::T__14);
    setState(349);
    match(filterParser::T__21);
    setState(350);
    type();
    setState(351);
    match(filterParser::T__4);
    setState(355);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(352);
      statement();
      setState(357);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(358);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

filterParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::FunctionDeclarationContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::TypeContext* filterParser::FunctionDeclarationContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}

std::vector<filterParser::ParamContext *> filterParser::FunctionDeclarationContext::param() {
  return getRuleContexts<filterParser::ParamContext>();
}

filterParser::ParamContext* filterParser::FunctionDeclarationContext::param(size_t i) {
  return getRuleContext<filterParser::ParamContext>(i);
}

std::vector<filterParser::StatementContext *> filterParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}

std::vector<filterParser::TemplateParamContext *> filterParser::FunctionDeclarationContext::templateParam() {
  return getRuleContexts<filterParser::TemplateParamContext>();
}

filterParser::TemplateParamContext* filterParser::FunctionDeclarationContext::templateParam(size_t i) {
  return getRuleContext<filterParser::TemplateParamContext>(i);
}

filterParser::TypeclassDeclarationContext* filterParser::FunctionDeclarationContext::typeclassDeclaration() {
  return getRuleContext<filterParser::TypeclassDeclarationContext>(0);
}


size_t filterParser::FunctionDeclarationContext::getRuleIndex() const {
  return filterParser::RuleFunctionDeclaration;
}

void filterParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void filterParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

filterParser::FunctionDeclarationContext* filterParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, filterParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(361);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::T__18

      || _la == filterParser::T__19) {
        setState(360);
        _la = _input->LA(1);
        if (!(_la == filterParser::T__18

        || _la == filterParser::T__19)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(363);
      match(filterParser::T__40);
      setState(364);
      match(filterParser::ID);
      setState(365);
      match(filterParser::T__13);
      setState(374);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::ID) {
        setState(366);
        param();
        setState(371);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == filterParser::T__10) {
          setState(367);
          match(filterParser::T__10);
          setState(368);
          param();
          setState(373);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(376);
      match(filterParser::T__14);
      setState(377);
      match(filterParser::T__21);
      setState(378);
      type();
      setState(379);
      match(filterParser::T__4);
      setState(383);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(380);
        statement();
        setState(385);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(386);
      match(filterParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(389);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::T__18

      || _la == filterParser::T__19) {
        setState(388);
        _la = _input->LA(1);
        if (!(_la == filterParser::T__18

        || _la == filterParser::T__19)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(391);
      match(filterParser::T__40);
      setState(392);
      match(filterParser::ID);
      setState(393);
      match(filterParser::T__41);
      setState(394);
      templateParam();
      setState(399);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == filterParser::T__25) {
        setState(395);
        match(filterParser::T__25);
        setState(396);
        templateParam();
        setState(401);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(402);
      match(filterParser::T__42);
      setState(403);
      match(filterParser::T__13);
      setState(412);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::ID) {
        setState(404);
        param();
        setState(409);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == filterParser::T__10) {
          setState(405);
          match(filterParser::T__10);
          setState(406);
          param();
          setState(411);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(414);
      match(filterParser::T__14);
      setState(415);
      match(filterParser::T__21);
      setState(416);
      type();
      setState(417);
      match(filterParser::T__4);
      setState(421);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(418);
        statement();
        setState(423);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(424);
      match(filterParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(427);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::T__18

      || _la == filterParser::T__19) {
        setState(426);
        _la = _input->LA(1);
        if (!(_la == filterParser::T__18

        || _la == filterParser::T__19)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(429);
      match(filterParser::T__40);
      setState(430);
      match(filterParser::ID);
      setState(431);
      match(filterParser::T__21);
      setState(432);
      typeclassDeclaration();
      setState(433);
      match(filterParser::T__4);
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(434);
        statement();
        setState(439);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(440);
      match(filterParser::T__5);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(443);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::T__18

      || _la == filterParser::T__19) {
        setState(442);
        _la = _input->LA(1);
        if (!(_la == filterParser::T__18

        || _la == filterParser::T__19)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(445);
      match(filterParser::T__43);
      setState(446);
      match(filterParser::T__40);
      setState(447);
      match(filterParser::ID);
      setState(448);
      match(filterParser::T__13);
      setState(457);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == filterParser::ID) {
        setState(449);
        param();
        setState(454);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == filterParser::T__10) {
          setState(450);
          match(filterParser::T__10);
          setState(451);
          param();
          setState(456);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(459);
      match(filterParser::T__14);
      setState(460);
      match(filterParser::T__21);
      setState(461);
      type();
      setState(462);
      match(filterParser::T__4);
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(463);
        statement();
        setState(468);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(469);
      match(filterParser::T__5);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

filterParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> filterParser::ClassDeclarationContext::ID() {
  return getTokens(filterParser::ID);
}

tree::TerminalNode* filterParser::ClassDeclarationContext::ID(size_t i) {
  return getToken(filterParser::ID, i);
}

std::vector<filterParser::AccessSpecifierContext *> filterParser::ClassDeclarationContext::accessSpecifier() {
  return getRuleContexts<filterParser::AccessSpecifierContext>();
}

filterParser::AccessSpecifierContext* filterParser::ClassDeclarationContext::accessSpecifier(size_t i) {
  return getRuleContext<filterParser::AccessSpecifierContext>(i);
}

std::vector<filterParser::StatementContext *> filterParser::ClassDeclarationContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::ClassDeclarationContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}

std::vector<filterParser::TemplateParamContext *> filterParser::ClassDeclarationContext::templateParam() {
  return getRuleContexts<filterParser::TemplateParamContext>();
}

filterParser::TemplateParamContext* filterParser::ClassDeclarationContext::templateParam(size_t i) {
  return getRuleContext<filterParser::TemplateParamContext>(i);
}


size_t filterParser::ClassDeclarationContext::getRuleIndex() const {
  return filterParser::RuleClassDeclaration;
}

void filterParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void filterParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

filterParser::ClassDeclarationContext* filterParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 44, filterParser::RuleClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(522);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(473);
      match(filterParser::T__44);
      setState(474);
      match(filterParser::ID);
      setState(475);
      match(filterParser::T__4);
      setState(481);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490819124909464) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(476);
        accessSpecifier();
        setState(477);
        statement();
        setState(483);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(484);
      match(filterParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(485);
      match(filterParser::T__44);
      setState(486);
      match(filterParser::ID);
      setState(487);
      match(filterParser::T__41);
      setState(488);
      templateParam();
      setState(493);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == filterParser::T__25) {
        setState(489);
        match(filterParser::T__25);
        setState(490);
        templateParam();
        setState(495);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(496);
      match(filterParser::T__42);
      setState(497);
      match(filterParser::T__4);
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490819124909464) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(498);
        accessSpecifier();
        setState(499);
        statement();
        setState(505);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(506);
      match(filterParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(508);
      match(filterParser::T__44);
      setState(509);
      match(filterParser::ID);
      setState(510);
      match(filterParser::T__21);
      setState(511);
      match(filterParser::ID);
      setState(512);
      match(filterParser::T__4);
      setState(518);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490819124909464) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(513);
        accessSpecifier();
        setState(514);
        statement();
        setState(520);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(521);
      match(filterParser::T__5);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSpecifierContext ------------------------------------------------------------------

filterParser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<filterParser::VarDeclarationContext *> filterParser::AccessSpecifierContext::varDeclaration() {
  return getRuleContexts<filterParser::VarDeclarationContext>();
}

filterParser::VarDeclarationContext* filterParser::AccessSpecifierContext::varDeclaration(size_t i) {
  return getRuleContext<filterParser::VarDeclarationContext>(i);
}

std::vector<filterParser::FunctionDeclarationContext *> filterParser::AccessSpecifierContext::functionDeclaration() {
  return getRuleContexts<filterParser::FunctionDeclarationContext>();
}

filterParser::FunctionDeclarationContext* filterParser::AccessSpecifierContext::functionDeclaration(size_t i) {
  return getRuleContext<filterParser::FunctionDeclarationContext>(i);
}

std::vector<filterParser::MixinDeclarationContext *> filterParser::AccessSpecifierContext::mixinDeclaration() {
  return getRuleContexts<filterParser::MixinDeclarationContext>();
}

filterParser::MixinDeclarationContext* filterParser::AccessSpecifierContext::mixinDeclaration(size_t i) {
  return getRuleContext<filterParser::MixinDeclarationContext>(i);
}

std::vector<filterParser::TypeclassDeclarationContext *> filterParser::AccessSpecifierContext::typeclassDeclaration() {
  return getRuleContexts<filterParser::TypeclassDeclarationContext>();
}

filterParser::TypeclassDeclarationContext* filterParser::AccessSpecifierContext::typeclassDeclaration(size_t i) {
  return getRuleContext<filterParser::TypeclassDeclarationContext>(i);
}


size_t filterParser::AccessSpecifierContext::getRuleIndex() const {
  return filterParser::RuleAccessSpecifier;
}

void filterParser::AccessSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessSpecifier(this);
}

void filterParser::AccessSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessSpecifier(this);
}

filterParser::AccessSpecifierContext* filterParser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 46, filterParser::RuleAccessSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(528);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(524);
      match(filterParser::T__18);
      setState(525);
      match(filterParser::T__21);
      break;
    }

    case 2: {
      setState(526);
      match(filterParser::T__19);
      setState(527);
      match(filterParser::T__21);
      break;
    }

    default:
      break;
    }
    setState(536);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(534);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
        case 1: {
          setState(530);
          varDeclaration();
          break;
        }

        case 2: {
          setState(531);
          functionDeclaration();
          break;
        }

        case 3: {
          setState(532);
          mixinDeclaration();
          break;
        }

        case 4: {
          setState(533);
          typeclassDeclaration();
          break;
        }

        default:
          break;
        } 
      }
      setState(538);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateParamContext ------------------------------------------------------------------

filterParser::TemplateParamContext::TemplateParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::TypeContext* filterParser::TemplateParamContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}

tree::TerminalNode* filterParser::TemplateParamContext::ID() {
  return getToken(filterParser::ID, 0);
}

std::vector<filterParser::TemplateParamContext *> filterParser::TemplateParamContext::templateParam() {
  return getRuleContexts<filterParser::TemplateParamContext>();
}

filterParser::TemplateParamContext* filterParser::TemplateParamContext::templateParam(size_t i) {
  return getRuleContext<filterParser::TemplateParamContext>(i);
}


size_t filterParser::TemplateParamContext::getRuleIndex() const {
  return filterParser::RuleTemplateParam;
}

void filterParser::TemplateParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateParam(this);
}

void filterParser::TemplateParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateParam(this);
}

filterParser::TemplateParamContext* filterParser::templateParam() {
  TemplateParamContext *_localctx = _tracker.createInstance<TemplateParamContext>(_ctx, getState());
  enterRule(_localctx, 48, filterParser::RuleTemplateParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(552);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(539);
      type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(540);
      match(filterParser::ID);
      setState(541);
      match(filterParser::T__41);
      setState(542);
      templateParam();
      setState(547);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == filterParser::T__25) {
        setState(543);
        match(filterParser::T__25);
        setState(544);
        templateParam();
        setState(549);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(550);
      match(filterParser::T__42);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

filterParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::ParamContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::TypeContext* filterParser::ParamContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}


size_t filterParser::ParamContext::getRuleIndex() const {
  return filterParser::RuleParam;
}

void filterParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void filterParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

filterParser::ParamContext* filterParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 50, filterParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(filterParser::ID);
    setState(555);
    match(filterParser::T__21);
    setState(556);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

filterParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::TemplateParamContext* filterParser::TypeContext::templateParam() {
  return getRuleContext<filterParser::TemplateParamContext>(0);
}

tree::TerminalNode* filterParser::TypeContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::EnumDeclarationContext* filterParser::TypeContext::enumDeclaration() {
  return getRuleContext<filterParser::EnumDeclarationContext>(0);
}


size_t filterParser::TypeContext::getRuleIndex() const {
  return filterParser::RuleType;
}

void filterParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void filterParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

filterParser::TypeContext* filterParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 52, filterParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case filterParser::T__45: {
        enterOuterAlt(_localctx, 1);
        setState(558);
        match(filterParser::T__45);
        break;
      }

      case filterParser::T__46: {
        enterOuterAlt(_localctx, 2);
        setState(559);
        match(filterParser::T__46);
        break;
      }

      case filterParser::T__47: {
        enterOuterAlt(_localctx, 3);
        setState(560);
        match(filterParser::T__47);
        break;
      }

      case filterParser::T__48: {
        enterOuterAlt(_localctx, 4);
        setState(561);
        match(filterParser::T__48);
        break;
      }

      case filterParser::T__49: {
        enterOuterAlt(_localctx, 5);
        setState(562);
        match(filterParser::T__49);
        break;
      }

      case filterParser::T__50: {
        enterOuterAlt(_localctx, 6);
        setState(563);
        match(filterParser::T__50);
        break;
      }

      case filterParser::T__51: {
        enterOuterAlt(_localctx, 7);
        setState(564);
        match(filterParser::T__51);
        break;
      }

      case filterParser::T__52: {
        enterOuterAlt(_localctx, 8);
        setState(565);
        match(filterParser::T__52);
        break;
      }

      case filterParser::T__53: {
        enterOuterAlt(_localctx, 9);
        setState(566);
        match(filterParser::T__53);
        setState(567);
        match(filterParser::T__41);
        setState(568);
        templateParam();
        setState(569);
        match(filterParser::T__42);
        break;
      }

      case filterParser::T__40: {
        enterOuterAlt(_localctx, 10);
        setState(571);
        match(filterParser::T__40);
        setState(572);
        match(filterParser::T__41);
        setState(573);
        templateParam();
        setState(574);
        match(filterParser::T__42);
        break;
      }

      case filterParser::T__54: {
        enterOuterAlt(_localctx, 11);
        setState(576);
        match(filterParser::T__54);
        setState(577);
        match(filterParser::T__41);
        setState(578);
        templateParam();
        setState(579);
        match(filterParser::T__42);
        break;
      }

      case filterParser::T__55: {
        enterOuterAlt(_localctx, 12);
        setState(581);
        match(filterParser::T__55);
        break;
      }

      case filterParser::T__56: {
        enterOuterAlt(_localctx, 13);
        setState(582);
        match(filterParser::T__56);
        break;
      }

      case filterParser::ID: {
        enterOuterAlt(_localctx, 14);
        setState(583);
        match(filterParser::ID);
        break;
      }

      case filterParser::T__9: {
        enterOuterAlt(_localctx, 15);
        setState(584);
        enumDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

filterParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::ValueContext* filterParser::PrimaryContext::value() {
  return getRuleContext<filterParser::ValueContext>(0);
}

tree::TerminalNode* filterParser::PrimaryContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::FunctionContext* filterParser::PrimaryContext::function() {
  return getRuleContext<filterParser::FunctionContext>(0);
}

filterParser::AtomContext* filterParser::PrimaryContext::atom() {
  return getRuleContext<filterParser::AtomContext>(0);
}


size_t filterParser::PrimaryContext::getRuleIndex() const {
  return filterParser::RulePrimary;
}

void filterParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void filterParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

filterParser::PrimaryContext* filterParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 54, filterParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(591);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(587);
      value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(588);
      match(filterParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(589);
      function();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(590);
      atom();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

filterParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::PrimaryContext* filterParser::ExpressionContext::primary() {
  return getRuleContext<filterParser::PrimaryContext>(0);
}

tree::TerminalNode* filterParser::ExpressionContext::NOT() {
  return getToken(filterParser::NOT, 0);
}

std::vector<filterParser::ExpressionContext *> filterParser::ExpressionContext::expression() {
  return getRuleContexts<filterParser::ExpressionContext>();
}

filterParser::ExpressionContext* filterParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<filterParser::ExpressionContext>(i);
}

filterParser::VarDeclarationContext* filterParser::ExpressionContext::varDeclaration() {
  return getRuleContext<filterParser::VarDeclarationContext>(0);
}

std::vector<filterParser::StatementContext *> filterParser::ExpressionContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::ExpressionContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::ExpressionContext::getRuleIndex() const {
  return filterParser::RuleExpression;
}

void filterParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void filterParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


filterParser::ExpressionContext* filterParser::expression() {
   return expression(0);
}

filterParser::ExpressionContext* filterParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  filterParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  filterParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, filterParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(640);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(594);
      primary();
      break;
    }

    case 2: {
      setState(595);
      match(filterParser::NOT);
      setState(596);
      expression(6);
      break;
    }

    case 3: {
      setState(597);
      match(filterParser::T__64);
      setState(598);
      match(filterParser::T__13);
      setState(599);
      expression(0);
      setState(600);
      match(filterParser::T__14);
      setState(601);
      match(filterParser::T__65);
      setState(602);
      expression(0);
      setState(603);
      match(filterParser::T__66);
      setState(604);
      expression(5);
      break;
    }

    case 4: {
      setState(606);
      match(filterParser::T__67);
      setState(607);
      match(filterParser::T__13);
      setState(608);
      varDeclaration();
      setState(609);
      match(filterParser::T__0);
      setState(610);
      expression(0);
      setState(611);
      match(filterParser::T__0);
      setState(612);
      expression(0);
      setState(613);
      match(filterParser::T__14);
      setState(614);
      match(filterParser::T__4);
      setState(618);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(615);
        statement();
        setState(620);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(621);
      match(filterParser::T__5);
      break;
    }

    case 5: {
      setState(623);
      match(filterParser::T__67);
      setState(624);
      match(filterParser::T__13);
      setState(625);
      expression(0);
      setState(626);
      match(filterParser::T__14);
      setState(627);
      match(filterParser::T__4);
      setState(631);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 15980553) != 0)) {
        setState(628);
        statement();
        setState(633);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(634);
      match(filterParser::T__5);
      break;
    }

    case 6: {
      setState(636);
      match(filterParser::T__13);
      setState(637);
      expression(0);
      setState(638);
      match(filterParser::T__14);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(689);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(687);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(642);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(643);
          match(filterParser::T__26);
          setState(644);
          expression(21);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(645);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(646);
          match(filterParser::T__27);
          setState(647);
          expression(20);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(648);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(649);
          match(filterParser::T__28);
          setState(650);
          expression(19);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(651);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(652);
          match(filterParser::T__29);
          setState(653);
          expression(18);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(654);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(655);
          match(filterParser::T__30);
          setState(656);
          expression(17);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(657);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(658);
          match(filterParser::T__57);
          setState(659);
          expression(16);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(660);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(661);
          match(filterParser::T__58);
          setState(662);
          expression(15);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(663);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(664);
          match(filterParser::T__41);
          setState(665);
          expression(14);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(666);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(667);
          match(filterParser::T__42);
          setState(668);
          expression(13);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(669);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(670);
          match(filterParser::T__59);
          setState(671);
          expression(12);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(672);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(673);
          match(filterParser::T__60);
          setState(674);
          expression(11);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(675);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(676);
          match(filterParser::T__61);
          setState(677);
          expression(10);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(678);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(679);
          match(filterParser::T__62);
          setState(680);
          expression(9);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(681);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(682);
          match(filterParser::T__63);
          setState(683);
          expression(8);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(684);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(685);
          match(filterParser::T__68);
          setState(686);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(691);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

filterParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> filterParser::AtomContext::ID() {
  return getTokens(filterParser::ID);
}

tree::TerminalNode* filterParser::AtomContext::ID(size_t i) {
  return getToken(filterParser::ID, i);
}

filterParser::ValueListContext* filterParser::AtomContext::valueList() {
  return getRuleContext<filterParser::ValueListContext>(0);
}

std::vector<filterParser::ValueContext *> filterParser::AtomContext::value() {
  return getRuleContexts<filterParser::ValueContext>();
}

filterParser::ValueContext* filterParser::AtomContext::value(size_t i) {
  return getRuleContext<filterParser::ValueContext>(i);
}

tree::TerminalNode* filterParser::AtomContext::STRING() {
  return getToken(filterParser::STRING, 0);
}

std::vector<tree::TerminalNode *> filterParser::AtomContext::NUMBER() {
  return getTokens(filterParser::NUMBER);
}

tree::TerminalNode* filterParser::AtomContext::NUMBER(size_t i) {
  return getToken(filterParser::NUMBER, i);
}


size_t filterParser::AtomContext::getRuleIndex() const {
  return filterParser::RuleAtom;
}

void filterParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void filterParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

filterParser::AtomContext* filterParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 58, filterParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(745);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(692);
      match(filterParser::ID);
      setState(693);
      match(filterParser::T__69);
      setState(694);
      match(filterParser::T__13);
      setState(695);
      valueList();
      setState(696);
      match(filterParser::T__14);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(698);
      match(filterParser::ID);
      setState(699);
      match(filterParser::T__1);
      setState(700);
      value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(701);
      match(filterParser::ID);
      setState(702);
      match(filterParser::T__58);
      setState(703);
      value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(704);
      match(filterParser::ID);
      setState(705);
      match(filterParser::T__42);
      setState(706);
      value();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(707);
      match(filterParser::ID);
      setState(708);
      match(filterParser::T__41);
      setState(709);
      value();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(710);
      match(filterParser::ID);
      setState(711);
      match(filterParser::T__60);
      setState(712);
      value();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(713);
      match(filterParser::ID);
      setState(714);
      match(filterParser::T__59);
      setState(715);
      value();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(716);
      match(filterParser::ID);
      setState(717);
      match(filterParser::T__70);
      setState(718);
      match(filterParser::STRING);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(719);
      match(filterParser::ID);
      setState(720);
      match(filterParser::T__71);
      setState(721);
      value();
      setState(722);
      match(filterParser::T__61);
      setState(723);
      value();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(725);
      match(filterParser::ID);
      setState(726);
      match(filterParser::T__8);
      setState(727);
      match(filterParser::ID);
      setState(728);
      match(filterParser::T__13);
      setState(729);
      valueList();
      setState(730);
      match(filterParser::T__14);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(732);
      match(filterParser::ID);
      setState(733);
      match(filterParser::T__72);
      setState(734);
      match(filterParser::STRING);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(735);
      match(filterParser::ID);
      setState(736);
      match(filterParser::T__73);
      setState(737);
      match(filterParser::NUMBER);
      setState(738);
      match(filterParser::T__74);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(739);
      match(filterParser::ID);
      setState(740);
      match(filterParser::T__73);
      setState(741);
      match(filterParser::NUMBER);
      setState(742);
      match(filterParser::T__21);
      setState(743);
      match(filterParser::NUMBER);
      setState(744);
      match(filterParser::T__74);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

filterParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* filterParser::ValueContext::STRING() {
  return getToken(filterParser::STRING, 0);
}

tree::TerminalNode* filterParser::ValueContext::NUMBER() {
  return getToken(filterParser::NUMBER, 0);
}

tree::TerminalNode* filterParser::ValueContext::ID() {
  return getToken(filterParser::ID, 0);
}

filterParser::TypeContext* filterParser::ValueContext::type() {
  return getRuleContext<filterParser::TypeContext>(0);
}

filterParser::ValueListContext* filterParser::ValueContext::valueList() {
  return getRuleContext<filterParser::ValueListContext>(0);
}


size_t filterParser::ValueContext::getRuleIndex() const {
  return filterParser::RuleValue;
}

void filterParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void filterParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

filterParser::ValueContext* filterParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 60, filterParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(770);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(747);
      match(filterParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(748);
      match(filterParser::NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(749);
      match(filterParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(750);
      match(filterParser::T__75);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(751);
      match(filterParser::T__76);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(752);
      match(filterParser::T__49);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(753);
      match(filterParser::T__50);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(754);
      match(filterParser::T__55);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(755);
      match(filterParser::ID);
      setState(756);
      match(filterParser::T__41);
      setState(757);
      type();
      setState(758);
      match(filterParser::T__42);
      setState(759);
      match(filterParser::T__13);
      setState(760);
      valueList();
      setState(761);
      match(filterParser::T__14);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(763);
      match(filterParser::ID);
      setState(764);
      match(filterParser::T__41);
      setState(765);
      type();
      setState(766);
      match(filterParser::T__42);
      setState(767);
      match(filterParser::T__13);
      setState(768);
      match(filterParser::T__14);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueListContext ------------------------------------------------------------------

filterParser::ValueListContext::ValueListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<filterParser::ValueContext *> filterParser::ValueListContext::value() {
  return getRuleContexts<filterParser::ValueContext>();
}

filterParser::ValueContext* filterParser::ValueListContext::value(size_t i) {
  return getRuleContext<filterParser::ValueContext>(i);
}


size_t filterParser::ValueListContext::getRuleIndex() const {
  return filterParser::RuleValueList;
}

void filterParser::ValueListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueList(this);
}

void filterParser::ValueListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueList(this);
}

filterParser::ValueListContext* filterParser::valueList() {
  ValueListContext *_localctx = _tracker.createInstance<ValueListContext>(_ctx, getState());
  enterRule(_localctx, 62, filterParser::RuleValueList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(772);
    value();
    setState(777);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(773);
        match(filterParser::T__10);
        setState(774);
        value(); 
      }
      setState(779);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

filterParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> filterParser::FunctionContext::ID() {
  return getTokens(filterParser::ID);
}

tree::TerminalNode* filterParser::FunctionContext::ID(size_t i) {
  return getToken(filterParser::ID, i);
}

filterParser::ValueListContext* filterParser::FunctionContext::valueList() {
  return getRuleContext<filterParser::ValueListContext>(0);
}


size_t filterParser::FunctionContext::getRuleIndex() const {
  return filterParser::RuleFunction;
}

void filterParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void filterParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

filterParser::FunctionContext* filterParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 64, filterParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(815);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(780);
      match(filterParser::ID);
      setState(781);
      match(filterParser::T__13);
      setState(782);
      match(filterParser::T__14);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(783);
      match(filterParser::ID);
      setState(784);
      match(filterParser::T__13);
      setState(785);
      valueList();
      setState(786);
      match(filterParser::T__14);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(788);
      match(filterParser::ID);
      setState(789);
      match(filterParser::T__13);
      setState(790);
      match(filterParser::T__28);
      setState(791);
      match(filterParser::T__14);
      setState(792);
      match(filterParser::T__77);
      setState(793);
      match(filterParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(794);
      match(filterParser::T__78);
      setState(795);
      match(filterParser::T__13);
      setState(796);
      match(filterParser::T__28);
      setState(797);
      match(filterParser::T__14);
      setState(798);
      match(filterParser::T__77);
      setState(799);
      match(filterParser::ID);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(800);
      match(filterParser::T__79);
      setState(801);
      match(filterParser::T__13);
      setState(802);
      match(filterParser::T__28);
      setState(803);
      match(filterParser::T__14);
      setState(804);
      match(filterParser::T__77);
      setState(805);
      match(filterParser::ID);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(806);
      match(filterParser::T__80);
      setState(807);
      match(filterParser::T__13);
      setState(808);
      match(filterParser::T__28);
      setState(809);
      match(filterParser::T__14);
      setState(810);
      match(filterParser::T__77);
      setState(811);
      match(filterParser::ID);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(812);
      match(filterParser::T__81);
      setState(813);
      match(filterParser::T__82);
      setState(814);
      valueList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaContext ------------------------------------------------------------------

filterParser::LambdaContext::LambdaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

filterParser::ParamListContext* filterParser::LambdaContext::paramList() {
  return getRuleContext<filterParser::ParamListContext>(0);
}

std::vector<filterParser::StatementContext *> filterParser::LambdaContext::statement() {
  return getRuleContexts<filterParser::StatementContext>();
}

filterParser::StatementContext* filterParser::LambdaContext::statement(size_t i) {
  return getRuleContext<filterParser::StatementContext>(i);
}


size_t filterParser::LambdaContext::getRuleIndex() const {
  return filterParser::RuleLambda;
}

void filterParser::LambdaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda(this);
}

void filterParser::LambdaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda(this);
}

filterParser::LambdaContext* filterParser::lambda() {
  LambdaContext *_localctx = _tracker.createInstance<LambdaContext>(_ctx, getState());
  enterRule(_localctx, 66, filterParser::RuleLambda);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(817);
    match(filterParser::T__13);
    setState(818);
    paramList();
    setState(819);
    match(filterParser::T__14);
    setState(820);
    match(filterParser::T__83);
    setState(821);
    match(filterParser::T__4);
    setState(825);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75490269369095576) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 15980553) != 0)) {
      setState(822);
      statement();
      setState(827);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(828);
    match(filterParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

filterParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<filterParser::ParamContext *> filterParser::ParamListContext::param() {
  return getRuleContexts<filterParser::ParamContext>();
}

filterParser::ParamContext* filterParser::ParamListContext::param(size_t i) {
  return getRuleContext<filterParser::ParamContext>(i);
}


size_t filterParser::ParamListContext::getRuleIndex() const {
  return filterParser::RuleParamList;
}

void filterParser::ParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamList(this);
}

void filterParser::ParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<filterListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamList(this);
}

filterParser::ParamListContext* filterParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 68, filterParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(830);
    param();
    setState(835);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == filterParser::T__10) {
      setState(831);
      match(filterParser::T__10);
      setState(832);
      param();
      setState(837);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool filterParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 28: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool filterParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 20);
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 9);
    case 12: return precpred(_ctx, 8);
    case 13: return precpred(_ctx, 7);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void filterParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  filterParserInitialize();
#else
  ::antlr4::internal::call_once(filterParserOnceFlag, filterParserInitialize);
#endif
}
