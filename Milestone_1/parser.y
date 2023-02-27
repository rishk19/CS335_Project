%{
#include <stdio.h>
int yyerror(char *s);
int yylex();
extern FILE *yyin;


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__


%%

CompilationUnit : 
    OrdinaryCompilationUnit {

    }
    | ModularCompilationUnit {

    }

ModularCompilationUnit :
    __EMPTY__

OrdinaryCompilationUnit : 
    |TopLevelClassOrInterfaceDeclaration  OrdinaryCompilationUnit{

    }

TopLevelClassOrInterfaceDeclaration :
    ClassDeclaration {

    }
    | InterfaceDeclaration {

    }

ClassDeclaration :
    NormalClassDeclaration {

    }



NormalClassDeclaration : 
    ClassModifier_ntM Class TypeIdentifier TypeParamaters_nt ClassExtends_nt ClassImplements_nt ClassPermits_nt ClassBody {

    }

ClassModifier_ntM :
    | ClassModifier ClassModifier_ntM

TypeParamaters_nt :
    | TypeParameters

ClassExtends_nt :
    | ClassExtends

ClassImplements_nt :
    | ClassImplements

ClassPermits_nt :
    | ClassPermits



ClassModifier :
    Annotation
    | Public
    | Private
    | Protected
    | Abstract
    | Static
    | Final
    | Sealed
    | Non_sealed
    | Strictfp


TypeParameters :
    GreaterThan TypeParameterList LessThan

TypeParameterList :
    Typeparameter Typerparameter_extender

Typerparameter_extender :
    | Comma TypeParameter Typerparameter_extender 


ClassExtends : 
    Extends ClassType

ClassImplements :
    Implements InterfaceTypeList



InterfaceTypeList :
    InterfaceType InterfaceType_extender

InterfaceType_extender : 
    | Comma InterfaceType InterfaceType_extender



ClassPermits :
    Permits TypeName TypeName_extender

TypeName_extender :
    | Comma TypeName TypeName_extender


ClassBody :
    LeftCurlyBrace ClassBodyDeclaration_ntM RightCurlyBrace

ClassBodyDeclaration_ntM :
    | ClassBodyDeclaration ClassBodyDeclaration_ntM

ClassBodyDeclaration :
    ClassMemberDeclaration
    | InstanceInitializer
    | StaticInitializer
    | ConstructorDeclaration

ClassMemberDeclaration :
    FieldDeclaration
    | MethodDeclaration
    | ClassDeclaration
    | InterfaceDeclaration
    | Semicolon

FieldDeclaration :
    FieldModifier_ntM UannType VariableDeclaratorList Semicolon

FieldModifier_ntM :
    | FieldModifier FieldModifier_ntM

FieldModifier :
    Annotation
    | Public
    | Protected
    | Private
    | Static
    | Final
    | Transient
    | Volatile

VariableDeclaratorList :
    VariableDeclarator VariableDeclarator_extender

VariableDeclarator_extender :
    | Comma VariableDeclarator VariableDeclarator_extender

VariableDeclarator :
    VariableDeclaratorId VariableInitializer_extender

VariableInitializer_extender :
    | EqualTo VariableInitializer

VariableDeclaratorId :
    Identifier Dims_nt

Dims_nt :
    | Dims 

VariableInitializer :
    Expression
    | ArrayInitializer

UannType :
    UannPrimitiveType
    | UannReferenceType

UannPrimitiveType :
    NumericType
    | BooleanLiteral

UannReferenceType :
    UannClassOrInterfaceType
    | UannTypeVariable
    | UannArrayType

UannClassOrInterfaceType :
    UannClassType
    | UannInterfaceType

UannClassType :
    TypeIdentifier TypeArguments_nt
    | UannClassOrInterfaceType Dot Annotation_ntM TypeIdentifier TypeArguments_nt

TypeArguments_nt :
    | TypeArgument

Annotation_ntM :
    | Annotation Annotation_ntM

UannInterfaceType :
    UannClassType

UannTypeVariable :
    TypeIdentifier

UannArrayType :
    UannPrimitiveType Dims
    | UannClassOrInterfaceType Dims
    | UannTypeVariable Dims


MethodDeclaration :
    MethodModifier_ntM MethodHeader MethodBody

MethodModifier_ntM :
    | MethodModifier MethodModifier_ntM


MethodModifier :
    Annotation
    | Public
    | Private
    | Protected
    | Abstract
    | Static
    | Final
    | Synchronized
    | Native
    | Strictfp

MethodHeader :
    Result MethodDeclarator Throws_nt
    | TypeParameters Annotation_ntM Result MethodDeclarator Throws_nt

Throws_nt : 
    |Throws_ntK

Result :
    UannType
    | Void

MethodDeclarator :
    Identifier LeftParanthesis ReceiverParameter_extender FormalParameterList_nt RightParanthesis Dims_nt

ReceiverParameter_extender :
    | RecieverParameter Comma 

FormalParameterList_nt : 
    | FormalParameterList

RecieverParameter :
    Annotation_ntM UannType Identifier_extender_Dot This

Identifier_extender_Dot :
    | Identifier Dot

FormalParameterList :
    FormalParameter FormalParameter_extender

FormalParameter_extender :
    | Comma FormalParameter FormalParameter_extender

FormalParameter :
    VariableModifier_ntM UannType VariableDeclaratorId
    | VariableArityParameter

VariableModifier_ntM :
    | VariableModifier VariableModifier_ntM

VariableArityParameter :
    VariableModifier_ntM UannType Annotation_ntM TripleDot Identifier

VariableModifier :
    Annotation
    | Final

Throws_ntK : 
    Throws ExceptionListType

ExceptionListType :
    ExceptionType ExceptionType_extender

ExceptionType_extender :
    | Comma ExceptionType ExceptionType_extender

ExceptionType :
    ClassType
    | TypeVariable

MethodBody :
    Block
    | Semicolon

InstanceInitializer :
    Block

StaticInitializer :
    Static Block

ConstructorDeclaration :
    ConstructorModifier_ntM ConstructorDeclarator Throws_nt ConstructorBody

ConstructorModifier_ntM :
    | ConstructorModifier ConstructorModifier_ntM

ConstructorModifier :
    Annotation
    | Public
    | Private
    | Protected

ConstructorDeclarator :
    TypeParamaters_nt SimpleTypeName LeftParanthesis ReceiverParameter_extender FormalParameterList_nt RightParanthesis

SimpleTypeName :
    TypeIdentifier

ConstructorBody :
    LeftCurlyBrace ExplicitConstructorInvocation_nt BlockStatements_nt RightCurlyBrace

ExplicitConstructorInvocation_nt :
    | ExplicitConstructorInvocation

BlockStatements_nt :
    | BlockStatements

ExplicitConstructorInvocation :
    TypeArguments_nt This LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | ExpressionName Dot TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | Primary Dot TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon

ArgumentList_nt :
    | ArgumentList





TypeIdentifier :
    Identifier

Literal :
    DecimalIntegerLiteral
    | FloatingPointIntegerLiteral
    | BooleanLiteral
    | CharacterLiteral
    | StringLiteral
    | TextBlock
    | NullLiteral

Type :
    PrimitiveType
    | ReferenceType

PrimitiveType : 
    Annotation_ntM NumericType
    | Annotation_ntM Boolean

NumericType :
    IntegralType
    | FloatingPointType

IntegralType :
    Byte
    | Short
    | Int
    | Long
    | Char

FloatingPointType :
    Float
    | Double

ReferenceType :
    ClassOrInterfaceType
    | TypeVariable
    | UannArrayType

ClassOrInterfaceType :
    ClassType
    | InterfaceType

ClassType :
    Annotation_ntM TypeIdentifier TypeArguments_nt
    | ClassOrInterfaceType Dot Annotation_ntM TypeIdentifier TypeArguments_nt

InterfaceType :
    ClassType

TypeVariable :
    Annotation_ntM TypeIdentifier

ArrayType :
    PrimitiveType Dims
    | ClassOrInterfaceType Dims
    | TypeVarable Dims

Dims :
    Annotation_ntM LeftSquareBracket RightSquareBracket  Annotation_extender_bracket

Annotation_extender_bracket :
    | Annotation_ntM LeftSquareBracket RightSquareBracket Annotation_extender_bracket

TypeParameter :
    TypeParameterModifier_ntM TypeIdentifier TypeBound_nt

TypeParameterModifier_ntM :
    | TypeParameterModifier TypeParameterModifier_ntM

TypeBound_nt :
    | TypeBound

TypeParameterModifier : Annotation

TypeBound :
    Extends TypeVariable
    | Extends ClassOrInterfaceType AdditionalBound_ntM

AdditionalBound_ntM :
    | AdditionalBound AdditionalBound_ntM

AdditionalBound :
    BitwiseAnd InterfaceType

TypeArguments :
    LessThan TypeArgumentList GreaterThan

TypeArgumentList :
    TypeArgument TypeArgument_extender

TypeArgument_extender :
    | Comma TypeArgument TypeArgument_extender

TypeArgument :
    ReferenceType
    | WildCard

WildCard :
    Annotation_ntM QuestionMark WildCardBounds_nt

WildCardBounds_nt :
    | WildCardBounds

WildCardBounds :
    Extends ReferenceType
    | Super ReferenceType


ModuleName :
    Identifier 
    | ModuleName Dot Identifier

PackageName :
    Identifier
    | PackageName Dot Identifier

TypeName :
    TypeIdentifier
    | PackageOrTypeName Dot TypeIdentifier

ExpressionName :
    Identifier
    | AmbiguousName Dot Identifier

MethodName :
    UnqualifiedMethodIdentifier

PackageOrTypeName :
    Identifier
    | PackageOrTypeName Dot Identifier

AmbiguousName :
    Identifier
    | AmbiguousName Dot Identifier

ArrayInitializer :
    LeftCurlyBrace VariableInitializerList_nt  Comma_nt RightCurlyBrace

VariableInitializerList_nt :
    | VariableInitializerList

Comma_nt :
    | Comma

VariableInitializerList :
    VariableInitializer VariableInitializer_comma_ntM

VariableInitializer_comma_ntM :
    | Comma VariableInitializer VariableInitializer_comma_ntM


Block :
    LeftCurlyBrace BlockStatements_nt RightCurlyBrace

BlockStatements :
    BlockStatement BlockStatement_ntM

BlockStatement_ntM :
    | BlockStatement BlockStatement_ntM


BlockStatement :
    LocalClassOrInterfaceDeclaration
    | LocalVariableDeclarationStatement
    | Statement

LocalClassOrInterfaceDeclaration :
    ClassDeclaration
    | NormalInterfaceDeclaration

LocalVariableDeclarationStatement :
    LocalVariableDeclaration Semicolon

LocalVariableDeclaration :
    VariableModifier_ntM LocalVariableType VariableDeclaratorList

LocalVariableType :
    UannType
    | Var

Statement:
    StatementWithoutTrailingSubstatement 
    | LabeledStatement 
    | IfThenStatement 
    | IfThenElseStatement 
    | WhileStatement 
    | ForStatement

StatementNoShortIf:
    StatementWithoutTrailingSubstatement 
    | LabeledStatementNoShortIf 
    | IfThenElseStatementNoShortIf 
    | WhileStatementNoShortIf 
    | ForStatementNoShortIf

StatementWithoutTrailingSubstatement:
    Block 
    | EmptyStatement 
    | ExpressionStatement 
    | AssertStatement 
    | SwitchStatement 
    | DoStatement 
    | BreakStatement 
    | ContinueStatement 
    | ReturnStatement 
    | SynchronizedStatement 
    | ThrowStatement 
    | TryStatement 
    | YieldStatement

EmptyStatement:
    Semicolon

LabeledStatement:
    Identifier Colon Statement

LabeledStatementNoShortIf:
    Identifier Colon StatementNoShortIf

ExpressionStatement:
    StatementExpression Semicolon

StatementExpression:
    Assignment 
    | PreIncrementExpression 
    | PreDecrementExpression 
    | PostIncrementExpression 
    | PostDecrementExpression 
    | MethodInvocation 
    | ClassInstanceCreationExpression

IfThenStatement :
    If LeftParanthesis Expression RightParanthesis Statement

IfThenElseStatement :
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement

IfThenElseStatementNoShortIf :
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf

AssertStatement :
    Assert Expression Semicolon
    | Assert Expression Colon Expression Semicolon

SwitchStatement :
    Switch LeftParanthesis Expression RightParanthesis SwitchBlock

SwitchBlock :
    LeftCurlyBrace SwitchRule SwitchRule_ntM RightCurlyBrace
    | LeftCurlyBrace SwitchBlockStatementGroup_ntM SwitchLabel_extender RightCurlyBrace

SwitchRule_ntM :
    | SwitchRule SwitchRule_ntM

SwitchBlockStatementGroup_ntM :
    | SwitchBlockStatementGroup SwitchBlockStatementGroup_ntM

SwitchLabel_extender :
    | SwitchLabel Colon SwitchLabel_extender

SwitchRule :
    SwitchLabel RightArrow Expression Semicolon
    | SwitchLabel RightArrow Block
    | SwitchLabel RightArrow ThrowStatement

SwitchBlockStatementGroup :
    SwitchLabel Colon SwitchLabel_extender BlockStatements

SwitchLabel :
    Case CaseConstant CaseConstant_extender
    | Default

CaseConstant_extender :
    | Comma CaseConstant CaseConstant_extender

CaseConstant :
    ConditionalExpression
    
WhileStatement :
    While LeftParanthesis Expression RightParanthesis Statement

WhileStatementNoShortIf :
    While LeftParanthesis Expression RightParanthesis StatementNoShortIf

DoStatement :   
    Do Statement While LeftParanthesis Expression RightParanthesis Semicolon

ForStatement :
    BasicForStatement 
    | EnhancedForStatement

ForStatementNoShortIf :
    BasicForStatementNoShortIf
    | EnhancedForStatementNoShortIf

BasicForStatement :
    For LeftParanthesis ForInit_nt Semicolon Expression_nt Semicolon ForUpdate_nt RightParanthesis Statement

Expression_nt :
    | Expression

ForInit_nt :
    | ForInit

ForUpdate_nt :
    | ForUpdate

BasicForStatementNoShortIf :
    For LeftParanthesis ForInit_nt Semicolon Expression_nt Semicolon ForUpdate_nt RightParanthesis StatementNoShortIf

ForInit :
    StatementExpressionList
    | LocalVariableDeclaration

ForUpdate :
    StatementExpressionList
    
StatementExpressionList :
    StatementExpression StatementExpression_extender

StatementExpression_extender :
    | Comma StatementExpression StatementExpression_extender

EnhancedForStatement :  
    For LeftParanthesis  LocalVariableDeclaration Colon Expression RightParanthesis Statement

EnhancedForStatementNoShortIf :
    For LeftParanthesis LocalVariableDeclaration Colon Expression RightParanthesis StatementNoShortIf

BreakStatement :
    Break Identifier_nt Semicolon

Identifier_nt :
    | Identifier

YieldStatement :
    Yield Expression Semicolon

ContinueStatement :
    Continue Identifier_nt Semicolon

ReturnStatement :
    Return Expression_nt Semicolon

ThrowStatement :
    Throw Expression Semicolon

SynchronizedStatement :
    Synchronized LeftParanthesis Expression RightParanthesis Block

TryStatement :
    Try Block Catches
    | Try Block Catches_nt Finally_ntK
    TryWithResourcesStatement

Catches :
    CatchClause CatchClause_ntM

CatchClause_ntM :
    | CatchClause CatchClause_ntM

CatchClause :
    Catch LeftParanthesis CatchFormalParameter RightParanthesis Block

CatchFormalParameter :
    VariableModifier_ntM CatchType VariableDeclaratorId

CatchType :
    UannClassType ClassType_extender

ClassType_extender :
    | BitwiseOr ClassType ClassType_extender

Finally_ntK :
    Finally Block

TryWithResourcesStatement :
    Try ResourceSpecification Block Catches_nt Finally_ntK_nT

Finally_ntK_nT :
    | Finally_ntK 

ResourceSpecification :
    LeftParanthesis ResourceList Semicolon_nt RightParanthesis

Semicolon_nt :
    | Semicolon

ResourceList :
    Resource Resource_extender

Resource_extender :
    | Semicolon Resource Resource_extender

Resource :
    LocalVariableDeclaration
    | VariableAccess

Pattern :
    TypePattern

TypePattern :
    LocalVariableDeclaration



Primary :
    PrimaryNoNewArray
    | ArrayCreationExpression

PrimaryNoNewArray:
    Literal 
    | ClassLiteral 
    | This 
    | TypeName Dot This 
    | LeftParanthesis Expression RightParanthesis 
    | ClassInstanceCreationExpression 
    | FieldAccess 
    | ArrayAccess 
    | MethodInvocation 
    | MethodReference

ClassLiteral :
    TypeName SquareBracket_ntM Dot Class
    | NumericType SquareBracket_ntM Dot Class
    | Boolean SquareBracket_ntM Dot Class
    | Void Dot Class

SquareBracket_ntM :
    | LeftSquareBracket RightSquareBracket SquareBracket_ntM

ClassInstanceCreationExpression :
    UnqualifiedClassInstanceCreationExpression
    | ExpressionName Dot UnqualifiedClassInstanceCreationExpression
    | Primary Dot UnqualifiedClassInstanceCreationExpression

UnqualifiedClassInstanceCreationExpression :
    New TypeArguments_nt ClassOrInterfaceTypeToInstantiate LeftParanthesis ArgumentList_nt RightParanthesis ClassBody_nt

ClassBody_nt :
    | ClassBody

ClassOrInterfaceTypeToInstantiate :
    Annotation_ntM Identifier Annotation_Identifier_extender TypeArgumentsOrDiamond_nt

Annotation_Identifier_extender :
    | Dot Annotation_ntM Identifier Annotation_Identifier_extender

TypeArgumentsOrDiamond_nt :
    | TypeArgumentsOrDiamond

TypeArgumentsOrDiamond :
    TypeArguments
    | LessThan GreaterThan

FieldAccess :
    Primary Dot Identifier
    | Super Dot Identifier
    | TypeName Dot Super Dot Identifier
    
ArrayAccess :
    ExpressionName LeftSquareBracket Expression RightSquareBracket
    | PrimaryNoNewArray LeftSquareBracket Expression RightShiftBracket

MethodInvocation :
    MethodName LeftParanthesis ArgumentList_nt RightParanthesis
    | TypeName Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | ExpressionName Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
















%%



