
// Generated from filter.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "filterListener.h"


/**
 * This class provides an empty implementation of filterListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  filterBaseListener : public filterListener {
public:

  virtual void enterFilter(filterParser::FilterContext * /*ctx*/) override { }
  virtual void exitFilter(filterParser::FilterContext * /*ctx*/) override { }

  virtual void enterStatement(filterParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(filterParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(filterParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(filterParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterTypeAliasDeclaration(filterParser::TypeAliasDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeAliasDeclaration(filterParser::TypeAliasDeclarationContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(filterParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(filterParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterPackageDeclaration(filterParser::PackageDeclarationContext * /*ctx*/) override { }
  virtual void exitPackageDeclaration(filterParser::PackageDeclarationContext * /*ctx*/) override { }

  virtual void enterImportStatement(filterParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(filterParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(filterParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(filterParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterErrorStatement(filterParser::ErrorStatementContext * /*ctx*/) override { }
  virtual void exitErrorStatement(filterParser::ErrorStatementContext * /*ctx*/) override { }

  virtual void enterProcMacroDeclaration(filterParser::ProcMacroDeclarationContext * /*ctx*/) override { }
  virtual void exitProcMacroDeclaration(filterParser::ProcMacroDeclarationContext * /*ctx*/) override { }

  virtual void enterProcMacroInvocation(filterParser::ProcMacroInvocationContext * /*ctx*/) override { }
  virtual void exitProcMacroInvocation(filterParser::ProcMacroInvocationContext * /*ctx*/) override { }

  virtual void enterMacroDeclaration(filterParser::MacroDeclarationContext * /*ctx*/) override { }
  virtual void exitMacroDeclaration(filterParser::MacroDeclarationContext * /*ctx*/) override { }

  virtual void enterMixinDeclaration(filterParser::MixinDeclarationContext * /*ctx*/) override { }
  virtual void exitMixinDeclaration(filterParser::MixinDeclarationContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(filterParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(filterParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterOperatorOverloadDeclaration(filterParser::OperatorOverloadDeclarationContext * /*ctx*/) override { }
  virtual void exitOperatorOverloadDeclaration(filterParser::OperatorOverloadDeclarationContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(filterParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(filterParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterCaseStatement(filterParser::CaseStatementContext * /*ctx*/) override { }
  virtual void exitCaseStatement(filterParser::CaseStatementContext * /*ctx*/) override { }

  virtual void enterFoldExpression(filterParser::FoldExpressionContext * /*ctx*/) override { }
  virtual void exitFoldExpression(filterParser::FoldExpressionContext * /*ctx*/) override { }

  virtual void enterFoldOperator(filterParser::FoldOperatorContext * /*ctx*/) override { }
  virtual void exitFoldOperator(filterParser::FoldOperatorContext * /*ctx*/) override { }

  virtual void enterTypeclassDeclaration(filterParser::TypeclassDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeclassDeclaration(filterParser::TypeclassDeclarationContext * /*ctx*/) override { }

  virtual void enterFmapDeclaration(filterParser::FmapDeclarationContext * /*ctx*/) override { }
  virtual void exitFmapDeclaration(filterParser::FmapDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(filterParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(filterParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(filterParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(filterParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(filterParser::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(filterParser::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterTemplateParam(filterParser::TemplateParamContext * /*ctx*/) override { }
  virtual void exitTemplateParam(filterParser::TemplateParamContext * /*ctx*/) override { }

  virtual void enterParam(filterParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(filterParser::ParamContext * /*ctx*/) override { }

  virtual void enterType(filterParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(filterParser::TypeContext * /*ctx*/) override { }

  virtual void enterPrimary(filterParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(filterParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterExpression(filterParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(filterParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAtom(filterParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(filterParser::AtomContext * /*ctx*/) override { }

  virtual void enterValue(filterParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(filterParser::ValueContext * /*ctx*/) override { }

  virtual void enterValueList(filterParser::ValueListContext * /*ctx*/) override { }
  virtual void exitValueList(filterParser::ValueListContext * /*ctx*/) override { }

  virtual void enterFunction(filterParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(filterParser::FunctionContext * /*ctx*/) override { }

  virtual void enterLambda(filterParser::LambdaContext * /*ctx*/) override { }
  virtual void exitLambda(filterParser::LambdaContext * /*ctx*/) override { }

  virtual void enterParamList(filterParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(filterParser::ParamListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

