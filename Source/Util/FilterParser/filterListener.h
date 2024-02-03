
// Generated from filter.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "filterParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by filterParser.
 */
class  filterListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFilter(filterParser::FilterContext *ctx) = 0;
  virtual void exitFilter(filterParser::FilterContext *ctx) = 0;

  virtual void enterStatement(filterParser::StatementContext *ctx) = 0;
  virtual void exitStatement(filterParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(filterParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(filterParser::AssignmentContext *ctx) = 0;

  virtual void enterTypeAliasDeclaration(filterParser::TypeAliasDeclarationContext *ctx) = 0;
  virtual void exitTypeAliasDeclaration(filterParser::TypeAliasDeclarationContext *ctx) = 0;

  virtual void enterModuleDeclaration(filterParser::ModuleDeclarationContext *ctx) = 0;
  virtual void exitModuleDeclaration(filterParser::ModuleDeclarationContext *ctx) = 0;

  virtual void enterPackageDeclaration(filterParser::PackageDeclarationContext *ctx) = 0;
  virtual void exitPackageDeclaration(filterParser::PackageDeclarationContext *ctx) = 0;

  virtual void enterImportStatement(filterParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(filterParser::ImportStatementContext *ctx) = 0;

  virtual void enterEnumDeclaration(filterParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(filterParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterErrorStatement(filterParser::ErrorStatementContext *ctx) = 0;
  virtual void exitErrorStatement(filterParser::ErrorStatementContext *ctx) = 0;

  virtual void enterProcMacroDeclaration(filterParser::ProcMacroDeclarationContext *ctx) = 0;
  virtual void exitProcMacroDeclaration(filterParser::ProcMacroDeclarationContext *ctx) = 0;

  virtual void enterProcMacroInvocation(filterParser::ProcMacroInvocationContext *ctx) = 0;
  virtual void exitProcMacroInvocation(filterParser::ProcMacroInvocationContext *ctx) = 0;

  virtual void enterMacroDeclaration(filterParser::MacroDeclarationContext *ctx) = 0;
  virtual void exitMacroDeclaration(filterParser::MacroDeclarationContext *ctx) = 0;

  virtual void enterMixinDeclaration(filterParser::MixinDeclarationContext *ctx) = 0;
  virtual void exitMixinDeclaration(filterParser::MixinDeclarationContext *ctx) = 0;

  virtual void enterVarDeclaration(filterParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(filterParser::VarDeclarationContext *ctx) = 0;

  virtual void enterOperatorOverloadDeclaration(filterParser::OperatorOverloadDeclarationContext *ctx) = 0;
  virtual void exitOperatorOverloadDeclaration(filterParser::OperatorOverloadDeclarationContext *ctx) = 0;

  virtual void enterSwitchStatement(filterParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(filterParser::SwitchStatementContext *ctx) = 0;

  virtual void enterCaseStatement(filterParser::CaseStatementContext *ctx) = 0;
  virtual void exitCaseStatement(filterParser::CaseStatementContext *ctx) = 0;

  virtual void enterFoldExpression(filterParser::FoldExpressionContext *ctx) = 0;
  virtual void exitFoldExpression(filterParser::FoldExpressionContext *ctx) = 0;

  virtual void enterFoldOperator(filterParser::FoldOperatorContext *ctx) = 0;
  virtual void exitFoldOperator(filterParser::FoldOperatorContext *ctx) = 0;

  virtual void enterTypeclassDeclaration(filterParser::TypeclassDeclarationContext *ctx) = 0;
  virtual void exitTypeclassDeclaration(filterParser::TypeclassDeclarationContext *ctx) = 0;

  virtual void enterFmapDeclaration(filterParser::FmapDeclarationContext *ctx) = 0;
  virtual void exitFmapDeclaration(filterParser::FmapDeclarationContext *ctx) = 0;

  virtual void enterFunctionDeclaration(filterParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(filterParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(filterParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(filterParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterAccessSpecifier(filterParser::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(filterParser::AccessSpecifierContext *ctx) = 0;

  virtual void enterTemplateParam(filterParser::TemplateParamContext *ctx) = 0;
  virtual void exitTemplateParam(filterParser::TemplateParamContext *ctx) = 0;

  virtual void enterParam(filterParser::ParamContext *ctx) = 0;
  virtual void exitParam(filterParser::ParamContext *ctx) = 0;

  virtual void enterType(filterParser::TypeContext *ctx) = 0;
  virtual void exitType(filterParser::TypeContext *ctx) = 0;

  virtual void enterPrimary(filterParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(filterParser::PrimaryContext *ctx) = 0;

  virtual void enterExpression(filterParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(filterParser::ExpressionContext *ctx) = 0;

  virtual void enterAtom(filterParser::AtomContext *ctx) = 0;
  virtual void exitAtom(filterParser::AtomContext *ctx) = 0;

  virtual void enterValue(filterParser::ValueContext *ctx) = 0;
  virtual void exitValue(filterParser::ValueContext *ctx) = 0;

  virtual void enterValueList(filterParser::ValueListContext *ctx) = 0;
  virtual void exitValueList(filterParser::ValueListContext *ctx) = 0;

  virtual void enterFunction(filterParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(filterParser::FunctionContext *ctx) = 0;

  virtual void enterLambda(filterParser::LambdaContext *ctx) = 0;
  virtual void exitLambda(filterParser::LambdaContext *ctx) = 0;

  virtual void enterParamList(filterParser::ParamListContext *ctx) = 0;
  virtual void exitParamList(filterParser::ParamListContext *ctx) = 0;


};

