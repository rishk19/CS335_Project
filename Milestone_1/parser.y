%{
#include <stdio.h>
int yyerror(char *s);
int yylex();
extern FILE *yyin;


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot
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
    LeftCurlyBrace ExplicitConstructorInvokation_nt BlockStatements_nt RightCurlyBrace

ExplicitConstructorInvokation_nt :
    | ExplicitConstructorInvokation

BlockStatements_nt :
    | BlockStatements

ExplicitConstructorInvokation :
    TypeArguments_nt This LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | ExpressionName Dot TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon
    | Primary Dot TypeArguments_nt Super LeftParanthesis ArgumentList_nt RightParanthesis Semicolon

ArgumentList_nt :
    | ArgumentList









%%



