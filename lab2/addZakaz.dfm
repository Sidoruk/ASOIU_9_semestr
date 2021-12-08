object addZakazForm: TaddZakazForm
  Left = 0
  Top = 0
  Caption = 'addZakazForm'
  ClientHeight = 201
  ClientWidth = 447
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object idClientEdit: TEdit
    Left = 32
    Top = 16
    Width = 129
    Height = 21
    TabOrder = 0
    TextHint = 'Client id'
  end
  object idDishEdit: TEdit
    Left = 32
    Top = 43
    Width = 129
    Height = 21
    TabOrder = 1
    TextHint = 'Dish id'
  end
  object countEdit: TEdit
    Left = 32
    Top = 70
    Width = 129
    Height = 21
    TabOrder = 2
    TextHint = 'Count'
  end
  object cancelBtn: TButton
    Left = 24
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Cancel'
    TabOrder = 3
    OnClick = cancelBtnClick
  end
  object addZakazBtn: TButton
    Left = 112
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 4
    OnClick = addZakazBtnClick
  end
  object dateEdit: TDateTimePicker
    Left = 32
    Top = 97
    Width = 129
    Height = 32
    Date = 44538.000000000000000000
    Time = 0.158623090275796100
    TabOrder = 5
  end
end
