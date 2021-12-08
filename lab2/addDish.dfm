object addDishForm: TaddDishForm
  Left = 0
  Top = 0
  Caption = 'addDishForm'
  ClientHeight = 270
  ClientWidth = 261
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object idEdit: TEdit
    Left = 48
    Top = 24
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = 'id'
  end
  object nameEdit: TEdit
    Left = 48
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = 'Name'
  end
  object priceEdit: TEdit
    Left = 48
    Top = 96
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = 'Price'
  end
  object categEdit: TEdit
    Left = 48
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = 'Category'
  end
  object CancelBtn: TButton
    Left = 32
    Top = 184
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 4
    OnClick = CancelBtnClick
  end
  object acceptBtn: TButton
    Left = 120
    Top = 184
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 5
    OnClick = acceptBtnClick
  end
end
