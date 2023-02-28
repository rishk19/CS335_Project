%{
#include <stdio.h>
int yyerror(char *s);
int yylex();
extern FILE *yyin;


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__


%%

CompilationUnit : 
    OrdinaryCompilationUnit

OrdinaryCompilationUnit : 
    |TopLevelClassOrInterfaceDeclaration  OrdinaryCompilationUnit

TopLevelClassOrInterfaceDeclaration :
    ClassDeclaration
    | Semicolon

ClassDeclaration :
    NormalClassDeclaration

NormalClassDeclaration : 
    ClassModifier_ntM Class TypeIdentifier ClassExtends_nt  ClassPermits_nt ClassBody

ClassModifier_ntM :
    | ClassModifier ClassModifier_ntM

ClassExtends_nt :
    | ClassExtends

ClassPermits_nt :
    | ClassPermits

ClassModifier :
     Public
    | Private
    | Protected
    | Abstract
    | Static
    | Final
    | Sealed
    | Non_sealed
    | Strictfp

ClassExtends : 
    Extends ClassType

ClassPermits :
    Permits TypeName Comma_TypeName_extender

Comma_TypeName_extender :
    | Comma TypeName Comma_TypeName_extender


ClassBody :
    LeftCurlyBrace ClassBodyDeclaration_ntM RightCurlyBrace

ClassBodyDeclaration_ntM :
    | ClassBodyDeclaration ClassBodyDeclaration_ntM

ClassBodyDeclaration :
    ClassMemberDeclaration
    | InstanceInitializer
    | StaticInitializer

ClassMemberDeclaration :
    MethodDeclaration
    | ClassDeclaration
    | Semicolon


VariableDeclaratorList :
    VariableDeclarator Comma_VariableDeclarator_extender

Comma_VariableDeclarator_extender :
    | Comma VariableDeclarator Comma_VariableDeclarator_extender

VariableDeclarator :
    VariableDeclaratorId EqualTo_VariableInitializer_extender

EqualTo_VariableInitializer_extender :
    | EqualTo VariableInitializer

VariableDeclaratorId :
    Identifier Dims_nt

VariableInitializer :
    Expression
    | ArrayInitializer

UannType :
    UannPrimitiveType
    | UannReferenceType

UannPrimitiveType :
    NumericType
    | Boolean

UannReferenceType :
    UannClassOrInterfaceType
    | UannTypeVariable
    | UannArrayType

UannClassOrInterfaceType :
    UannClassType
    | UannInterfaceType

UannClassType :
    TypeIdentifier TypeArguments_nt

TypeArguments_nt :
    | TypeArguments

UannInterfaceType :
    UannClassType

UannTypeVariable :
    TypeIdentifier

UannArrayType :
    UannPrimitiveType Dims_nt
    | UannClassOrInterfaceType Dims_nt
    | UannTypeVariable Dims_nt

Dims_nt :
    | Dims

Dims :
    LeftSquareBracket RightSquareBracket | LeftSquareBracket RightSquareBracket Dims

MethodDeclaration :
    MethodModifier_ntM MethodHeader MethodBody

MethodModifier_ntM :
    | MethodModifier MethodModifier_ntM

MethodModifier :
     Public
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

Throws_nt : 
    |Throws_ntK

Result :
    UannType
    | Void

MethodDeclarator :
    Identifier LeftParanthesis ReceiverParameter_Comma_extender FormalParameterList_nt RightParanthesis Dims_nt

ReceiverParameter_Comma_extender :
    | RecieverParameter Comma 

FormalParameterList_nt : 
    | FormalParameterList

RecieverParameter :
    UannType Identifier_Dot_extender This

Identifier_Dot_extender :
    | Identifier Dot

FormalParameterList :
    FormalParameter Comma_FormalParameter_extender

Comma_FormalParameter_extender :
    | Comma FormalParameter Comma_FormalParameter_extender

FormalParameter :
    VariableModifier_ntM UannType VariableDeclaratorId
    | VariableArityParameter

VariableModifier_ntM :
    | VariableModifier VariableModifier_ntM

VariableArityParameter :
    VariableModifier_ntM UannType TripleDot Identifier

VariableModifier :
    Final

Throws_ntK : 
    Throws ExceptionListType

ExceptionListType :
    ExceptionType Comma_ExceptionType_extender

Comma_ExceptionType_extender :
    | Comma ExceptionType Comma_ExceptionType_extender

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
    Public
    | Private
    | Protected

ConstructorDeclarator :
    TypeParameters_nt SimpleTypeName LeftParanthesis ReceiverParameter_extender FormalParameterList_nt RightParanthesis

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
    | Primary Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | Super Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis
    | TypeName Dot Super Dot TypeArguments_nt Identifier LeftParanthesis ArgumentList_nt RightParanthesis

ArgumentList :
    Expression Expression_extender

Expression_extender :
    | Comma Expression Expression_extender

MethodReference :  
    ExpressionName Scope TypeArguments_nt Identifier
    | Primary Scope TypeArguments_nt Identifier
    | ReferenceType Scope TypeArguments_nt Identifier
    | Super Scope TypeArguments_nt Identifier
    | TypeName Dot Super Scope TypeArguments_nt Identifier
    | ClassType Scope TypeArguments_nt New
    | ArrayType Scope New

ArrayCreationExpression :
    New PrimitiveType DimExprs Dims_nt
    | New ClassOrInterfaceType DimExprs Dims_nt
    | New PrimitiveType Dims ArrayInitializer
    | New ClassOrInterfaceType Dims ArrayInitializer

DimExprs :
    DimExpr DimExpr_ntM

DimExpr_ntM :
    | DimExpr DimExpr_ntM

DimExpr :
    Annotation_ntM LeftSquareBracket Expression RightSquareBracket

Expression :
    LambdaExpression
    |AssignmentExpression

LambdaExpression :
    LambdaParameters RightArrow LambdaBody

LambdaParameters :
    LeftParanthesis LambdaParameterList_nt RightParanthesis
    | Identifier 

LambdaParameterList_nt :
    | LambdaParameterList 

LambdaParameterList :
    LambdaParameter LambdaParameter_extender
    | Identifier Identifier_extender_Comma

LambdaParameter_extender :
    | Comma LambdaParameter LambdaParameter_extender

Identifier_extender_Comma : 
    | Comma Identifier Identifier_extender_Comma

LambdaParameter :
    VariableModifier_ntM LambdaParameterType VariableDeclaratorId
    | VariableArityParameter 

LambdaParameterType :
    UannType
    | Var

LambdaBody :
    Expression
    | Block

AssignmentExpression :
    ConditionalExpression
    | Assignment

Assignment :    
    LeftHandSide AssignmentOperator Expression 

LeftHandSide :
    ExpressionName 
    | FieldAccess
    | ArrayAccess

AssignmentOperator :
    EqualTo
    | ProductEqualTo
    | DivideEqualTo
    | ModuloEqualTo
    | AdditionEqualTo
    | SubstractionEqualTo
    | LeftShitEqualTo
    | RightShiftEqualTo
    | TripleGreaterThan
    | BitWiseAndEqualTo
    | CircumFlexEqualTo
    | BitWiseOrEqualTo

ConditionalExpression:
    | ConditionalOrExpression 
    | ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression 
    | ConditionalOrExpression QuestionMark Expression Colon LambdaExpression 

ConditionalOrExpression:
    | ConditionalAndExpression 
    | ConditionalOrExpression OrOperator ConditionalAndExpression

ConditionalAndExpression:
    InclusiveOrExpression 
    | ConditionalAndExpression AndOperator InclusiveOrExpression

InclusiveOrExpression:
    ExclusiveOrExpression 
    | InclusiveOrExpression BitwiseOr ExclusiveOrExpression

ExclusiveOrExpression:
    AndExpression 
    | ExclusiveOrExpression CircumFlex AndExpression

AndExpression:
    EqualityExpression 
    | AndExpression BitwiseAnd EqualityExpression

EqualityExpression:
    RelationalExpression 
    | EqualityExpression EqualToEqualTo RelationalExpression 
    | EqualityExpression NotEqualTo RelationalExpression

RelationalExpression:
    ShiftExpression 
    | RelationalExpression LessThan ShiftExpression 
    | RelationalExpression GreaterThan ShiftExpression 
    | RelationalExpression LessThanEqualTo ShiftExpression 
    | RelationalExpression GreaterThanEqualTo ShiftExpression 
    | InstanceofExpression

InstanceofExpression:
    RelationalExpression instanceof ReferenceType 
    | RelationalExpression instanceof Pattern

ShiftExpression:
    AdditiveExpression 
    | ShiftExpression LeftShit AdditiveExpression 
    | ShiftExpression RightShift AdditiveExpression 
    | ShiftExpression TripleGreaterThan AdditiveExpression

AdditiveExpression:
    MultiplicativeExpression 
    | AdditiveExpression Addition MultiplicativeExpression 
    | AdditiveExpression Substraction MultiplicativeExpression

MultiplicativeExpression:
    UnaryExpression 
    | MultiplicativeExpression Product UnaryExpression 
    | MultiplicativeExpression Divide UnaryExpression 
    | MultiplicativeExpression Modulo UnaryExpression

UnaryExpression:
    PreIncrementExpression 
    | PreDecrementExpression 
    | Addition UnaryExpression 
    | Substraction UnaryExpression 
    | UnaryExpressionNotPlusMinus

PreIncrementExpression:
    PlusPlus UnaryExpression

PreDecrementExpression:
    MinusMinus UnaryExpression

UnaryExpressionNotPlusMinus:
    PostfixExpression 
    | Tilde UnaryExpression 
    | NotOperator UnaryExpression 
    | CastExpression 
    | SwitchExpression

PostfixExpression:
    Primary 
    | ExpressionName 
    | PostIncrementExpression 
    | PostDecrementExpression

PostIncrementExpression:
    PostfixExpression PlusPlus

PostDecrementExpression:
    PostfixExpression MinusMinus

CastExpression:
    LeftParanthesis PrimitiveType RightParanthesis UnaryExpression 
    | LeftParanthesis ReferenceType AdditionalBound_ntM RightParanthesis UnaryExpressionNotPlusMinus 
    | LeftParanthesis ReferenceType AdditionalBound_ntM RightParanthesis LambdaExpression 

SwitchExpression:
    Switch LeftParanthesis Expression RightParanthesis SwitchBlock

ConstantExpression:
    Expression

VariableAccess :
    Expression
    | ArrayInitializer


%%

int main(int argc , char** argv)
{   
    assert(argc == 2);       // Need to add path to inputfile and output file

    yyin = fopen(argv[1] , "r");
    if(yyin == NULL){
        printf("No such file found ! \n");
        return 0;
    }
    printf("I am in before parse call \n");

    yyparse();

    printf("I am out of parse call \n");
    fclose(yyin);

    return 0;

}



