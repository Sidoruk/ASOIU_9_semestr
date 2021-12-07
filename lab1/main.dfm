object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'MainForm'
  ClientHeight = 427
  ClientWidth = 692
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object ClientGrid: TDBGrid
    Left = 8
    Top = 64
    Width = 601
    Height = 153
    DataSource = DClient
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'idClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'SurnameClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'NameClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'StatusClient'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'PhoneClient'
        Visible = True
      end>
  end
  object addClientBtn: TButton
    Left = 56
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Add client'
    TabOrder = 1
    OnClick = addClientBtnClick
  end
  object deleteBtn: TButton
    Left = 168
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Delete client'
    TabOrder = 2
    OnClick = DeleteBtnClick
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=root;Exte' +
      'nded Properties="DSN=MySQL ASOIU;SERVER=localhost;UID=root;DATAB' +
      'ASE=asoiu;PORT=3306";Initial Catalog=asoiu'
    Left = 16
    Top = 16
  end
  object TClient: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'idClient'
    TableName = 'client'
    Left = 80
    Top = 16
  end
  object DClient: TDataSource
    DataSet = TClient
    Left = 144
    Top = 16
  end
end
