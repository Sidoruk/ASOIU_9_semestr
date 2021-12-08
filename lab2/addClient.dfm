object addClientForm: TaddClientForm
  Left = 0
  Top = 0
  Caption = 'addClientForm'
  ClientHeight = 223
  ClientWidth = 475
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object SurnameEdit: TEdit
    Left = 56
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = 'Surname'
  end
  object NameEdit: TEdit
    Left = 56
    Top = 75
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = 'Name'
  end
  object StatusEdit: TEdit
    Left = 56
    Top = 102
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = 'Status'
  end
  object PhoneEdit: TEdit
    Left = 56
    Top = 129
    Width = 121
    Height = 21
    Hint = 'Phone'
    TabOrder = 3
    TextHint = 'Phone'
  end
  object completeAddBtn: TButton
    Left = 160
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 4
    OnClick = completeAddBtnClick
  end
  object idEdit: TEdit
    Left = 56
    Top = 16
    Width = 121
    Height = 21
    Hint = 'id'
    TabOrder = 5
    TextHint = 'id'
  end
  object cancelBtn: TButton
    Left = 56
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 6
    OnClick = cancelBtnClick
  end
end
